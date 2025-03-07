#include "libqhostaddress.hpp"
#include <string.h>
#include "libqhostinfo.hpp"
#include "libqhostinfo.h"

/// https://doc.qt.io/qt-6/qhostinfo.html

/// q_hostinfo_new constructs a new QHostInfo object.
///
///
QHostInfo* q_hostinfo_new() {
    return QHostInfo_new();
}

/// q_hostinfo_new2 constructs a new QHostInfo object.
///
/// ``` QHostInfo* d ```
QHostInfo* q_hostinfo_new2(void* d) {
    return QHostInfo_new2((QHostInfo*)d);
}

/// q_hostinfo_new3 constructs a new QHostInfo object.
///
/// ``` int lookupId ```
QHostInfo* q_hostinfo_new3(int lookupId) {
    return QHostInfo_new3(lookupId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#operator=)
///
/// ``` QHostInfo* self, QHostInfo* d ```
void q_hostinfo_operator_assign(void* self, void* d) {
    QHostInfo_OperatorAssign((QHostInfo*)self, (QHostInfo*)d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#swap)
///
/// ``` QHostInfo* self, QHostInfo* other ```
void q_hostinfo_swap(void* self, void* other) {
    QHostInfo_Swap((QHostInfo*)self, (QHostInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#hostName)
///
/// ``` QHostInfo* self ```
const char* q_hostinfo_host_name(void* self) {
    libqt_string _str = QHostInfo_HostName((QHostInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setHostName)
///
/// ``` QHostInfo* self, const char* name ```
void q_hostinfo_set_host_name(void* self, const char* name) {
    QHostInfo_SetHostName((QHostInfo*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#addresses)
///
/// ``` QHostInfo* self ```
libqt_list /* of QHostAddress* */ q_hostinfo_addresses(void* self) {
    libqt_list _arr = QHostInfo_Addresses((QHostInfo*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setAddresses)
///
/// ``` QHostInfo* self, QHostAddress* addresses[] ```
void q_hostinfo_set_addresses(void* self, void* addresses[]) {
    QHostAddress** addresses_arr = (QHostAddress**)addresses;
    size_t addresses_len = 0;
    while (addresses_arr[addresses_len] != NULL) {
        addresses_len++;
    }
    libqt_list addresses_list = {
        .len = addresses_len,
        .data = {(QHostAddress*)addresses},
    };
    QHostInfo_SetAddresses((QHostInfo*)self, addresses_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#error)
///
/// ``` QHostInfo* self ```
int64_t q_hostinfo_error(void* self) {
    return QHostInfo_Error((QHostInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setError)
///
/// ``` QHostInfo* self, enum QHostInfo__HostInfoError errorVal ```
void q_hostinfo_set_error(void* self, int64_t errorVal) {
    QHostInfo_SetError((QHostInfo*)self, errorVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#errorString)
///
/// ``` QHostInfo* self ```
const char* q_hostinfo_error_string(void* self) {
    libqt_string _str = QHostInfo_ErrorString((QHostInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setErrorString)
///
/// ``` QHostInfo* self, const char* errorString ```
void q_hostinfo_set_error_string(void* self, const char* errorString) {
    QHostInfo_SetErrorString((QHostInfo*)self, qstring(errorString));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setLookupId)
///
/// ``` QHostInfo* self, int id ```
void q_hostinfo_set_lookup_id(void* self, int id) {
    QHostInfo_SetLookupId((QHostInfo*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#lookupId)
///
/// ``` QHostInfo* self ```
int32_t q_hostinfo_lookup_id(void* self) {
    return QHostInfo_LookupId((QHostInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#abortHostLookup)
///
/// ``` int lookupId ```
void q_hostinfo_abort_host_lookup(int lookupId) {
    QHostInfo_AbortHostLookup(lookupId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#fromName)
///
/// ``` const char* name ```
QHostInfo* q_hostinfo_from_name(const char* name) {
    return QHostInfo_FromName(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#localHostName)
///
///
const char* q_hostinfo_local_host_name() {
    libqt_string _str = QHostInfo_LocalHostName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#localDomainName)
///
///
const char* q_hostinfo_local_domain_name() {
    libqt_string _str = QHostInfo_LocalDomainName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QHostInfo* self ```
void q_hostinfo_delete(void* self) {
    QHostInfo_Delete((QHostInfo*)(self));
}
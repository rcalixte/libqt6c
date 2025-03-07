#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHOSTINFO_H
#define SRC_NETWORKQT6C_LIBQHOSTINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqhostaddress.h"
#include <string.h>

QHostInfo* q_hostinfo_new();
QHostInfo* q_hostinfo_new2(void* d);
QHostInfo* q_hostinfo_new3(int lookupId);
void q_hostinfo_operator_assign(void* self, void* d);
void q_hostinfo_swap(void* self, void* other);
const char* q_hostinfo_host_name(void* self);
void q_hostinfo_set_host_name(void* self, const char* name);
libqt_list /* of QHostAddress* */ q_hostinfo_addresses(void* self);
void q_hostinfo_set_addresses(void* self, void* addresses[]);
int64_t q_hostinfo_error(void* self);
void q_hostinfo_set_error(void* self, int64_t errorVal);
const char* q_hostinfo_error_string(void* self);
void q_hostinfo_set_error_string(void* self, const char* errorString);
void q_hostinfo_set_lookup_id(void* self, int id);
int32_t q_hostinfo_lookup_id(void* self);
void q_hostinfo_abort_host_lookup(int lookupId);
QHostInfo* q_hostinfo_from_name(const char* name);
const char* q_hostinfo_local_host_name();
const char* q_hostinfo_local_domain_name();
void q_hostinfo_delete(void* self);

/// https://doc.qt.io/qt-6/qhostinfo.html#types

typedef enum {
    QHOSTINFO_HOSTINFOERROR_NOERROR = 0,
    QHOSTINFO_HOSTINFOERROR_HOSTNOTFOUND = 1,
    QHOSTINFO_HOSTINFOERROR_UNKNOWNERROR = 2
} QHostInfo__HostInfoError;

#endif

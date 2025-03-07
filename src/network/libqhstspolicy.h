#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHSTSPOLICY_H
#define SRC_NETWORKQT6C_LIBQHSTSPOLICY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqdatetime.h"
#include <string.h>

QHstsPolicy* q_hstspolicy_new();
QHstsPolicy* q_hstspolicy_new2(void* expiry, int64_t flags, const char* host);
QHstsPolicy* q_hstspolicy_new3(void* rhs);
QHstsPolicy* q_hstspolicy_new4(void* expiry, int64_t flags, const char* host, int64_t mode);
void q_hstspolicy_operator_assign(void* self, void* rhs);
void q_hstspolicy_swap(void* self, void* other);
void q_hstspolicy_set_host(void* self, const char* host);
const char* q_hstspolicy_host(void* self);
void q_hstspolicy_set_expiry(void* self, void* expiry);
QDateTime* q_hstspolicy_expiry(void* self);
void q_hstspolicy_set_includes_sub_domains(void* self, bool include);
bool q_hstspolicy_includes_sub_domains(void* self);
bool q_hstspolicy_is_expired(void* self);
void q_hstspolicy_set_host2(void* self, const char* host, int64_t mode);
const char* q_hstspolicy_host1(void* self, int64_t options);
void q_hstspolicy_delete(void* self);

/// https://doc.qt.io/qt-6/qhstspolicy.html#types

typedef enum {
    QHSTSPOLICY_POLICYFLAG_INCLUDESUBDOMAINS = 1
} QHstsPolicy__PolicyFlag;

#endif

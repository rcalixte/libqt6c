#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHSTSPOLICY_H
#define SRC_NETWORKQT6C_LIBQHSTSPOLICY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhstspolicy.html

/// q_hstspolicy_new constructs a new QHstsPolicy object.
///
///
QHstsPolicy* q_hstspolicy_new();

/// q_hstspolicy_new2 constructs a new QHstsPolicy object.
///
/// ``` QDateTime* expiry, int flags, const char* host ```
QHstsPolicy* q_hstspolicy_new2(void* expiry, int64_t flags, const char* host);

/// q_hstspolicy_new3 constructs a new QHstsPolicy object.
///
/// ``` QHstsPolicy* rhs ```
QHstsPolicy* q_hstspolicy_new3(void* rhs);

/// q_hstspolicy_new4 constructs a new QHstsPolicy object.
///
/// ``` QDateTime* expiry, int flags, const char* host, enum QUrl__ParsingMode mode ```
QHstsPolicy* q_hstspolicy_new4(void* expiry, int64_t flags, const char* host, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#operator=)
///
/// ``` QHstsPolicy* self, QHstsPolicy* rhs ```
void q_hstspolicy_operator_assign(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#swap)
///
/// ``` QHstsPolicy* self, QHstsPolicy* other ```
void q_hstspolicy_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
///
/// ``` QHstsPolicy* self, const char* host ```
void q_hstspolicy_set_host(void* self, const char* host);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#host)
///
/// ``` QHstsPolicy* self ```
const char* q_hstspolicy_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setExpiry)
///
/// ``` QHstsPolicy* self, QDateTime* expiry ```
void q_hstspolicy_set_expiry(void* self, void* expiry);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#expiry)
///
/// ``` QHstsPolicy* self ```
QDateTime* q_hstspolicy_expiry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setIncludesSubDomains)
///
/// ``` QHstsPolicy* self, bool include ```
void q_hstspolicy_set_includes_sub_domains(void* self, bool include);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#includesSubDomains)
///
/// ``` QHstsPolicy* self ```
bool q_hstspolicy_includes_sub_domains(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#isExpired)
///
/// ``` QHstsPolicy* self ```
bool q_hstspolicy_is_expired(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
///
/// ``` QHstsPolicy* self, const char* host, enum QUrl__ParsingMode mode ```
void q_hstspolicy_set_host2(void* self, const char* host, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#host)
///
/// ``` QHstsPolicy* self, uint32_t options ```
const char* q_hstspolicy_host1(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#dtor.QHstsPolicy)
///
/// Delete this object from C++ memory.
///
/// ``` QHstsPolicy* self ```
void q_hstspolicy_delete(void* self);

/// https://doc.qt.io/qt-6/qhstspolicy.html#types

typedef enum {
    QHSTSPOLICY_POLICYFLAG_INCLUDESUBDOMAINS = 1
} QHstsPolicy__PolicyFlag;

#endif

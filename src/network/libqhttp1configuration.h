#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHTTP1CONFIGURATION_H
#define SRC_NETWORKQT6C_LIBQHTTP1CONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhttp1configuration.html

/// q_http1configuration_new constructs a new QHttp1Configuration object.
///
///
QHttp1Configuration* q_http1configuration_new();

/// q_http1configuration_new2 constructs a new QHttp1Configuration object.
///
/// ``` QHttp1Configuration* other ```
QHttp1Configuration* q_http1configuration_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#operator-eq)
///
/// ``` QHttp1Configuration* self, QHttp1Configuration* other ```
void q_http1configuration_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#setNumberOfConnectionsPerHost)
///
/// ``` QHttp1Configuration* self, int64_t amount ```
void q_http1configuration_set_number_of_connections_per_host(void* self, int64_t amount);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#numberOfConnectionsPerHost)
///
/// ``` QHttp1Configuration* self ```
int64_t q_http1configuration_number_of_connections_per_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#swap)
///
/// ``` QHttp1Configuration* self, QHttp1Configuration* other ```
void q_http1configuration_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#dtor.QHttp1Configuration)
///
/// Delete this object from C++ memory.
///
/// ``` QHttp1Configuration* self ```
void q_http1configuration_delete(void* self);

#endif

#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLDIFFIEHELLMANPARAMETERS_H
#define SRC_NETWORKQT6C_LIBQSSLDIFFIEHELLMANPARAMETERS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqiodevice.h"
#include <string.h>

QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new();
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new2(void* other);
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_default_parameters();
void q_ssldiffiehellmanparameters_operator_assign(void* self, void* other);
void q_ssldiffiehellmanparameters_swap(void* self, void* other);
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded(const char* encoded);
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded_with_device(void* device);
bool q_ssldiffiehellmanparameters_is_empty(void* self);
bool q_ssldiffiehellmanparameters_is_valid(void* self);
int64_t q_ssldiffiehellmanparameters_error(void* self);
const char* q_ssldiffiehellmanparameters_error_string(void* self);
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded2(const char* encoded, int64_t format);
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded22(void* device, int64_t format);
void q_ssldiffiehellmanparameters_delete(void* self);

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#types

typedef enum {
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_NOERROR = 0,
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_INVALIDINPUTDATAERROR = 1,
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_UNSAFEPARAMETERSERROR = 2
} QSslDiffieHellmanParameters__Error;

#endif

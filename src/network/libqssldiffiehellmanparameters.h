#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLDIFFIEHELLMANPARAMETERS_H
#define SRC_NETWORKQT6C_LIBQSSLDIFFIEHELLMANPARAMETERS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html

/// q_ssldiffiehellmanparameters_new constructs a new QSslDiffieHellmanParameters object.
///
///
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new();

/// q_ssldiffiehellmanparameters_new2 constructs a new QSslDiffieHellmanParameters object.
///
/// ``` QSslDiffieHellmanParameters* other ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#defaultParameters)
///
///
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_default_parameters();

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#operator=)
///
/// ``` QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other ```
void q_ssldiffiehellmanparameters_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#swap)
///
/// ``` QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other ```
void q_ssldiffiehellmanparameters_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// ``` const char* encoded ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded(const char* encoded);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// ``` QIODevice* device ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded_with_device(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isEmpty)
///
/// ``` QSslDiffieHellmanParameters* self ```
bool q_ssldiffiehellmanparameters_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isValid)
///
/// ``` QSslDiffieHellmanParameters* self ```
bool q_ssldiffiehellmanparameters_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#error)
///
/// ``` QSslDiffieHellmanParameters* self ```
int64_t q_ssldiffiehellmanparameters_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#errorString)
///
/// ``` QSslDiffieHellmanParameters* self ```
const char* q_ssldiffiehellmanparameters_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// ``` const char* encoded, enum QSsl__EncodingFormat format ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded2(const char* encoded, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// ``` QIODevice* device, enum QSsl__EncodingFormat format ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded22(void* device, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#dtor.QSslDiffieHellmanParameters)
///
/// Delete this object from C++ memory.
///
/// ``` QSslDiffieHellmanParameters* self ```
void q_ssldiffiehellmanparameters_delete(void* self);

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#types

typedef enum {
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_NOERROR = 0,
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_INVALIDINPUTDATAERROR = 1,
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_UNSAFEPARAMETERSERROR = 2
} QSslDiffieHellmanParameters__Error;

#endif

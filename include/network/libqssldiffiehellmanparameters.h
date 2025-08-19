#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLDIFFIEHELLMANPARAMETERS_H
#define SRC_NETWORKQT6C_LIBQSSLDIFFIEHELLMANPARAMETERS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html

/// q_ssldiffiehellmanparameters_new constructs a new QSslDiffieHellmanParameters object.
///
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new();

/// q_ssldiffiehellmanparameters_new2 constructs a new QSslDiffieHellmanParameters object.
///
/// @param other QSslDiffieHellmanParameters*
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#defaultParameters)
///
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_default_parameters();

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#operator-eq)
///
/// @param self QSslDiffieHellmanParameters*
/// @param other QSslDiffieHellmanParameters*
void q_ssldiffiehellmanparameters_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#swap)
///
/// @param self QSslDiffieHellmanParameters*
/// @param other QSslDiffieHellmanParameters*
void q_ssldiffiehellmanparameters_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// @param encoded const char*
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded(const char* encoded);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// @param device QIODevice*
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded2(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isEmpty)
///
/// @param self QSslDiffieHellmanParameters*
bool q_ssldiffiehellmanparameters_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isValid)
///
/// @param self QSslDiffieHellmanParameters*
bool q_ssldiffiehellmanparameters_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#error)
///
/// @param self QSslDiffieHellmanParameters*
///
/// @return enum QSslDiffieHellmanParameters__Error
int32_t q_ssldiffiehellmanparameters_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslDiffieHellmanParameters*
const char* q_ssldiffiehellmanparameters_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// @param encoded const char*
/// @param format enum QSsl__EncodingFormat
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded22(const char* encoded, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// @param device QIODevice*
/// @param format enum QSsl__EncodingFormat
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded23(void* device, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#dtor.QSslDiffieHellmanParameters)
///
/// Delete this object from C++ memory.
///
/// @param self QSslDiffieHellmanParameters*
void q_ssldiffiehellmanparameters_delete(void* self);

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#types

typedef enum {
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_NOERROR = 0,
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_INVALIDINPUTDATAERROR = 1,
    QSSLDIFFIEHELLMANPARAMETERS_ERROR_UNSAFEPARAMETERSERROR = 2
} QSslDiffieHellmanParameters__Error;

#endif

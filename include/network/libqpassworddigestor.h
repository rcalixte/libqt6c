#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQPASSWORDDIGESTOR_H
#define SRC_NETWORK_QT6C_LIBQPASSWORDDIGESTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf1)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param algorithm enum QCryptographicHash__Algorithm
/// @param password char*
/// @param salt char*
/// @param iterations int
/// @param dkLen uint64_t
///
char* q_passworddigestor_derive_key_pbkdf1(int32_t algorithm, char* password, char* salt, int iterations, uint64_t dkLen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf2)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param algorithm enum QCryptographicHash__Algorithm
/// @param password char*
/// @param salt char*
/// @param iterations int
/// @param dkLen uint64_t
///
char* q_passworddigestor_derive_key_pbkdf2(int32_t algorithm, char* password, char* salt, int iterations, uint64_t dkLen);
#endif

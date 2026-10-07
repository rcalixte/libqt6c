#pragma once
#ifndef NETWORK_LIBQPASSWORDDIGESTOR_H
#define NETWORK_LIBQPASSWORDDIGESTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf1)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param algorithm enum QCryptographicHash__Algorithm
/// @param password const char*
/// @param salt const char*
/// @param iterations int
/// @param dkLen uint64_t
///
const char* q_passworddigestor_derive_key_pbkdf1(int32_t algorithm, const char* password, const char* salt, int iterations, uint64_t dkLen);

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf2)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param algorithm enum QCryptographicHash__Algorithm
/// @param password const char*
/// @param salt const char*
/// @param iterations int
/// @param dkLen uint64_t
///
const char* q_passworddigestor_derive_key_pbkdf2(int32_t algorithm, const char* password, const char* salt, int iterations, uint64_t dkLen);
#endif

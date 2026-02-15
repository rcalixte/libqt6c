#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQPASSWORDDIGESTOR_H
#define SRC_NETWORK_QT6C_LIBQPASSWORDDIGESTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf1)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 enum QCryptographicHash__Algorithm
/// @param param2 char*
/// @param param3 char*
/// @param param4 int
/// @param param5 uint64_t
///
char* q_passworddigestor_derive_key_pbkdf1(int32_t param1, char* param2, char* param3, int param4, uint64_t param5);

/// [Upstream resources](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf2)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 enum QCryptographicHash__Algorithm
/// @param param2 char*
/// @param param3 char*
/// @param param4 int
/// @param param5 uint64_t
///
char* q_passworddigestor_derive_key_pbkdf2(int32_t param1, char* param2, char* param3, int param4, uint64_t param5);
#endif

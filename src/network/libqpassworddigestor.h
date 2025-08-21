#pragma once
#ifndef SRC_NETWORKQT6C_LIBQPASSWORDDIGESTOR_H
#define SRC_NETWORKQT6C_LIBQPASSWORDDIGESTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpassworddigestor.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf1)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QCryptographicHash__Algorithm
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 int
/// @param param5 uint64_t
char* q_passworddigestor_derive_key_pbkdf1(int32_t param1, const char* param2, const char* param3, int param4, uint64_t param5);

/// [Qt documentation](https://doc.qt.io/qt-6/qpassworddigestor.html#deriveKeyPbkdf2)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QCryptographicHash__Algorithm
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 int
/// @param param5 uint64_t
char* q_passworddigestor_derive_key_pbkdf2(int32_t param1, const char* param2, const char* param3, int param4, uint64_t param5);
#endif

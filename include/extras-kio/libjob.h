#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBJOB_H
#define SRC_EXTRAS_KIO_QT6C_LIBJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio.html

/// [Qt documentation](https://api.kde.org/kio.html#buildErrorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 int
/// @param param2 const char*
const char* k_io_build_error_string(int param1, const char* param2);

/// [Qt documentation](https://api.kde.org/kio.html#rawErrorDetail)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 int
/// @param param2 const char*
/// @param param3 QUrl*
/// @param param4 int
char* k_io_raw_error_detail(int param1, const char* param2, void* param3, int param4);
#endif

#pragma once
#ifndef EXTRAS_KIO_LIBJOB_H
#define EXTRAS_KIO_LIBJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio.html)

/// [Upstream resources](https://api.kde.org/kio.html#buildErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param errorCode int
/// @param errorText const char*
///
const char* k_io_build_error_string(int errorCode, const char* errorText);

/// [Upstream resources](https://api.kde.org/kio.html#rawErrorDetail)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param errorCode int
/// @param errorText const char*
/// @param reqUrl QUrl*
/// @param method int
///
char* k_io_raw_error_detail(int errorCode, const char* errorText, void* reqUrl, int method);
#endif

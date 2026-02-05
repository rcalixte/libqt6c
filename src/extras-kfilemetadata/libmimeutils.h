#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBMIMEUTILS_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBMIMEUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-mimeutils.html)

/// [Upstream resources](https://api.kde.org/kfilemetadata-mimeutils.html#strictMimeType)
///
/// @param param1 const char*
/// @param param2 QMimeDatabase*
///
QMimeType* k_filemetadata__mimeutils_strict_mime_type(const char* param1, void* param2);
#endif

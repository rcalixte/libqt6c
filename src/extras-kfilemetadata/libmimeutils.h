#pragma once
#ifndef EXTRAS_KFILEMETADATA_LIBMIMEUTILS_H
#define EXTRAS_KFILEMETADATA_LIBMIMEUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-mimeutils.html)

/// [Upstream resources](https://api.kde.org/kfilemetadata-mimeutils.html#strictMimeType)
///
/// @param filePath const char*
/// @param db QMimeDatabase*
///
QMimeType* k_filemetadata__mimeutils_strict_mime_type(const char* filePath, void* db);
#endif

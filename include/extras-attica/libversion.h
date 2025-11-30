#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBVERSION_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBVERSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica.html

/// [Upstream resources](https://api.kde.org/attica.html#versionMajor)
///
uint32_t k_attica_version_major();

/// [Upstream resources](https://api.kde.org/attica.html#versionMinor)
///
uint32_t k_attica_version_minor();

/// [Upstream resources](https://api.kde.org/attica.html#versionRelease)
///
uint32_t k_attica_version_release();

/// [Upstream resources](https://api.kde.org/attica.html#versionString)
///
/// Caller is responsible for freeing the returned memory
///
const char* k_attica_version_string();
#endif

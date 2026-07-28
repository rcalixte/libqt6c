#pragma once
#ifndef EXTRAS_ATTICA_LIBVERSION_H
#define EXTRAS_ATTICA_LIBVERSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica.html)

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
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_attica_version_string();
#endif

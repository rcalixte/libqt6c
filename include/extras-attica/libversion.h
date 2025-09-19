#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBVERSION_H
#define SRC_EXTRAS_ATTICAQT6C_LIBVERSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica.html

/// [Qt documentation](https://api.kde.org/attica.html#versionMajor)
///
uint32_t k_attica_version_major();

/// [Qt documentation](https://api.kde.org/attica.html#versionMinor)
///
uint32_t k_attica_version_minor();

/// [Qt documentation](https://api.kde.org/attica.html#versionRelease)
///
uint32_t k_attica_version_release();

/// [Qt documentation](https://api.kde.org/attica.html#versionString)
///
/// Caller is responsible for freeing the returned memory
///
const char* k_attica_version_string();
#endif

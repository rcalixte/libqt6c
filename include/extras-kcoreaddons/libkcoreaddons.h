#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKCOREADDONS_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKCOREADDONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcoreaddons.html)

/// [Upstream resources](https://api.kde.org/kcoreaddons.html#versionString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_coreaddons_version_string();

/// [Upstream resources](https://api.kde.org/kcoreaddons.html#version)
///
uint32_t k_coreaddons_version();
#endif

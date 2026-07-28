#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKRUNTIMEPLATFORM_H
#define EXTRAS_KCOREADDONS_LIBKRUNTIMEPLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kruntimeplatform.html)

/// [Upstream resources](https://api.kde.org/kruntimeplatform.html#runtimePlatform)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_runtimeplatform_runtime_platform();
#endif

#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKRUNTIMEPLATFORM_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKRUNTIMEPLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kruntimeplatform.html

/// [Qt documentation](https://api.kde.org/kruntimeplatform.html#runtimePlatform)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_runtimeplatform_runtime_platform();
#endif

#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKRANDOM_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKRANDOM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/krandom.html

/// [Qt documentation](https://api.kde.org/krandom.html#randomString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 int
const char* k_random_random_string(int param1);
#endif

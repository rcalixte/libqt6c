#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKRANDOM_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKRANDOM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/krandom.html)

/// [Upstream resources](https://api.kde.org/krandom.html#randomString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 int
///
const char* k_random_random_string(int param1);
#endif

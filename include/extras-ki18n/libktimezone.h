#pragma once
#ifndef SRC_EXTRAS_KI18N_QT6C_LIBKTIMEZONE_H
#define SRC_EXTRAS_KI18N_QT6C_LIBKTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktimezone.html)

/// [Upstream resources](https://api.kde.org/ktimezone.html#fromLocation)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 float
/// @param param2 float
///
const char* k_timezone_from_location(float param1, float param2);

/// [Upstream resources](https://api.kde.org/ktimezone.html#country)
///
/// @param param1 const char*
///
KCountry* k_timezone_country(const char* param1);
#endif

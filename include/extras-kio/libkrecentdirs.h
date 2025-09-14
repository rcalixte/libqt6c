#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKRECENTDIRS_H
#define SRC_EXTRAS_KIOQT6C_LIBKRECENTDIRS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/krecentdirs.html

/// [Qt documentation](https://api.kde.org/krecentdirs.html#list)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char** k_recentdirs_list(const char* param1);

/// [Qt documentation](https://api.kde.org/krecentdirs.html#dir)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_recentdirs_dir(const char* param1);

/// [Qt documentation](https://api.kde.org/krecentdirs.html#add)
///
/// @param param1 const char*
/// @param param2 const char*
void k_recentdirs_add(const char* param1, const char* param2);
#endif

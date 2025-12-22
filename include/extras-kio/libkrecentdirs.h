#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKRECENTDIRS_H
#define SRC_EXTRAS_KIO_QT6C_LIBKRECENTDIRS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/krecentdirs.html)

/// [Upstream resources](https://api.kde.org/krecentdirs.html#list)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
const char** k_recentdirs_list(const char* param1);

/// [Upstream resources](https://api.kde.org/krecentdirs.html#dir)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_recentdirs_dir(const char* param1);

/// [Upstream resources](https://api.kde.org/krecentdirs.html#add)
///
/// @param param1 const char*
/// @param param2 const char*
///
void k_recentdirs_add(const char* param1, const char* param2);
#endif

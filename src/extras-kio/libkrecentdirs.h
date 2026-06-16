#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKRECENTDIRS_H
#define SRC_EXTRAS_KIO_QT6C_LIBKRECENTDIRS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/krecentdirs.html)

/// [Upstream resources](https://api.kde.org/krecentdirs.html#list)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param fileClass const char*
///
const char** k_recentdirs_list(const char* fileClass);

/// [Upstream resources](https://api.kde.org/krecentdirs.html#dir)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param fileClass const char*
///
const char* k_recentdirs_dir(const char* fileClass);

/// [Upstream resources](https://api.kde.org/krecentdirs.html#add)
///
/// @param fileClass const char*
/// @param directory const char*
///
void k_recentdirs_add(const char* fileClass, const char* directory);
#endif

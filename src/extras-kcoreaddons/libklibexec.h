#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKLIBEXEC_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKLIBEXEC_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klibexec.html)

/// [Upstream resources](https://api.kde.org/klibexec.html#pathFromAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 void*
///
const char* k_libexec_path_from_address(const char* param1, void* param2);

/// [Upstream resources](https://api.kde.org/klibexec.html#pathCandidates)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
const char** k_libexec_path_candidates(const char* param1);

/// [Upstream resources](https://api.kde.org/klibexec.html#path)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_libexec_path(const char* param1);

/// [Upstream resources](https://api.kde.org/klibexec.html#kdeFrameworksPaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
const char** k_libexec_kde_frameworks_paths(const char* param1);
#endif

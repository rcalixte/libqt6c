#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKLIBEXEC_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKLIBEXEC_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/klibexec.html

/// [Qt documentation](https://api-staging.kde.org/klibexec.html#pathFromAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 void*
const char* k_libexec_path_from_address(const char* param1, void* param2);

/// [Qt documentation](https://api-staging.kde.org/klibexec.html#pathCandidates)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char** k_libexec_path_candidates(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/klibexec.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_libexec_path(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/klibexec.html#kdeFrameworksPaths)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char** k_libexec_kde_frameworks_paths(const char* param1);
#endif

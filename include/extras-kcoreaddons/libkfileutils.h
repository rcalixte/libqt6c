#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKFILEUTILS_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKFILEUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfileutils.html)

/// [Upstream resources](https://api.kde.org/kfileutils.html#suggestName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 QUrl*
/// @param param2 const char*
///
const char* k_fileutils_suggest_name(void* param1, const char* param2);

/// [Upstream resources](https://api.kde.org/kfileutils.html#makeSuggestedName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_fileutils_make_suggested_name(const char* param1);

/// [Upstream resources](https://api.kde.org/kfileutils.html#findAllUniqueFiles)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char**
/// @param param2 const char**
///
const char** k_fileutils_find_all_unique_files(const char* param1[static 1], const char* param2[static 1]);
#endif

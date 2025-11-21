#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKFILEUTILS_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKFILEUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kfileutils.html

/// [Qt documentation](https://api.kde.org/kfileutils.html#suggestName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 QUrl*
/// @param param2 const char*
const char* k_fileutils_suggest_name(void* param1, const char* param2);

/// [Qt documentation](https://api.kde.org/kfileutils.html#makeSuggestedName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_fileutils_make_suggested_name(const char* param1);

/// [Qt documentation](https://api.kde.org/kfileutils.html#findAllUniqueFiles)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char**
/// @param param2 const char**
const char** k_fileutils_find_all_unique_files(const char* param1[static 1], const char* param2[static 1]);
#endif

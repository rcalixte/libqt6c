#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKLANGUAGENAME_H
#define SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKLANGUAGENAME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klanguagename.html)

/// [Upstream resources](https://api.kde.org/klanguagename.html#nameForCode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_languagename_name_for_code(const char* param1);

/// [Upstream resources](https://api.kde.org/klanguagename.html#nameForCodeInLocale)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 const char*
///
const char* k_languagename_name_for_code_in_locale(const char* param1, const char* param2);

/// [Upstream resources](https://api.kde.org/klanguagename.html#allLanguageCodes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_languagename_all_language_codes();
#endif

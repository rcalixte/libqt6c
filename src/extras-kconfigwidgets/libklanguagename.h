#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSQT6C_LIBKLANGUAGENAME_H
#define SRC_EXTRAS_KCONFIGWIDGETSQT6C_LIBKLANGUAGENAME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/klanguagename.html

/// [Qt documentation](https://api-staging.kde.org/klanguagename.html#nameForCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_languagename_name_for_code(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/klanguagename.html#nameForCodeInLocale)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 const char*
const char* k_languagename_name_for_code_in_locale(const char* param1, const char* param2);

/// [Qt documentation](https://api-staging.kde.org/klanguagename.html#allLanguageCodes)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_languagename_all_language_codes();
#endif

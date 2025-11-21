#pragma once
#ifndef SRC_EXTRAS_KSERVICE_QT6C_LIBKAPPLICATIONTRADER_H
#define SRC_EXTRAS_KSERVICE_QT6C_LIBKAPPLICATIONTRADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kapplicationtrader.html

/// [Qt documentation](https://api.kde.org/kapplicationtrader.html#isSubsequence)
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 enum Qt__CaseSensitivity
bool k_applicationtrader_is_subsequence(const char* param1, const char* param2, int32_t param3);
#endif

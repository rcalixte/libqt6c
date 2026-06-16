#pragma once
#ifndef SRC_EXTRAS_KSERVICE_QT6C_LIBKAPPLICATIONTRADER_H
#define SRC_EXTRAS_KSERVICE_QT6C_LIBKAPPLICATIONTRADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kapplicationtrader.html)

/// [Upstream resources](https://api.kde.org/kapplicationtrader.html#isSubsequence)
///
/// @param pattern const char*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
///
bool k_applicationtrader_is_subsequence(const char* pattern, const char* text, int32_t cs);
#endif

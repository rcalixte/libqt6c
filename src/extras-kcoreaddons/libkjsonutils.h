#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJSONUTILS_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJSONUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kjsonutils.html

/// [Qt documentation](https://api.kde.org/kjsonutils.html#readTranslatedValue)
///
/// @param param1 QJsonObject*
/// @param param2 const char*
/// @param param3 QJsonValue*
QJsonValue* k_jsonutils_read_translated_value(void* param1, const char* param2, void* param3);

/// [Qt documentation](https://api.kde.org/kjsonutils.html#readTranslatedString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 QJsonObject*
/// @param param2 const char*
/// @param param3 const char*
const char* k_jsonutils_read_translated_string(void* param1, const char* param2, const char* param3);
#endif

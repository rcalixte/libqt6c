#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJSONUTILS_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKJSONUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kjsonutils.html)

/// [Upstream resources](https://api.kde.org/kjsonutils.html#readTranslatedValue)
///
/// @param jo QJsonObject*
/// @param key const char*
/// @param defaultValue QJsonValue*
///
QJsonValue* k_jsonutils_read_translated_value(void* jo, const char* key, void* defaultValue);

/// [Upstream resources](https://api.kde.org/kjsonutils.html#readTranslatedString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param jo QJsonObject*
/// @param key const char*
/// @param defaultValue const char*
///
const char* k_jsonutils_read_translated_string(void* jo, const char* key, const char* defaultValue);
#endif

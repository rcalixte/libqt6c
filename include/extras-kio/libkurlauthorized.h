#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKURLAUTHORIZED_H
#define SRC_EXTRAS_KIO_QT6C_LIBKURLAUTHORIZED_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kurlauthorized.html

/// [Qt documentation](https://api.kde.org/kurlauthorized.html#authorizeUrlAction)
///
/// @param param1 const char*
/// @param param2 QUrl*
/// @param param3 QUrl*
bool k_urlauthorized_authorize_url_action(const char* param1, void* param2, void* param3);

/// [Qt documentation](https://api.kde.org/kurlauthorized.html#allowUrlAction)
///
/// @param param1 const char*
/// @param param2 QUrl*
/// @param param3 QUrl*
void k_urlauthorized_allow_url_action(const char* param1, void* param2, void* param3);
#endif

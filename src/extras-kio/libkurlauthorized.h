#pragma once
#ifndef EXTRAS_KIO_LIBKURLAUTHORIZED_H
#define EXTRAS_KIO_LIBKURLAUTHORIZED_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kurlauthorized.html)

/// [Upstream resources](https://api.kde.org/kurlauthorized.html#authorizeUrlAction)
///
/// @param action const char*
/// @param baseUrl QUrl*
/// @param destUrl QUrl*
///
bool k_urlauthorized_authorize_url_action(const char* action, void* baseUrl, void* destUrl);

/// [Upstream resources](https://api.kde.org/kurlauthorized.html#allowUrlAction)
///
/// @param action const char*
/// @param baseUrl QUrl*
/// @param destUrl QUrl*
///
void k_urlauthorized_allow_url_action(const char* action, void* baseUrl, void* destUrl);
#endif

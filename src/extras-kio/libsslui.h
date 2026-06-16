#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBSSLUI_H
#define SRC_EXTRAS_KIO_QT6C_LIBSSLUI_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-sslui.html)

/// [Upstream resources](https://api.kde.org/kio-sslui.html#askIgnoreSslErrors)
///
/// @param uiData KSslErrorUiData*
/// @param storedRules enum KIO__SslUi__RulesStorage
///
bool k_io__sslui_ask_ignore_ssl_errors(void* uiData, int32_t storedRules);

/// [Upstream resources](https://api.kde.org/kio-sslui.html#public-types)

typedef enum {
    KIO_SSLUI_RULESSTORAGE_RECALLRULES = 1,
    KIO_SSLUI_RULESSTORAGE_STORERULES = 2,
    KIO_SSLUI_RULESSTORAGE_RECALLANDSTORERULES = 3
} KIO__SslUi__RulesStorage;

#endif

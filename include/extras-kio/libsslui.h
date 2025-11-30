#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBSSLUI_H
#define SRC_EXTRAS_KIO_QT6C_LIBSSLUI_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-sslui.html

/// [Upstream resources](https://api.kde.org/kio-sslui.html#askIgnoreSslErrors)
///
/// @param param1 KSslErrorUiData*
/// @param param2 enum KIO__SslUi__RulesStorage
bool k_io__sslui_ask_ignore_ssl_errors(void* param1, int32_t param2);

/// https://api.kde.org/kio-sslui.html#types

typedef enum {
    KIO_SSLUI_RULESSTORAGE_RECALLRULES = 1,
    KIO_SSLUI_RULESSTORAGE_STORERULES = 2,
    KIO_SSLUI_RULESSTORAGE_RECALLANDSTORERULES = 3
} KIO__SslUi__RulesStorage;

#endif

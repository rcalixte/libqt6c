#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEGLOBALSETTINGS_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEGLOBALSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineglobalsettings.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineglobalsettings.html#setDnsMode)
///
/// @param param1 QWebEngineGlobalSettings__DnsMode*
bool q_webengineglobalsettings_set_dns_mode(void* param1);

/// https://doc.qt.io/qt-6/qwebengineglobalsettings.html#types

typedef enum {
    QWEBENGINEGLOBALSETTINGS_SECUREDNSMODE_SYSTEMONLY = 0,
    QWEBENGINEGLOBALSETTINGS_SECUREDNSMODE_SECUREWITHFALLBACK = 1,
    QWEBENGINEGLOBALSETTINGS_SECUREDNSMODE_SECUREONLY = 2
} QWebEngineGlobalSettings__SecureDnsMode;

#endif

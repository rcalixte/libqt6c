#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEGLOBALSETTINGS_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEGLOBALSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#secureMode-var)
///
/// @param self QWebEngineGlobalSettings__DnsMode*
///
/// @return enum QWebEngineGlobalSettings__SecureDnsMode
uint8_t q_webengineglobalsettings__dnsmode_secure_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#secureMode-var)
///
/// @param self QWebEngineGlobalSettings__DnsMode*
/// @param secureMode enum QWebEngineGlobalSettings__SecureDnsMode
void q_webengineglobalsettings__dnsmode_set_secure_mode(void* self, uint8_t secureMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#serverTemplates-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineGlobalSettings__DnsMode*
const char** q_webengineglobalsettings__dnsmode_server_templates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineglobalsettings-dnsmode.html#serverTemplates-var)
///
/// @param self QWebEngineGlobalSettings__DnsMode*
/// @param serverTemplates const char**
void q_webengineglobalsettings__dnsmode_set_server_templates(void* self, const char* serverTemplates[static 1]);

/// Delete this object from C++ memory.
///
/// @param self QWebEngineGlobalSettings__DnsMode*
void q_webengineglobalsettings__dnsmode_delete(void* self);

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

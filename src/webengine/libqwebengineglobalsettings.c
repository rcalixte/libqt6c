#include "libqwebengineglobalsettings.hpp"
#include "libqwebengineglobalsettings.h"

bool q_webengineglobalsettings_set_dns_mode(void* param1) {
    return QWebEngineGlobalSettings_SetDnsMode((QWebEngineGlobalSettings__DnsMode*)param1);
}

#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKHELPCLIENT_H
#define EXTRAS_KCONFIGWIDGETS_LIBKHELPCLIENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/khelpclient.html)

/// [Upstream resources](https://api.kde.org/khelpclient.html#invokeHelp)
///
/// @param anchor const char*
/// @param appname const char*
///
void k_helpclient_invoke_help(const char* anchor, const char* appname);
#endif

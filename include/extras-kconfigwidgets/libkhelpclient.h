#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKHELPCLIENT_H
#define SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKHELPCLIENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/khelpclient.html

/// [Upstream resources](https://api.kde.org/khelpclient.html#invokeHelp)
///
/// @param param1 const char*
/// @param param2 const char*
void k_helpclient_invoke_help(const char* param1, const char* param2);
#endif

#pragma once
#ifndef SRC_EXTRAS_KCONFIGQT6C_LIBKCONFIGGUI_H
#define SRC_EXTRAS_KCONFIGQT6C_LIBKCONFIGGUI_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kconfiggui.html

/// [Qt documentation](https://api-staging.kde.org/kconfiggui.html#sessionConfig)
///
KConfig* k_configgui_session_config();

/// [Qt documentation](https://api-staging.kde.org/kconfiggui.html#setSessionConfig)
///
/// @param param1 const char*
/// @param param2 const char*
void k_configgui_set_session_config(const char* param1, const char* param2);

/// [Qt documentation](https://api-staging.kde.org/kconfiggui.html#hasSessionConfig)
///
bool k_configgui_has_session_config();
#endif

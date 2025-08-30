#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSQT6C_LIBKCOLORSCHEMEMENU_H
#define SRC_EXTRAS_KCONFIGWIDGETSQT6C_LIBKCOLORSCHEMEMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcolorschememenu.html

/// [Qt documentation](https://api-staging.kde.org/kcolorschememenu.html#createMenu)
///
/// @param param1 KColorSchemeManager*
/// @param param2 QObject*
KActionMenu* k_colorschememenu_create_menu(void* param1, void* param2);
#endif

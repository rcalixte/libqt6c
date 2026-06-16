#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKCOLORSCHEMEMENU_H
#define SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKCOLORSCHEMEMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcolorschememenu.html)

/// [Upstream resources](https://api.kde.org/kcolorschememenu.html#createMenu)
///
/// @param manager KColorSchemeManager*
/// @param parent QObject*
///
KActionMenu* k_colorschememenu_create_menu(void* manager, void* parent);
#endif

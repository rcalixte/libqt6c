#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKSTYLEMANAGER_H
#define SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKSTYLEMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kstylemanager.html

/// [Qt documentation](https://api.kde.org/kstylemanager.html#initStyle)
///
void k_stylemanager_init_style();

/// [Qt documentation](https://api.kde.org/kstylemanager.html#createConfigureAction)
///
/// @param param1 QObject*
QAction* k_stylemanager_create_configure_action(void* param1);
#endif

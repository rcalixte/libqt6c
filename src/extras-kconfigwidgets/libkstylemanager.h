#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKSTYLEMANAGER_H
#define EXTRAS_KCONFIGWIDGETS_LIBKSTYLEMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstylemanager.html)

/// [Upstream resources](https://api.kde.org/kstylemanager.html#initStyle)
///
void k_stylemanager_init_style();

/// [Upstream resources](https://api.kde.org/kstylemanager.html#createConfigureAction)
///
/// @param parent QObject*
///
QAction* k_stylemanager_create_configure_action(void* parent);
#endif

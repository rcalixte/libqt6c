#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKLINEEDITEVENTHANDLER_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKLINEEDITEVENTHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/klineediteventhandler.html

/// [Upstream resources](https://api.kde.org/klineediteventhandler.html#catchReturnKey)
///
/// @param param1 QObject*
void k_lineediteventhandler_catch_return_key(void* param1);

/// [Upstream resources](https://api.kde.org/klineediteventhandler.html#handleUrlDrops)
///
/// @param param1 QObject*
void k_lineediteventhandler_handle_url_drops(void* param1);
#endif

#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKLINEEDITEVENTHANDLER_H
#define EXTRAS_KWIDGETSADDONS_LIBKLINEEDITEVENTHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klineediteventhandler.html)

/// [Upstream resources](https://api.kde.org/klineediteventhandler.html#catchReturnKey)
///
/// @param lineEdit QObject*
///
void k_lineediteventhandler_catch_return_key(void* lineEdit);

/// [Upstream resources](https://api.kde.org/klineediteventhandler.html#handleUrlDrops)
///
/// @param lineEdit QObject*
///
void k_lineediteventhandler_handle_url_drops(void* lineEdit);
#endif

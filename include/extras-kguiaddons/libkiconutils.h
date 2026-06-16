#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKICONUTILS_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKICONUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kiconutils.html)

/// [Upstream resources](https://api.kde.org/kiconutils.html#addOverlay)
///
/// @param icon QIcon*
/// @param overlay QIcon*
/// @param position enum Qt__Corner
///
QIcon* k_iconutils_add_overlay(void* icon, void* overlay, int32_t position);

/// [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
///
/// @param icon QIcon*
/// @param overlays libqt_map of enum Qt__Corner to QIcon*
///
QIcon* k_iconutils_add_overlays(void* icon, libqt_map overlays);

/// [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
///
/// @param icon QIcon*
/// @param overlays const char**
///
QIcon* k_iconutils_add_overlays2(void* icon, const char* overlays[static 1]);

/// [Upstream resources](https://api.kde.org/kiconutils.html#addOverlays)
///
/// @param iconName const char*
/// @param overlays const char**
///
QIcon* k_iconutils_add_overlays3(const char* iconName, const char* overlays[static 1]);
#endif

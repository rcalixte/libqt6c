#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSQT6C_LIBKICONUTILS_H
#define SRC_EXTRAS_KGUIADDONSQT6C_LIBKICONUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kiconutils.html

/// [Qt documentation](https://api.kde.org/kiconutils.html#addOverlay)
///
/// @param param1 QIcon*
/// @param param2 QIcon*
/// @param param3 enum Qt__Corner
QIcon* k_iconutils_add_overlay(void* param1, void* param2, int32_t param3);

/// [Qt documentation](https://api.kde.org/kiconutils.html#addOverlays)
///
/// @param param1 QIcon*
/// @param param2 libqt_map /* of enum Qt__Corner to QIcon* */
QIcon* k_iconutils_add_overlays(void* param1, libqt_map /* of int32_t to QIcon* */ param2);

/// [Qt documentation](https://api.kde.org/kiconutils.html#addOverlays)
///
/// @param param1 QIcon*
/// @param param2 const char**
QIcon* k_iconutils_add_overlays2(void* param1, const char* param2[]);

/// [Qt documentation](https://api.kde.org/kiconutils.html#addOverlays)
///
/// @param param1 const char*
/// @param param2 const char**
QIcon* k_iconutils_add_overlays3(const char* param1, const char* param2[]);
#endif

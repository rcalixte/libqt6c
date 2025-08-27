#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSQT6C_LIBKCOLORMIMEDATA_H
#define SRC_EXTRAS_KGUIADDONSQT6C_LIBKCOLORMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcolormimedata.html

/// [Qt documentation](https://api-staging.kde.org/kcolormimedata.html#populateMimeData)
///
/// @param param1 QMimeData*
/// @param param2 QColor*
void k_colormimedata_populate_mime_data(void* param1, void* param2);

/// [Qt documentation](https://api-staging.kde.org/kcolormimedata.html#canDecode)
///
/// @param param1 QMimeData*
bool k_colormimedata_can_decode(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcolormimedata.html#fromMimeData)
///
/// @param param1 QMimeData*
QColor* k_colormimedata_from_mime_data(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kcolormimedata.html#createDrag)
///
/// @param param1 QColor*
/// @param param2 QObject*
QDrag* k_colormimedata_create_drag(void* param1, void* param2);
#endif

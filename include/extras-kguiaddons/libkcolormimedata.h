#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCOLORMIMEDATA_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCOLORMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcolormimedata.html)

/// [Upstream resources](https://api.kde.org/kcolormimedata.html#populateMimeData)
///
/// @param mimeData QMimeData*
/// @param color QColor*
///
void k_colormimedata_populate_mime_data(void* mimeData, void* color);

/// [Upstream resources](https://api.kde.org/kcolormimedata.html#canDecode)
///
/// @param mimeData QMimeData*
///
bool k_colormimedata_can_decode(void* mimeData);

/// [Upstream resources](https://api.kde.org/kcolormimedata.html#fromMimeData)
///
/// @param mimeData QMimeData*
///
QColor* k_colormimedata_from_mime_data(void* mimeData);

/// [Upstream resources](https://api.kde.org/kcolormimedata.html#createDrag)
///
/// @param color QColor*
/// @param dragsource QObject*
///
QDrag* k_colormimedata_create_drag(void* color, void* dragsource);
#endif

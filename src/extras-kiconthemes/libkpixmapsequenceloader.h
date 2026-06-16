#pragma once
#ifndef SRC_EXTRAS_KICONTHEMES_QT6C_LIBKPIXMAPSEQUENCELOADER_H
#define SRC_EXTRAS_KICONTHEMES_QT6C_LIBKPIXMAPSEQUENCELOADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpixmapsequenceloader.html)

/// [Upstream resources](https://api.kde.org/kpixmapsequenceloader.html#load)
///
/// @param iconName const char*
/// @param size int
///
KPixmapSequence* k_pixmapsequenceloader_load(const char* iconName, int size);
#endif

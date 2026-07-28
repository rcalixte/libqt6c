#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKPIXMAPSEQUENCELOADER_H
#define EXTRAS_KICONTHEMES_LIBKPIXMAPSEQUENCELOADER_H

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

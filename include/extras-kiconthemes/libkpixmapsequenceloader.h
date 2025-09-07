#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESQT6C_LIBKPIXMAPSEQUENCELOADER_H
#define SRC_EXTRAS_KICONTHEMESQT6C_LIBKPIXMAPSEQUENCELOADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kpixmapsequenceloader.html

/// [Qt documentation](https://api.kde.org/kpixmapsequenceloader.html#load)
///
/// @param param1 const char*
/// @param param2 int
KPixmapSequence* k_pixmapsequenceloader_load(const char* param1, int param2);
#endif

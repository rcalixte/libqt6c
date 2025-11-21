#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCOLORUTILS_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCOLORUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcolorutils.html

/// [Qt documentation](https://api.kde.org/kcolorutils.html#hue)
///
/// @param param1 QColor*
double k_colorutils_hue(void* param1);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#chroma)
///
/// @param param1 QColor*
double k_colorutils_chroma(void* param1);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#luma)
///
/// @param param1 QColor*
double k_colorutils_luma(void* param1);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#getHcy)
///
/// @param param1 QColor*
/// @param param2 double*
/// @param param3 double*
/// @param param4 double*
/// @param param5 double*
void k_colorutils_get_hcy(void* param1, double* param2, double* param3, double* param4, double* param5);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#hcyColor)
///
/// @param param1 double
/// @param param2 double
/// @param param3 double
/// @param param4 double
QColor* k_colorutils_hcy_color(double param1, double param2, double param3, double param4);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#contrastRatio)
///
/// @param param1 QColor*
/// @param param2 QColor*
double k_colorutils_contrast_ratio(void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#lighten)
///
/// @param param1 QColor*
/// @param param2 double
/// @param param3 double
QColor* k_colorutils_lighten(void* param1, double param2, double param3);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#darken)
///
/// @param param1 QColor*
/// @param param2 double
/// @param param3 double
QColor* k_colorutils_darken(void* param1, double param2, double param3);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#shade)
///
/// @param param1 QColor*
/// @param param2 double
/// @param param3 double
QColor* k_colorutils_shade(void* param1, double param2, double param3);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#tint)
///
/// @param param1 QColor*
/// @param param2 QColor*
/// @param param3 double
QColor* k_colorutils_tint(void* param1, void* param2, double param3);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#mix)
///
/// @param param1 QColor*
/// @param param2 QColor*
/// @param param3 double
QColor* k_colorutils_mix(void* param1, void* param2, double param3);

/// [Qt documentation](https://api.kde.org/kcolorutils.html#overlayColors)
///
/// @param param1 QColor*
/// @param param2 QColor*
/// @param param3 enum QPainter__CompositionMode
QColor* k_colorutils_overlay_colors(void* param1, void* param2, int32_t param3);
#endif

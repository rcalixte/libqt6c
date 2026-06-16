#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCOLORUTILS_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCOLORUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcolorutils.html)

/// [Upstream resources](https://api.kde.org/kcolorutils.html#hue)
///
/// @param param1 QColor*
///
double k_colorutils_hue(void* param1);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#chroma)
///
/// @param param1 QColor*
///
double k_colorutils_chroma(void* param1);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#luma)
///
/// @param param1 QColor*
///
double k_colorutils_luma(void* param1);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#getHcy)
///
/// @param param1 QColor*
/// @param hue double*
/// @param chroma double*
/// @param luma double*
/// @param alpha double*
///
void k_colorutils_get_hcy(void* param1, double* hue, double* chroma, double* luma, double* alpha);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#hcyColor)
///
/// @param hue double
/// @param chroma double
/// @param luma double
/// @param alpha double
///
QColor* k_colorutils_hcy_color(double hue, double chroma, double luma, double alpha);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#contrastRatio)
///
/// @param param1 QColor*
/// @param param2 QColor*
///
double k_colorutils_contrast_ratio(void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#lighten)
///
/// @param param1 QColor*
/// @param amount double
/// @param chromaInverseGain double
///
QColor* k_colorutils_lighten(void* param1, double amount, double chromaInverseGain);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#darken)
///
/// @param param1 QColor*
/// @param amount double
/// @param chromaGain double
///
QColor* k_colorutils_darken(void* param1, double amount, double chromaGain);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#shade)
///
/// @param param1 QColor*
/// @param lumaAmount double
/// @param chromaAmount double
///
QColor* k_colorutils_shade(void* param1, double lumaAmount, double chromaAmount);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#tint)
///
/// @param base QColor*
/// @param color QColor*
/// @param amount double
///
QColor* k_colorutils_tint(void* base, void* color, double amount);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#mix)
///
/// @param c1 QColor*
/// @param c2 QColor*
/// @param bias double
///
QColor* k_colorutils_mix(void* c1, void* c2, double bias);

/// [Upstream resources](https://api.kde.org/kcolorutils.html#overlayColors)
///
/// @param base QColor*
/// @param paint QColor*
/// @param comp enum QPainter__CompositionMode
///
QColor* k_colorutils_overlay_colors(void* base, void* paint, int32_t comp);
#endif

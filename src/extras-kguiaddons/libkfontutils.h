#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKFONTUTILS_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKFONTUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfontutils.html)

/// [Upstream resources](https://api.kde.org/kfontutils.html#adaptFontSize)
///
/// @param painter QPainter*
/// @param text const char*
/// @param width double
/// @param height double
/// @param maxFontSize double
/// @param minFontSize double
/// @param flags flag of enum KFontUtils__AdaptFontSizeOption
///
double k_fontutils_adapt_font_size(void* painter, const char* text, double width, double height, double maxFontSize, double minFontSize, int32_t flags);

/// [Upstream resources](https://api.kde.org/kfontutils.html#adaptFontSize)
///
/// @param painter QPainter*
/// @param text const char*
/// @param availableSize QSizeF*
/// @param maxFontSize double
/// @param minFontSize double
/// @param flags flag of enum KFontUtils__AdaptFontSizeOption
///
double k_fontutils_adapt_font_size2(void* painter, const char* text, void* availableSize, double maxFontSize, double minFontSize, int32_t flags);

/// [Upstream resources](https://api.kde.org/kfontutils.html#public-types)

typedef enum {
    KFONTUTILS_ADAPTFONTSIZEOPTION_NOFLAGS = 1,
    KFONTUTILS_ADAPTFONTSIZEOPTION_DONOTALLOWWORDWRAP = 2
} KFontUtils__AdaptFontSizeOption;

#endif

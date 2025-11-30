#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKFONTUTILS_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKFONTUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kfontutils.html

/// [Upstream resources](https://api.kde.org/kfontutils.html#adaptFontSize)
///
/// @param param1 QPainter*
/// @param param2 const char*
/// @param param3 double
/// @param param4 double
/// @param param5 double
/// @param param6 double
/// @param param7 flag of enum KFontUtils__AdaptFontSizeOption
double k_fontutils_adapt_font_size(void* param1, const char* param2, double param3, double param4, double param5, double param6, int32_t param7);

/// [Upstream resources](https://api.kde.org/kfontutils.html#adaptFontSize)
///
/// @param param1 QPainter*
/// @param param2 const char*
/// @param param3 QSizeF*
/// @param param4 double
/// @param param5 double
/// @param param6 flag of enum KFontUtils__AdaptFontSizeOption
double k_fontutils_adapt_font_size2(void* param1, const char* param2, void* param3, double param4, double param5, int32_t param6);

/// https://api.kde.org/kfontutils.html#types

typedef enum {
    KFONTUTILS_ADAPTFONTSIZEOPTION_NOFLAGS = 1,
    KFONTUTILS_ADAPTFONTSIZEOPTION_DONOTALLOWWORDWRAP = 2
} KFontUtils__AdaptFontSizeOption;

#endif

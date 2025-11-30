#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWINDOWEFFECTS_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWINDOWEFFECTS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kwindoweffects.html

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#isEffectAvailable)
///
/// @param param1 enum KWindowEffects__Effect
bool k_windoweffects_is_effect_available(int32_t param1);

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBlurBehind)
///
/// @param param1 QWindow*
/// @param param2 bool
/// @param param3 QRegion*
void k_windoweffects_enable_blur_behind(void* param1, bool param2, void* param3);

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBackgroundContrast)
///
/// @param param1 QWindow*
/// @param param2 bool
/// @param param3 double
/// @param param4 double
/// @param param5 double
/// @param param6 QRegion*
void k_windoweffects_enable_background_contrast(void* param1, bool param2, double param3, double param4, double param5, void* param6);

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#slideWindow)
///
/// @param param1 QWindow*
/// @param param2 enum KWindowEffects__SlideFromLocation
/// @param param3 int
void k_windoweffects_slide_window(void* param1, int32_t param2, int param3);

/// https://api.kde.org/kwindoweffects.html#types

typedef enum {
    KWINDOWEFFECTS_EFFECT_SLIDE = 1,
    KWINDOWEFFECTS_EFFECT_BLURBEHIND = 7,
    KWINDOWEFFECTS_EFFECT_BACKGROUNDCONTRAST = 9
} KWindowEffects__Effect;

typedef enum {
    KWINDOWEFFECTS_SLIDEFROMLOCATION_NOEDGE = 0,
    KWINDOWEFFECTS_SLIDEFROMLOCATION_TOPEDGE = 1,
    KWINDOWEFFECTS_SLIDEFROMLOCATION_RIGHTEDGE = 2,
    KWINDOWEFFECTS_SLIDEFROMLOCATION_BOTTOMEDGE = 3,
    KWINDOWEFFECTS_SLIDEFROMLOCATION_LEFTEDGE = 4
} KWindowEffects__SlideFromLocation;

#endif

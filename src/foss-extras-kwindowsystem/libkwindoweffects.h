#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWINDOWEFFECTS_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWINDOWEFFECTS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwindoweffects.html)

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#isEffectAvailable)
///
/// @param effect enum KWindowEffects__Effect
///
bool k_windoweffects_is_effect_available(int32_t effect);

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBlurBehind)
///
/// @param window QWindow*
/// @param enable bool
/// @param region QRegion*
///
void k_windoweffects_enable_blur_behind(void* window, bool enable, void* region);

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#enableBackgroundContrast)
///
/// @param window QWindow*
/// @param enable bool
/// @param contrast double
/// @param intensity double
/// @param saturation double
/// @param region QRegion*
///
void k_windoweffects_enable_background_contrast(void* window, bool enable, double contrast, double intensity, double saturation, void* region);

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#slideWindow)
///
/// @param window QWindow*
/// @param location enum KWindowEffects__SlideFromLocation
/// @param offset int
///
void k_windoweffects_slide_window(void* window, int32_t location, int offset);

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#public-types)

typedef enum {
    KWINDOWEFFECTS_EFFECT_SLIDE = 1,
    KWINDOWEFFECTS_EFFECT_BLURBEHIND = 7,
    KWINDOWEFFECTS_EFFECT_BACKGROUNDCONTRAST = 9
} KWindowEffects__Effect;

/// [Upstream resources](https://api.kde.org/kwindoweffects.html#public-types)

typedef enum {
    KWINDOWEFFECTS_SLIDEFROMLOCATION_NOEDGE = 0,
    KWINDOWEFFECTS_SLIDEFROMLOCATION_TOPEDGE = 1,
    KWINDOWEFFECTS_SLIDEFROMLOCATION_RIGHTEDGE = 2,
    KWINDOWEFFECTS_SLIDEFROMLOCATION_BOTTOMEDGE = 3,
    KWINDOWEFFECTS_SLIDEFROMLOCATION_LEFTEDGE = 4
} KWindowEffects__SlideFromLocation;

#endif

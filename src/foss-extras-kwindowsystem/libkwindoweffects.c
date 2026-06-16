#include "../libqregion.hpp"
#include "../libqwindow.hpp"
#include "libkwindoweffects.hpp"
#include "libkwindoweffects.h"

bool k_windoweffects_is_effect_available(int32_t effect) {
    return KWindowEffects_IsEffectAvailable(effect);
}

void k_windoweffects_enable_blur_behind(void* window, bool enable, void* region) {
    KWindowEffects_EnableBlurBehind((QWindow*)window, enable, (QRegion*)region);
}

void k_windoweffects_enable_background_contrast(void* window, bool enable, double contrast, double intensity, double saturation, void* region) {
    KWindowEffects_EnableBackgroundContrast((QWindow*)window, enable, contrast, intensity, saturation, (QRegion*)region);
}

void k_windoweffects_slide_window(void* window, int32_t location, int offset) {
    KWindowEffects_SlideWindow((QWindow*)window, location, offset);
}

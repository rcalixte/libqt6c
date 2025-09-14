#include "../libqregion.hpp"
#include "../libqwindow.hpp"
#include "libkwindoweffects.hpp"
#include "libkwindoweffects.h"

bool k_windoweffects_is_effect_available(int32_t param1) {
    return KWindowEffects_IsEffectAvailable(param1);
}

void k_windoweffects_enable_blur_behind(void* param1, bool param2, void* param3) {
    KWindowEffects_EnableBlurBehind((QWindow*)param1, param2, (QRegion*)param3);
}

void k_windoweffects_enable_background_contrast(void* param1, bool param2, double param3, double param4, double param5, void* param6) {
    KWindowEffects_EnableBackgroundContrast((QWindow*)param1, param2, param3, param4, param5, (QRegion*)param6);
}

void k_windoweffects_slide_window(void* param1, int32_t param2, int param3) {
    KWindowEffects_SlideWindow((QWindow*)param1, param2, param3);
}

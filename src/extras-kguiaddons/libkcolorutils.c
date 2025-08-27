#include "../libqcolor.hpp"
#include "libkcolorutils.hpp"
#include "libkcolorutils.h"

double k_colorutils_hue(void* param1) {
    return KColorUtils_Hue((QColor*)param1);
}

double k_colorutils_chroma(void* param1) {
    return KColorUtils_Chroma((QColor*)param1);
}

double k_colorutils_luma(void* param1) {
    return KColorUtils_Luma((QColor*)param1);
}

void k_colorutils_get_hcy(void* param1, double* param2, double* param3, double* param4, double* param5) {
    KColorUtils_GetHcy((QColor*)param1, param2, param3, param4, param5);
}

QColor* k_colorutils_hcy_color(double param1, double param2, double param3, double param4) {
    return KColorUtils_HcyColor(param1, param2, param3, param4);
}

double k_colorutils_contrast_ratio(void* param1, void* param2) {
    return KColorUtils_ContrastRatio((QColor*)param1, (QColor*)param2);
}

QColor* k_colorutils_lighten(void* param1, double param2, double param3) {
    return KColorUtils_Lighten((QColor*)param1, param2, param3);
}

QColor* k_colorutils_darken(void* param1, double param2, double param3) {
    return KColorUtils_Darken((QColor*)param1, param2, param3);
}

QColor* k_colorutils_shade(void* param1, double param2, double param3) {
    return KColorUtils_Shade((QColor*)param1, param2, param3);
}

QColor* k_colorutils_tint(void* param1, void* param2, double param3) {
    return KColorUtils_Tint((QColor*)param1, (QColor*)param2, param3);
}

QColor* k_colorutils_mix(void* param1, void* param2, double param3) {
    return KColorUtils_Mix((QColor*)param1, (QColor*)param2, param3);
}

QColor* k_colorutils_overlay_colors(void* param1, void* param2, int32_t param3) {
    return KColorUtils_OverlayColors((QColor*)param1, (QColor*)param2, param3);
}

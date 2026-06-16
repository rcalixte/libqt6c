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

void k_colorutils_get_hcy(void* param1, double* hue, double* chroma, double* luma, double* alpha) {
    KColorUtils_GetHcy((QColor*)param1, hue, chroma, luma, alpha);
}

QColor* k_colorutils_hcy_color(double hue, double chroma, double luma, double alpha) {
    return KColorUtils_HcyColor(hue, chroma, luma, alpha);
}

double k_colorutils_contrast_ratio(void* param1, void* param2) {
    return KColorUtils_ContrastRatio((QColor*)param1, (QColor*)param2);
}

QColor* k_colorutils_lighten(void* param1, double amount, double chromaInverseGain) {
    return KColorUtils_Lighten((QColor*)param1, amount, chromaInverseGain);
}

QColor* k_colorutils_darken(void* param1, double amount, double chromaGain) {
    return KColorUtils_Darken((QColor*)param1, amount, chromaGain);
}

QColor* k_colorutils_shade(void* param1, double lumaAmount, double chromaAmount) {
    return KColorUtils_Shade((QColor*)param1, lumaAmount, chromaAmount);
}

QColor* k_colorutils_tint(void* base, void* color, double amount) {
    return KColorUtils_Tint((QColor*)base, (QColor*)color, amount);
}

QColor* k_colorutils_mix(void* c1, void* c2, double bias) {
    return KColorUtils_Mix((QColor*)c1, (QColor*)c2, bias);
}

QColor* k_colorutils_overlay_colors(void* base, void* paint, int32_t comp) {
    return KColorUtils_OverlayColors((QColor*)base, (QColor*)paint, comp);
}

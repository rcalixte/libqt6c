#include "../libqpainter.hpp"
#include "../libqsize.hpp"
#include "libkfontutils.hpp"
#include "libkfontutils.h"

double k_fontutils_adapt_font_size(void* param1, const char* param2, double param3, double param4, double param5, double param6, int32_t param7) {
    return KFontUtils_AdaptFontSize((QPainter*)param1, qstring(param2), param3, param4, param5, param6, param7);
}

double k_fontutils_adapt_font_size2(void* param1, const char* param2, void* param3, double param4, double param5, int32_t param6) {
    return KFontUtils_AdaptFontSize2((QPainter*)param1, qstring(param2), (QSizeF*)param3, param4, param5, param6);
}

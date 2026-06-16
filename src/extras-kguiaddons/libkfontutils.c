#include "../libqpainter.hpp"
#include "../libqsize.hpp"
#include "libkfontutils.hpp"
#include "libkfontutils.h"

double k_fontutils_adapt_font_size(void* painter, const char* text, double width, double height, double maxFontSize, double minFontSize, int32_t flags) {
    return KFontUtils_AdaptFontSize((QPainter*)painter, qstring(text), width, height, maxFontSize, minFontSize, flags);
}

double k_fontutils_adapt_font_size2(void* painter, const char* text, void* availableSize, double maxFontSize, double minFontSize, int32_t flags) {
    return KFontUtils_AdaptFontSize2((QPainter*)painter, qstring(text), (QSizeF*)availableSize, maxFontSize, minFontSize, flags);
}

#include "../libqbrush.hpp"
#include "../libqcolor.hpp"
#include "../libqpalette.hpp"
#include "libkcolorscheme.hpp"
#include "libkcolorscheme.h"

KColorScheme* k_colorscheme_new(void* param1) {
    return KColorScheme_new((KColorScheme*)param1);
}

KColorScheme* k_colorscheme_new2() {
    return KColorScheme_new2();
}

KColorScheme* k_colorscheme_new3(int32_t param1) {
    return KColorScheme_new3(param1);
}

KColorScheme* k_colorscheme_new4(int32_t param1, int32_t param2) {
    return KColorScheme_new4(param1, param2);
}

void k_colorscheme_operator_assign(void* self, void* param1) {
    KColorScheme_OperatorAssign((KColorScheme*)self, (KColorScheme*)param1);
}

QBrush* k_colorscheme_background(void* self) {
    return KColorScheme_Background((KColorScheme*)self);
}

QBrush* k_colorscheme_foreground(void* self) {
    return KColorScheme_Foreground((KColorScheme*)self);
}

QBrush* k_colorscheme_decoration(void* self, int32_t param1) {
    return KColorScheme_Decoration((KColorScheme*)self, param1);
}

QColor* k_colorscheme_shade(void* self, int32_t param1) {
    return KColorScheme_Shade((KColorScheme*)self, param1);
}

double k_colorscheme_contrast_f() {
    return KColorScheme_ContrastF();
}

QColor* k_colorscheme_shade2(void* param1, int32_t param2) {
    return KColorScheme_Shade2((QColor*)param1, param2);
}

QColor* k_colorscheme_shade3(void* param1, int32_t param2, double contrast) {
    return KColorScheme_Shade3((QColor*)param1, param2, contrast);
}

void k_colorscheme_adjust_background(void* param1) {
    KColorScheme_AdjustBackground((QPalette*)param1);
}

void k_colorscheme_adjust_foreground(void* param1) {
    KColorScheme_AdjustForeground((QPalette*)param1);
}

bool k_colorscheme_operator_equal(void* self, void* other) {
    return KColorScheme_OperatorEqual((KColorScheme*)self, (KColorScheme*)other);
}

QBrush* k_colorscheme_background1(void* self, int32_t param1) {
    return KColorScheme_Background1((KColorScheme*)self, param1);
}

QBrush* k_colorscheme_foreground1(void* self, int32_t param1) {
    return KColorScheme_Foreground1((KColorScheme*)self, param1);
}

QColor* k_colorscheme_shade4(void* param1, int32_t param2, double contrast, double chromaAdjust) {
    return KColorScheme_Shade4((QColor*)param1, param2, contrast, chromaAdjust);
}

void k_colorscheme_adjust_background2(void* param1, int32_t newRole) {
    KColorScheme_AdjustBackground2((QPalette*)param1, newRole);
}

void k_colorscheme_adjust_background3(void* param1, int32_t newRole, int32_t color) {
    KColorScheme_AdjustBackground3((QPalette*)param1, newRole, color);
}

void k_colorscheme_adjust_background4(void* param1, int32_t newRole, int32_t color, int32_t set) {
    KColorScheme_AdjustBackground4((QPalette*)param1, newRole, color, set);
}

void k_colorscheme_adjust_foreground2(void* param1, int32_t newRole) {
    KColorScheme_AdjustForeground2((QPalette*)param1, newRole);
}

void k_colorscheme_adjust_foreground3(void* param1, int32_t newRole, int32_t color) {
    KColorScheme_AdjustForeground3((QPalette*)param1, newRole, color);
}

void k_colorscheme_adjust_foreground4(void* param1, int32_t newRole, int32_t color, int32_t set) {
    KColorScheme_AdjustForeground4((QPalette*)param1, newRole, color, set);
}

void k_colorscheme_delete(void* self) {
    KColorScheme_Delete((KColorScheme*)(self));
}

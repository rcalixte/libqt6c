#include "../libqcolor.hpp"
#include "../libqimage.hpp"
#include "../libqpixmap.hpp"
#include "libkiconeffect.hpp"
#include "libkiconeffect.h"

KIconEffect* k_iconeffect_new() {
    return KIconEffect_new();
}

void k_iconeffect_init(void* self) {
    KIconEffect_Init((KIconEffect*)self);
}

bool k_iconeffect_has_effect(void* self, int group, int state) {
    return KIconEffect_HasEffect((KIconEffect*)self, group, state);
}

const char* k_iconeffect_fingerprint(void* self, int group, int state) {
    libqt_string _str = KIconEffect_Fingerprint((KIconEffect*)self, group, state);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QImage* k_iconeffect_apply(void* self, void* src, int group, int state) {
    return KIconEffect_Apply((KIconEffect*)self, (QImage*)src, group, state);
}

QImage* k_iconeffect_apply2(void* self, void* src, int effect, float value, void* rgb, bool trans) {
    return KIconEffect_Apply2((KIconEffect*)self, (QImage*)src, effect, value, (QColor*)rgb, trans);
}

QImage* k_iconeffect_apply3(void* self, void* src, int effect, float value, void* rgb, void* rgb2, bool trans) {
    return KIconEffect_Apply3((KIconEffect*)self, (QImage*)src, effect, value, (QColor*)rgb, (QColor*)rgb2, trans);
}

QPixmap* k_iconeffect_apply4(void* self, void* src, int group, int state) {
    return KIconEffect_Apply4((KIconEffect*)self, (QPixmap*)src, group, state);
}

QPixmap* k_iconeffect_apply5(void* self, void* src, int effect, float value, void* rgb, bool trans) {
    return KIconEffect_Apply5((KIconEffect*)self, (QPixmap*)src, effect, value, (QColor*)rgb, trans);
}

QPixmap* k_iconeffect_apply6(void* self, void* src, int effect, float value, void* rgb, void* rgb2, bool trans) {
    return KIconEffect_Apply6((KIconEffect*)self, (QPixmap*)src, effect, value, (QColor*)rgb, (QColor*)rgb2, trans);
}

QImage* k_iconeffect_double_pixels(void* self, void* src) {
    return KIconEffect_DoublePixels((KIconEffect*)self, (QImage*)src);
}

void k_iconeffect_to_gray(void* image, float value) {
    KIconEffect_ToGray((QImage*)image, value);
}

void k_iconeffect_colorize(void* image, void* col, float value) {
    KIconEffect_Colorize((QImage*)image, (QColor*)col, value);
}

void k_iconeffect_to_monochrome(void* image, void* black, void* white, float value) {
    KIconEffect_ToMonochrome((QImage*)image, (QColor*)black, (QColor*)white, value);
}

void k_iconeffect_de_saturate(void* image, float value) {
    KIconEffect_DeSaturate((QImage*)image, value);
}

void k_iconeffect_to_gamma(void* image, float value) {
    KIconEffect_ToGamma((QImage*)image, value);
}

void k_iconeffect_semi_transparent(void* image) {
    KIconEffect_SemiTransparent((QImage*)image);
}

void k_iconeffect_semi_transparent2(void* pixmap) {
    KIconEffect_SemiTransparent2((QPixmap*)pixmap);
}

void k_iconeffect_overlay(void* src, void* overlay) {
    KIconEffect_Overlay((QImage*)src, (QImage*)overlay);
}

void k_iconeffect_to_disabled(void* image) {
    KIconEffect_ToDisabled((QImage*)image);
}

void k_iconeffect_to_disabled2(void* pixmap) {
    KIconEffect_ToDisabled2((QPixmap*)pixmap);
}

void k_iconeffect_to_active(void* image) {
    KIconEffect_ToActive((QImage*)image);
}

void k_iconeffect_to_active2(void* pixmap) {
    KIconEffect_ToActive2((QPixmap*)pixmap);
}

void k_iconeffect_delete(void* self) {
    KIconEffect_Delete((KIconEffect*)(self));
}

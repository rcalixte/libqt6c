#include "libqrgba64.hpp"
#include "libqrgba64.h"

QRgba64* q_rgba64_new() {
    return QRgba64_new();
}

QRgba64* q_rgba64_new2(void* param1) {
    return QRgba64_new2((QRgba64*)param1);
}

QRgba64* q_rgba64_from_rgba64(uint64_t c) {
    return QRgba64_FromRgba64(c);
}

QRgba64* q_rgba64_from_rgba642(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha) {
    return QRgba64_FromRgba642(red, green, blue, alpha);
}

QRgba64* q_rgba64_from_rgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    return QRgba64_FromRgba(red, green, blue, alpha);
}

QRgba64* q_rgba64_from_argb32(uint32_t rgb) {
    return QRgba64_FromArgb32(rgb);
}

bool q_rgba64_is_opaque(void* self) {
    return QRgba64_IsOpaque((QRgba64*)self);
}

bool q_rgba64_is_transparent(void* self) {
    return QRgba64_IsTransparent((QRgba64*)self);
}

unsigned short q_rgba64_red(void* self) {
    return QRgba64_Red((QRgba64*)self);
}

unsigned short q_rgba64_green(void* self) {
    return QRgba64_Green((QRgba64*)self);
}

unsigned short q_rgba64_blue(void* self) {
    return QRgba64_Blue((QRgba64*)self);
}

unsigned short q_rgba64_alpha(void* self) {
    return QRgba64_Alpha((QRgba64*)self);
}

void q_rgba64_set_red(void* self, unsigned short _red) {
    QRgba64_SetRed((QRgba64*)self, _red);
}

void q_rgba64_set_green(void* self, unsigned short _green) {
    QRgba64_SetGreen((QRgba64*)self, _green);
}

void q_rgba64_set_blue(void* self, unsigned short _blue) {
    QRgba64_SetBlue((QRgba64*)self, _blue);
}

void q_rgba64_set_alpha(void* self, unsigned short _alpha) {
    QRgba64_SetAlpha((QRgba64*)self, _alpha);
}

unsigned char q_rgba64_red8(void* self) {
    return QRgba64_Red8((QRgba64*)self);
}

unsigned char q_rgba64_green8(void* self) {
    return QRgba64_Green8((QRgba64*)self);
}

unsigned char q_rgba64_blue8(void* self) {
    return QRgba64_Blue8((QRgba64*)self);
}

unsigned char q_rgba64_alpha8(void* self) {
    return QRgba64_Alpha8((QRgba64*)self);
}

uint32_t q_rgba64_to_argb32(void* self) {
    return QRgba64_ToArgb32((QRgba64*)self);
}

unsigned short q_rgba64_to_rgb16(void* self) {
    return QRgba64_ToRgb16((QRgba64*)self);
}

QRgba64* q_rgba64_premultiplied(void* self) {
    return QRgba64_Premultiplied((QRgba64*)self);
}

QRgba64* q_rgba64_unpremultiplied(void* self) {
    return QRgba64_Unpremultiplied((QRgba64*)self);
}

uint64_t q_rgba64_to_unsigned_long_long(void* self) {
    return QRgba64_ToUnsignedLongLong((QRgba64*)self);
}

void q_rgba64_operator_assign(void* self, uint64_t _rgba) {
    QRgba64_OperatorAssign((QRgba64*)self, _rgba);
}

void q_rgba64_delete(void* self) {
    QRgba64_Delete((QRgba64*)(self));
}

#pragma once
#ifndef SRCQT6C_LIBQRGBA64_H
#define SRCQT6C_LIBQRGBA64_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QRgba64* q_rgba64_new();
QRgba64* q_rgba64_new2(void* param1);
QRgba64* q_rgba64_from_rgba64(uint64_t c);
QRgba64* q_rgba64_from_rgba642(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha);
QRgba64* q_rgba64_from_rgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
QRgba64* q_rgba64_from_argb32(uint32_t rgb);
bool q_rgba64_is_opaque(void* self);
bool q_rgba64_is_transparent(void* self);
unsigned short q_rgba64_red(void* self);
unsigned short q_rgba64_green(void* self);
unsigned short q_rgba64_blue(void* self);
unsigned short q_rgba64_alpha(void* self);
void q_rgba64_set_red(void* self, unsigned short _red);
void q_rgba64_set_green(void* self, unsigned short _green);
void q_rgba64_set_blue(void* self, unsigned short _blue);
void q_rgba64_set_alpha(void* self, unsigned short _alpha);
unsigned char q_rgba64_red8(void* self);
unsigned char q_rgba64_green8(void* self);
unsigned char q_rgba64_blue8(void* self);
unsigned char q_rgba64_alpha8(void* self);
uint32_t q_rgba64_to_argb32(void* self);
unsigned short q_rgba64_to_rgb16(void* self);
QRgba64* q_rgba64_premultiplied(void* self);
QRgba64* q_rgba64_unpremultiplied(void* self);
uint64_t q_rgba64_to_unsigned_long_long(void* self);
void q_rgba64_operator_assign(void* self, uint64_t _rgba);
void q_rgba64_delete(void* self);

#endif

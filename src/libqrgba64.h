#pragma once
#ifndef SRC_QT6C_LIBQRGBA64_H
#define SRC_QT6C_LIBQRGBA64_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qrgba64.html

/// q_rgba64_new constructs a new QRgba64 object.
///
QRgba64* q_rgba64_new();

/// q_rgba64_new2 constructs a new QRgba64 object.
///
/// @param param1 QRgba64*
QRgba64* q_rgba64_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
///
/// @param c uint64_t
QRgba64* q_rgba64_from_rgba64(uint64_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
///
/// @param red unsigned short
/// @param green unsigned short
/// @param blue unsigned short
/// @param alpha unsigned short
QRgba64* q_rgba64_from_rgba642(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#fromRgba)
///
/// @param red unsigned char
/// @param green unsigned char
/// @param blue unsigned char
/// @param alpha unsigned char
QRgba64* q_rgba64_from_rgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#fromArgb32)
///
/// @param rgb uint32_t
QRgba64* q_rgba64_from_argb32(uint32_t rgb);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#isOpaque)
///
/// @param self QRgba64*
bool q_rgba64_is_opaque(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#isTransparent)
///
/// @param self QRgba64*
bool q_rgba64_is_transparent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#red)
///
/// @param self QRgba64*
unsigned short q_rgba64_red(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#green)
///
/// @param self QRgba64*
unsigned short q_rgba64_green(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#blue)
///
/// @param self QRgba64*
unsigned short q_rgba64_blue(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#alpha)
///
/// @param self QRgba64*
unsigned short q_rgba64_alpha(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#setRed)
///
/// @param self QRgba64*
/// @param _red unsigned short
void q_rgba64_set_red(void* self, unsigned short _red);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#setGreen)
///
/// @param self QRgba64*
/// @param _green unsigned short
void q_rgba64_set_green(void* self, unsigned short _green);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#setBlue)
///
/// @param self QRgba64*
/// @param _blue unsigned short
void q_rgba64_set_blue(void* self, unsigned short _blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#setAlpha)
///
/// @param self QRgba64*
/// @param _alpha unsigned short
void q_rgba64_set_alpha(void* self, unsigned short _alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#red8)
///
/// @param self QRgba64*
unsigned char q_rgba64_red8(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#green8)
///
/// @param self QRgba64*
unsigned char q_rgba64_green8(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#blue8)
///
/// @param self QRgba64*
unsigned char q_rgba64_blue8(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#alpha8)
///
/// @param self QRgba64*
unsigned char q_rgba64_alpha8(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#toArgb32)
///
/// @param self QRgba64*
uint32_t q_rgba64_to_argb32(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#toRgb16)
///
/// @param self QRgba64*
unsigned short q_rgba64_to_rgb16(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#premultiplied)
///
/// @param self QRgba64*
QRgba64* q_rgba64_premultiplied(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#unpremultiplied)
///
/// @param self QRgba64*
QRgba64* q_rgba64_unpremultiplied(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#operator)
///
/// @param self QRgba64*
uint64_t q_rgba64_to_unsigned_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#operator-eq)
///
/// @param self QRgba64*
/// @param _rgba uint64_t
void q_rgba64_operator_assign(void* self, uint64_t _rgba);

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#dtor.QRgba64)
///
/// Delete this object from C++ memory.
///
/// @param self QRgba64*
void q_rgba64_delete(void* self);

#endif

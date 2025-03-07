#include "libqrgba64.hpp"
#include "libqrgba64.h"

/// https://doc.qt.io/qt-6/qrgba64.html

/// q_rgba64_new constructs a new QRgba64 object.
///
///
QRgba64* q_rgba64_new() {
    return QRgba64_new();
}

/// q_rgba64_new2 constructs a new QRgba64 object.
///
/// ``` QRgba64* param1 ```
QRgba64* q_rgba64_new2(void* param1) {
    return QRgba64_new2((QRgba64*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
///
/// ``` uint64_t c ```
QRgba64* q_rgba64_from_rgba64(uint64_t c) {
    return QRgba64_FromRgba64(c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#fromRgba64)
///
/// ``` unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha ```
QRgba64* q_rgba64_from_rgba642(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha) {
    return QRgba64_FromRgba642(red, green, blue, alpha);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#fromRgba)
///
/// ``` unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha ```
QRgba64* q_rgba64_from_rgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    return QRgba64_FromRgba(red, green, blue, alpha);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#fromArgb32)
///
/// ``` uint32_t rgb ```
QRgba64* q_rgba64_from_argb32(uint32_t rgb) {
    return QRgba64_FromArgb32(rgb);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#isOpaque)
///
/// ``` QRgba64* self ```
bool q_rgba64_is_opaque(void* self) {
    return QRgba64_IsOpaque((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#isTransparent)
///
/// ``` QRgba64* self ```
bool q_rgba64_is_transparent(void* self) {
    return QRgba64_IsTransparent((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#red)
///
/// ``` QRgba64* self ```
unsigned short q_rgba64_red(void* self) {
    return QRgba64_Red((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#green)
///
/// ``` QRgba64* self ```
unsigned short q_rgba64_green(void* self) {
    return QRgba64_Green((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#blue)
///
/// ``` QRgba64* self ```
unsigned short q_rgba64_blue(void* self) {
    return QRgba64_Blue((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#alpha)
///
/// ``` QRgba64* self ```
unsigned short q_rgba64_alpha(void* self) {
    return QRgba64_Alpha((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#setRed)
///
/// ``` QRgba64* self, unsigned short _red ```
void q_rgba64_set_red(void* self, unsigned short _red) {
    QRgba64_SetRed((QRgba64*)self, _red);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#setGreen)
///
/// ``` QRgba64* self, unsigned short _green ```
void q_rgba64_set_green(void* self, unsigned short _green) {
    QRgba64_SetGreen((QRgba64*)self, _green);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#setBlue)
///
/// ``` QRgba64* self, unsigned short _blue ```
void q_rgba64_set_blue(void* self, unsigned short _blue) {
    QRgba64_SetBlue((QRgba64*)self, _blue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#setAlpha)
///
/// ``` QRgba64* self, unsigned short _alpha ```
void q_rgba64_set_alpha(void* self, unsigned short _alpha) {
    QRgba64_SetAlpha((QRgba64*)self, _alpha);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#red8)
///
/// ``` QRgba64* self ```
unsigned char q_rgba64_red8(void* self) {
    return QRgba64_Red8((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#green8)
///
/// ``` QRgba64* self ```
unsigned char q_rgba64_green8(void* self) {
    return QRgba64_Green8((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#blue8)
///
/// ``` QRgba64* self ```
unsigned char q_rgba64_blue8(void* self) {
    return QRgba64_Blue8((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#alpha8)
///
/// ``` QRgba64* self ```
unsigned char q_rgba64_alpha8(void* self) {
    return QRgba64_Alpha8((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#toArgb32)
///
/// ``` QRgba64* self ```
uint32_t q_rgba64_to_argb32(void* self) {
    return QRgba64_ToArgb32((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#toRgb16)
///
/// ``` QRgba64* self ```
unsigned short q_rgba64_to_rgb16(void* self) {
    return QRgba64_ToRgb16((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#premultiplied)
///
/// ``` QRgba64* self ```
QRgba64* q_rgba64_premultiplied(void* self) {
    return QRgba64_Premultiplied((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#unpremultiplied)
///
/// ``` QRgba64* self ```
QRgba64* q_rgba64_unpremultiplied(void* self) {
    return QRgba64_Unpremultiplied((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#operator unsigned long long)
///
/// ``` QRgba64* self ```
uint64_t q_rgba64_to_unsigned_long_long(void* self) {
    return QRgba64_ToUnsignedLongLong((QRgba64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrgba64.html#operator=)
///
/// ``` QRgba64* self, uint64_t _rgba ```
void q_rgba64_operator_assign(void* self, uint64_t _rgba) {
    QRgba64_OperatorAssign((QRgba64*)self, _rgba);
}

/// Delete this object from C++ memory.
///
/// ``` QRgba64* self ```
void q_rgba64_delete(void* self) {
    QRgba64_Delete((QRgba64*)(self));
}
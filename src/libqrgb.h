#pragma once
#ifndef LIBQRGB_H
#define LIBQRGB_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qRed)
///
/// @param rgb uint32_t
///
int32_t q_qrgb_h_q_red(uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qGreen)
///
/// @param rgb uint32_t
///
int32_t q_qrgb_h_q_green(uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qBlue)
///
/// @param rgb uint32_t
///
int32_t q_qrgb_h_q_blue(uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qAlpha)
///
/// @param rgb uint32_t
///
int32_t q_qrgb_h_q_alpha(uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qRgb)
///
/// @param r int
/// @param g int
/// @param b int
///
uint32_t q_qrgb_h_q_rgb(int r, int g, int b);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qRgba)
///
/// @param r int
/// @param g int
/// @param b int
/// @param a int
///
uint32_t q_qrgb_h_q_rgba(int r, int g, int b, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qGray)
///
/// @param r int
/// @param g int
/// @param b int
///
int32_t q_qrgb_h_q_gray(int r, int g, int b);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qGray)
///
/// @param rgb uint32_t
///
int32_t q_qrgb_h_q_gray2(uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qIsGray)
///
/// @param rgb uint32_t
///
bool q_qrgb_h_q_is_gray(uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qPremultiply)
///
/// @param x uint32_t
///
uint32_t q_qrgb_h_q_premultiply(uint32_t x);

/// [Upstream resources](https://doc.qt.io/qt-6/qrgb-h.html#qUnpremultiply)
///
/// @param p uint32_t
///
uint32_t q_qrgb_h_q_unpremultiply(uint32_t p);
#endif

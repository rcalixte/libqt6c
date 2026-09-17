#pragma once
#ifndef LIBQMATH_H
#define LIBQMATH_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qFastSin)
///
/// @param x double
///
double q_qmath_q_fast_sin(double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qFastCos)
///
/// @param x double
///
double q_qmath_q_fast_cos(double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qDegreesToRadians)
///
/// @param degrees float
///
float q_qmath_q_degrees_to_radians(float degrees);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qDegreesToRadians)
///
/// @param degrees double
///
double q_qmath_q_degrees_to_radians2(double degrees);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qRadiansToDegrees)
///
/// @param radians float
///
float q_qmath_q_radians_to_degrees(float radians);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qRadiansToDegrees)
///
/// @param radians double
///
double q_qmath_q_radians_to_degrees2(double radians);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
///
/// @param v uint32_t
///
uint32_t q_qmath_q_next_power_of_two(uint32_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
///
/// @param v uint64_t
///
uint64_t q_qmath_q_next_power_of_two2(uint64_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
///
/// @param v int32_t
///
uint32_t q_qmath_q_next_power_of_two3(int32_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
///
/// @param v int64_t
///
uint64_t q_qmath_q_next_power_of_two4(int64_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
///
/// @param v uintptr_t
///
uintptr_t q_qmath_q_next_power_of_two5(uintptr_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qmath.html#qNextPowerOfTwo)
///
/// @param v long
///
uintptr_t q_qmath_q_next_power_of_two6(long v);
#endif

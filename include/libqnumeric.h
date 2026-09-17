#pragma once
#ifndef LIBQNUMERIC_H
#define LIBQNUMERIC_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsInf)
///
/// @param d double
///
bool q_qnumeric_q_is_inf(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsNaN)
///
/// @param d double
///
bool q_qnumeric_q_is_na_n(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsFinite)
///
/// @param d double
///
bool q_qnumeric_q_is_finite(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFpClassify)
///
/// @param val double
///
int32_t q_qnumeric_q_fp_classify(double val);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsInf)
///
/// @param f float
///
bool q_qnumeric_q_is_inf2(float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsNaN)
///
/// @param f float
///
bool q_qnumeric_q_is_na_n2(float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsFinite)
///
/// @param f float
///
bool q_qnumeric_q_is_finite2(float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFpClassify)
///
/// @param val float
///
int32_t q_qnumeric_q_fp_classify2(float val);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qSNaN)
///
double q_qnumeric_q_s_na_n();

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qQNaN)
///
double q_qnumeric_q_q_na_n();

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qInf)
///
double q_qnumeric_q_inf();

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFloatDistance)
///
/// @param a float
/// @param b float
///
uint32_t q_qnumeric_q_float_distance(float a, float b);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFloatDistance)
///
/// @param a double
/// @param b double
///
uint64_t q_qnumeric_q_float_distance2(double a, double b);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qRound)
///
/// @param d double
///
int32_t q_qnumeric_q_round(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qRound)
///
/// @param f float
///
int32_t q_qnumeric_q_round2(float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qRound64)
///
/// @param d double
///
int64_t q_qnumeric_q_round64(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qRound64)
///
/// @param f float
///
int64_t q_qnumeric_q_round642(float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFuzzyCompare)
///
/// @param p1 double
/// @param p2 double
///
bool q_qnumeric_q_fuzzy_compare(double p1, double p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFuzzyCompare)
///
/// @param p1 float
/// @param p2 float
///
bool q_qnumeric_q_fuzzy_compare2(float p1, float p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFuzzyIsNull)
///
/// @param d double
///
bool q_qnumeric_q_fuzzy_is_null(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qFuzzyIsNull)
///
/// @param f float
///
bool q_qnumeric_q_fuzzy_is_null2(float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsNull)
///
/// @param d double
///
bool q_qnumeric_q_is_null(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIsNull)
///
/// @param f float
///
bool q_qnumeric_q_is_null2(float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIntCast)
///
/// @param f double
///
int32_t q_qnumeric_q_int_cast(double f);

/// [Upstream resources](https://doc.qt.io/qt-6/qnumeric.html#qIntCast)
///
/// @param f float
///
int32_t q_qnumeric_q_int_cast2(float f);
#endif

#pragma once
#ifndef LIBQALGORITHMS_H
#define LIBQALGORITHMS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
///
/// @param v uint32_t
///
uint32_t q_qalgorithms_q_population_count(uint32_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
///
/// @param v uint8_t
///
uint32_t q_qalgorithms_q_population_count2(uint8_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
///
/// @param v uint16_t
///
uint32_t q_qalgorithms_q_population_count3(uint16_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
///
/// @param v uint64_t
///
uint32_t q_qalgorithms_q_population_count4(uint64_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qPopulationCount)
///
/// @param v uintptr_t
///
uint32_t q_qalgorithms_q_population_count5(uintptr_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
///
/// @param v uint32_t
///
uint32_t q_qalgorithms_q_count_trailing_zero_bits(uint32_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
///
/// @param v uint8_t
///
uint32_t q_qalgorithms_q_count_trailing_zero_bits2(uint8_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
///
/// @param v uint16_t
///
uint32_t q_qalgorithms_q_count_trailing_zero_bits3(uint16_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
///
/// @param v uint64_t
///
uint32_t q_qalgorithms_q_count_trailing_zero_bits4(uint64_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountTrailingZeroBits)
///
/// @param v uintptr_t
///
uint32_t q_qalgorithms_q_count_trailing_zero_bits5(uintptr_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
///
/// @param v uint32_t
///
uint32_t q_qalgorithms_q_count_leading_zero_bits(uint32_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
///
/// @param v uint8_t
///
uint32_t q_qalgorithms_q_count_leading_zero_bits2(uint8_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
///
/// @param v uint16_t
///
uint32_t q_qalgorithms_q_count_leading_zero_bits3(uint16_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
///
/// @param v uint64_t
///
uint32_t q_qalgorithms_q_count_leading_zero_bits4(uint64_t v);

/// [Upstream resources](https://doc.qt.io/qt-6/qalgorithms.html#qCountLeadingZeroBits)
///
/// @param v uintptr_t
///
uint32_t q_qalgorithms_q_count_leading_zero_bits5(uintptr_t v);
#endif

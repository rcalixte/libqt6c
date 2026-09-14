#pragma once
#ifndef LIBQENDIAN_H
#define LIBQENDIAN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html#qbswap_helper)
///
/// @param source uint64_t
///
uint64_t q_qendian_h_qbswap_helper(uint64_t source);

/// [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html#qbswap_helper)
///
/// @param source uint32_t
///
uint32_t q_qendian_h_qbswap_helper2(uint32_t source);

/// [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html#qbswap_helper)
///
/// @param source uint16_t
///
uint16_t q_qendian_h_qbswap_helper3(uint16_t source);

/// [Upstream resources](https://doc.qt.io/qt-6/qendian-h.html#qbswap_helper)
///
/// @param source uint8_t
///
uint8_t q_qendian_h_qbswap_helper4(uint8_t source);
#endif

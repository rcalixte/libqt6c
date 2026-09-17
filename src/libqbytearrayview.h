#pragma once
#ifndef LIBQBYTEARRAYVIEW_H
#define LIBQBYTEARRAYVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#maxSize)
///
intptr_t q_bytearrayview_max_size2();

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#qChecksum)
///
/// @param s const char*
/// @param len intptr_t
/// @param standard enum Qt__ChecksumType
///
uint16_t q_qbytearrayview_q_checksum(const char* s, intptr_t _len, int32_t standard);
#endif

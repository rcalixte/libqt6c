#pragma once
#ifndef SRC_QT6C_LIBQ20TYPE_TRAITS_H
#define SRC_QT6C_LIBQ20TYPE_TRAITS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/q20.html

/// [Qt documentation](https://doc.qt.io/qt-6/q20.html#is_constant_evaluated)
///
bool q_q20_is_constant_evaluated();
#endif

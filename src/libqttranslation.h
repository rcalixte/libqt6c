#pragma once
#ifndef LIBQTTRANSLATION_H
#define LIBQTTRANSLATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qttranslation.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qttranslation.html#qtTrId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param id const char*
/// @param n int
///
const char* q_qttranslation_qt_tr_id(const char* id, int n);
#endif

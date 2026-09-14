#pragma once
#ifndef LIBQTENVIRONMENTVARIABLES_H
#define LIBQTENVIRONMENTVARIABLES_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables-h.html#qgetenv)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param varName const char*
///
char* q_qtenvironmentvariables_h_qgetenv(const char* varName);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables-h.html#qputenv)
///
/// @param varName const char*
/// @param value char*
///
bool q_qtenvironmentvariables_h_qputenv(const char* varName, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables-h.html#qunsetenv)
///
/// @param varName const char*
///
bool q_qtenvironmentvariables_h_qunsetenv(const char* varName);
#endif

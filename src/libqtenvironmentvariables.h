#pragma once
#ifndef LIBQTENVIRONMENTVARIABLES_H
#define LIBQTENVIRONMENTVARIABLES_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qgetenv)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param varName const char*
///
char* q_qtenvironmentvariables_qgetenv(const char* varName);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariable)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param varName const char*
///
const char* q_qtenvironmentvariables_q_environment_variable(const char* varName);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariable)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param varName const char*
/// @param defaultValue const char*
///
const char* q_qtenvironmentvariables_q_environment_variable2(const char* varName, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qputenv)
///
/// @param varName const char*
/// @param value char*
///
bool q_qtenvironmentvariables_qputenv(const char* varName, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qunsetenv)
///
/// @param varName const char*
///
bool q_qtenvironmentvariables_qunsetenv(const char* varName);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariableIsEmpty)
///
/// @param varName const char*
///
bool q_qtenvironmentvariables_q_environment_variable_is_empty(const char* varName);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariableIsSet)
///
/// @param varName const char*
///
bool q_qtenvironmentvariables_q_environment_variable_is_set(const char* varName);

/// [Upstream resources](https://doc.qt.io/qt-6/qtenvironmentvariables.html#qEnvironmentVariableIntValue)
///
/// @param varName const char*
/// @param ok bool*
///
int32_t q_qtenvironmentvariables_q_environment_variable_int_value(const char* varName, bool* ok);
#endif

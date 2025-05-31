#pragma once
#ifndef SRCQT6C_LIBQCOMMANDLINEOPTION_H
#define SRCQT6C_LIBQCOMMANDLINEOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

/// https://doc.qt.io/qt-6/qcommandlineoption.html

/// q_commandlineoption_new constructs a new QCommandLineOption object.
///
/// ``` const char* name ```
QCommandLineOption* q_commandlineoption_new(const char* name);

/// q_commandlineoption_new2 constructs a new QCommandLineOption object.
///
/// ``` const char* names[] ```
QCommandLineOption* q_commandlineoption_new2(const char* names[]);

/// q_commandlineoption_new3 constructs a new QCommandLineOption object.
///
/// ``` const char* name, const char* description ```
QCommandLineOption* q_commandlineoption_new3(const char* name, const char* description);

/// q_commandlineoption_new4 constructs a new QCommandLineOption object.
///
/// ``` const char* names[], const char* description ```
QCommandLineOption* q_commandlineoption_new4(const char* names[], const char* description);

/// q_commandlineoption_new5 constructs a new QCommandLineOption object.
///
/// ``` QCommandLineOption* other ```
QCommandLineOption* q_commandlineoption_new5(void* other);

/// q_commandlineoption_new6 constructs a new QCommandLineOption object.
///
/// ``` const char* name, const char* description, const char* valueName ```
QCommandLineOption* q_commandlineoption_new6(const char* name, const char* description, const char* valueName);

/// q_commandlineoption_new7 constructs a new QCommandLineOption object.
///
/// ``` const char* name, const char* description, const char* valueName, const char* defaultValue ```
QCommandLineOption* q_commandlineoption_new7(const char* name, const char* description, const char* valueName, const char* defaultValue);

/// q_commandlineoption_new8 constructs a new QCommandLineOption object.
///
/// ``` const char* names[], const char* description, const char* valueName ```
QCommandLineOption* q_commandlineoption_new8(const char* names[], const char* description, const char* valueName);

/// q_commandlineoption_new9 constructs a new QCommandLineOption object.
///
/// ``` const char* names[], const char* description, const char* valueName, const char* defaultValue ```
QCommandLineOption* q_commandlineoption_new9(const char* names[], const char* description, const char* valueName, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#operator=)
///
/// ``` QCommandLineOption* self, QCommandLineOption* other ```
void q_commandlineoption_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#swap)
///
/// ``` QCommandLineOption* self, QCommandLineOption* other ```
void q_commandlineoption_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#names)
///
/// ``` QCommandLineOption* self ```
const char** q_commandlineoption_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setValueName)
///
/// ``` QCommandLineOption* self, const char* name ```
void q_commandlineoption_set_value_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#valueName)
///
/// ``` QCommandLineOption* self ```
const char* q_commandlineoption_value_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDescription)
///
/// ``` QCommandLineOption* self, const char* description ```
void q_commandlineoption_set_description(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#description)
///
/// ``` QCommandLineOption* self ```
const char* q_commandlineoption_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValue)
///
/// ``` QCommandLineOption* self, const char* defaultValue ```
void q_commandlineoption_set_default_value(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValues)
///
/// ``` QCommandLineOption* self, const char* defaultValues[] ```
void q_commandlineoption_set_default_values(void* self, const char* defaultValues[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#defaultValues)
///
/// ``` QCommandLineOption* self ```
const char** q_commandlineoption_default_values(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#flags)
///
/// ``` QCommandLineOption* self ```
int64_t q_commandlineoption_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setFlags)
///
/// ``` QCommandLineOption* self, int aflags ```
void q_commandlineoption_set_flags(void* self, int64_t aflags);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#dtor.QCommandLineOption)
///
/// Delete this object from C++ memory.
///
/// ``` QCommandLineOption* self ```
void q_commandlineoption_delete(void* self);

/// https://doc.qt.io/qt-6/qcommandlineoption.html#types

typedef enum {
    QCOMMANDLINEOPTION_FLAG_HIDDENFROMHELP = 1,
    QCOMMANDLINEOPTION_FLAG_SHORTOPTIONSTYLE = 2
} QCommandLineOption__Flag;

#endif

#pragma once
#ifndef SRCQT6C_LIBQCOMMANDLINEOPTION_H
#define SRCQT6C_LIBQCOMMANDLINEOPTION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcommandlineoption.html

/// q_commandlineoption_new constructs a new QCommandLineOption object.
///
/// @param name const char*
QCommandLineOption* q_commandlineoption_new(const char* name);

/// q_commandlineoption_new2 constructs a new QCommandLineOption object.
///
/// @param names const char**
QCommandLineOption* q_commandlineoption_new2(const char* names[]);

/// q_commandlineoption_new3 constructs a new QCommandLineOption object.
///
/// @param name const char*
/// @param description const char*
QCommandLineOption* q_commandlineoption_new3(const char* name, const char* description);

/// q_commandlineoption_new4 constructs a new QCommandLineOption object.
///
/// @param names const char**
/// @param description const char*
QCommandLineOption* q_commandlineoption_new4(const char* names[], const char* description);

/// q_commandlineoption_new5 constructs a new QCommandLineOption object.
///
/// @param other QCommandLineOption*
QCommandLineOption* q_commandlineoption_new5(void* other);

/// q_commandlineoption_new6 constructs a new QCommandLineOption object.
///
/// @param name const char*
/// @param description const char*
/// @param valueName const char*
QCommandLineOption* q_commandlineoption_new6(const char* name, const char* description, const char* valueName);

/// q_commandlineoption_new7 constructs a new QCommandLineOption object.
///
/// @param name const char*
/// @param description const char*
/// @param valueName const char*
/// @param defaultValue const char*
QCommandLineOption* q_commandlineoption_new7(const char* name, const char* description, const char* valueName, const char* defaultValue);

/// q_commandlineoption_new8 constructs a new QCommandLineOption object.
///
/// @param names const char**
/// @param description const char*
/// @param valueName const char*
QCommandLineOption* q_commandlineoption_new8(const char* names[], const char* description, const char* valueName);

/// q_commandlineoption_new9 constructs a new QCommandLineOption object.
///
/// @param names const char**
/// @param description const char*
/// @param valueName const char*
/// @param defaultValue const char*
QCommandLineOption* q_commandlineoption_new9(const char* names[], const char* description, const char* valueName, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#operator-eq)
///
/// @param self QCommandLineOption*
/// @param other QCommandLineOption*
void q_commandlineoption_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#swap)
///
/// @param self QCommandLineOption*
/// @param other QCommandLineOption*
void q_commandlineoption_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#names)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineOption*
const char** q_commandlineoption_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setValueName)
///
/// @param self QCommandLineOption*
/// @param name const char*
void q_commandlineoption_set_value_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#valueName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineOption*
const char* q_commandlineoption_value_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDescription)
///
/// @param self QCommandLineOption*
/// @param description const char*
void q_commandlineoption_set_description(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineOption*
const char* q_commandlineoption_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValue)
///
/// @param self QCommandLineOption*
/// @param defaultValue const char*
void q_commandlineoption_set_default_value(void* self, const char* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValues)
///
/// @param self QCommandLineOption*
/// @param defaultValues const char**
void q_commandlineoption_set_default_values(void* self, const char* defaultValues[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#defaultValues)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineOption*
const char** q_commandlineoption_default_values(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#flags)
///
/// @param self QCommandLineOption*
///
/// @return flag of enum QCommandLineOption__Flag
int64_t q_commandlineoption_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setFlags)
///
/// @param self QCommandLineOption*
/// @param aflags flag of enum QCommandLineOption__Flag
void q_commandlineoption_set_flags(void* self, int64_t aflags);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#dtor.QCommandLineOption)
///
/// Delete this object from C++ memory.
///
/// @param self QCommandLineOption*
void q_commandlineoption_delete(void* self);

/// https://doc.qt.io/qt-6/qcommandlineoption.html#types

typedef enum {
    QCOMMANDLINEOPTION_FLAG_HIDDENFROMHELP = 1,
    QCOMMANDLINEOPTION_FLAG_SHORTOPTIONSTYLE = 2
} QCommandLineOption__Flag;

#endif

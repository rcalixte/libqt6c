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

QCommandLineOption* q_commandlineoption_new(const char* name);
QCommandLineOption* q_commandlineoption_new2(const char* names[]);
QCommandLineOption* q_commandlineoption_new3(const char* name, const char* description);
QCommandLineOption* q_commandlineoption_new4(const char* names[], const char* description);
QCommandLineOption* q_commandlineoption_new5(void* other);
QCommandLineOption* q_commandlineoption_new6(const char* name, const char* description, const char* valueName);
QCommandLineOption* q_commandlineoption_new7(const char* name, const char* description, const char* valueName, const char* defaultValue);
QCommandLineOption* q_commandlineoption_new8(const char* names[], const char* description, const char* valueName);
QCommandLineOption* q_commandlineoption_new9(const char* names[], const char* description, const char* valueName, const char* defaultValue);
void q_commandlineoption_operator_assign(void* self, void* other);
void q_commandlineoption_swap(void* self, void* other);
const char** q_commandlineoption_names(void* self);
void q_commandlineoption_set_value_name(void* self, const char* name);
const char* q_commandlineoption_value_name(void* self);
void q_commandlineoption_set_description(void* self, const char* description);
const char* q_commandlineoption_description(void* self);
void q_commandlineoption_set_default_value(void* self, const char* defaultValue);
void q_commandlineoption_set_default_values(void* self, const char* defaultValues[]);
const char** q_commandlineoption_default_values(void* self);
int64_t q_commandlineoption_flags(void* self);
void q_commandlineoption_set_flags(void* self, int64_t aflags);
void q_commandlineoption_delete(void* self);

/// https://doc.qt.io/qt-6/qcommandlineoption.html#types

typedef enum {
    QCOMMANDLINEOPTION_FLAG_HIDDENFROMHELP = 1,
    QCOMMANDLINEOPTION_FLAG_SHORTOPTIONSTYLE = 2
} QCommandLineOption__Flag;

#endif

#pragma once
#ifndef SRCQT6C_LIBQCOMMANDLINEPARSER_H
#define SRCQT6C_LIBQCOMMANDLINEPARSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcommandlineoption.h"
#include "libqcoreapplication.h"
#include <string.h>

QCommandLineParser* q_commandlineparser_new();
const char* q_commandlineparser_tr(const char* sourceText);
void q_commandlineparser_set_single_dash_word_option_mode(void* self, int64_t parsingMode);
void q_commandlineparser_set_options_after_positional_arguments_mode(void* self, int64_t mode);
bool q_commandlineparser_add_option(void* self, void* commandLineOption);
bool q_commandlineparser_add_options(void* self, void* options[]);
QCommandLineOption* q_commandlineparser_add_version_option(void* self);
QCommandLineOption* q_commandlineparser_add_help_option(void* self);
void q_commandlineparser_set_application_description(void* self, const char* description);
const char* q_commandlineparser_application_description(void* self);
void q_commandlineparser_add_positional_argument(void* self, const char* name, const char* description);
void q_commandlineparser_clear_positional_arguments(void* self);
void q_commandlineparser_process(void* self, const char* arguments[]);
void q_commandlineparser_process_with_app(void* self, void* app);
bool q_commandlineparser_parse(void* self, const char* arguments[]);
const char* q_commandlineparser_error_text(void* self);
bool q_commandlineparser_is_set(void* self, const char* name);
const char* q_commandlineparser_value(void* self, const char* name);
const char** q_commandlineparser_values(void* self, const char* name);
bool q_commandlineparser_is_set_with_option(void* self, void* option);
const char* q_commandlineparser_value_with_option(void* self, void* option);
const char** q_commandlineparser_values_with_option(void* self, void* option);
const char** q_commandlineparser_positional_arguments(void* self);
const char** q_commandlineparser_option_names(void* self);
const char** q_commandlineparser_unknown_option_names(void* self);
void q_commandlineparser_show_version(void* self);
void q_commandlineparser_show_help(void* self);
const char* q_commandlineparser_help_text(void* self);
const char* q_commandlineparser_tr2(const char* sourceText, const char* disambiguation);
const char* q_commandlineparser_tr3(const char* sourceText, const char* disambiguation, int n);
void q_commandlineparser_add_positional_argument3(void* self, const char* name, const char* description, const char* syntax);
void q_commandlineparser_show_help1(void* self, int exitCode);
void q_commandlineparser_delete(void* self);

/// https://doc.qt.io/qt-6/qcommandlineparser.html#types

typedef enum {
    QCOMMANDLINEPARSER_SINGLEDASHWORDOPTIONMODE_PARSEASCOMPACTEDSHORTOPTIONS = 0,
    QCOMMANDLINEPARSER_SINGLEDASHWORDOPTIONMODE_PARSEASLONGOPTIONS = 1
} QCommandLineParser__SingleDashWordOptionMode;

typedef enum {
    QCOMMANDLINEPARSER_OPTIONSAFTERPOSITIONALARGUMENTSMODE_PARSEASOPTIONS = 0,
    QCOMMANDLINEPARSER_OPTIONSAFTERPOSITIONALARGUMENTSMODE_PARSEASPOSITIONALARGUMENTS = 1
} QCommandLineParser__OptionsAfterPositionalArgumentsMode;

#endif

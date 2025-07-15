#pragma once
#ifndef SRCQT6C_LIBQCOMMANDLINEPARSER_H
#define SRCQT6C_LIBQCOMMANDLINEPARSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcommandlineparser.html

/// q_commandlineparser_new constructs a new QCommandLineParser object.
///
///
QCommandLineParser* q_commandlineparser_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_commandlineparser_tr(const char* sourceText);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setSingleDashWordOptionMode)
///
/// ``` QCommandLineParser* self, enum QCommandLineParser__SingleDashWordOptionMode parsingMode ```
void q_commandlineparser_set_single_dash_word_option_mode(void* self, int64_t parsingMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setOptionsAfterPositionalArgumentsMode)
///
/// ``` QCommandLineParser* self, enum QCommandLineParser__OptionsAfterPositionalArgumentsMode mode ```
void q_commandlineparser_set_options_after_positional_arguments_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addOption)
///
/// ``` QCommandLineParser* self, QCommandLineOption* commandLineOption ```
bool q_commandlineparser_add_option(void* self, void* commandLineOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addOptions)
///
/// ``` QCommandLineParser* self, libqt_list /* of QCommandLineOption* */ options ```
bool q_commandlineparser_add_options(void* self, libqt_list options);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addVersionOption)
///
/// ``` QCommandLineParser* self ```
QCommandLineOption* q_commandlineparser_add_version_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addHelpOption)
///
/// ``` QCommandLineParser* self ```
QCommandLineOption* q_commandlineparser_add_help_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setApplicationDescription)
///
/// ``` QCommandLineParser* self, const char* description ```
void q_commandlineparser_set_application_description(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#applicationDescription)
///
/// ``` QCommandLineParser* self ```
const char* q_commandlineparser_application_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
///
/// ``` QCommandLineParser* self, const char* name, const char* description ```
void q_commandlineparser_add_positional_argument(void* self, const char* name, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#clearPositionalArguments)
///
/// ``` QCommandLineParser* self ```
void q_commandlineparser_clear_positional_arguments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
///
/// ``` QCommandLineParser* self, const char* arguments[] ```
void q_commandlineparser_process(void* self, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
///
/// ``` QCommandLineParser* self, QCoreApplication* app ```
void q_commandlineparser_process2(void* self, void* app);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#parse)
///
/// ``` QCommandLineParser* self, const char* arguments[] ```
bool q_commandlineparser_parse(void* self, const char* arguments[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#errorText)
///
/// ``` QCommandLineParser* self ```
const char* q_commandlineparser_error_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
///
/// ``` QCommandLineParser* self, const char* name ```
bool q_commandlineparser_is_set(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
///
/// ``` QCommandLineParser* self, const char* name ```
const char* q_commandlineparser_value(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
///
/// ``` QCommandLineParser* self, const char* name ```
const char** q_commandlineparser_values(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
///
/// ``` QCommandLineParser* self, QCommandLineOption* option ```
bool q_commandlineparser_is_set2(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
///
/// ``` QCommandLineParser* self, QCommandLineOption* option ```
const char* q_commandlineparser_value2(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
///
/// ``` QCommandLineParser* self, QCommandLineOption* option ```
const char** q_commandlineparser_values2(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#positionalArguments)
///
/// ``` QCommandLineParser* self ```
const char** q_commandlineparser_positional_arguments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#optionNames)
///
/// ``` QCommandLineParser* self ```
const char** q_commandlineparser_option_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#unknownOptionNames)
///
/// ``` QCommandLineParser* self ```
const char** q_commandlineparser_unknown_option_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showVersion)
///
/// ``` QCommandLineParser* self ```
void q_commandlineparser_show_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
///
/// ``` QCommandLineParser* self ```
void q_commandlineparser_show_help(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#helpText)
///
/// ``` QCommandLineParser* self ```
const char* q_commandlineparser_help_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_commandlineparser_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_commandlineparser_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
///
/// ``` QCommandLineParser* self, const char* name, const char* description, const char* syntax ```
void q_commandlineparser_add_positional_argument3(void* self, const char* name, const char* description, const char* syntax);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
///
/// ``` QCommandLineParser* self, int exitCode ```
void q_commandlineparser_show_help1(void* self, int exitCode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#dtor.QCommandLineParser)
///
/// Delete this object from C++ memory.
///
/// ``` QCommandLineParser* self ```
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

#pragma once
#ifndef SRC_QT6C_LIBQCOMMANDLINEPARSER_H
#define SRC_QT6C_LIBQCOMMANDLINEPARSER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcommandlineparser.html

/// q_commandlineparser_new constructs a new QCommandLineParser object.
///
QCommandLineParser* q_commandlineparser_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
const char* q_commandlineparser_tr(const char* sourceText);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setSingleDashWordOptionMode)
///
/// @param self QCommandLineParser*
/// @param parsingMode enum QCommandLineParser__SingleDashWordOptionMode
void q_commandlineparser_set_single_dash_word_option_mode(void* self, int32_t parsingMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setOptionsAfterPositionalArgumentsMode)
///
/// @param self QCommandLineParser*
/// @param mode enum QCommandLineParser__OptionsAfterPositionalArgumentsMode
void q_commandlineparser_set_options_after_positional_arguments_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addOption)
///
/// @param self QCommandLineParser*
/// @param commandLineOption QCommandLineOption*
bool q_commandlineparser_add_option(void* self, void* commandLineOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addOptions)
///
/// @param self QCommandLineParser*
/// @param options libqt_list /* of QCommandLineOption* */
bool q_commandlineparser_add_options(void* self, libqt_list options);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addVersionOption)
///
/// @param self QCommandLineParser*
QCommandLineOption* q_commandlineparser_add_version_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addHelpOption)
///
/// @param self QCommandLineParser*
QCommandLineOption* q_commandlineparser_add_help_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setApplicationDescription)
///
/// @param self QCommandLineParser*
/// @param description const char*
void q_commandlineparser_set_application_description(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#applicationDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
const char* q_commandlineparser_application_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
///
/// @param self QCommandLineParser*
/// @param name const char*
/// @param description const char*
void q_commandlineparser_add_positional_argument(void* self, const char* name, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#clearPositionalArguments)
///
/// @param self QCommandLineParser*
void q_commandlineparser_clear_positional_arguments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
///
/// @param self QCommandLineParser*
/// @param arguments const char**
void q_commandlineparser_process(void* self, const char* arguments[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
///
/// @param self QCommandLineParser*
/// @param app QCoreApplication*
void q_commandlineparser_process2(void* self, void* app);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#parse)
///
/// @param self QCommandLineParser*
/// @param arguments const char**
bool q_commandlineparser_parse(void* self, const char* arguments[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#errorText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
const char* q_commandlineparser_error_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
///
/// @param self QCommandLineParser*
/// @param name const char*
bool q_commandlineparser_is_set(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
/// @param name const char*
const char* q_commandlineparser_value(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
/// @param name const char*
const char** q_commandlineparser_values(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
///
/// @param self QCommandLineParser*
/// @param option QCommandLineOption*
bool q_commandlineparser_is_set2(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
/// @param option QCommandLineOption*
const char* q_commandlineparser_value2(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
/// @param option QCommandLineOption*
const char** q_commandlineparser_values2(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#positionalArguments)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
const char** q_commandlineparser_positional_arguments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#optionNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
const char** q_commandlineparser_option_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#unknownOptionNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
const char** q_commandlineparser_unknown_option_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showVersion)
///
/// @param self QCommandLineParser*
void q_commandlineparser_show_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
///
/// @param self QCommandLineParser*
void q_commandlineparser_show_help(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#helpText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCommandLineParser*
const char* q_commandlineparser_help_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
const char* q_commandlineparser_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
const char* q_commandlineparser_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
///
/// @param self QCommandLineParser*
/// @param name const char*
/// @param description const char*
/// @param syntax const char*
void q_commandlineparser_add_positional_argument3(void* self, const char* name, const char* description, const char* syntax);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
///
/// @param self QCommandLineParser*
/// @param exitCode int
void q_commandlineparser_show_help1(void* self, int exitCode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#dtor.QCommandLineParser)
///
/// Delete this object from C++ memory.
///
/// @param self QCommandLineParser*
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

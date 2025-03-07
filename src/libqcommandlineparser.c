#include "libqcommandlineoption.hpp"
#include "libqcoreapplication.hpp"
#include <string.h>
#include "libqcommandlineparser.hpp"
#include "libqcommandlineparser.h"

/// https://doc.qt.io/qt-6/qcommandlineparser.html

/// q_commandlineparser_new constructs a new QCommandLineParser object.
///
///
QCommandLineParser* q_commandlineparser_new() {
    return QCommandLineParser_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_commandlineparser_tr(const char* sourceText) {
    libqt_string _str = QCommandLineParser_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setSingleDashWordOptionMode)
///
/// ``` QCommandLineParser* self, enum QCommandLineParser__SingleDashWordOptionMode parsingMode ```
void q_commandlineparser_set_single_dash_word_option_mode(void* self, int64_t parsingMode) {
    QCommandLineParser_SetSingleDashWordOptionMode((QCommandLineParser*)self, parsingMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setOptionsAfterPositionalArgumentsMode)
///
/// ``` QCommandLineParser* self, enum QCommandLineParser__OptionsAfterPositionalArgumentsMode mode ```
void q_commandlineparser_set_options_after_positional_arguments_mode(void* self, int64_t mode) {
    QCommandLineParser_SetOptionsAfterPositionalArgumentsMode((QCommandLineParser*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addOption)
///
/// ``` QCommandLineParser* self, QCommandLineOption* commandLineOption ```
bool q_commandlineparser_add_option(void* self, void* commandLineOption) {
    return QCommandLineParser_AddOption((QCommandLineParser*)self, (QCommandLineOption*)commandLineOption);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addOptions)
///
/// ``` QCommandLineParser* self, QCommandLineOption* options[] ```
bool q_commandlineparser_add_options(void* self, void* options[]) {
    QCommandLineOption** options_arr = (QCommandLineOption**)options;
    size_t options_len = 0;
    while (options_arr[options_len] != NULL) {
        options_len++;
    }
    libqt_list options_list = {
        .len = options_len,
        .data = {(QCommandLineOption*)options},
    };
    return QCommandLineParser_AddOptions((QCommandLineParser*)self, options_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addVersionOption)
///
/// ``` QCommandLineParser* self ```
QCommandLineOption* q_commandlineparser_add_version_option(void* self) {
    return QCommandLineParser_AddVersionOption((QCommandLineParser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addHelpOption)
///
/// ``` QCommandLineParser* self ```
QCommandLineOption* q_commandlineparser_add_help_option(void* self) {
    return QCommandLineParser_AddHelpOption((QCommandLineParser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#setApplicationDescription)
///
/// ``` QCommandLineParser* self, const char* description ```
void q_commandlineparser_set_application_description(void* self, const char* description) {
    QCommandLineParser_SetApplicationDescription((QCommandLineParser*)self, qstring(description));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#applicationDescription)
///
/// ``` QCommandLineParser* self ```
const char* q_commandlineparser_application_description(void* self) {
    libqt_string _str = QCommandLineParser_ApplicationDescription((QCommandLineParser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
///
/// ``` QCommandLineParser* self, const char* name, const char* description ```
void q_commandlineparser_add_positional_argument(void* self, const char* name, const char* description) {
    QCommandLineParser_AddPositionalArgument((QCommandLineParser*)self, qstring(name), qstring(description));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#clearPositionalArguments)
///
/// ``` QCommandLineParser* self ```
void q_commandlineparser_clear_positional_arguments(void* self) {
    QCommandLineParser_ClearPositionalArguments((QCommandLineParser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
///
/// ``` QCommandLineParser* self, const char* arguments[] ```
void q_commandlineparser_process(void* self, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    QCommandLineParser_Process((QCommandLineParser*)self, arguments_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
///
/// ``` QCommandLineParser* self, QCoreApplication* app ```
void q_commandlineparser_process_with_app(void* self, void* app) {
    QCommandLineParser_ProcessWithApp((QCommandLineParser*)self, (QCoreApplication*)app);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#parse)
///
/// ``` QCommandLineParser* self, const char* arguments[] ```
bool q_commandlineparser_parse(void* self, const char* arguments[]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = malloc(arguments_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < arguments_len; ++_i) {
        arguments_qstr[_i] = qstring(arguments[_i]);
    }
    libqt_list arguments_list = qstrlist(arguments_qstr, arguments_len);
    return QCommandLineParser_Parse((QCommandLineParser*)self, arguments_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#errorText)
///
/// ``` QCommandLineParser* self ```
const char* q_commandlineparser_error_text(void* self) {
    libqt_string _str = QCommandLineParser_ErrorText((QCommandLineParser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
///
/// ``` QCommandLineParser* self, const char* name ```
bool q_commandlineparser_is_set(void* self, const char* name) {
    return QCommandLineParser_IsSet((QCommandLineParser*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
///
/// ``` QCommandLineParser* self, const char* name ```
const char* q_commandlineparser_value(void* self, const char* name) {
    libqt_string _str = QCommandLineParser_Value((QCommandLineParser*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
///
/// ``` QCommandLineParser* self, const char* name ```
const char** q_commandlineparser_values(void* self, const char* name) {
    libqt_list _arr = QCommandLineParser_Values((QCommandLineParser*)self, qstring(name));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
///
/// ``` QCommandLineParser* self, QCommandLineOption* option ```
bool q_commandlineparser_is_set_with_option(void* self, void* option) {
    return QCommandLineParser_IsSetWithOption((QCommandLineParser*)self, (QCommandLineOption*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
///
/// ``` QCommandLineParser* self, QCommandLineOption* option ```
const char* q_commandlineparser_value_with_option(void* self, void* option) {
    libqt_string _str = QCommandLineParser_ValueWithOption((QCommandLineParser*)self, (QCommandLineOption*)option);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
///
/// ``` QCommandLineParser* self, QCommandLineOption* option ```
const char** q_commandlineparser_values_with_option(void* self, void* option) {
    libqt_list _arr = QCommandLineParser_ValuesWithOption((QCommandLineParser*)self, (QCommandLineOption*)option);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#positionalArguments)
///
/// ``` QCommandLineParser* self ```
const char** q_commandlineparser_positional_arguments(void* self) {
    libqt_list _arr = QCommandLineParser_PositionalArguments((QCommandLineParser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#optionNames)
///
/// ``` QCommandLineParser* self ```
const char** q_commandlineparser_option_names(void* self) {
    libqt_list _arr = QCommandLineParser_OptionNames((QCommandLineParser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#unknownOptionNames)
///
/// ``` QCommandLineParser* self ```
const char** q_commandlineparser_unknown_option_names(void* self) {
    libqt_list _arr = QCommandLineParser_UnknownOptionNames((QCommandLineParser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showVersion)
///
/// ``` QCommandLineParser* self ```
void q_commandlineparser_show_version(void* self) {
    QCommandLineParser_ShowVersion((QCommandLineParser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
///
/// ``` QCommandLineParser* self ```
void q_commandlineparser_show_help(void* self) {
    QCommandLineParser_ShowHelp((QCommandLineParser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#helpText)
///
/// ``` QCommandLineParser* self ```
const char* q_commandlineparser_help_text(void* self) {
    libqt_string _str = QCommandLineParser_HelpText((QCommandLineParser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_commandlineparser_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QCommandLineParser_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_commandlineparser_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QCommandLineParser_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
///
/// ``` QCommandLineParser* self, const char* name, const char* description, const char* syntax ```
void q_commandlineparser_add_positional_argument3(void* self, const char* name, const char* description, const char* syntax) {
    QCommandLineParser_AddPositionalArgument3((QCommandLineParser*)self, qstring(name), qstring(description), qstring(syntax));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
///
/// ``` QCommandLineParser* self, int exitCode ```
void q_commandlineparser_show_help1(void* self, int exitCode) {
    QCommandLineParser_ShowHelp1((QCommandLineParser*)self, exitCode);
}

/// Delete this object from C++ memory.
///
/// ``` QCommandLineParser* self ```
void q_commandlineparser_delete(void* self) {
    QCommandLineParser_Delete((QCommandLineParser*)(self));
}
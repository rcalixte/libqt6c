#include "libqcommandlineoption.hpp"
#include "libqcoreapplication.hpp"
#include "libqcommandlineparser.hpp"
#include "libqcommandlineparser.h"

QCommandLineParser* q_commandlineparser_new() {
    return QCommandLineParser_new();
}

const char* q_commandlineparser_tr(const char* sourceText) {
    libqt_string _str = QCommandLineParser_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlineparser_set_single_dash_word_option_mode(void* self, int32_t parsingMode) {
    QCommandLineParser_SetSingleDashWordOptionMode((QCommandLineParser*)self, parsingMode);
}

void q_commandlineparser_set_options_after_positional_arguments_mode(void* self, int32_t mode) {
    QCommandLineParser_SetOptionsAfterPositionalArgumentsMode((QCommandLineParser*)self, mode);
}

bool q_commandlineparser_add_option(void* self, void* commandLineOption) {
    return QCommandLineParser_AddOption((QCommandLineParser*)self, (QCommandLineOption*)commandLineOption);
}

bool q_commandlineparser_add_options(void* self, libqt_list options) {
    return QCommandLineParser_AddOptions((QCommandLineParser*)self, options);
}

QCommandLineOption* q_commandlineparser_add_version_option(void* self) {
    return QCommandLineParser_AddVersionOption((QCommandLineParser*)self);
}

QCommandLineOption* q_commandlineparser_add_help_option(void* self) {
    return QCommandLineParser_AddHelpOption((QCommandLineParser*)self);
}

void q_commandlineparser_set_application_description(void* self, const char* description) {
    QCommandLineParser_SetApplicationDescription((QCommandLineParser*)self, qstring(description));
}

const char* q_commandlineparser_application_description(void* self) {
    libqt_string _str = QCommandLineParser_ApplicationDescription((QCommandLineParser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlineparser_add_positional_argument(void* self, const char* name, const char* description) {
    QCommandLineParser_AddPositionalArgument((QCommandLineParser*)self, qstring(name), qstring(description));
}

void q_commandlineparser_clear_positional_arguments(void* self) {
    QCommandLineParser_ClearPositionalArguments((QCommandLineParser*)self);
}

void q_commandlineparser_process(void* self, const char* arguments[static 1]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = (libqt_string*)malloc(arguments_len * sizeof(libqt_string));
    if (arguments_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_commandlineparser_process");
        abort();
    }
    for (size_t i = 0; i < arguments_len; ++i) {
        arguments_qstr[i] = qstring(arguments[i]);
    }
    libqt_list arguments_list = qlist(arguments_qstr, arguments_len);
    QCommandLineParser_Process((QCommandLineParser*)self, arguments_list);
    free(arguments_qstr);
}

void q_commandlineparser_process2(void* self, void* app) {
    QCommandLineParser_Process2((QCommandLineParser*)self, (QCoreApplication*)app);
}

bool q_commandlineparser_parse(void* self, const char* arguments[static 1]) {
    size_t arguments_len = libqt_strv_length(arguments);
    libqt_string* arguments_qstr = (libqt_string*)malloc(arguments_len * sizeof(libqt_string));
    if (arguments_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_commandlineparser_parse");
        abort();
    }
    for (size_t i = 0; i < arguments_len; ++i) {
        arguments_qstr[i] = qstring(arguments[i]);
    }
    libqt_list arguments_list = qlist(arguments_qstr, arguments_len);
    bool _out = QCommandLineParser_Parse((QCommandLineParser*)self, arguments_list);
    free(arguments_qstr);
    return _out;
}

const char* q_commandlineparser_error_text(void* self) {
    libqt_string _str = QCommandLineParser_ErrorText((QCommandLineParser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_commandlineparser_is_set(void* self, const char* name) {
    return QCommandLineParser_IsSet((QCommandLineParser*)self, qstring(name));
}

const char* q_commandlineparser_value(void* self, const char* name) {
    libqt_string _str = QCommandLineParser_Value((QCommandLineParser*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_commandlineparser_values(void* self, const char* name) {
    libqt_list _arr = QCommandLineParser_Values((QCommandLineParser*)self, qstring(name));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_commandlineparser_values");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

bool q_commandlineparser_is_set2(void* self, void* option) {
    return QCommandLineParser_IsSet2((QCommandLineParser*)self, (QCommandLineOption*)option);
}

const char* q_commandlineparser_value2(void* self, void* option) {
    libqt_string _str = QCommandLineParser_Value2((QCommandLineParser*)self, (QCommandLineOption*)option);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_commandlineparser_values2(void* self, void* option) {
    libqt_list _arr = QCommandLineParser_Values2((QCommandLineParser*)self, (QCommandLineOption*)option);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_commandlineparser_values2");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_commandlineparser_positional_arguments(void* self) {
    libqt_list _arr = QCommandLineParser_PositionalArguments((QCommandLineParser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_commandlineparser_positional_arguments");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_commandlineparser_option_names(void* self) {
    libqt_list _arr = QCommandLineParser_OptionNames((QCommandLineParser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_commandlineparser_option_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_commandlineparser_unknown_option_names(void* self) {
    libqt_list _arr = QCommandLineParser_UnknownOptionNames((QCommandLineParser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_commandlineparser_unknown_option_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_commandlineparser_show_version(void* self) {
    QCommandLineParser_ShowVersion((QCommandLineParser*)self);
}

void q_commandlineparser_show_help(void* self) {
    QCommandLineParser_ShowHelp((QCommandLineParser*)self);
}

const char* q_commandlineparser_help_text(void* self) {
    libqt_string _str = QCommandLineParser_HelpText((QCommandLineParser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_commandlineparser_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QCommandLineParser_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_commandlineparser_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QCommandLineParser_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlineparser_add_positional_argument3(void* self, const char* name, const char* description, const char* syntax) {
    QCommandLineParser_AddPositionalArgument3((QCommandLineParser*)self, qstring(name), qstring(description), qstring(syntax));
}

void q_commandlineparser_show_help1(void* self, int exitCode) {
    QCommandLineParser_ShowHelp1((QCommandLineParser*)self, exitCode);
}

void q_commandlineparser_delete(void* self) {
    QCommandLineParser_Delete((QCommandLineParser*)(self));
}

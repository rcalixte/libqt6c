#include <string.h>
#include "libqcommandlineoption.hpp"
#include "libqcommandlineoption.h"

QCommandLineOption* q_commandlineoption_new(const char* name) {
    return QCommandLineOption_new(qstring(name));
}

QCommandLineOption* q_commandlineoption_new2(const char* names[]) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = malloc(names_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < names_len; ++_i) {
        names_qstr[_i] = qstring(names[_i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);

    return QCommandLineOption_new2(names_list);
}

QCommandLineOption* q_commandlineoption_new3(const char* name, const char* description) {
    return QCommandLineOption_new3(qstring(name), qstring(description));
}

QCommandLineOption* q_commandlineoption_new4(const char* names[], const char* description) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = malloc(names_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < names_len; ++_i) {
        names_qstr[_i] = qstring(names[_i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);

    return QCommandLineOption_new4(names_list, qstring(description));
}

QCommandLineOption* q_commandlineoption_new5(void* other) {
    return QCommandLineOption_new5((QCommandLineOption*)other);
}

QCommandLineOption* q_commandlineoption_new6(const char* name, const char* description, const char* valueName) {
    return QCommandLineOption_new6(qstring(name), qstring(description), qstring(valueName));
}

QCommandLineOption* q_commandlineoption_new7(const char* name, const char* description, const char* valueName, const char* defaultValue) {
    return QCommandLineOption_new7(qstring(name), qstring(description), qstring(valueName), qstring(defaultValue));
}

QCommandLineOption* q_commandlineoption_new8(const char* names[], const char* description, const char* valueName) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = malloc(names_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < names_len; ++_i) {
        names_qstr[_i] = qstring(names[_i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);

    return QCommandLineOption_new8(names_list, qstring(description), qstring(valueName));
}

QCommandLineOption* q_commandlineoption_new9(const char* names[], const char* description, const char* valueName, const char* defaultValue) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = malloc(names_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < names_len; ++_i) {
        names_qstr[_i] = qstring(names[_i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);

    return QCommandLineOption_new9(names_list, qstring(description), qstring(valueName), qstring(defaultValue));
}

void q_commandlineoption_operator_assign(void* self, void* other) {
    QCommandLineOption_OperatorAssign((QCommandLineOption*)self, (QCommandLineOption*)other);
}

void q_commandlineoption_swap(void* self, void* other) {
    QCommandLineOption_Swap((QCommandLineOption*)self, (QCommandLineOption*)other);
}

const char** q_commandlineoption_names(void* self) {
    libqt_list _arr = QCommandLineOption_Names((QCommandLineOption*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_commandlineoption_set_value_name(void* self, const char* name) {
    QCommandLineOption_SetValueName((QCommandLineOption*)self, qstring(name));
}

const char* q_commandlineoption_value_name(void* self) {
    libqt_string _str = QCommandLineOption_ValueName((QCommandLineOption*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlineoption_set_description(void* self, const char* description) {
    QCommandLineOption_SetDescription((QCommandLineOption*)self, qstring(description));
}

const char* q_commandlineoption_description(void* self) {
    libqt_string _str = QCommandLineOption_Description((QCommandLineOption*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlineoption_set_default_value(void* self, const char* defaultValue) {
    QCommandLineOption_SetDefaultValue((QCommandLineOption*)self, qstring(defaultValue));
}

void q_commandlineoption_set_default_values(void* self, const char* defaultValues[]) {
    size_t defaultValues_len = libqt_strv_length(defaultValues);
    libqt_string* defaultValues_qstr = malloc(defaultValues_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < defaultValues_len; ++_i) {
        defaultValues_qstr[_i] = qstring(defaultValues[_i]);
    }
    libqt_list defaultValues_list = qlist(defaultValues_qstr, defaultValues_len);
    QCommandLineOption_SetDefaultValues((QCommandLineOption*)self, defaultValues_list);
}

const char** q_commandlineoption_default_values(void* self) {
    libqt_list _arr = QCommandLineOption_DefaultValues((QCommandLineOption*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

int64_t q_commandlineoption_flags(void* self) {
    return QCommandLineOption_Flags((QCommandLineOption*)self);
}

void q_commandlineoption_set_flags(void* self, int64_t aflags) {
    QCommandLineOption_SetFlags((QCommandLineOption*)self, aflags);
}

void q_commandlineoption_delete(void* self) {
    QCommandLineOption_Delete((QCommandLineOption*)(self));
}

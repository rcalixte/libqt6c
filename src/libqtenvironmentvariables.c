#include "libqtenvironmentvariables.hpp"
#include "libqtenvironmentvariables.h"

char* q_qtenvironmentvariables_qgetenv(const char* varName) {
    libqt_string _str = qtenvironmentvariables_Qgetenv(varName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qtenvironmentvariables_q_environment_variable(const char* varName) {
    libqt_string _str = qtenvironmentvariables_QEnvironmentVariable(varName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qtenvironmentvariables_q_environment_variable2(const char* varName, const char* defaultValue) {
    libqt_string _str = qtenvironmentvariables_QEnvironmentVariable2(varName, qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_qtenvironmentvariables_qputenv(const char* varName, char* value) {
    return qtenvironmentvariables_Qputenv(varName, qstring(value));
}

bool q_qtenvironmentvariables_qunsetenv(const char* varName) {
    return qtenvironmentvariables_Qunsetenv(varName);
}

bool q_qtenvironmentvariables_q_environment_variable_is_empty(const char* varName) {
    return qtenvironmentvariables_QEnvironmentVariableIsEmpty(varName);
}

bool q_qtenvironmentvariables_q_environment_variable_is_set(const char* varName) {
    return qtenvironmentvariables_QEnvironmentVariableIsSet(varName);
}

int32_t q_qtenvironmentvariables_q_environment_variable_int_value(const char* varName, bool* ok) {
    return qtenvironmentvariables_QEnvironmentVariableIntValue(varName, (bool*)ok);
}

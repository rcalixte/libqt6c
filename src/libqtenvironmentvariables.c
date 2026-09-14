#include "libqtenvironmentvariables.hpp"
#include "libqtenvironmentvariables.h"

char* q_qtenvironmentvariables_h_qgetenv(const char* varName) {
    libqt_string _str = qtenvironmentvariables_h_Qgetenv(varName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_qtenvironmentvariables_h_qputenv(const char* varName, char* value) {
    return qtenvironmentvariables_h_Qputenv(varName, qstring(value));
}

bool q_qtenvironmentvariables_h_qunsetenv(const char* varName) {
    return qtenvironmentvariables_h_Qunsetenv(varName);
}

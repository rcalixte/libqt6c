#include "libqpassworddigestor.hpp"
#include "libqpassworddigestor.h"

char* q_passworddigestor_derive_key_pbkdf1(int32_t param1, const char* param2, const char* param3, int param4, uint64_t param5) {
    libqt_string _str = QPasswordDigestor_DeriveKeyPbkdf1(param1, qstring(param2), qstring(param3), param4, param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_passworddigestor_derive_key_pbkdf2(int32_t param1, const char* param2, const char* param3, int param4, uint64_t param5) {
    libqt_string _str = QPasswordDigestor_DeriveKeyPbkdf2(param1, qstring(param2), qstring(param3), param4, param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

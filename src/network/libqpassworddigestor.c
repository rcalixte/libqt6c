#include "libqpassworddigestor.hpp"
#include "libqpassworddigestor.h"

char* q_passworddigestor_derive_key_pbkdf1(int32_t algorithm, char* password, char* salt, int iterations, uint64_t dkLen) {
    libqt_string _str = QPasswordDigestor_DeriveKeyPbkdf1(algorithm, qstring(password), qstring(salt), iterations, dkLen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_passworddigestor_derive_key_pbkdf2(int32_t algorithm, char* password, char* salt, int iterations, uint64_t dkLen) {
    libqt_string _str = QPasswordDigestor_DeriveKeyPbkdf2(algorithm, qstring(password), qstring(salt), iterations, dkLen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

#include "libkrandom.hpp"
#include "libkrandom.h"

const char* k_random_random_string(int param1) {
    libqt_string _str = KRandom_RandomString(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

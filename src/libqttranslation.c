#include "libqttranslation.hpp"
#include "libqttranslation.h"

const char* q_qttranslation_qt_tr_id(const char* id, int n) {
    libqt_string _str = qttranslation_QtTrId(id, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

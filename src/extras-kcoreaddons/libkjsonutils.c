#include "../libqjsonobject.hpp"
#include "../libqjsonvalue.hpp"
#include "libkjsonutils.hpp"
#include "libkjsonutils.h"

QJsonValue* k_jsonutils_read_translated_value(void* param1, const char* param2, void* param3) {
    return KJsonUtils_ReadTranslatedValue((QJsonObject*)param1, qstring(param2), (QJsonValue*)param3);
}

const char* k_jsonutils_read_translated_string(void* param1, const char* param2, const char* param3) {
    libqt_string _str = KJsonUtils_ReadTranslatedString((QJsonObject*)param1, qstring(param2), qstring(param3));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

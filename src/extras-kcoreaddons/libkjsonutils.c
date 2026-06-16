#include "../libqjsonobject.hpp"
#include "../libqjsonvalue.hpp"
#include "libkjsonutils.hpp"
#include "libkjsonutils.h"

QJsonValue* k_jsonutils_read_translated_value(void* jo, const char* key, void* defaultValue) {
    return KJsonUtils_ReadTranslatedValue((QJsonObject*)jo, qstring(key), (QJsonValue*)defaultValue);
}

const char* k_jsonutils_read_translated_string(void* jo, const char* key, const char* defaultValue) {
    libqt_string _str = KJsonUtils_ReadTranslatedString((QJsonObject*)jo, qstring(key), qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

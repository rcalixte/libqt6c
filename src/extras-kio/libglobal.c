#include "../libqurl.hpp"
#include "libglobal.hpp"
#include "libglobal.h"

const char* k_io_convert_size(uint64_t param1) {
    libqt_string _str = KIO_ConvertSize(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_number(uint64_t param1) {
    libqt_string _str = KIO_Number(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_convert_size_from_ki_b(uint64_t param1) {
    libqt_string _str = KIO_ConvertSizeFromKiB(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_io_calculate_remaining_seconds(uint64_t param1, uint64_t param2, uint64_t param3) {
    return KIO_CalculateRemainingSeconds(param1, param2, param3);
}

const char* k_io_convert_seconds(uint32_t param1) {
    libqt_string _str = KIO_ConvertSeconds(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_items_summary_string(uint32_t param1, uint32_t param2, uint32_t param3, uint64_t param4, bool param5) {
    libqt_string _str = KIO_ItemsSummaryString(param1, param2, param3, param4, param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_encode_file_name(const char* param1) {
    libqt_string _str = KIO_EncodeFileName(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_decode_file_name(const char* param1) {
    libqt_string _str = KIO_DecodeFileName(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_io_parse_cache_control(const char* param1) {
    return KIO_ParseCacheControl(qstring(param1));
}

const char* k_io_get_cache_control_string(int32_t param1) {
    libqt_string _str = KIO_GetCacheControlString(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_fav_icon_for_url(void* param1) {
    libqt_string _str = KIO_FavIconForUrl((QUrl*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_io_convert_permissions(int param1) {
    return KIO_ConvertPermissions(param1);
}

const char* k_io_icon_name_for_url(void* param1) {
    libqt_string _str = KIO_IconNameForUrl((QUrl*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_io_up_url(void* param1) {
    return KIO_UpUrl((QUrl*)param1);
}

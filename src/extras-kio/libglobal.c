#include "../libqurl.hpp"
#include "libglobal.hpp"
#include "libglobal.h"

const char* k_io_convert_size(uintptr_t size) {
    libqt_string _str = KIO_ConvertSize(size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_number(uintptr_t size) {
    libqt_string _str = KIO_Number(size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_convert_size_from_ki_b(uintptr_t kibSize) {
    libqt_string _str = KIO_ConvertSizeFromKiB(kibSize);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_io_calculate_remaining_seconds(uintptr_t totalSize, uintptr_t processedSize, uintptr_t speed) {
    return KIO_CalculateRemainingSeconds(totalSize, processedSize, speed);
}

const char* k_io_convert_seconds(uint32_t seconds) {
    libqt_string _str = KIO_ConvertSeconds(seconds);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_items_summary_string(uint32_t items, uint32_t files, uint32_t dirs, uintptr_t size, bool showSize) {
    libqt_string _str = KIO_ItemsSummaryString(items, files, dirs, size, showSize);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_encode_file_name(const char* str) {
    libqt_string _str = KIO_EncodeFileName(qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_decode_file_name(const char* str) {
    libqt_string _str = KIO_DecodeFileName(qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_io_parse_cache_control(const char* cacheControl) {
    return KIO_ParseCacheControl(qstring(cacheControl));
}

const char* k_io_get_cache_control_string(int32_t cacheControl) {
    libqt_string _str = KIO_GetCacheControlString(cacheControl);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io_fav_icon_for_url(void* url) {
    libqt_string _str = KIO_FavIconForUrl((QUrl*)url);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_io_convert_permissions(int permissions) {
    return KIO_ConvertPermissions(permissions);
}

const char* k_io_icon_name_for_url(void* url) {
    libqt_string _str = KIO_IconNameForUrl((QUrl*)url);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_io_up_url(void* url) {
    return KIO_UpUrl((QUrl*)url);
}

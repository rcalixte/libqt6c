#include "../libqmimedata.hpp"
#include "../libqurl.hpp"
#include "libkurlmimedata.hpp"
#include "libkurlmimedata.h"

void k_urlmimedata_set_urls(libqt_list param1, libqt_list param2, void* param3) {
    KUrlMimeData_SetUrls(param1, param2, (QMimeData*)param3);
}

bool k_urlmimedata_export_urls_to_portal(void* param1) {
    return KUrlMimeData_ExportUrlsToPortal((QMimeData*)param1);
}

void k_urlmimedata_set_meta_data(libqt_map /* of const char* to const char* */ param1, void* param2) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map param1_ret;
    param1_ret.len = param1.len;
    param1_ret.keys = malloc(param1_ret.len * sizeof(libqt_string));
    if (param1_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    param1_ret.values = malloc(param1_ret.len * sizeof(libqt_string));
    if (param1_ret.values == NULL) {
        free(param1_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** param1_karr = (const char**)param1.keys;
    libqt_string* param1_kdest = (libqt_string*)param1_ret.keys;
    const char** param1_varr = (const char**)param1.values;
    libqt_string* param1_vdest = (libqt_string*)param1_ret.values;
    for (size_t i = 0; i < param1_ret.len; ++i) {
        param1_kdest[i] = qstring(param1_karr[i]);
        param1_vdest[i] = qstring(param1_varr[i]);
    }
    KUrlMimeData_SetMetaData(param1_ret, (QMimeData*)param2);
    libqt_free(param1_ret.keys);
    libqt_free(param1_ret.values);
}

const char** k_urlmimedata_mime_data_types() {
    libqt_list _arr = KUrlMimeData_MimeDataTypes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlmimedata_mime_data_types");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

libqt_list /* of QUrl* */ k_urlmimedata_urls_from_mime_data(void* param1, int32_t param2, libqt_map* /* of const char* to const char* */ param3) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map param3_ret;
    param3_ret.len = param3->len;
    param3_ret.keys = malloc(param3_ret.len * sizeof(libqt_string));
    if (param3_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    param3_ret.values = malloc(param3_ret.len * sizeof(libqt_string));
    if (param3_ret.values == NULL) {
        free(param3_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** param3_karr = (const char**)param3->keys;
    libqt_string* param3_kdest = (libqt_string*)param3_ret.keys;
    const char** param3_varr = (const char**)param3->values;
    libqt_string* param3_vdest = (libqt_string*)param3_ret.values;
    for (size_t i = 0; i < param3_ret.len; ++i) {
        param3_kdest[i] = qstring(param3_karr[i]);
        param3_vdest[i] = qstring(param3_varr[i]);
    }
    libqt_list _arr = KUrlMimeData_UrlsFromMimeData((QMimeData*)param1, param2, &param3_ret);
    libqt_free(param3_ret.keys);
    libqt_free(param3_ret.values);
    return _arr;
}

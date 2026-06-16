#include "../libqmimedata.hpp"
#include "../libqurl.hpp"
#include "libkurlmimedata.hpp"
#include "libkurlmimedata.h"

void k_urlmimedata_set_urls(libqt_list /* of QUrl* */ urls, libqt_list /* of QUrl* */ mostLocalUrls, void* mimeData) {
    KUrlMimeData_SetUrls(urls, mostLocalUrls, (QMimeData*)mimeData);
}

bool k_urlmimedata_export_urls_to_portal(void* mimeData) {
    return KUrlMimeData_ExportUrlsToPortal((QMimeData*)mimeData);
}

void k_urlmimedata_set_meta_data(libqt_map /* of const char* to const char* */ metaData, void* mimeData) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map metaData_ret;
    metaData_ret.len = metaData.len;
    metaData_ret.keys = (libqt_string*)malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_urlmimedata_set_meta_data\n");
        abort();
    }
    metaData_ret.values = (libqt_string*)malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.values == NULL) {
        free(metaData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_urlmimedata_set_meta_data\n");
        abort();
    }
    const char** metaData_karr = (const char**)metaData.keys;
    libqt_string* metaData_kdest = (libqt_string*)metaData_ret.keys;
    const char** metaData_varr = (const char**)metaData.values;
    libqt_string* metaData_vdest = (libqt_string*)metaData_ret.values;
    for (size_t i = 0; i < metaData_ret.len; ++i) {
        metaData_kdest[i] = qstring(metaData_karr[i]);
        metaData_vdest[i] = qstring(metaData_varr[i]);
    }
    KUrlMimeData_SetMetaData(metaData_ret, (QMimeData*)mimeData);
    free(metaData_ret.keys);
    free(metaData_ret.values);
}

const char** k_urlmimedata_mime_data_types() {
    libqt_list _arr = KUrlMimeData_MimeDataTypes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_urlmimedata_mime_data_types\n");
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

libqt_list /* of QUrl* */ k_urlmimedata_urls_from_mime_data(void* mimeData, int32_t decodeOptions, libqt_map* /* of const char* to const char* */ metaData) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map metaData_ret;
    metaData_ret.len = metaData->len;
    metaData_ret.keys = (libqt_string*)malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_urlmimedata_urls_from_mime_data\n");
        abort();
    }
    metaData_ret.values = (libqt_string*)malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.values == NULL) {
        free(metaData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_urlmimedata_urls_from_mime_data\n");
        abort();
    }
    const char** metaData_karr = (const char**)metaData->keys;
    libqt_string* metaData_kdest = (libqt_string*)metaData_ret.keys;
    const char** metaData_varr = (const char**)metaData->values;
    libqt_string* metaData_vdest = (libqt_string*)metaData_ret.values;
    for (size_t i = 0; i < metaData_ret.len; ++i) {
        metaData_kdest[i] = qstring(metaData_karr[i]);
        metaData_vdest[i] = qstring(metaData_varr[i]);
    }
    libqt_list _arr = KUrlMimeData_UrlsFromMimeData((QMimeData*)mimeData, decodeOptions, &metaData_ret);
    free(metaData_ret.keys);
    free(metaData_ret.values);
    return _arr;
}

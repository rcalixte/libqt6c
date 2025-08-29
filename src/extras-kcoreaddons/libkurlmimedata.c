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
    KUrlMimeData_SetMetaData(param1, (QMimeData*)param2);
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
    libqt_list _arr = KUrlMimeData_UrlsFromMimeData((QMimeData*)param1, param2, param3);
    return _arr;
}

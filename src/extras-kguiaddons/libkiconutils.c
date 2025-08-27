#include "../libqicon.hpp"
#include "libkiconutils.hpp"
#include "libkiconutils.h"

QIcon* k_iconutils_add_overlay(void* param1, void* param2, int32_t param3) {
    return KIconUtils_AddOverlay((QIcon*)param1, (QIcon*)param2, param3);
}

QIcon* k_iconutils_add_overlays(void* param1, libqt_map /* of int32_t to QIcon* */ param2) {
    return KIconUtils_AddOverlays((QIcon*)param1, param2);
}

QIcon* k_iconutils_add_overlays2(void* param1, const char* param2[]) {
    size_t param2_len = libqt_strv_length(param2);
    libqt_string* param2_qstr = (libqt_string*)malloc(param2_len * sizeof(libqt_string));
    if (param2_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_iconutils_add_overlays2");
        abort();
    }
    for (size_t i = 0; i < param2_len; ++i) {
        param2_qstr[i] = qstring(param2[i]);
    }
    libqt_list param2_list = qlist(param2_qstr, param2_len);
    QIcon* _out = KIconUtils_AddOverlays2((QIcon*)param1, param2_list);
    free(param2_qstr);
    return _out;
}

QIcon* k_iconutils_add_overlays3(const char* param1, const char* param2[]) {
    size_t param2_len = libqt_strv_length(param2);
    libqt_string* param2_qstr = (libqt_string*)malloc(param2_len * sizeof(libqt_string));
    if (param2_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_iconutils_add_overlays3");
        abort();
    }
    for (size_t i = 0; i < param2_len; ++i) {
        param2_qstr[i] = qstring(param2[i]);
    }
    libqt_list param2_list = qlist(param2_qstr, param2_len);
    QIcon* _out = KIconUtils_AddOverlays3(qstring(param1), param2_list);
    free(param2_qstr);
    return _out;
}

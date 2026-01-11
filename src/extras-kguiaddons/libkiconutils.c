#include "../libqicon.hpp"
#include "libkiconutils.hpp"
#include "libkiconutils.h"

QIcon* k_iconutils_add_overlay(void* param1, void* param2, int32_t param3) {
    return KIconUtils_AddOverlay((QIcon*)param1, (QIcon*)param2, param3);
}

QIcon* k_iconutils_add_overlays(void* param1, libqt_map /* of enum Qt__Corner to QIcon* */ param2) {
    // Convert libqt_map to QHash<Qt::Corner,QIcon>
    libqt_map param2_ret;
    param2_ret.len = param2.len;
    param2_ret.keys = (int32_t*)malloc(param2_ret.len * sizeof(int32_t));
    if (param2_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_iconutils_add_overlays\n");
        abort();
    }
    param2_ret.values = (QIcon**)malloc(param2_ret.len * sizeof(QIcon*));
    if (param2_ret.values == NULL) {
        free(param2_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_iconutils_add_overlays\n");
        abort();
    }
    int32_t* param2_karr = (int32_t*)param2.keys;
    int32_t* param2_kdest = (int32_t*)param2_ret.keys;
    QIcon** param2_varr = (QIcon**)param2.values;
    QIcon** param2_vdest = (QIcon**)param2_ret.values;
    for (size_t i = 0; i < param2_ret.len; ++i) {
        param2_kdest[i] = param2_karr[i];
        param2_vdest[i] = param2_varr[i];
    }
    QIcon* _out = KIconUtils_AddOverlays((QIcon*)param1, param2_ret);
    free(param2_ret.keys);
    free(param2_ret.values);
    return _out;
}

QIcon* k_iconutils_add_overlays2(void* param1, const char* param2[static 1]) {
    size_t param2_len = libqt_strv_length(param2);
    libqt_string* param2_qstr = (libqt_string*)malloc(param2_len * sizeof(libqt_string));
    if (param2_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconutils_add_overlays2");
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

QIcon* k_iconutils_add_overlays3(const char* param1, const char* param2[static 1]) {
    size_t param2_len = libqt_strv_length(param2);
    libqt_string* param2_qstr = (libqt_string*)malloc(param2_len * sizeof(libqt_string));
    if (param2_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconutils_add_overlays3");
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

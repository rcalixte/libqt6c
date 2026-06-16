#include "../libqicon.hpp"
#include "libkiconutils.hpp"
#include "libkiconutils.h"

QIcon* k_iconutils_add_overlay(void* icon, void* overlay, int32_t position) {
    return KIconUtils_AddOverlay((QIcon*)icon, (QIcon*)overlay, position);
}

QIcon* k_iconutils_add_overlays(void* icon, libqt_map /* of enum Qt__Corner to QIcon* */ overlays) {
    // Convert libqt_map to QHash<Qt::Corner,QIcon>
    libqt_map overlays_ret;
    overlays_ret.len = overlays.len;
    overlays_ret.keys = (int32_t*)malloc(overlays_ret.len * sizeof(int32_t));
    if (overlays_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_iconutils_add_overlays\n");
        abort();
    }
    overlays_ret.values = (QIcon**)malloc(overlays_ret.len * sizeof(QIcon*));
    if (overlays_ret.values == NULL) {
        free(overlays_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_iconutils_add_overlays\n");
        abort();
    }
    int32_t* overlays_karr = (int32_t*)overlays.keys;
    int32_t* overlays_kdest = (int32_t*)overlays_ret.keys;
    QIcon** overlays_varr = (QIcon**)overlays.values;
    QIcon** overlays_vdest = (QIcon**)overlays_ret.values;
    for (size_t i = 0; i < overlays_ret.len; ++i) {
        overlays_kdest[i] = overlays_karr[i];
        overlays_vdest[i] = overlays_varr[i];
    }
    QIcon* _out = KIconUtils_AddOverlays((QIcon*)icon, overlays_ret);
    free(overlays_ret.keys);
    free(overlays_ret.values);
    return _out;
}

QIcon* k_iconutils_add_overlays2(void* icon, const char* overlays[static 1]) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconutils_add_overlays2\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);
    QIcon* _out = KIconUtils_AddOverlays2((QIcon*)icon, overlays_list);
    free(overlays_qstr);
    return _out;
}

QIcon* k_iconutils_add_overlays3(const char* iconName, const char* overlays[static 1]) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconutils_add_overlays3\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);
    QIcon* _out = KIconUtils_AddOverlays3(qstring(iconName), overlays_list);
    free(overlays_qstr);
    return _out;
}

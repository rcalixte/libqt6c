#include "../libqvariant.hpp"
#include "libkcrash.hpp"
#include "libkcrash.h"

void k_crash_initialize() {
    KCrash_Initialize();
}

void k_crash_default_crash_handler(int param1) {
    KCrash_DefaultCrashHandler(param1);
}

void k_crash_set_flags(int32_t param1) {
    KCrash_SetFlags(param1);
}

void k_crash_set_dr_konqi_enabled(bool param1) {
    KCrash_SetDrKonqiEnabled(param1);
}

bool k_crash_is_dr_konqi_enabled() {
    return KCrash_IsDrKonqiEnabled();
}

void k_crash_set_error_message(const char* param1) {
    KCrash_SetErrorMessage(qstring(param1));
}

void k_crash_set_error_tags(libqt_map /* of const char* to const char* */ param1) {
    // Convert libqt_map to QHash<QString,QString>
    libqt_map param1_ret;
    param1_ret.len = param1.len;
    param1_ret.keys = (libqt_string*)malloc(param1_ret.len * sizeof(libqt_string));
    if (param1_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_crash_set_error_tags\n");
        abort();
    }
    param1_ret.values = (libqt_string*)malloc(param1_ret.len * sizeof(libqt_string));
    if (param1_ret.values == NULL) {
        free(param1_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_crash_set_error_tags\n");
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
    KCrash_SetErrorTags(param1_ret);
    free(param1_ret.keys);
    free(param1_ret.values);
}

void k_crash_set_error_extra_data(libqt_map /* of const char* to const char* */ param1) {
    // Convert libqt_map to QHash<QString,QString>
    libqt_map param1_ret;
    param1_ret.len = param1.len;
    param1_ret.keys = (libqt_string*)malloc(param1_ret.len * sizeof(libqt_string));
    if (param1_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_crash_set_error_extra_data\n");
        abort();
    }
    param1_ret.values = (libqt_string*)malloc(param1_ret.len * sizeof(libqt_string));
    if (param1_ret.values == NULL) {
        free(param1_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_crash_set_error_extra_data\n");
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
    KCrash_SetErrorExtraData(param1_ret);
    free(param1_ret.keys);
    free(param1_ret.values);
}

void k_crash_set_g_p_u_data(libqt_map /* of const char* to QVariant* */ param1) {
    // Convert libqt_map to QHash<QString,QVariant>
    libqt_map param1_ret;
    param1_ret.len = param1.len;
    param1_ret.keys = (libqt_string*)malloc(param1_ret.len * sizeof(libqt_string));
    if (param1_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_crash_set_g_p_u_data\n");
        abort();
    }
    param1_ret.values = (QVariant**)malloc(param1_ret.len * sizeof(QVariant*));
    if (param1_ret.values == NULL) {
        free(param1_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_crash_set_g_p_u_data\n");
        abort();
    }
    const char** param1_karr = (const char**)param1.keys;
    libqt_string* param1_kdest = (libqt_string*)param1_ret.keys;
    QVariant** param1_varr = (QVariant**)param1.values;
    QVariant** param1_vdest = (QVariant**)param1_ret.values;
    for (size_t i = 0; i < param1_ret.len; ++i) {
        param1_kdest[i] = qstring(param1_karr[i]);
        param1_vdest[i] = param1_varr[i];
    }
    KCrash_SetGPUData(param1_ret);
    free(param1_ret.keys);
    free(param1_ret.values);
}

#include "../libqvariant.hpp"
#include "libkcrash.hpp"
#include "libkcrash.h"

void k_crash_initialize() {
    KCrash_Initialize();
}

void k_crash_default_crash_handler(int signal) {
    KCrash_DefaultCrashHandler(signal);
}

void k_crash_set_crash_handler(void (*handler)(int funcparam1)) {
    KCrash_SetCrashHandler((intptr_t)handler);
}

KCrash__HandlerType k_crash_crash_handler() {
    return (KCrash__HandlerType)KCrash_CrashHandler();
}

void k_crash_set_emergency_save_function(void (*saveFunction)(int funcparam1)) {
    KCrash_SetEmergencySaveFunction((intptr_t)saveFunction);
}

KCrash__HandlerType k_crash_emergency_save_function() {
    return (KCrash__HandlerType)KCrash_EmergencySaveFunction();
}

void k_crash_set_flags(int32_t flags) {
    KCrash_SetFlags(flags);
}

void k_crash_set_dr_konqi_enabled(bool enabled) {
    KCrash_SetDrKonqiEnabled(enabled);
}

bool k_crash_is_dr_konqi_enabled() {
    return KCrash_IsDrKonqiEnabled();
}

void k_crash_set_error_message(const char* message) {
    KCrash_SetErrorMessage(qstring(message));
}

void k_crash_set_error_tags(libqt_map /* of const char* to const char* */ details) {
    // Convert libqt_map to QHash<QString,QString>
    libqt_map details_ret;
    details_ret.len = details.len;
    details_ret.keys = (libqt_string*)malloc(details_ret.len * sizeof(libqt_string));
    if (details_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_crash_set_error_tags\n");
        abort();
    }
    details_ret.values = (libqt_string*)malloc(details_ret.len * sizeof(libqt_string));
    if (details_ret.values == NULL) {
        free(details_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_crash_set_error_tags\n");
        abort();
    }
    const char** details_karr = (const char**)details.keys;
    libqt_string* details_kdest = (libqt_string*)details_ret.keys;
    const char** details_varr = (const char**)details.values;
    libqt_string* details_vdest = (libqt_string*)details_ret.values;
    for (size_t i = 0; i < details_ret.len; ++i) {
        details_kdest[i] = qstring(details_karr[i]);
        details_vdest[i] = qstring(details_varr[i]);
    }
    KCrash_SetErrorTags(details_ret);
    free(details_ret.keys);
    free(details_ret.values);
}

void k_crash_set_error_extra_data(libqt_map /* of const char* to const char* */ details) {
    // Convert libqt_map to QHash<QString,QString>
    libqt_map details_ret;
    details_ret.len = details.len;
    details_ret.keys = (libqt_string*)malloc(details_ret.len * sizeof(libqt_string));
    if (details_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_crash_set_error_extra_data\n");
        abort();
    }
    details_ret.values = (libqt_string*)malloc(details_ret.len * sizeof(libqt_string));
    if (details_ret.values == NULL) {
        free(details_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_crash_set_error_extra_data\n");
        abort();
    }
    const char** details_karr = (const char**)details.keys;
    libqt_string* details_kdest = (libqt_string*)details_ret.keys;
    const char** details_varr = (const char**)details.values;
    libqt_string* details_vdest = (libqt_string*)details_ret.values;
    for (size_t i = 0; i < details_ret.len; ++i) {
        details_kdest[i] = qstring(details_karr[i]);
        details_vdest[i] = qstring(details_varr[i]);
    }
    KCrash_SetErrorExtraData(details_ret);
    free(details_ret.keys);
    free(details_ret.values);
}

void k_crash_set_g_p_u_data(libqt_map /* of const char* to QVariant* */ data) {
    // Convert libqt_map to QHash<QString,QVariant>
    libqt_map data_ret;
    data_ret.len = data.len;
    data_ret.keys = (libqt_string*)malloc(data_ret.len * sizeof(libqt_string));
    if (data_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_crash_set_g_p_u_data\n");
        abort();
    }
    data_ret.values = (QVariant**)malloc(data_ret.len * sizeof(QVariant*));
    if (data_ret.values == NULL) {
        free(data_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_crash_set_g_p_u_data\n");
        abort();
    }
    const char** data_karr = (const char**)data.keys;
    libqt_string* data_kdest = (libqt_string*)data_ret.keys;
    QVariant** data_varr = (QVariant**)data.values;
    QVariant** data_vdest = (QVariant**)data_ret.values;
    for (size_t i = 0; i < data_ret.len; ++i) {
        data_kdest[i] = qstring(data_karr[i]);
        data_vdest[i] = data_varr[i];
    }
    KCrash_SetGPUData(data_ret);
    free(data_ret.keys);
    free(data_ret.values);
}

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
    KCrash_SetErrorTags(param1);
}

void k_crash_set_error_extra_data(libqt_map /* of const char* to const char* */ param1) {
    KCrash_SetErrorExtraData(param1);
}

void k_crash_set_g_p_u_data(libqt_map /* of const char* to QVariant* */ param1) {
    KCrash_SetGPUData(param1);
}

#include "libkconfig.hpp"
#include "libkconfiggui.hpp"
#include "libkconfiggui.h"

KConfig* k_configgui_session_config() {
    return KConfigGui_SessionConfig();
}

void k_configgui_set_session_config(const char* param1, const char* param2) {
    KConfigGui_SetSessionConfig(qstring(param1), qstring(param2));
}

bool k_configgui_has_session_config() {
    return KConfigGui_HasSessionConfig();
}

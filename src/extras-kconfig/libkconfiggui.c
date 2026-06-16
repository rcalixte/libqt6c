#include "libkconfig.hpp"
#include "libkconfiggui.hpp"
#include "libkconfiggui.h"

KConfig* k_configgui_session_config() {
    return KConfigGui_SessionConfig();
}

void k_configgui_set_session_config(const char* id, const char* key) {
    KConfigGui_SetSessionConfig(qstring(id), qstring(key));
}

bool k_configgui_has_session_config() {
    return KConfigGui_HasSessionConfig();
}

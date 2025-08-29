#include "libkconfiggroup.hpp"
#include "../libqscreen.hpp"
#include "../libqwindow.hpp"
#include "libkwindowconfig.hpp"
#include "libkwindowconfig.h"

void k_windowconfig_save_window_size(void* param1, void* param2, int32_t param3) {
    KWindowConfig_SaveWindowSize((QWindow*)param1, (KConfigGroup*)param2, param3);
}

bool k_windowconfig_has_saved_window_size(void* param1) {
    return KWindowConfig_HasSavedWindowSize((KConfigGroup*)param1);
}

void k_windowconfig_restore_window_size(void* param1, void* param2) {
    KWindowConfig_RestoreWindowSize((QWindow*)param1, (KConfigGroup*)param2);
}

void k_windowconfig_save_window_position(void* param1, void* param2, int32_t param3) {
    KWindowConfig_SaveWindowPosition((QWindow*)param1, (KConfigGroup*)param2, param3);
}

bool k_windowconfig_has_saved_window_position(void* param1) {
    return KWindowConfig_HasSavedWindowPosition((KConfigGroup*)param1);
}

void k_windowconfig_restore_window_position(void* param1, void* param2) {
    KWindowConfig_RestoreWindowPosition((QWindow*)param1, (KConfigGroup*)param2);
}

void k_windowconfig_restore_window_screen_position(void* param1, void* param2, void* param3) {
    KWindowConfig_RestoreWindowScreenPosition((QWindow*)param1, (QScreen*)param2, (KConfigGroup*)param3);
}

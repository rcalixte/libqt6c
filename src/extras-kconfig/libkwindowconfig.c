#include "libkconfiggroup.hpp"
#include "../libqscreen.hpp"
#include "../libqwindow.hpp"
#include "libkwindowconfig.hpp"
#include "libkwindowconfig.h"

void k_windowconfig_save_window_size(void* window, void* config, int32_t options) {
    KWindowConfig_SaveWindowSize((QWindow*)window, (KConfigGroup*)config, options);
}

bool k_windowconfig_has_saved_window_size(void* config) {
    return KWindowConfig_HasSavedWindowSize((KConfigGroup*)config);
}

void k_windowconfig_restore_window_size(void* window, void* config) {
    KWindowConfig_RestoreWindowSize((QWindow*)window, (KConfigGroup*)config);
}

void k_windowconfig_save_window_position(void* window, void* config, int32_t options) {
    KWindowConfig_SaveWindowPosition((QWindow*)window, (KConfigGroup*)config, options);
}

bool k_windowconfig_has_saved_window_position(void* config) {
    return KWindowConfig_HasSavedWindowPosition((KConfigGroup*)config);
}

void k_windowconfig_restore_window_position(void* window, void* config) {
    KWindowConfig_RestoreWindowPosition((QWindow*)window, (KConfigGroup*)config);
}

void k_windowconfig_restore_window_screen_position(void* window, void* screen, void* config) {
    KWindowConfig_RestoreWindowScreenPosition((QWindow*)window, (QScreen*)screen, (KConfigGroup*)config);
}

#include "libkkeyserver.hpp"
#include "libkkeyserver.h"

const char* k_keyserver_mod_to_string_user(uint32_t param1) {
    libqt_string _str = KKeyServer_ModToStringUser(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_keyserver_string_user_to_mod(const char* param1) {
    return KKeyServer_StringUserToMod(qstring(param1));
}

bool k_keyserver_is_shift_as_modifier_allowed(int param1) {
    return KKeyServer_IsShiftAsModifierAllowed(param1);
}

bool k_keyserver_initialize_mods() {
    return KKeyServer_InitializeMods();
}

bool k_keyserver_keyboard_has_meta_key() {
    return KKeyServer_KeyboardHasMetaKey();
}

uint32_t k_keyserver_mod_x_shift() {
    return KKeyServer_ModXShift();
}

uint32_t k_keyserver_mod_x_lock() {
    return KKeyServer_ModXLock();
}

uint32_t k_keyserver_mod_x_ctrl() {
    return KKeyServer_ModXCtrl();
}

uint32_t k_keyserver_mod_x_alt() {
    return KKeyServer_ModXAlt();
}

uint32_t k_keyserver_mod_x_meta() {
    return KKeyServer_ModXMeta();
}

uint32_t k_keyserver_mod_x_num_lock() {
    return KKeyServer_ModXNumLock();
}

uint32_t k_keyserver_mod_x_scroll_lock() {
    return KKeyServer_ModXScrollLock();
}

uint32_t k_keyserver_mod_x_mode_switch() {
    return KKeyServer_ModXModeSwitch();
}

uint32_t k_keyserver_accel_mod_mask_x() {
    return KKeyServer_AccelModMaskX();
}

bool k_keyserver_key_qt_to_sym_x(int param1, int* param2) {
    return KKeyServer_KeyQtToSymX(param1, param2);
}

libqt_list /* of int */ k_keyserver_key_qt_to_sym_xs(int param1) {
    libqt_list _arr = KKeyServer_KeyQtToSymXs(param1);
    return _arr;
}

bool k_keyserver_key_qt_to_code_x(int param1, int* param2) {
    return KKeyServer_KeyQtToCodeX(param1, param2);
}

libqt_list /* of int */ k_keyserver_key_qt_to_code_xs(int param1) {
    libqt_list _arr = KKeyServer_KeyQtToCodeXs(param1);
    return _arr;
}

bool k_keyserver_key_qt_to_mod_x(int param1, uint32_t* param2) {
    return KKeyServer_KeyQtToModX(param1, param2);
}

bool k_keyserver_sym_x_mod_x_to_key_qt(uint32_t param1, uint16_t param2, int* param3) {
    return KKeyServer_SymXModXToKeyQt(param1, param2, param3);
}

bool k_keyserver_mod_x_to_qt(uint32_t param1, int* param2) {
    return KKeyServer_ModXToQt(param1, param2);
}

bool k_keyserver_xcb_key_press_event_to_qt(xcb_generic_event_t* param1, int* param2) {
    return KKeyServer_XcbKeyPressEventToQt(param1, param2);
}

bool k_keyserver_xcb_key_press_event_to_qt2(xcb_key_press_event_t* param1, int* param2) {
    return KKeyServer_XcbKeyPressEventToQt2(param1, param2);
}

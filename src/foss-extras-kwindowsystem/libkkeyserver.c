#include "libkkeyserver.hpp"
#include "libkkeyserver.h"

const char* k_keyserver_mod_to_string_user(uint32_t mod) {
    libqt_string _str = KKeyServer_ModToStringUser(mod);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_keyserver_string_user_to_mod(const char* mod) {
    return KKeyServer_StringUserToMod(qstring(mod));
}

bool k_keyserver_is_shift_as_modifier_allowed(int keyQt) {
    return KKeyServer_IsShiftAsModifierAllowed(keyQt);
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

bool k_keyserver_key_qt_to_sym_x(int keyQt, int* sym) {
    return KKeyServer_KeyQtToSymX(keyQt, sym);
}

libqt_list /* of int */ k_keyserver_key_qt_to_sym_xs(int keyQt) {
    libqt_list _arr = KKeyServer_KeyQtToSymXs(keyQt);
    return _arr;
}

bool k_keyserver_key_qt_to_code_x(int keyQt, int* keyCode) {
    return KKeyServer_KeyQtToCodeX(keyQt, keyCode);
}

libqt_list /* of int */ k_keyserver_key_qt_to_code_xs(int keyQt) {
    libqt_list _arr = KKeyServer_KeyQtToCodeXs(keyQt);
    return _arr;
}

bool k_keyserver_key_qt_to_mod_x(int keyQt, uint32_t* mod) {
    return KKeyServer_KeyQtToModX(keyQt, mod);
}

bool k_keyserver_sym_x_mod_x_to_key_qt(uint32_t keySym, uint16_t modX, int* keyQt) {
    return KKeyServer_SymXModXToKeyQt(keySym, modX, keyQt);
}

bool k_keyserver_mod_x_to_qt(uint32_t modX, int* modQt) {
    return KKeyServer_ModXToQt(modX, modQt);
}

#ifdef __linux__
bool k_keyserver_xcb_key_press_event_to_qt(xcb_generic_event_t* e, int* keyModQt) {
    return KKeyServer_XcbKeyPressEventToQt(e, keyModQt);
}
#endif

#ifdef __linux__
bool k_keyserver_xcb_key_press_event_to_qt2(xcb_key_press_event_t* e, int* keyModQt) {
    return KKeyServer_XcbKeyPressEventToQt2(e, keyModQt);
}
#endif

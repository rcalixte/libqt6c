#include "libkdesktopfileaction.hpp"
#include "libkdesktopfileaction.h"

KDesktopFileAction* k_desktopfileaction_new() {
    return KDesktopFileAction_new();
}

KDesktopFileAction* k_desktopfileaction_new2(const char* name, const char* text, const char* icon, const char* exec, const char* desktopFilePath) {
    return KDesktopFileAction_new2(qstring(name), qstring(text), qstring(icon), qstring(exec), qstring(desktopFilePath));
}

KDesktopFileAction* k_desktopfileaction_new3(void* other) {
    return KDesktopFileAction_new3((KDesktopFileAction*)other);
}

void k_desktopfileaction_operator_assign(void* self, void* other) {
    KDesktopFileAction_OperatorAssign((KDesktopFileAction*)self, (KDesktopFileAction*)other);
}

const char* k_desktopfileaction_actions_key(void* self) {
    libqt_string _str = KDesktopFileAction_ActionsKey((KDesktopFileAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfileaction_desktop_file_path(void* self) {
    libqt_string _str = KDesktopFileAction_DesktopFilePath((KDesktopFileAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfileaction_name(void* self) {
    libqt_string _str = KDesktopFileAction_Name((KDesktopFileAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfileaction_icon(void* self) {
    libqt_string _str = KDesktopFileAction_Icon((KDesktopFileAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfileaction_exec(void* self) {
    libqt_string _str = KDesktopFileAction_Exec((KDesktopFileAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_desktopfileaction_is_separator(void* self) {
    return KDesktopFileAction_IsSeparator((KDesktopFileAction*)self);
}

void k_desktopfileaction_delete(void* self) {
    KDesktopFileAction_Delete((KDesktopFileAction*)(self));
}

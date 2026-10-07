#include "../libqrect.hpp"
#include "libkwindowinfo.hpp"
#include "libkwindowinfo.h"

KWindowInfo* k_windowinfo_new(const void* param1) {
    return KWindowInfo_New((KWindowInfo*)param1);
}

bool k_windowinfo_valid(const void* self) {
    return KWindowInfo_Valid((KWindowInfo*)self);
}

uintptr_t k_windowinfo_win(const void* self) {
    return KWindowInfo_Win((KWindowInfo*)self);
}

bool k_windowinfo_is_minimized(const void* self) {
    return KWindowInfo_IsMinimized((KWindowInfo*)self);
}

NETExtendedStrut* k_windowinfo_extended_strut(const void* self) {
    return KWindowInfo_ExtendedStrut((KWindowInfo*)self);
}

const char* k_windowinfo_visible_name(const void* self) {
    libqt_string _str = KWindowInfo_VisibleName((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_visible_name_with_state(const void* self) {
    libqt_string _str = KWindowInfo_VisibleNameWithState((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_name(const void* self) {
    libqt_string _str = KWindowInfo_Name((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_visible_icon_name(const void* self) {
    libqt_string _str = KWindowInfo_VisibleIconName((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_visible_icon_name_with_state(const void* self) {
    libqt_string _str = KWindowInfo_VisibleIconNameWithState((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_icon_name(const void* self) {
    libqt_string _str = KWindowInfo_IconName((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_windowinfo_is_on_current_desktop(const void* self) {
    return KWindowInfo_IsOnCurrentDesktop((KWindowInfo*)self);
}

bool k_windowinfo_is_on_desktop(const void* self, int desktop) {
    return KWindowInfo_IsOnDesktop((KWindowInfo*)self, desktop);
}

bool k_windowinfo_on_all_desktops(const void* self) {
    return KWindowInfo_OnAllDesktops((KWindowInfo*)self);
}

int32_t k_windowinfo_desktop(const void* self) {
    return KWindowInfo_Desktop((KWindowInfo*)self);
}

const char** k_windowinfo_activities(const void* self) {
    libqt_list _arr = KWindowInfo_Activities((KWindowInfo*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_windowinfo_activities\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QRect* k_windowinfo_geometry(const void* self) {
    return KWindowInfo_Geometry((KWindowInfo*)self);
}

QRect* k_windowinfo_frame_geometry(const void* self) {
    return KWindowInfo_FrameGeometry((KWindowInfo*)self);
}

uintptr_t k_windowinfo_transient_for(const void* self) {
    return KWindowInfo_TransientFor((KWindowInfo*)self);
}

uintptr_t k_windowinfo_group_leader(const void* self) {
    return KWindowInfo_GroupLeader((KWindowInfo*)self);
}

const char* k_windowinfo_window_class_class(const void* self) {
    libqt_string _str = KWindowInfo_WindowClassClass((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_window_class_name(const void* self) {
    libqt_string _str = KWindowInfo_WindowClassName((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_window_role(const void* self) {
    libqt_string _str = KWindowInfo_WindowRole((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_client_machine(const void* self) {
    libqt_string _str = KWindowInfo_ClientMachine((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_desktop_file_name(const void* self) {
    libqt_string _str = KWindowInfo_DesktopFileName((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_gtk_application_id(const void* self) {
    libqt_string _str = KWindowInfo_GtkApplicationId((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_windowinfo_pid(const void* self) {
    return KWindowInfo_Pid((KWindowInfo*)self);
}

const char* k_windowinfo_application_menu_service_name(const void* self) {
    libqt_string _str = KWindowInfo_ApplicationMenuServiceName((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinfo_application_menu_object_path(const void* self) {
    libqt_string _str = KWindowInfo_ApplicationMenuObjectPath((KWindowInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_windowinfo_operator_assign(void* self, const void* param1) {
    KWindowInfo_OperatorAssign((KWindowInfo*)self, (KWindowInfo*)param1);
}

bool k_windowinfo_valid1(const void* self, bool withdrawn_is_valid) {
    return KWindowInfo_Valid1((KWindowInfo*)self, withdrawn_is_valid);
}

void k_windowinfo_delete(void* self) {
    KWindowInfo_Delete((KWindowInfo*)(self));
}

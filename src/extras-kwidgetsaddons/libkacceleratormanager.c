#include "../libqwidget.hpp"
#include "libkacceleratormanager.hpp"
#include "libkacceleratormanager.h"

KAcceleratorManager* k_acceleratormanager_new(void* other) {
    return KAcceleratorManager_new((KAcceleratorManager*)other);
}

KAcceleratorManager* k_acceleratormanager_new2(void* other) {
    return KAcceleratorManager_new2((KAcceleratorManager*)other);
}

void k_acceleratormanager_copy_assign(void* self, void* other) {
    KAcceleratorManager_CopyAssign((KAcceleratorManager*)self, (KAcceleratorManager*)other);
}

void k_acceleratormanager_move_assign(void* self, void* other) {
    KAcceleratorManager_MoveAssign((KAcceleratorManager*)self, (KAcceleratorManager*)other);
}

void k_acceleratormanager_manage(void* widget) {
    KAcceleratorManager_Manage((QWidget*)widget);
}

void k_acceleratormanager_last_manage(const char* added, const char* changed, const char* removed) {
    KAcceleratorManager_LastManage(qstring(added), qstring(changed), qstring(removed));
}

void k_acceleratormanager_set_no_accel(void* widget) {
    KAcceleratorManager_SetNoAccel((QWidget*)widget);
}

void k_acceleratormanager_add_standard_action_names(const char* names[static 1]) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = (libqt_string*)malloc(names_len * sizeof(libqt_string));
    if (names_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_acceleratormanager_add_standard_action_names");
        abort();
    }
    for (size_t i = 0; i < names_len; ++i) {
        names_qstr[i] = qstring(names[i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);
    KAcceleratorManager_AddStandardActionNames(names_list);
    free(names_qstr);
}

void k_acceleratormanager_manage2(void* widget, bool programmers_mode) {
    KAcceleratorManager_Manage2((QWidget*)widget, programmers_mode);
}

void k_acceleratormanager_delete(void* self) {
    KAcceleratorManager_Delete((KAcceleratorManager*)(self));
}

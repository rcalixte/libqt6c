#include "../libqvariant.hpp"
#include "libkserviceaction.hpp"
#include "libkserviceaction.h"

KServiceAction* k_serviceaction_new() {
    return KServiceAction_new();
}

KServiceAction* k_serviceaction_new2(void* other) {
    return KServiceAction_new2((KServiceAction*)other);
}

void k_serviceaction_operator_assign(void* self, void* other) {
    KServiceAction_OperatorAssign((KServiceAction*)self, (KServiceAction*)other);
}

void k_serviceaction_set_data(void* self, void* userData) {
    KServiceAction_SetData((KServiceAction*)self, (QVariant*)userData);
}

QVariant* k_serviceaction_data(void* self) {
    return KServiceAction_Data((KServiceAction*)self);
}

const char* k_serviceaction_name(void* self) {
    libqt_string _str = KServiceAction_Name((KServiceAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_serviceaction_text(void* self) {
    libqt_string _str = KServiceAction_Text((KServiceAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_serviceaction_icon(void* self) {
    libqt_string _str = KServiceAction_Icon((KServiceAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_serviceaction_exec(void* self) {
    libqt_string _str = KServiceAction_Exec((KServiceAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_serviceaction_no_display(void* self) {
    return KServiceAction_NoDisplay((KServiceAction*)self);
}

bool k_serviceaction_is_separator(void* self) {
    return KServiceAction_IsSeparator((KServiceAction*)self);
}

void k_serviceaction_delete(void* self) {
    KServiceAction_Delete((KServiceAction*)(self));
}

#include "../xml/libqdom.hpp"
#include "libservice-type.hpp"
#include "libservice-type.h"

Accounts__ServiceType* q_accounts__servicetype_new() {
    return Accounts__ServiceType_new();
}

Accounts__ServiceType* q_accounts__servicetype_new2(void* other) {
    return Accounts__ServiceType_new2((Accounts__ServiceType*)other);
}

void q_accounts__servicetype_operator_assign(void* self, void* other) {
    Accounts__ServiceType_OperatorAssign((Accounts__ServiceType*)self, (Accounts__ServiceType*)other);
}

bool q_accounts__servicetype_is_valid(void* self) {
    return Accounts__ServiceType_IsValid((Accounts__ServiceType*)self);
}

const char* q_accounts__servicetype_name(void* self) {
    libqt_string _str = Accounts__ServiceType_Name((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__servicetype_description(void* self) {
    libqt_string _str = Accounts__ServiceType_Description((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__servicetype_display_name(void* self) {
    libqt_string _str = Accounts__ServiceType_DisplayName((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__servicetype_tr_catalog(void* self) {
    libqt_string _str = Accounts__ServiceType_TrCatalog((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__servicetype_icon_name(void* self) {
    libqt_string _str = Accounts__ServiceType_IconName((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_accounts__servicetype_has_tag(void* self, const char* tag) {
    return Accounts__ServiceType_HasTag((Accounts__ServiceType*)self, qstring(tag));
}

libqt_list /* of const char* */ q_accounts__servicetype_tags(void* self) {
    return Accounts__ServiceType_Tags((Accounts__ServiceType*)self);
}

const QDomDocument* q_accounts__servicetype_dom_document(void* self) {
    return Accounts__ServiceType_DomDocument((Accounts__ServiceType*)self);
}

void q_accounts__servicetype_delete(void* self) {
    Accounts__ServiceType_Delete((Accounts__ServiceType*)(self));
}

#include "../xml/libqdom.hpp"
#include "libservice_type.hpp"
#include "libservice_type.h"

Accounts__ServiceType* q_accounts__servicetype_new() {
    return Accounts__ServiceType_New();
}

Accounts__ServiceType* q_accounts__servicetype_new2(const void* other) {
    return Accounts__ServiceType_New2((Accounts__ServiceType*)other);
}

void q_accounts__servicetype_operator_assign(void* self, const void* other) {
    Accounts__ServiceType_OperatorAssign((Accounts__ServiceType*)self, (Accounts__ServiceType*)other);
}

bool q_accounts__servicetype_is_valid(const void* self) {
    return Accounts__ServiceType_IsValid((Accounts__ServiceType*)self);
}

const char* q_accounts__servicetype_name(const void* self) {
    libqt_string _str = Accounts__ServiceType_Name((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__servicetype_description(const void* self) {
    libqt_string _str = Accounts__ServiceType_Description((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__servicetype_display_name(const void* self) {
    libqt_string _str = Accounts__ServiceType_DisplayName((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__servicetype_tr_catalog(const void* self) {
    libqt_string _str = Accounts__ServiceType_TrCatalog((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__servicetype_icon_name(const void* self) {
    libqt_string _str = Accounts__ServiceType_IconName((Accounts__ServiceType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_accounts__servicetype_has_tag(const void* self, const char* tag) {
    return Accounts__ServiceType_HasTag((Accounts__ServiceType*)self, qstring(tag));
}

libqt_list /* set of const char* */ q_accounts__servicetype_tags(const void* self) {
    return Accounts__ServiceType_Tags((Accounts__ServiceType*)self);
}

const QDomDocument* q_accounts__servicetype_dom_document(const void* self) {
    return Accounts__ServiceType_DomDocument((Accounts__ServiceType*)self);
}

void q_accounts__servicetype_delete(void* self) {
    Accounts__ServiceType_Delete((Accounts__ServiceType*)(self));
}

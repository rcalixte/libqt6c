#include "../xml/libqdom.hpp"
#include "libservice.hpp"
#include "libservice.h"

Accounts__Service* q_accounts__service_new() {
    return Accounts__Service_new();
}

Accounts__Service* q_accounts__service_new2(void* other) {
    return Accounts__Service_new2((Accounts__Service*)other);
}

void q_accounts__service_operator_assign(void* self, void* other) {
    Accounts__Service_OperatorAssign((Accounts__Service*)self, (Accounts__Service*)other);
}

bool q_accounts__service_is_valid(void* self) {
    return Accounts__Service_IsValid((Accounts__Service*)self);
}

const char* q_accounts__service_name(void* self) {
    libqt_string _str = Accounts__Service_Name((Accounts__Service*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__service_description(void* self) {
    libqt_string _str = Accounts__Service_Description((Accounts__Service*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__service_display_name(void* self) {
    libqt_string _str = Accounts__Service_DisplayName((Accounts__Service*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__service_tr_catalog(void* self) {
    libqt_string _str = Accounts__Service_TrCatalog((Accounts__Service*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__service_service_type(void* self) {
    libqt_string _str = Accounts__Service_ServiceType((Accounts__Service*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__service_provider(void* self) {
    libqt_string _str = Accounts__Service_Provider((Accounts__Service*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__service_icon_name(void* self) {
    libqt_string _str = Accounts__Service_IconName((Accounts__Service*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_accounts__service_has_tag(void* self, const char* tag) {
    return Accounts__Service_HasTag((Accounts__Service*)self, qstring(tag));
}

libqt_list /* of const char* */ q_accounts__service_tags(void* self) {
    return Accounts__Service_Tags((Accounts__Service*)self);
}

const QDomDocument* q_accounts__service_dom_document(void* self) {
    return Accounts__Service_DomDocument((Accounts__Service*)self);
}

void q_accounts__service_delete(void* self) {
    Accounts__Service_Delete((Accounts__Service*)(self));
}

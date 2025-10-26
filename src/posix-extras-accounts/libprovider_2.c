#include "libprovider_2.hpp"
#include "../xml/libqdom.hpp"
#include "libprovider_2.hpp"
#include "libprovider_2.h"

Accounts__Provider* q_accounts__provider_new() {
    return Accounts__Provider_new();
}

Accounts__Provider* q_accounts__provider_new2(void* other) {
    return Accounts__Provider_new2((Accounts__Provider*)other);
}

void q_accounts__provider_operator_assign(void* self, void* other) {
    Accounts__Provider_OperatorAssign((Accounts__Provider*)self, (Accounts__Provider*)other);
}

bool q_accounts__provider_is_valid(void* self) {
    return Accounts__Provider_IsValid((Accounts__Provider*)self);
}

const char* q_accounts__provider_name(void* self) {
    libqt_string _str = Accounts__Provider_Name((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_display_name(void* self) {
    libqt_string _str = Accounts__Provider_DisplayName((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_description(void* self) {
    libqt_string _str = Accounts__Provider_Description((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_plugin_name(void* self) {
    libqt_string _str = Accounts__Provider_PluginName((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_tr_catalog(void* self) {
    libqt_string _str = Accounts__Provider_TrCatalog((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_icon_name(void* self) {
    libqt_string _str = Accounts__Provider_IconName((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_domains_reg_exp(void* self) {
    libqt_string _str = Accounts__Provider_DomainsRegExp((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_accounts__provider_is_single_account(void* self) {
    return Accounts__Provider_IsSingleAccount((Accounts__Provider*)self);
}

bool q_accounts__provider_has_tag(void* self, const char* tag) {
    return Accounts__Provider_HasTag((Accounts__Provider*)self, qstring(tag));
}

libqt_list /* of const char* */ q_accounts__provider_tags(void* self) {
    return Accounts__Provider_Tags((Accounts__Provider*)self);
}

const QDomDocument* q_accounts__provider_dom_document(void* self) {
    return Accounts__Provider_DomDocument((Accounts__Provider*)self);
}

void q_accounts__provider_delete(void* self) {
    Accounts__Provider_Delete((Accounts__Provider*)(self));
}

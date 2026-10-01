#include "libprovider_2.hpp"
#include "../xml/libqdom.hpp"
#include "libprovider_2.hpp"
#include "libprovider_2.h"

Accounts__Provider* q_accounts__provider_new() {
    return Accounts__Provider_New();
}

Accounts__Provider* q_accounts__provider_new2(const void* other) {
    return Accounts__Provider_New2((Accounts__Provider*)other);
}

void q_accounts__provider_operator_assign(void* self, const void* other) {
    Accounts__Provider_OperatorAssign((Accounts__Provider*)self, (Accounts__Provider*)other);
}

bool q_accounts__provider_is_valid(const void* self) {
    return Accounts__Provider_IsValid((Accounts__Provider*)self);
}

const char* q_accounts__provider_name(const void* self) {
    libqt_string _str = Accounts__Provider_Name((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_display_name(const void* self) {
    libqt_string _str = Accounts__Provider_DisplayName((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_description(const void* self) {
    libqt_string _str = Accounts__Provider_Description((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_plugin_name(const void* self) {
    libqt_string _str = Accounts__Provider_PluginName((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_tr_catalog(const void* self) {
    libqt_string _str = Accounts__Provider_TrCatalog((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_icon_name(const void* self) {
    libqt_string _str = Accounts__Provider_IconName((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__provider_domains_reg_exp(const void* self) {
    libqt_string _str = Accounts__Provider_DomainsRegExp((Accounts__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_accounts__provider_is_single_account(const void* self) {
    return Accounts__Provider_IsSingleAccount((Accounts__Provider*)self);
}

bool q_accounts__provider_has_tag(const void* self, const char* tag) {
    return Accounts__Provider_HasTag((Accounts__Provider*)self, qstring(tag));
}

libqt_list /* set of const char* */ q_accounts__provider_tags(const void* self) {
    return Accounts__Provider_Tags((Accounts__Provider*)self);
}

const QDomDocument* q_accounts__provider_dom_document(const void* self) {
    return Accounts__Provider_DomDocument((Accounts__Provider*)self);
}

void q_accounts__provider_delete(void* self) {
    Accounts__Provider_Delete((Accounts__Provider*)(self));
}

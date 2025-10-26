#include "libservice.hpp"
#include "libapplication.hpp"
#include "libapplication.h"

Accounts__Application* q_accounts__application_new() {
    return Accounts__Application_new();
}

Accounts__Application* q_accounts__application_new2(void* other) {
    return Accounts__Application_new2((Accounts__Application*)other);
}

void q_accounts__application_operator_assign(void* self, void* other) {
    Accounts__Application_OperatorAssign((Accounts__Application*)self, (Accounts__Application*)other);
}

bool q_accounts__application_is_valid(void* self) {
    return Accounts__Application_IsValid((Accounts__Application*)self);
}

const char* q_accounts__application_name(void* self) {
    libqt_string _str = Accounts__Application_Name((Accounts__Application*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__application_display_name(void* self) {
    libqt_string _str = Accounts__Application_DisplayName((Accounts__Application*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__application_description(void* self) {
    libqt_string _str = Accounts__Application_Description((Accounts__Application*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__application_icon_name(void* self) {
    libqt_string _str = Accounts__Application_IconName((Accounts__Application*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__application_desktop_file_path(void* self) {
    libqt_string _str = Accounts__Application_DesktopFilePath((Accounts__Application*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__application_tr_catalog(void* self) {
    libqt_string _str = Accounts__Application_TrCatalog((Accounts__Application*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_accounts__application_supports_service(void* self, void* service) {
    return Accounts__Application_SupportsService((Accounts__Application*)self, (Accounts__Service*)service);
}

const char* q_accounts__application_service_usage(void* self, void* service) {
    libqt_string _str = Accounts__Application_ServiceUsage((Accounts__Application*)self, (Accounts__Service*)service);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__application_delete(void* self) {
    Accounts__Application_Delete((Accounts__Application*)(self));
}

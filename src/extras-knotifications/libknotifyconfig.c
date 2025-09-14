#include "libknotifyconfig.hpp"
#include "libknotifyconfig.h"

KNotifyConfig* k_notifyconfig_new(const char* applicationName, const char* eventId) {
    return KNotifyConfig_new(qstring(applicationName), qstring(eventId));
}

KNotifyConfig* k_notifyconfig_new2(void* other) {
    return KNotifyConfig_new2((KNotifyConfig*)other);
}

void k_notifyconfig_operator_assign(void* self, void* other) {
    KNotifyConfig_OperatorAssign((KNotifyConfig*)self, (KNotifyConfig*)other);
}

const char* k_notifyconfig_application_name(void* self) {
    libqt_string _str = KNotifyConfig_ApplicationName((KNotifyConfig*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notifyconfig_event_id(void* self) {
    libqt_string _str = KNotifyConfig_EventId((KNotifyConfig*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_notifyconfig_is_valid(void* self) {
    return KNotifyConfig_IsValid((KNotifyConfig*)self);
}

const char* k_notifyconfig_read_global_entry(void* self, const char* key) {
    libqt_string _str = KNotifyConfig_ReadGlobalEntry((KNotifyConfig*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notifyconfig_read_entry(void* self, const char* key) {
    libqt_string _str = KNotifyConfig_ReadEntry((KNotifyConfig*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notifyconfig_read_path_entry(void* self, const char* key) {
    libqt_string _str = KNotifyConfig_ReadPathEntry((KNotifyConfig*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notifyconfig_reparse_configuration() {
    KNotifyConfig_ReparseConfiguration();
}

void k_notifyconfig_reparse_single_configuration(const char* app) {
    KNotifyConfig_ReparseSingleConfiguration(qstring(app));
}

void k_notifyconfig_delete(void* self) {
    KNotifyConfig_Delete((KNotifyConfig*)(self));
}

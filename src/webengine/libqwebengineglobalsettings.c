#include "libqwebengineglobalsettings.hpp"
#include "libqwebengineglobalsettings.h"

uint8_t q_webengineglobalsettings__dnsmode_secure_mode(void* self) {
    return QWebEngineGlobalSettings__DnsMode_SecureMode((QWebEngineGlobalSettings__DnsMode*)self);
}

void q_webengineglobalsettings__dnsmode_set_secure_mode(void* self, uint8_t secureMode) {
    QWebEngineGlobalSettings__DnsMode_SetSecureMode((QWebEngineGlobalSettings__DnsMode*)self, secureMode);
}

const char** q_webengineglobalsettings__dnsmode_server_templates(void* self) {
    libqt_list serverTemplates_arr = QWebEngineGlobalSettings__DnsMode_ServerTemplates((QWebEngineGlobalSettings__DnsMode*)self);
    const libqt_string* serverTemplates_qstr = (libqt_string*)serverTemplates_arr.data.ptr;
    const char** serverTemplates_ret = (const char**)malloc((serverTemplates_arr.len + 1) * sizeof(const char*));
    if (serverTemplates_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webengineglobalsettings__dnsmode_server_templates");
        abort();
    }
    for (size_t i = 0; i < serverTemplates_arr.len; ++i) {
        serverTemplates_ret[i] = qstring_to_char(serverTemplates_qstr[i]);
    }
    serverTemplates_ret[serverTemplates_arr.len] = NULL;
    for (size_t i = 0; i < serverTemplates_arr.len; ++i) {
        libqt_string_free((libqt_string*)&serverTemplates_qstr[i]);
    }
    libqt_free(serverTemplates_arr.data.ptr);
    return serverTemplates_ret;
}

void q_webengineglobalsettings__dnsmode_set_server_templates(void* self, const char* serverTemplates[static 1]) {
    size_t serverTemplates_len = libqt_strv_length(serverTemplates);
    libqt_string* serverTemplates_qstr = (libqt_string*)malloc(serverTemplates_len * sizeof(libqt_string));
    if (serverTemplates_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webengineglobalsettings__dnsmode_set_server_templates");
        abort();
    }
    for (size_t i = 0; i < serverTemplates_len; ++i) {
        serverTemplates_qstr[i] = qstring(serverTemplates[i]);
    }
    libqt_list serverTemplates_list = qlist(serverTemplates_qstr, serverTemplates_len);
    QWebEngineGlobalSettings__DnsMode_SetServerTemplates((QWebEngineGlobalSettings__DnsMode*)self, serverTemplates_list);
    free(serverTemplates_qstr);
}

void q_webengineglobalsettings__dnsmode_delete(void* self) {
    QWebEngineGlobalSettings__DnsMode_Delete((QWebEngineGlobalSettings__DnsMode*)(self));
}

bool q_webengineglobalsettings_set_dns_mode(void* param1) {
    return QWebEngineGlobalSettings_SetDnsMode((QWebEngineGlobalSettings__DnsMode*)param1);
}

#include "libauthinfo.hpp"
#include "libkpasswdserverclient.hpp"
#include "libkpasswdserverclient.h"

KPasswdServerClient* k_passwdserverclient_new() {
    return KPasswdServerClient_new();
}

bool k_passwdserverclient_check_auth_info(void* self, void* info, long long windowId, long long usertime) {
    return KPasswdServerClient_CheckAuthInfo((KPasswdServerClient*)self, (KIO__AuthInfo*)info, windowId, usertime);
}

int32_t k_passwdserverclient_query_auth_info(void* self, void* info, const char* errorMsg, long long windowId, long long usertime) {
    return KPasswdServerClient_QueryAuthInfo((KPasswdServerClient*)self, (KIO__AuthInfo*)info, qstring(errorMsg), windowId, usertime);
}

void k_passwdserverclient_add_auth_info(void* self, void* info, long long windowId) {
    KPasswdServerClient_AddAuthInfo((KPasswdServerClient*)self, (KIO__AuthInfo*)info, windowId);
}

void k_passwdserverclient_remove_auth_info(void* self, const char* host, const char* protocol, const char* user) {
    KPasswdServerClient_RemoveAuthInfo((KPasswdServerClient*)self, qstring(host), qstring(protocol), qstring(user));
}

void k_passwdserverclient_delete(void* self) {
    KPasswdServerClient_Delete((KPasswdServerClient*)(self));
}

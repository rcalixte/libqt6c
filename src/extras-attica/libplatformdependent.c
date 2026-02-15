#include "../libqiodevice.hpp"
#include "../network/libqnetworkaccessmanager.hpp"
#include "../network/libqnetworkreply.hpp"
#include "../network/libqnetworkrequest.hpp"
#include "../libqurl.hpp"
#include "libplatformdependent.hpp"
#include "libplatformdependent.h"

libqt_list /* of QUrl* */ k_attica__platformdependent_get_default_provider_files(void* self) {
    libqt_list _arr = Attica__PlatformDependent_GetDefaultProviderFiles((Attica__PlatformDependent*)self);
    return _arr;
}

void k_attica__platformdependent_add_default_provider_file(void* self, void* url) {
    Attica__PlatformDependent_AddDefaultProviderFile((Attica__PlatformDependent*)self, (QUrl*)url);
}

void k_attica__platformdependent_remove_default_provider_file(void* self, void* url) {
    Attica__PlatformDependent_RemoveDefaultProviderFile((Attica__PlatformDependent*)self, (QUrl*)url);
}

void k_attica__platformdependent_enable_provider(void* self, void* baseUrl, bool enabled) {
    Attica__PlatformDependent_EnableProvider((Attica__PlatformDependent*)self, (QUrl*)baseUrl, enabled);
}

bool k_attica__platformdependent_is_enabled(void* self, void* baseUrl) {
    return Attica__PlatformDependent_IsEnabled((Attica__PlatformDependent*)self, (QUrl*)baseUrl);
}

bool k_attica__platformdependent_has_credentials(void* self, void* baseUrl) {
    return Attica__PlatformDependent_HasCredentials((Attica__PlatformDependent*)self, (QUrl*)baseUrl);
}

bool k_attica__platformdependent_load_credentials(void* self, void* baseUrl, const char* user, const char* password) {
    return Attica__PlatformDependent_LoadCredentials((Attica__PlatformDependent*)self, (QUrl*)baseUrl, qstring(user), qstring(password));
}

bool k_attica__platformdependent_ask_for_credentials(void* self, void* baseUrl, const char* user, const char* password) {
    return Attica__PlatformDependent_AskForCredentials((Attica__PlatformDependent*)self, (QUrl*)baseUrl, qstring(user), qstring(password));
}

bool k_attica__platformdependent_save_credentials(void* self, void* baseUrl, const char* user, const char* password) {
    return Attica__PlatformDependent_SaveCredentials((Attica__PlatformDependent*)self, (QUrl*)baseUrl, qstring(user), qstring(password));
}

QNetworkReply* k_attica__platformdependent_get(void* self, void* request) {
    return Attica__PlatformDependent_Get((Attica__PlatformDependent*)self, (QNetworkRequest*)request);
}

QNetworkReply* k_attica__platformdependent_post(void* self, void* request, void* data) {
    return Attica__PlatformDependent_Post((Attica__PlatformDependent*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* k_attica__platformdependent_post2(void* self, void* request, char* data) {
    return Attica__PlatformDependent_Post2((Attica__PlatformDependent*)self, (QNetworkRequest*)request, qstring(data));
}

void k_attica__platformdependent_set_nam(void* self, void* nam) {
    Attica__PlatformDependent_SetNam((Attica__PlatformDependent*)self, (QNetworkAccessManager*)nam);
}

QNetworkAccessManager* k_attica__platformdependent_nam(void* self) {
    return Attica__PlatformDependent_Nam((Attica__PlatformDependent*)self);
}

void k_attica__platformdependent_operator_assign(void* self, void* param1) {
    Attica__PlatformDependent_OperatorAssign((Attica__PlatformDependent*)self, (Attica__PlatformDependent*)param1);
}

void k_attica__platformdependent_delete(void* self) {
    Attica__PlatformDependent_Delete((Attica__PlatformDependent*)(self));
}

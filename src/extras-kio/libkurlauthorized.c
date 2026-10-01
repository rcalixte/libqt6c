#include "../libqurl.hpp"
#include "libkurlauthorized.hpp"
#include "libkurlauthorized.h"

bool k_urlauthorized_authorize_url_action(const char* action, const void* baseUrl, const void* destUrl) {
    return KUrlAuthorized_AuthorizeUrlAction(qstring(action), (QUrl*)baseUrl, (QUrl*)destUrl);
}

void k_urlauthorized_allow_url_action(const char* action, const void* baseUrl, const void* destUrl) {
    KUrlAuthorized_AllowUrlAction(qstring(action), (QUrl*)baseUrl, (QUrl*)destUrl);
}

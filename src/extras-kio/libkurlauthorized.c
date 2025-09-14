#include "../libqurl.hpp"
#include "libkurlauthorized.hpp"
#include "libkurlauthorized.h"

bool k_urlauthorized_authorize_url_action(const char* param1, void* param2, void* param3) {
    return KUrlAuthorized_AuthorizeUrlAction(qstring(param1), (QUrl*)param2, (QUrl*)param3);
}

void k_urlauthorized_allow_url_action(const char* param1, void* param2, void* param3) {
    KUrlAuthorized_AllowUrlAction(qstring(param1), (QUrl*)param2, (QUrl*)param3);
}

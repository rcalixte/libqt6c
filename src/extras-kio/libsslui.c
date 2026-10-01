#include "libksslerroruidata.hpp"
#include "libsslui.hpp"
#include "libsslui.h"

bool k_io__sslui_ask_ignore_ssl_errors(const void* uiData, int32_t storedRules) {
    return KIO__SslUi_AskIgnoreSslErrors((KSslErrorUiData*)uiData, storedRules);
}

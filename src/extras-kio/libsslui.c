#include "libksslerroruidata.hpp"
#include "libsslui.hpp"
#include "libsslui.h"

bool k_io__sslui_ask_ignore_ssl_errors(void* param1, int32_t param2) {
    return KIO__SslUi_AskIgnoreSslErrors((KSslErrorUiData*)param1, param2);
}

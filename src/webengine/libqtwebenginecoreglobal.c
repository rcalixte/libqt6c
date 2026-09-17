#include "../libqurl.hpp"
#include "libqtwebenginecoreglobal.hpp"
#include "libqtwebenginecoreglobal.h"

const char* q_qtwebenginecoreglobal_h_q_web_engine_version() {
    return qtwebenginecoreglobal_h_QWebEngineVersion();
}

const char* q_qtwebenginecoreglobal_h_q_web_engine_process_name() {
    return qtwebenginecoreglobal_h_QWebEngineProcessName();
}

const char* q_qtwebenginecoreglobal_h_q_web_engine_chromium_version() {
    return qtwebenginecoreglobal_h_QWebEngineChromiumVersion();
}

const char* q_qtwebenginecoreglobal_h_q_web_engine_chromium_security_patch_version() {
    return qtwebenginecoreglobal_h_QWebEngineChromiumSecurityPatchVersion();
}

const char* q_qtwebenginecoreglobal_h_q_web_engine_get_domain_and_registry(void* url) {
    libqt_string _str = qtwebenginecoreglobal_h_QWebEngineGetDomainAndRegistry((QUrl*)url);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

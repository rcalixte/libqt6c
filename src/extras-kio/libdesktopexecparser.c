#include "../extras-kservice/libkservice.hpp"
#include "../libqurl.hpp"
#include "libdesktopexecparser.hpp"
#include "libdesktopexecparser.h"

KIO__DesktopExecParser* k_io__desktopexecparser_new(void* service, libqt_list urls) {
    return KIO__DesktopExecParser_new((KService*)service, urls);
}

void k_io__desktopexecparser_set_urls_are_temp_files(void* self, bool tempFiles) {
    KIO__DesktopExecParser_SetUrlsAreTempFiles((KIO__DesktopExecParser*)self, tempFiles);
}

void k_io__desktopexecparser_set_suggested_file_name(void* self, const char* suggestedFileName) {
    KIO__DesktopExecParser_SetSuggestedFileName((KIO__DesktopExecParser*)self, qstring(suggestedFileName));
}

const char** k_io__desktopexecparser_resulting_arguments(void* self) {
    libqt_list _arr = KIO__DesktopExecParser_ResultingArguments((KIO__DesktopExecParser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__desktopexecparser_resulting_arguments");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* k_io__desktopexecparser_error_message(void* self) {
    libqt_string _str = KIO__DesktopExecParser_ErrorMessage((KIO__DesktopExecParser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_io__desktopexecparser_supported_protocols(void* service) {
    libqt_list _arr = KIO__DesktopExecParser_SupportedProtocols((KService*)service);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__desktopexecparser_supported_protocols");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

bool k_io__desktopexecparser_is_protocol_in_supported_list(void* url, const char* supportedProtocols[static 1]) {
    size_t supportedProtocols_len = libqt_strv_length(supportedProtocols);
    libqt_string* supportedProtocols_qstr = (libqt_string*)malloc(supportedProtocols_len * sizeof(libqt_string));
    if (supportedProtocols_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__desktopexecparser_is_protocol_in_supported_list");
        abort();
    }
    for (size_t i = 0; i < supportedProtocols_len; ++i) {
        supportedProtocols_qstr[i] = qstring(supportedProtocols[i]);
    }
    libqt_list supportedProtocols_list = qlist(supportedProtocols_qstr, supportedProtocols_len);
    bool _out = KIO__DesktopExecParser_IsProtocolInSupportedList((QUrl*)url, supportedProtocols_list);
    free(supportedProtocols_qstr);
    return _out;
}

bool k_io__desktopexecparser_has_scheme_handler(void* url) {
    return KIO__DesktopExecParser_HasSchemeHandler((QUrl*)url);
}

const char* k_io__desktopexecparser_executable_name(const char* execLine) {
    libqt_string _str = KIO__DesktopExecParser_ExecutableName(qstring(execLine));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__desktopexecparser_executable_path(const char* execLine) {
    libqt_string _str = KIO__DesktopExecParser_ExecutablePath(qstring(execLine));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__desktopexecparser_delete(void* self) {
    KIO__DesktopExecParser_Delete((KIO__DesktopExecParser*)(self));
}

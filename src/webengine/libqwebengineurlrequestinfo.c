#include "../libqiodevice.hpp"
#include "../libqurl.hpp"
#include "libqwebengineurlrequestinfo.hpp"
#include "libqwebengineurlrequestinfo.h"

int32_t q_webengineurlrequestinfo_resource_type(void* self) {
    return QWebEngineUrlRequestInfo_ResourceType((QWebEngineUrlRequestInfo*)self);
}

int32_t q_webengineurlrequestinfo_navigation_type(void* self) {
    return QWebEngineUrlRequestInfo_NavigationType((QWebEngineUrlRequestInfo*)self);
}

QUrl* q_webengineurlrequestinfo_request_url(void* self) {
    return QWebEngineUrlRequestInfo_RequestUrl((QWebEngineUrlRequestInfo*)self);
}

QUrl* q_webengineurlrequestinfo_first_party_url(void* self) {
    return QWebEngineUrlRequestInfo_FirstPartyUrl((QWebEngineUrlRequestInfo*)self);
}

QUrl* q_webengineurlrequestinfo_initiator(void* self) {
    return QWebEngineUrlRequestInfo_Initiator((QWebEngineUrlRequestInfo*)self);
}

char* q_webengineurlrequestinfo_request_method(void* self) {
    libqt_string _str = QWebEngineUrlRequestInfo_RequestMethod((QWebEngineUrlRequestInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIODevice* q_webengineurlrequestinfo_request_body(void* self) {
    return QWebEngineUrlRequestInfo_RequestBody((QWebEngineUrlRequestInfo*)self);
}

bool q_webengineurlrequestinfo_changed(void* self) {
    return QWebEngineUrlRequestInfo_Changed((QWebEngineUrlRequestInfo*)self);
}

void q_webengineurlrequestinfo_block(void* self, bool shouldBlock) {
    QWebEngineUrlRequestInfo_Block((QWebEngineUrlRequestInfo*)self, shouldBlock);
}

void q_webengineurlrequestinfo_redirect(void* self, void* url) {
    QWebEngineUrlRequestInfo_Redirect((QWebEngineUrlRequestInfo*)self, (QUrl*)url);
}

void q_webengineurlrequestinfo_set_http_header(void* self, const char* name, const char* value) {
    QWebEngineUrlRequestInfo_SetHttpHeader((QWebEngineUrlRequestInfo*)self, qstring(name), qstring(value));
}

libqt_map /* of char* to char* */ q_webengineurlrequestinfo_http_headers(void* self) {
    // Convert QHash<QByteArray,QByteArray> to libqt_map
    libqt_map _out = QWebEngineUrlRequestInfo_HttpHeaders((QWebEngineUrlRequestInfo*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in q_webengineurlrequestinfo_http_headers");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in q_webengineurlrequestinfo_http_headers");
        free(_out_keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)_out_keys[i].data;
        _ret_values[i] = (char*)_out_values[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    free(_out_keys);
    free(_out_values);
    return _ret;
}

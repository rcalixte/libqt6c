#include "../libqurl.hpp"
#include "libqwebengineurlrequestinfo.hpp"
#include "libqwebengineurlrequestinfo.h"

/// https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#resourceType)
///
/// ``` QWebEngineUrlRequestInfo* self ```
int64_t q_webengineurlrequestinfo_resource_type(void* self) {
    return QWebEngineUrlRequestInfo_ResourceType((QWebEngineUrlRequestInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#navigationType)
///
/// ``` QWebEngineUrlRequestInfo* self ```
int64_t q_webengineurlrequestinfo_navigation_type(void* self) {
    return QWebEngineUrlRequestInfo_NavigationType((QWebEngineUrlRequestInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestUrl)
///
/// ``` QWebEngineUrlRequestInfo* self ```
QUrl* q_webengineurlrequestinfo_request_url(void* self) {
    return QWebEngineUrlRequestInfo_RequestUrl((QWebEngineUrlRequestInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#firstPartyUrl)
///
/// ``` QWebEngineUrlRequestInfo* self ```
QUrl* q_webengineurlrequestinfo_first_party_url(void* self) {
    return QWebEngineUrlRequestInfo_FirstPartyUrl((QWebEngineUrlRequestInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#initiator)
///
/// ``` QWebEngineUrlRequestInfo* self ```
QUrl* q_webengineurlrequestinfo_initiator(void* self) {
    return QWebEngineUrlRequestInfo_Initiator((QWebEngineUrlRequestInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestMethod)
///
/// ``` QWebEngineUrlRequestInfo* self ```
char* q_webengineurlrequestinfo_request_method(void* self) {
    libqt_string _str = QWebEngineUrlRequestInfo_RequestMethod((QWebEngineUrlRequestInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#changed)
///
/// ``` QWebEngineUrlRequestInfo* self ```
bool q_webengineurlrequestinfo_changed(void* self) {
    return QWebEngineUrlRequestInfo_Changed((QWebEngineUrlRequestInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#block)
///
/// ``` QWebEngineUrlRequestInfo* self, bool shouldBlock ```
void q_webengineurlrequestinfo_block(void* self, bool shouldBlock) {
    QWebEngineUrlRequestInfo_Block((QWebEngineUrlRequestInfo*)self, shouldBlock);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#redirect)
///
/// ``` QWebEngineUrlRequestInfo* self, QUrl* url ```
void q_webengineurlrequestinfo_redirect(void* self, void* url) {
    QWebEngineUrlRequestInfo_Redirect((QWebEngineUrlRequestInfo*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#setHttpHeader)
///
/// ``` QWebEngineUrlRequestInfo* self, const char* name, const char* value ```
void q_webengineurlrequestinfo_set_http_header(void* self, const char* name, const char* value) {
    QWebEngineUrlRequestInfo_SetHttpHeader((QWebEngineUrlRequestInfo*)self, qstring(name), qstring(value));
}

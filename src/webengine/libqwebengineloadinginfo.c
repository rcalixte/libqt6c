#include <string.h>
#include "../libqurl.hpp"
#include "libqwebengineloadinginfo.hpp"
#include "libqwebengineloadinginfo.h"

/// https://doc.qt.io/qt-6/qwebengineloadinginfo.html

/// q_webengineloadinginfo_new constructs a new QWebEngineLoadingInfo object.
///
/// ``` QWebEngineLoadingInfo* other ```
QWebEngineLoadingInfo* q_webengineloadinginfo_new(void* other) {
    return QWebEngineLoadingInfo_new((QWebEngineLoadingInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#operator=)
///
/// ``` QWebEngineLoadingInfo* self, QWebEngineLoadingInfo* other ```
void q_webengineloadinginfo_operator_assign(void* self, void* other) {
    QWebEngineLoadingInfo_OperatorAssign((QWebEngineLoadingInfo*)self, (QWebEngineLoadingInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#url)
///
/// ``` QWebEngineLoadingInfo* self ```
QUrl* q_webengineloadinginfo_url(void* self) {
    return QWebEngineLoadingInfo_Url((QWebEngineLoadingInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#isErrorPage)
///
/// ``` QWebEngineLoadingInfo* self ```
bool q_webengineloadinginfo_is_error_page(void* self) {
    return QWebEngineLoadingInfo_IsErrorPage((QWebEngineLoadingInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#status)
///
/// ``` QWebEngineLoadingInfo* self ```
int64_t q_webengineloadinginfo_status(void* self) {
    return QWebEngineLoadingInfo_Status((QWebEngineLoadingInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorString)
///
/// ``` QWebEngineLoadingInfo* self ```
const char* q_webengineloadinginfo_error_string(void* self) {
    libqt_string _str = QWebEngineLoadingInfo_ErrorString((QWebEngineLoadingInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorDomain)
///
/// ``` QWebEngineLoadingInfo* self ```
int64_t q_webengineloadinginfo_error_domain(void* self) {
    return QWebEngineLoadingInfo_ErrorDomain((QWebEngineLoadingInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorCode)
///
/// ``` QWebEngineLoadingInfo* self ```
int32_t q_webengineloadinginfo_error_code(void* self) {
    return QWebEngineLoadingInfo_ErrorCode((QWebEngineLoadingInfo*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineLoadingInfo* self ```
void q_webengineloadinginfo_delete(void* self) {
    QWebEngineLoadingInfo_Delete((QWebEngineLoadingInfo*)(self));
}
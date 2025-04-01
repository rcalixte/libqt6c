#include <string.h>
#include "../libqurl.hpp"
#include "libqwebengineloadinginfo.hpp"
#include "libqwebengineloadinginfo.h"

QWebEngineLoadingInfo* q_webengineloadinginfo_new(void* other) {
    return QWebEngineLoadingInfo_new((QWebEngineLoadingInfo*)other);
}

void q_webengineloadinginfo_operator_assign(void* self, void* other) {
    QWebEngineLoadingInfo_OperatorAssign((QWebEngineLoadingInfo*)self, (QWebEngineLoadingInfo*)other);
}

QUrl* q_webengineloadinginfo_url(void* self) {
    return QWebEngineLoadingInfo_Url((QWebEngineLoadingInfo*)self);
}

bool q_webengineloadinginfo_is_error_page(void* self) {
    return QWebEngineLoadingInfo_IsErrorPage((QWebEngineLoadingInfo*)self);
}

int64_t q_webengineloadinginfo_status(void* self) {
    return QWebEngineLoadingInfo_Status((QWebEngineLoadingInfo*)self);
}

const char* q_webengineloadinginfo_error_string(void* self) {
    libqt_string _str = QWebEngineLoadingInfo_ErrorString((QWebEngineLoadingInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_webengineloadinginfo_error_domain(void* self) {
    return QWebEngineLoadingInfo_ErrorDomain((QWebEngineLoadingInfo*)self);
}

int32_t q_webengineloadinginfo_error_code(void* self) {
    return QWebEngineLoadingInfo_ErrorCode((QWebEngineLoadingInfo*)self);
}

void q_webengineloadinginfo_delete(void* self) {
    QWebEngineLoadingInfo_Delete((QWebEngineLoadingInfo*)(self));
}

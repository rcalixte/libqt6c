#include <string.h>
#include "../libqurl.hpp"
#include "libqwebengineregisterprotocolhandlerrequest.hpp"
#include "libqwebengineregisterprotocolhandlerrequest.h"

QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new() {
    return QWebEngineRegisterProtocolHandlerRequest_new();
}

QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new2(void* param1) {
    return QWebEngineRegisterProtocolHandlerRequest_new2((QWebEngineRegisterProtocolHandlerRequest*)param1);
}

void q_webengineregisterprotocolhandlerrequest_accept(void* self) {
    QWebEngineRegisterProtocolHandlerRequest_Accept((QWebEngineRegisterProtocolHandlerRequest*)self);
}

void q_webengineregisterprotocolhandlerrequest_reject(void* self) {
    QWebEngineRegisterProtocolHandlerRequest_Reject((QWebEngineRegisterProtocolHandlerRequest*)self);
}

QUrl* q_webengineregisterprotocolhandlerrequest_origin(void* self) {
    return QWebEngineRegisterProtocolHandlerRequest_Origin((QWebEngineRegisterProtocolHandlerRequest*)self);
}

const char* q_webengineregisterprotocolhandlerrequest_scheme(void* self) {
    libqt_string _str = QWebEngineRegisterProtocolHandlerRequest_Scheme((QWebEngineRegisterProtocolHandlerRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webengineregisterprotocolhandlerrequest_operator_equal(void* self, void* that) {
    return QWebEngineRegisterProtocolHandlerRequest_OperatorEqual((QWebEngineRegisterProtocolHandlerRequest*)self, (QWebEngineRegisterProtocolHandlerRequest*)that);
}

bool q_webengineregisterprotocolhandlerrequest_operator_not_equal(void* self, void* that) {
    return QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual((QWebEngineRegisterProtocolHandlerRequest*)self, (QWebEngineRegisterProtocolHandlerRequest*)that);
}

void q_webengineregisterprotocolhandlerrequest_delete(void* self) {
    QWebEngineRegisterProtocolHandlerRequest_Delete((QWebEngineRegisterProtocolHandlerRequest*)(self));
}

#include <string.h>
#include "../libqurl.hpp"
#include "libqwebengineregisterprotocolhandlerrequest.hpp"
#include "libqwebengineregisterprotocolhandlerrequest.h"

/// https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html

/// q_webengineregisterprotocolhandlerrequest_new constructs a new QWebEngineRegisterProtocolHandlerRequest object.
///
///
QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new() {
    return QWebEngineRegisterProtocolHandlerRequest_new();
}

/// q_webengineregisterprotocolhandlerrequest_new2 constructs a new QWebEngineRegisterProtocolHandlerRequest object.
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* param1 ```
QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new2(void* param1) {
    return QWebEngineRegisterProtocolHandlerRequest_new2((QWebEngineRegisterProtocolHandlerRequest*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#accept)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
void q_webengineregisterprotocolhandlerrequest_accept(void* self) {
    QWebEngineRegisterProtocolHandlerRequest_Accept((QWebEngineRegisterProtocolHandlerRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#reject)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
void q_webengineregisterprotocolhandlerrequest_reject(void* self) {
    QWebEngineRegisterProtocolHandlerRequest_Reject((QWebEngineRegisterProtocolHandlerRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#origin)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
QUrl* q_webengineregisterprotocolhandlerrequest_origin(void* self) {
    return QWebEngineRegisterProtocolHandlerRequest_Origin((QWebEngineRegisterProtocolHandlerRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#scheme)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
const char* q_webengineregisterprotocolhandlerrequest_scheme(void* self) {
    libqt_string _str = QWebEngineRegisterProtocolHandlerRequest_Scheme((QWebEngineRegisterProtocolHandlerRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator==)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that ```
bool q_webengineregisterprotocolhandlerrequest_operator_equal(void* self, void* that) {
    return QWebEngineRegisterProtocolHandlerRequest_OperatorEqual((QWebEngineRegisterProtocolHandlerRequest*)self, (QWebEngineRegisterProtocolHandlerRequest*)that);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineregisterprotocolhandlerrequest.html#operator!=)
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that ```
bool q_webengineregisterprotocolhandlerrequest_operator_not_equal(void* self, void* that) {
    return QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual((QWebEngineRegisterProtocolHandlerRequest*)self, (QWebEngineRegisterProtocolHandlerRequest*)that);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineRegisterProtocolHandlerRequest* self ```
void q_webengineregisterprotocolhandlerrequest_delete(void* self) {
    QWebEngineRegisterProtocolHandlerRequest_Delete((QWebEngineRegisterProtocolHandlerRequest*)(self));
}
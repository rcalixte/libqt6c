#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineRegisterProtocolHandlerRequest>
#include <qwebengineregisterprotocolhandlerrequest.h>
#include "libqwebengineregisterprotocolhandlerrequest.hpp"
#include "libqwebengineregisterprotocolhandlerrequest.hxx"

QWebEngineRegisterProtocolHandlerRequest* QWebEngineRegisterProtocolHandlerRequest_new() {
    return new QWebEngineRegisterProtocolHandlerRequest();
}

QWebEngineRegisterProtocolHandlerRequest* QWebEngineRegisterProtocolHandlerRequest_new2(QWebEngineRegisterProtocolHandlerRequest* param1) {
    return new QWebEngineRegisterProtocolHandlerRequest(*param1);
}

void QWebEngineRegisterProtocolHandlerRequest_Accept(QWebEngineRegisterProtocolHandlerRequest* self) {
    self->accept();
}

void QWebEngineRegisterProtocolHandlerRequest_Reject(QWebEngineRegisterProtocolHandlerRequest* self) {
    self->reject();
}

QUrl* QWebEngineRegisterProtocolHandlerRequest_Origin(const QWebEngineRegisterProtocolHandlerRequest* self) {
    return new QUrl(self->origin());
}

libqt_string QWebEngineRegisterProtocolHandlerRequest_Scheme(const QWebEngineRegisterProtocolHandlerRequest* self) {
    QString _ret = self->scheme();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QWebEngineRegisterProtocolHandlerRequest_OperatorEqual(const QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that) {
    return (*self == *that);
}

bool QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual(const QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that) {
    return (*self != *that);
}

void QWebEngineRegisterProtocolHandlerRequest_Delete(QWebEngineRegisterProtocolHandlerRequest* self) {
    delete self;
}

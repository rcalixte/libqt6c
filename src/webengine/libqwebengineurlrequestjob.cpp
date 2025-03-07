#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWebEngineUrlRequestJob>
#include <qwebengineurlrequestjob.h>
#include "libqwebengineurlrequestjob.hpp"
#include "libqwebengineurlrequestjob.hxx"

QMetaObject* QWebEngineUrlRequestJob_MetaObject(const QWebEngineUrlRequestJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineUrlRequestJob_Metacast(QWebEngineUrlRequestJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineUrlRequestJob_Metacall(QWebEngineUrlRequestJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineUrlRequestJob_Tr(const char* s) {
    QString _ret = QWebEngineUrlRequestJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QWebEngineUrlRequestJob_RequestUrl(const QWebEngineUrlRequestJob* self) {
    return new QUrl(self->requestUrl());
}

libqt_string QWebEngineUrlRequestJob_RequestMethod(const QWebEngineUrlRequestJob* self) {
    QByteArray _qb = self->requestMethod();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QWebEngineUrlRequestJob_Initiator(const QWebEngineUrlRequestJob* self) {
    return new QUrl(self->initiator());
}

void QWebEngineUrlRequestJob_Reply(QWebEngineUrlRequestJob* self, libqt_string contentType, QIODevice* device) {
    QByteArray contentType_QByteArray(contentType.data, contentType.len);
    self->reply(contentType_QByteArray, device);
}

void QWebEngineUrlRequestJob_Fail(QWebEngineUrlRequestJob* self, int errorVal) {
    self->fail(static_cast<QWebEngineUrlRequestJob::Error>(errorVal));
}

void QWebEngineUrlRequestJob_Redirect(QWebEngineUrlRequestJob* self, QUrl* url) {
    self->redirect(*url);
}

libqt_string QWebEngineUrlRequestJob_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineUrlRequestJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineUrlRequestJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineUrlRequestJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QWebEngineUrlRequestJob_Event(QWebEngineUrlRequestJob* self, QEvent* event) {
    return self->event(event);
}

bool QWebEngineUrlRequestJob_EventFilter(QWebEngineUrlRequestJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

void QWebEngineUrlRequestJob_Delete(QWebEngineUrlRequestJob* self) {
    delete self;
}

#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QNetworkCookie>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWebEngineCookieStore>
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebEngineCookieStore__FilterRequest
#include <qwebenginecookiestore.h>
#include "libqwebenginecookiestore.hpp"
#include "libqwebenginecookiestore.hxx"

QMetaObject* QWebEngineCookieStore_MetaObject(const QWebEngineCookieStore* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineCookieStore_Metacast(QWebEngineCookieStore* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineCookieStore_Metacall(QWebEngineCookieStore* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineCookieStore_Tr(const char* s) {
    QString _ret = QWebEngineCookieStore::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineCookieStore_SetCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
    self->setCookie(*cookie);
}

void QWebEngineCookieStore_DeleteCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
    self->deleteCookie(*cookie);
}

void QWebEngineCookieStore_DeleteSessionCookies(QWebEngineCookieStore* self) {
    self->deleteSessionCookies();
}

void QWebEngineCookieStore_DeleteAllCookies(QWebEngineCookieStore* self) {
    self->deleteAllCookies();
}

void QWebEngineCookieStore_LoadAllCookies(QWebEngineCookieStore* self) {
    self->loadAllCookies();
}

void QWebEngineCookieStore_CookieAdded(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
    self->cookieAdded(*cookie);
}

void QWebEngineCookieStore_Connect_CookieAdded(QWebEngineCookieStore* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineCookieStore*, QNetworkCookie*) = reinterpret_cast<void (*)(QWebEngineCookieStore*, QNetworkCookie*)>(slot);
    QWebEngineCookieStore::connect(self, &QWebEngineCookieStore::cookieAdded, [self, slotFunc](const QNetworkCookie& cookie) {
        const QNetworkCookie& cookie_ret = cookie;
        // Cast returned reference into pointer
        QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEngineCookieStore_CookieRemoved(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
    self->cookieRemoved(*cookie);
}

void QWebEngineCookieStore_Connect_CookieRemoved(QWebEngineCookieStore* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineCookieStore*, QNetworkCookie*) = reinterpret_cast<void (*)(QWebEngineCookieStore*, QNetworkCookie*)>(slot);
    QWebEngineCookieStore::connect(self, &QWebEngineCookieStore::cookieRemoved, [self, slotFunc](const QNetworkCookie& cookie) {
        const QNetworkCookie& cookie_ret = cookie;
        // Cast returned reference into pointer
        QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QWebEngineCookieStore_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineCookieStore::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineCookieStore_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineCookieStore::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineCookieStore_SetCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin) {
    self->setCookie(*cookie, *origin);
}

void QWebEngineCookieStore_DeleteCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin) {
    self->deleteCookie(*cookie, *origin);
}

bool QWebEngineCookieStore_Event(QWebEngineCookieStore* self, QEvent* event) {
    return self->event(event);
}

bool QWebEngineCookieStore_EventFilter(QWebEngineCookieStore* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

void QWebEngineCookieStore_Delete(QWebEngineCookieStore* self) {
    delete self;
}

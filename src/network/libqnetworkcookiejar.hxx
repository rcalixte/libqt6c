#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQNETWORKCOOKIEJAR_H
#define SRC_NETWORKC_LIBVIRTUALQNETWORKCOOKIEJAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkCookieJar so that we can call protected methods
class VirtualQNetworkCookieJar : public QNetworkCookieJar {

  public:
    // Virtual class public types (including callbacks)
    using QNetworkCookieJar_Metacall_Callback = int (*)(QNetworkCookieJar*, QMetaObject::Call, int, void**);
    using QNetworkCookieJar_CookiesForUrl_Callback = QList<QNetworkCookie> (*)(const QNetworkCookieJar*, const QUrl&);
    using QNetworkCookieJar_SetCookiesFromUrl_Callback = bool (*)(QNetworkCookieJar*, const QList<QNetworkCookie>&, const QUrl&);
    using QNetworkCookieJar_InsertCookie_Callback = bool (*)(QNetworkCookieJar*, const QNetworkCookie&);
    using QNetworkCookieJar_UpdateCookie_Callback = bool (*)(QNetworkCookieJar*, const QNetworkCookie&);
    using QNetworkCookieJar_DeleteCookie_Callback = bool (*)(QNetworkCookieJar*, const QNetworkCookie&);
    using QNetworkCookieJar_ValidateCookie_Callback = bool (*)(const QNetworkCookieJar*, const QNetworkCookie&, const QUrl&);
    using QNetworkCookieJar_Event_Callback = bool (*)(QNetworkCookieJar*, QEvent*);
    using QNetworkCookieJar_EventFilter_Callback = bool (*)(QNetworkCookieJar*, QObject*, QEvent*);
    using QNetworkCookieJar_TimerEvent_Callback = void (*)(QNetworkCookieJar*, QTimerEvent*);
    using QNetworkCookieJar_ChildEvent_Callback = void (*)(QNetworkCookieJar*, QChildEvent*);
    using QNetworkCookieJar_CustomEvent_Callback = void (*)(QNetworkCookieJar*, QEvent*);
    using QNetworkCookieJar_ConnectNotify_Callback = void (*)(QNetworkCookieJar*, const QMetaMethod&);
    using QNetworkCookieJar_DisconnectNotify_Callback = void (*)(QNetworkCookieJar*, const QMetaMethod&);
    using QNetworkCookieJar_AllCookies_Callback = QList<QNetworkCookie> (*)();
    using QNetworkCookieJar_SetAllCookies_Callback = void (*)(QNetworkCookieJar*, const QList<QNetworkCookie>&);
    using QNetworkCookieJar_Sender_Callback = QObject* (*)();
    using QNetworkCookieJar_SenderSignalIndex_Callback = int (*)();
    using QNetworkCookieJar_Receivers_Callback = int (*)(const QNetworkCookieJar*, const char*);
    using QNetworkCookieJar_IsSignalConnected_Callback = bool (*)(const QNetworkCookieJar*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QNetworkCookieJar_Metacall_Callback qnetworkcookiejar_metacall_callback = nullptr;
    QNetworkCookieJar_CookiesForUrl_Callback qnetworkcookiejar_cookiesforurl_callback = nullptr;
    QNetworkCookieJar_SetCookiesFromUrl_Callback qnetworkcookiejar_setcookiesfromurl_callback = nullptr;
    QNetworkCookieJar_InsertCookie_Callback qnetworkcookiejar_insertcookie_callback = nullptr;
    QNetworkCookieJar_UpdateCookie_Callback qnetworkcookiejar_updatecookie_callback = nullptr;
    QNetworkCookieJar_DeleteCookie_Callback qnetworkcookiejar_deletecookie_callback = nullptr;
    QNetworkCookieJar_ValidateCookie_Callback qnetworkcookiejar_validatecookie_callback = nullptr;
    QNetworkCookieJar_Event_Callback qnetworkcookiejar_event_callback = nullptr;
    QNetworkCookieJar_EventFilter_Callback qnetworkcookiejar_eventfilter_callback = nullptr;
    QNetworkCookieJar_TimerEvent_Callback qnetworkcookiejar_timerevent_callback = nullptr;
    QNetworkCookieJar_ChildEvent_Callback qnetworkcookiejar_childevent_callback = nullptr;
    QNetworkCookieJar_CustomEvent_Callback qnetworkcookiejar_customevent_callback = nullptr;
    QNetworkCookieJar_ConnectNotify_Callback qnetworkcookiejar_connectnotify_callback = nullptr;
    QNetworkCookieJar_DisconnectNotify_Callback qnetworkcookiejar_disconnectnotify_callback = nullptr;
    QNetworkCookieJar_AllCookies_Callback qnetworkcookiejar_allcookies_callback = nullptr;
    QNetworkCookieJar_SetAllCookies_Callback qnetworkcookiejar_setallcookies_callback = nullptr;
    QNetworkCookieJar_Sender_Callback qnetworkcookiejar_sender_callback = nullptr;
    QNetworkCookieJar_SenderSignalIndex_Callback qnetworkcookiejar_sendersignalindex_callback = nullptr;
    QNetworkCookieJar_Receivers_Callback qnetworkcookiejar_receivers_callback = nullptr;
    QNetworkCookieJar_IsSignalConnected_Callback qnetworkcookiejar_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qnetworkcookiejar_metacall_isbase = false;
    mutable bool qnetworkcookiejar_cookiesforurl_isbase = false;
    mutable bool qnetworkcookiejar_setcookiesfromurl_isbase = false;
    mutable bool qnetworkcookiejar_insertcookie_isbase = false;
    mutable bool qnetworkcookiejar_updatecookie_isbase = false;
    mutable bool qnetworkcookiejar_deletecookie_isbase = false;
    mutable bool qnetworkcookiejar_validatecookie_isbase = false;
    mutable bool qnetworkcookiejar_event_isbase = false;
    mutable bool qnetworkcookiejar_eventfilter_isbase = false;
    mutable bool qnetworkcookiejar_timerevent_isbase = false;
    mutable bool qnetworkcookiejar_childevent_isbase = false;
    mutable bool qnetworkcookiejar_customevent_isbase = false;
    mutable bool qnetworkcookiejar_connectnotify_isbase = false;
    mutable bool qnetworkcookiejar_disconnectnotify_isbase = false;
    mutable bool qnetworkcookiejar_allcookies_isbase = false;
    mutable bool qnetworkcookiejar_setallcookies_isbase = false;
    mutable bool qnetworkcookiejar_sender_isbase = false;
    mutable bool qnetworkcookiejar_sendersignalindex_isbase = false;
    mutable bool qnetworkcookiejar_receivers_isbase = false;
    mutable bool qnetworkcookiejar_issignalconnected_isbase = false;

  public:
    VirtualQNetworkCookieJar() : QNetworkCookieJar(){};
    VirtualQNetworkCookieJar(QObject* parent) : QNetworkCookieJar(parent){};

    ~VirtualQNetworkCookieJar() {
        qnetworkcookiejar_metacall_callback = nullptr;
        qnetworkcookiejar_cookiesforurl_callback = nullptr;
        qnetworkcookiejar_setcookiesfromurl_callback = nullptr;
        qnetworkcookiejar_insertcookie_callback = nullptr;
        qnetworkcookiejar_updatecookie_callback = nullptr;
        qnetworkcookiejar_deletecookie_callback = nullptr;
        qnetworkcookiejar_validatecookie_callback = nullptr;
        qnetworkcookiejar_event_callback = nullptr;
        qnetworkcookiejar_eventfilter_callback = nullptr;
        qnetworkcookiejar_timerevent_callback = nullptr;
        qnetworkcookiejar_childevent_callback = nullptr;
        qnetworkcookiejar_customevent_callback = nullptr;
        qnetworkcookiejar_connectnotify_callback = nullptr;
        qnetworkcookiejar_disconnectnotify_callback = nullptr;
        qnetworkcookiejar_allcookies_callback = nullptr;
        qnetworkcookiejar_setallcookies_callback = nullptr;
        qnetworkcookiejar_sender_callback = nullptr;
        qnetworkcookiejar_sendersignalindex_callback = nullptr;
        qnetworkcookiejar_receivers_callback = nullptr;
        qnetworkcookiejar_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQNetworkCookieJar_Metacall_Callback(QNetworkCookieJar_Metacall_Callback cb) { qnetworkcookiejar_metacall_callback = cb; }
    void setQNetworkCookieJar_CookiesForUrl_Callback(QNetworkCookieJar_CookiesForUrl_Callback cb) { qnetworkcookiejar_cookiesforurl_callback = cb; }
    void setQNetworkCookieJar_SetCookiesFromUrl_Callback(QNetworkCookieJar_SetCookiesFromUrl_Callback cb) { qnetworkcookiejar_setcookiesfromurl_callback = cb; }
    void setQNetworkCookieJar_InsertCookie_Callback(QNetworkCookieJar_InsertCookie_Callback cb) { qnetworkcookiejar_insertcookie_callback = cb; }
    void setQNetworkCookieJar_UpdateCookie_Callback(QNetworkCookieJar_UpdateCookie_Callback cb) { qnetworkcookiejar_updatecookie_callback = cb; }
    void setQNetworkCookieJar_DeleteCookie_Callback(QNetworkCookieJar_DeleteCookie_Callback cb) { qnetworkcookiejar_deletecookie_callback = cb; }
    void setQNetworkCookieJar_ValidateCookie_Callback(QNetworkCookieJar_ValidateCookie_Callback cb) { qnetworkcookiejar_validatecookie_callback = cb; }
    void setQNetworkCookieJar_Event_Callback(QNetworkCookieJar_Event_Callback cb) { qnetworkcookiejar_event_callback = cb; }
    void setQNetworkCookieJar_EventFilter_Callback(QNetworkCookieJar_EventFilter_Callback cb) { qnetworkcookiejar_eventfilter_callback = cb; }
    void setQNetworkCookieJar_TimerEvent_Callback(QNetworkCookieJar_TimerEvent_Callback cb) { qnetworkcookiejar_timerevent_callback = cb; }
    void setQNetworkCookieJar_ChildEvent_Callback(QNetworkCookieJar_ChildEvent_Callback cb) { qnetworkcookiejar_childevent_callback = cb; }
    void setQNetworkCookieJar_CustomEvent_Callback(QNetworkCookieJar_CustomEvent_Callback cb) { qnetworkcookiejar_customevent_callback = cb; }
    void setQNetworkCookieJar_ConnectNotify_Callback(QNetworkCookieJar_ConnectNotify_Callback cb) { qnetworkcookiejar_connectnotify_callback = cb; }
    void setQNetworkCookieJar_DisconnectNotify_Callback(QNetworkCookieJar_DisconnectNotify_Callback cb) { qnetworkcookiejar_disconnectnotify_callback = cb; }
    void setQNetworkCookieJar_AllCookies_Callback(QNetworkCookieJar_AllCookies_Callback cb) { qnetworkcookiejar_allcookies_callback = cb; }
    void setQNetworkCookieJar_SetAllCookies_Callback(QNetworkCookieJar_SetAllCookies_Callback cb) { qnetworkcookiejar_setallcookies_callback = cb; }
    void setQNetworkCookieJar_Sender_Callback(QNetworkCookieJar_Sender_Callback cb) { qnetworkcookiejar_sender_callback = cb; }
    void setQNetworkCookieJar_SenderSignalIndex_Callback(QNetworkCookieJar_SenderSignalIndex_Callback cb) { qnetworkcookiejar_sendersignalindex_callback = cb; }
    void setQNetworkCookieJar_Receivers_Callback(QNetworkCookieJar_Receivers_Callback cb) { qnetworkcookiejar_receivers_callback = cb; }
    void setQNetworkCookieJar_IsSignalConnected_Callback(QNetworkCookieJar_IsSignalConnected_Callback cb) { qnetworkcookiejar_issignalconnected_callback = cb; }

    // Base flag setters
    void setQNetworkCookieJar_Metacall_IsBase(bool value) const { qnetworkcookiejar_metacall_isbase = value; }
    void setQNetworkCookieJar_CookiesForUrl_IsBase(bool value) const { qnetworkcookiejar_cookiesforurl_isbase = value; }
    void setQNetworkCookieJar_SetCookiesFromUrl_IsBase(bool value) const { qnetworkcookiejar_setcookiesfromurl_isbase = value; }
    void setQNetworkCookieJar_InsertCookie_IsBase(bool value) const { qnetworkcookiejar_insertcookie_isbase = value; }
    void setQNetworkCookieJar_UpdateCookie_IsBase(bool value) const { qnetworkcookiejar_updatecookie_isbase = value; }
    void setQNetworkCookieJar_DeleteCookie_IsBase(bool value) const { qnetworkcookiejar_deletecookie_isbase = value; }
    void setQNetworkCookieJar_ValidateCookie_IsBase(bool value) const { qnetworkcookiejar_validatecookie_isbase = value; }
    void setQNetworkCookieJar_Event_IsBase(bool value) const { qnetworkcookiejar_event_isbase = value; }
    void setQNetworkCookieJar_EventFilter_IsBase(bool value) const { qnetworkcookiejar_eventfilter_isbase = value; }
    void setQNetworkCookieJar_TimerEvent_IsBase(bool value) const { qnetworkcookiejar_timerevent_isbase = value; }
    void setQNetworkCookieJar_ChildEvent_IsBase(bool value) const { qnetworkcookiejar_childevent_isbase = value; }
    void setQNetworkCookieJar_CustomEvent_IsBase(bool value) const { qnetworkcookiejar_customevent_isbase = value; }
    void setQNetworkCookieJar_ConnectNotify_IsBase(bool value) const { qnetworkcookiejar_connectnotify_isbase = value; }
    void setQNetworkCookieJar_DisconnectNotify_IsBase(bool value) const { qnetworkcookiejar_disconnectnotify_isbase = value; }
    void setQNetworkCookieJar_AllCookies_IsBase(bool value) const { qnetworkcookiejar_allcookies_isbase = value; }
    void setQNetworkCookieJar_SetAllCookies_IsBase(bool value) const { qnetworkcookiejar_setallcookies_isbase = value; }
    void setQNetworkCookieJar_Sender_IsBase(bool value) const { qnetworkcookiejar_sender_isbase = value; }
    void setQNetworkCookieJar_SenderSignalIndex_IsBase(bool value) const { qnetworkcookiejar_sendersignalindex_isbase = value; }
    void setQNetworkCookieJar_Receivers_IsBase(bool value) const { qnetworkcookiejar_receivers_isbase = value; }
    void setQNetworkCookieJar_IsSignalConnected_IsBase(bool value) const { qnetworkcookiejar_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnetworkcookiejar_metacall_isbase) {
            qnetworkcookiejar_metacall_isbase = false;
            return QNetworkCookieJar::qt_metacall(param1, param2, param3);
        } else if (qnetworkcookiejar_metacall_callback != nullptr) {
            return qnetworkcookiejar_metacall_callback(this, param1, param2, param3);
        } else {
            return QNetworkCookieJar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QNetworkCookie> cookiesForUrl(const QUrl& url) const override {
        if (qnetworkcookiejar_cookiesforurl_isbase) {
            qnetworkcookiejar_cookiesforurl_isbase = false;
            return QNetworkCookieJar::cookiesForUrl(url);
        } else if (qnetworkcookiejar_cookiesforurl_callback != nullptr) {
            return qnetworkcookiejar_cookiesforurl_callback(this, url);
        } else {
            return QNetworkCookieJar::cookiesForUrl(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setCookiesFromUrl(const QList<QNetworkCookie>& cookieList, const QUrl& url) override {
        if (qnetworkcookiejar_setcookiesfromurl_isbase) {
            qnetworkcookiejar_setcookiesfromurl_isbase = false;
            return QNetworkCookieJar::setCookiesFromUrl(cookieList, url);
        } else if (qnetworkcookiejar_setcookiesfromurl_callback != nullptr) {
            return qnetworkcookiejar_setcookiesfromurl_callback(this, cookieList, url);
        } else {
            return QNetworkCookieJar::setCookiesFromUrl(cookieList, url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertCookie(const QNetworkCookie& cookie) override {
        if (qnetworkcookiejar_insertcookie_isbase) {
            qnetworkcookiejar_insertcookie_isbase = false;
            return QNetworkCookieJar::insertCookie(cookie);
        } else if (qnetworkcookiejar_insertcookie_callback != nullptr) {
            return qnetworkcookiejar_insertcookie_callback(this, cookie);
        } else {
            return QNetworkCookieJar::insertCookie(cookie);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool updateCookie(const QNetworkCookie& cookie) override {
        if (qnetworkcookiejar_updatecookie_isbase) {
            qnetworkcookiejar_updatecookie_isbase = false;
            return QNetworkCookieJar::updateCookie(cookie);
        } else if (qnetworkcookiejar_updatecookie_callback != nullptr) {
            return qnetworkcookiejar_updatecookie_callback(this, cookie);
        } else {
            return QNetworkCookieJar::updateCookie(cookie);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool deleteCookie(const QNetworkCookie& cookie) override {
        if (qnetworkcookiejar_deletecookie_isbase) {
            qnetworkcookiejar_deletecookie_isbase = false;
            return QNetworkCookieJar::deleteCookie(cookie);
        } else if (qnetworkcookiejar_deletecookie_callback != nullptr) {
            return qnetworkcookiejar_deletecookie_callback(this, cookie);
        } else {
            return QNetworkCookieJar::deleteCookie(cookie);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool validateCookie(const QNetworkCookie& cookie, const QUrl& url) const override {
        if (qnetworkcookiejar_validatecookie_isbase) {
            qnetworkcookiejar_validatecookie_isbase = false;
            return QNetworkCookieJar::validateCookie(cookie, url);
        } else if (qnetworkcookiejar_validatecookie_callback != nullptr) {
            return qnetworkcookiejar_validatecookie_callback(this, cookie, url);
        } else {
            return QNetworkCookieJar::validateCookie(cookie, url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnetworkcookiejar_event_isbase) {
            qnetworkcookiejar_event_isbase = false;
            return QNetworkCookieJar::event(event);
        } else if (qnetworkcookiejar_event_callback != nullptr) {
            return qnetworkcookiejar_event_callback(this, event);
        } else {
            return QNetworkCookieJar::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnetworkcookiejar_eventfilter_isbase) {
            qnetworkcookiejar_eventfilter_isbase = false;
            return QNetworkCookieJar::eventFilter(watched, event);
        } else if (qnetworkcookiejar_eventfilter_callback != nullptr) {
            return qnetworkcookiejar_eventfilter_callback(this, watched, event);
        } else {
            return QNetworkCookieJar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnetworkcookiejar_timerevent_isbase) {
            qnetworkcookiejar_timerevent_isbase = false;
            QNetworkCookieJar::timerEvent(event);
        } else if (qnetworkcookiejar_timerevent_callback != nullptr) {
            qnetworkcookiejar_timerevent_callback(this, event);
        } else {
            QNetworkCookieJar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnetworkcookiejar_childevent_isbase) {
            qnetworkcookiejar_childevent_isbase = false;
            QNetworkCookieJar::childEvent(event);
        } else if (qnetworkcookiejar_childevent_callback != nullptr) {
            qnetworkcookiejar_childevent_callback(this, event);
        } else {
            QNetworkCookieJar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnetworkcookiejar_customevent_isbase) {
            qnetworkcookiejar_customevent_isbase = false;
            QNetworkCookieJar::customEvent(event);
        } else if (qnetworkcookiejar_customevent_callback != nullptr) {
            qnetworkcookiejar_customevent_callback(this, event);
        } else {
            QNetworkCookieJar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnetworkcookiejar_connectnotify_isbase) {
            qnetworkcookiejar_connectnotify_isbase = false;
            QNetworkCookieJar::connectNotify(signal);
        } else if (qnetworkcookiejar_connectnotify_callback != nullptr) {
            qnetworkcookiejar_connectnotify_callback(this, signal);
        } else {
            QNetworkCookieJar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnetworkcookiejar_disconnectnotify_isbase) {
            qnetworkcookiejar_disconnectnotify_isbase = false;
            QNetworkCookieJar::disconnectNotify(signal);
        } else if (qnetworkcookiejar_disconnectnotify_callback != nullptr) {
            qnetworkcookiejar_disconnectnotify_callback(this, signal);
        } else {
            QNetworkCookieJar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QNetworkCookie> allCookies() const {
        if (qnetworkcookiejar_allcookies_isbase) {
            qnetworkcookiejar_allcookies_isbase = false;
            return QNetworkCookieJar::allCookies();
        } else if (qnetworkcookiejar_allcookies_callback != nullptr) {
            return qnetworkcookiejar_allcookies_callback();
        } else {
            return QNetworkCookieJar::allCookies();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setAllCookies(const QList<QNetworkCookie>& cookieList) {
        if (qnetworkcookiejar_setallcookies_isbase) {
            qnetworkcookiejar_setallcookies_isbase = false;
            QNetworkCookieJar::setAllCookies(cookieList);
        } else if (qnetworkcookiejar_setallcookies_callback != nullptr) {
            qnetworkcookiejar_setallcookies_callback(this, cookieList);
        } else {
            QNetworkCookieJar::setAllCookies(cookieList);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qnetworkcookiejar_sender_isbase) {
            qnetworkcookiejar_sender_isbase = false;
            return QNetworkCookieJar::sender();
        } else if (qnetworkcookiejar_sender_callback != nullptr) {
            return qnetworkcookiejar_sender_callback();
        } else {
            return QNetworkCookieJar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qnetworkcookiejar_sendersignalindex_isbase) {
            qnetworkcookiejar_sendersignalindex_isbase = false;
            return QNetworkCookieJar::senderSignalIndex();
        } else if (qnetworkcookiejar_sendersignalindex_callback != nullptr) {
            return qnetworkcookiejar_sendersignalindex_callback();
        } else {
            return QNetworkCookieJar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qnetworkcookiejar_receivers_isbase) {
            qnetworkcookiejar_receivers_isbase = false;
            return QNetworkCookieJar::receivers(signal);
        } else if (qnetworkcookiejar_receivers_callback != nullptr) {
            return qnetworkcookiejar_receivers_callback(this, signal);
        } else {
            return QNetworkCookieJar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qnetworkcookiejar_issignalconnected_isbase) {
            qnetworkcookiejar_issignalconnected_isbase = false;
            return QNetworkCookieJar::isSignalConnected(signal);
        } else if (qnetworkcookiejar_issignalconnected_callback != nullptr) {
            return qnetworkcookiejar_issignalconnected_callback(this, signal);
        } else {
            return QNetworkCookieJar::isSignalConnected(signal);
        }
    }
};

#endif

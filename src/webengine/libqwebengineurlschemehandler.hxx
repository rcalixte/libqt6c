#pragma once
#ifndef SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEURLSCHEMEHANDLER_H
#define SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEURLSCHEMEHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEngineUrlSchemeHandler so that we can call protected methods
class VirtualQWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler {

  public:
    // Virtual class public types (including callbacks)
    using QWebEngineUrlSchemeHandler_Metacall_Callback = int (*)(QWebEngineUrlSchemeHandler*, QMetaObject::Call, int, void**);
    using QWebEngineUrlSchemeHandler_RequestStarted_Callback = void (*)(QWebEngineUrlSchemeHandler*, QWebEngineUrlRequestJob*);
    using QWebEngineUrlSchemeHandler_Event_Callback = bool (*)(QWebEngineUrlSchemeHandler*, QEvent*);
    using QWebEngineUrlSchemeHandler_EventFilter_Callback = bool (*)(QWebEngineUrlSchemeHandler*, QObject*, QEvent*);
    using QWebEngineUrlSchemeHandler_TimerEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QTimerEvent*);
    using QWebEngineUrlSchemeHandler_ChildEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QChildEvent*);
    using QWebEngineUrlSchemeHandler_CustomEvent_Callback = void (*)(QWebEngineUrlSchemeHandler*, QEvent*);
    using QWebEngineUrlSchemeHandler_ConnectNotify_Callback = void (*)(QWebEngineUrlSchemeHandler*, const QMetaMethod&);
    using QWebEngineUrlSchemeHandler_DisconnectNotify_Callback = void (*)(QWebEngineUrlSchemeHandler*, const QMetaMethod&);
    using QWebEngineUrlSchemeHandler_Sender_Callback = QObject* (*)();
    using QWebEngineUrlSchemeHandler_SenderSignalIndex_Callback = int (*)();
    using QWebEngineUrlSchemeHandler_Receivers_Callback = int (*)(const QWebEngineUrlSchemeHandler*, const char*);
    using QWebEngineUrlSchemeHandler_IsSignalConnected_Callback = bool (*)(const QWebEngineUrlSchemeHandler*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QWebEngineUrlSchemeHandler_Metacall_Callback qwebengineurlschemehandler_metacall_callback = nullptr;
    QWebEngineUrlSchemeHandler_RequestStarted_Callback qwebengineurlschemehandler_requeststarted_callback = nullptr;
    QWebEngineUrlSchemeHandler_Event_Callback qwebengineurlschemehandler_event_callback = nullptr;
    QWebEngineUrlSchemeHandler_EventFilter_Callback qwebengineurlschemehandler_eventfilter_callback = nullptr;
    QWebEngineUrlSchemeHandler_TimerEvent_Callback qwebengineurlschemehandler_timerevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_ChildEvent_Callback qwebengineurlschemehandler_childevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_CustomEvent_Callback qwebengineurlschemehandler_customevent_callback = nullptr;
    QWebEngineUrlSchemeHandler_ConnectNotify_Callback qwebengineurlschemehandler_connectnotify_callback = nullptr;
    QWebEngineUrlSchemeHandler_DisconnectNotify_Callback qwebengineurlschemehandler_disconnectnotify_callback = nullptr;
    QWebEngineUrlSchemeHandler_Sender_Callback qwebengineurlschemehandler_sender_callback = nullptr;
    QWebEngineUrlSchemeHandler_SenderSignalIndex_Callback qwebengineurlschemehandler_sendersignalindex_callback = nullptr;
    QWebEngineUrlSchemeHandler_Receivers_Callback qwebengineurlschemehandler_receivers_callback = nullptr;
    QWebEngineUrlSchemeHandler_IsSignalConnected_Callback qwebengineurlschemehandler_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebengineurlschemehandler_metacall_isbase = false;
    mutable bool qwebengineurlschemehandler_requeststarted_isbase = false;
    mutable bool qwebengineurlschemehandler_event_isbase = false;
    mutable bool qwebengineurlschemehandler_eventfilter_isbase = false;
    mutable bool qwebengineurlschemehandler_timerevent_isbase = false;
    mutable bool qwebengineurlschemehandler_childevent_isbase = false;
    mutable bool qwebengineurlschemehandler_customevent_isbase = false;
    mutable bool qwebengineurlschemehandler_connectnotify_isbase = false;
    mutable bool qwebengineurlschemehandler_disconnectnotify_isbase = false;
    mutable bool qwebengineurlschemehandler_sender_isbase = false;
    mutable bool qwebengineurlschemehandler_sendersignalindex_isbase = false;
    mutable bool qwebengineurlschemehandler_receivers_isbase = false;
    mutable bool qwebengineurlschemehandler_issignalconnected_isbase = false;

  public:
    VirtualQWebEngineUrlSchemeHandler() : QWebEngineUrlSchemeHandler(){};
    VirtualQWebEngineUrlSchemeHandler(QObject* parent) : QWebEngineUrlSchemeHandler(parent){};

    ~VirtualQWebEngineUrlSchemeHandler() {
        qwebengineurlschemehandler_metacall_callback = nullptr;
        qwebengineurlschemehandler_requeststarted_callback = nullptr;
        qwebengineurlschemehandler_event_callback = nullptr;
        qwebengineurlschemehandler_eventfilter_callback = nullptr;
        qwebengineurlschemehandler_timerevent_callback = nullptr;
        qwebengineurlschemehandler_childevent_callback = nullptr;
        qwebengineurlschemehandler_customevent_callback = nullptr;
        qwebengineurlschemehandler_connectnotify_callback = nullptr;
        qwebengineurlschemehandler_disconnectnotify_callback = nullptr;
        qwebengineurlschemehandler_sender_callback = nullptr;
        qwebengineurlschemehandler_sendersignalindex_callback = nullptr;
        qwebengineurlschemehandler_receivers_callback = nullptr;
        qwebengineurlschemehandler_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQWebEngineUrlSchemeHandler_Metacall_Callback(QWebEngineUrlSchemeHandler_Metacall_Callback cb) { qwebengineurlschemehandler_metacall_callback = cb; }
    void setQWebEngineUrlSchemeHandler_RequestStarted_Callback(QWebEngineUrlSchemeHandler_RequestStarted_Callback cb) { qwebengineurlschemehandler_requeststarted_callback = cb; }
    void setQWebEngineUrlSchemeHandler_Event_Callback(QWebEngineUrlSchemeHandler_Event_Callback cb) { qwebengineurlschemehandler_event_callback = cb; }
    void setQWebEngineUrlSchemeHandler_EventFilter_Callback(QWebEngineUrlSchemeHandler_EventFilter_Callback cb) { qwebengineurlschemehandler_eventfilter_callback = cb; }
    void setQWebEngineUrlSchemeHandler_TimerEvent_Callback(QWebEngineUrlSchemeHandler_TimerEvent_Callback cb) { qwebengineurlschemehandler_timerevent_callback = cb; }
    void setQWebEngineUrlSchemeHandler_ChildEvent_Callback(QWebEngineUrlSchemeHandler_ChildEvent_Callback cb) { qwebengineurlschemehandler_childevent_callback = cb; }
    void setQWebEngineUrlSchemeHandler_CustomEvent_Callback(QWebEngineUrlSchemeHandler_CustomEvent_Callback cb) { qwebengineurlschemehandler_customevent_callback = cb; }
    void setQWebEngineUrlSchemeHandler_ConnectNotify_Callback(QWebEngineUrlSchemeHandler_ConnectNotify_Callback cb) { qwebengineurlschemehandler_connectnotify_callback = cb; }
    void setQWebEngineUrlSchemeHandler_DisconnectNotify_Callback(QWebEngineUrlSchemeHandler_DisconnectNotify_Callback cb) { qwebengineurlschemehandler_disconnectnotify_callback = cb; }
    void setQWebEngineUrlSchemeHandler_Sender_Callback(QWebEngineUrlSchemeHandler_Sender_Callback cb) { qwebengineurlschemehandler_sender_callback = cb; }
    void setQWebEngineUrlSchemeHandler_SenderSignalIndex_Callback(QWebEngineUrlSchemeHandler_SenderSignalIndex_Callback cb) { qwebengineurlschemehandler_sendersignalindex_callback = cb; }
    void setQWebEngineUrlSchemeHandler_Receivers_Callback(QWebEngineUrlSchemeHandler_Receivers_Callback cb) { qwebengineurlschemehandler_receivers_callback = cb; }
    void setQWebEngineUrlSchemeHandler_IsSignalConnected_Callback(QWebEngineUrlSchemeHandler_IsSignalConnected_Callback cb) { qwebengineurlschemehandler_issignalconnected_callback = cb; }

    // Base flag setters
    void setQWebEngineUrlSchemeHandler_Metacall_IsBase(bool value) const { qwebengineurlschemehandler_metacall_isbase = value; }
    void setQWebEngineUrlSchemeHandler_RequestStarted_IsBase(bool value) const { qwebengineurlschemehandler_requeststarted_isbase = value; }
    void setQWebEngineUrlSchemeHandler_Event_IsBase(bool value) const { qwebengineurlschemehandler_event_isbase = value; }
    void setQWebEngineUrlSchemeHandler_EventFilter_IsBase(bool value) const { qwebengineurlschemehandler_eventfilter_isbase = value; }
    void setQWebEngineUrlSchemeHandler_TimerEvent_IsBase(bool value) const { qwebengineurlschemehandler_timerevent_isbase = value; }
    void setQWebEngineUrlSchemeHandler_ChildEvent_IsBase(bool value) const { qwebengineurlschemehandler_childevent_isbase = value; }
    void setQWebEngineUrlSchemeHandler_CustomEvent_IsBase(bool value) const { qwebengineurlschemehandler_customevent_isbase = value; }
    void setQWebEngineUrlSchemeHandler_ConnectNotify_IsBase(bool value) const { qwebengineurlschemehandler_connectnotify_isbase = value; }
    void setQWebEngineUrlSchemeHandler_DisconnectNotify_IsBase(bool value) const { qwebengineurlschemehandler_disconnectnotify_isbase = value; }
    void setQWebEngineUrlSchemeHandler_Sender_IsBase(bool value) const { qwebengineurlschemehandler_sender_isbase = value; }
    void setQWebEngineUrlSchemeHandler_SenderSignalIndex_IsBase(bool value) const { qwebengineurlschemehandler_sendersignalindex_isbase = value; }
    void setQWebEngineUrlSchemeHandler_Receivers_IsBase(bool value) const { qwebengineurlschemehandler_receivers_isbase = value; }
    void setQWebEngineUrlSchemeHandler_IsSignalConnected_IsBase(bool value) const { qwebengineurlschemehandler_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebengineurlschemehandler_metacall_isbase) {
            qwebengineurlschemehandler_metacall_isbase = false;
            return QWebEngineUrlSchemeHandler::qt_metacall(param1, param2, param3);
        } else if (qwebengineurlschemehandler_metacall_callback != nullptr) {
            return qwebengineurlschemehandler_metacall_callback(this, param1, param2, param3);
        } else {
            return QWebEngineUrlSchemeHandler::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestStarted(QWebEngineUrlRequestJob* param1) override {
        qwebengineurlschemehandler_requeststarted_callback(this, param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebengineurlschemehandler_event_isbase) {
            qwebengineurlschemehandler_event_isbase = false;
            return QWebEngineUrlSchemeHandler::event(event);
        } else if (qwebengineurlschemehandler_event_callback != nullptr) {
            return qwebengineurlschemehandler_event_callback(this, event);
        } else {
            return QWebEngineUrlSchemeHandler::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebengineurlschemehandler_eventfilter_isbase) {
            qwebengineurlschemehandler_eventfilter_isbase = false;
            return QWebEngineUrlSchemeHandler::eventFilter(watched, event);
        } else if (qwebengineurlschemehandler_eventfilter_callback != nullptr) {
            return qwebengineurlschemehandler_eventfilter_callback(this, watched, event);
        } else {
            return QWebEngineUrlSchemeHandler::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebengineurlschemehandler_timerevent_isbase) {
            qwebengineurlschemehandler_timerevent_isbase = false;
            QWebEngineUrlSchemeHandler::timerEvent(event);
        } else if (qwebengineurlschemehandler_timerevent_callback != nullptr) {
            qwebengineurlschemehandler_timerevent_callback(this, event);
        } else {
            QWebEngineUrlSchemeHandler::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebengineurlschemehandler_childevent_isbase) {
            qwebengineurlschemehandler_childevent_isbase = false;
            QWebEngineUrlSchemeHandler::childEvent(event);
        } else if (qwebengineurlschemehandler_childevent_callback != nullptr) {
            qwebengineurlschemehandler_childevent_callback(this, event);
        } else {
            QWebEngineUrlSchemeHandler::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebengineurlschemehandler_customevent_isbase) {
            qwebengineurlschemehandler_customevent_isbase = false;
            QWebEngineUrlSchemeHandler::customEvent(event);
        } else if (qwebengineurlschemehandler_customevent_callback != nullptr) {
            qwebengineurlschemehandler_customevent_callback(this, event);
        } else {
            QWebEngineUrlSchemeHandler::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlschemehandler_connectnotify_isbase) {
            qwebengineurlschemehandler_connectnotify_isbase = false;
            QWebEngineUrlSchemeHandler::connectNotify(signal);
        } else if (qwebengineurlschemehandler_connectnotify_callback != nullptr) {
            qwebengineurlschemehandler_connectnotify_callback(this, signal);
        } else {
            QWebEngineUrlSchemeHandler::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebengineurlschemehandler_disconnectnotify_isbase) {
            qwebengineurlschemehandler_disconnectnotify_isbase = false;
            QWebEngineUrlSchemeHandler::disconnectNotify(signal);
        } else if (qwebengineurlschemehandler_disconnectnotify_callback != nullptr) {
            qwebengineurlschemehandler_disconnectnotify_callback(this, signal);
        } else {
            QWebEngineUrlSchemeHandler::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebengineurlschemehandler_sender_isbase) {
            qwebengineurlschemehandler_sender_isbase = false;
            return QWebEngineUrlSchemeHandler::sender();
        } else if (qwebengineurlschemehandler_sender_callback != nullptr) {
            return qwebengineurlschemehandler_sender_callback();
        } else {
            return QWebEngineUrlSchemeHandler::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebengineurlschemehandler_sendersignalindex_isbase) {
            qwebengineurlschemehandler_sendersignalindex_isbase = false;
            return QWebEngineUrlSchemeHandler::senderSignalIndex();
        } else if (qwebengineurlschemehandler_sendersignalindex_callback != nullptr) {
            return qwebengineurlschemehandler_sendersignalindex_callback();
        } else {
            return QWebEngineUrlSchemeHandler::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebengineurlschemehandler_receivers_isbase) {
            qwebengineurlschemehandler_receivers_isbase = false;
            return QWebEngineUrlSchemeHandler::receivers(signal);
        } else if (qwebengineurlschemehandler_receivers_callback != nullptr) {
            return qwebengineurlschemehandler_receivers_callback(this, signal);
        } else {
            return QWebEngineUrlSchemeHandler::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebengineurlschemehandler_issignalconnected_isbase) {
            qwebengineurlschemehandler_issignalconnected_isbase = false;
            return QWebEngineUrlSchemeHandler::isSignalConnected(signal);
        } else if (qwebengineurlschemehandler_issignalconnected_callback != nullptr) {
            return qwebengineurlschemehandler_issignalconnected_callback(this, signal);
        } else {
            return QWebEngineUrlSchemeHandler::isSignalConnected(signal);
        }
    }
};

#endif

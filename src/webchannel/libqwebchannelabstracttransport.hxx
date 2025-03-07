#pragma once
#ifndef SRC_WEBCHANNELC_LIBVIRTUALQWEBCHANNELABSTRACTTRANSPORT_H
#define SRC_WEBCHANNELC_LIBVIRTUALQWEBCHANNELABSTRACTTRANSPORT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebChannelAbstractTransport so that we can call protected methods
class VirtualQWebChannelAbstractTransport : public QWebChannelAbstractTransport {

  public:
    // Virtual class public types (including callbacks)
    using QWebChannelAbstractTransport_Metacall_Callback = int (*)(QWebChannelAbstractTransport*, QMetaObject::Call, int, void**);
    using QWebChannelAbstractTransport_SendMessage_Callback = void (*)(QWebChannelAbstractTransport*, const QJsonObject&);
    using QWebChannelAbstractTransport_Event_Callback = bool (*)(QWebChannelAbstractTransport*, QEvent*);
    using QWebChannelAbstractTransport_EventFilter_Callback = bool (*)(QWebChannelAbstractTransport*, QObject*, QEvent*);
    using QWebChannelAbstractTransport_TimerEvent_Callback = void (*)(QWebChannelAbstractTransport*, QTimerEvent*);
    using QWebChannelAbstractTransport_ChildEvent_Callback = void (*)(QWebChannelAbstractTransport*, QChildEvent*);
    using QWebChannelAbstractTransport_CustomEvent_Callback = void (*)(QWebChannelAbstractTransport*, QEvent*);
    using QWebChannelAbstractTransport_ConnectNotify_Callback = void (*)(QWebChannelAbstractTransport*, const QMetaMethod&);
    using QWebChannelAbstractTransport_DisconnectNotify_Callback = void (*)(QWebChannelAbstractTransport*, const QMetaMethod&);
    using QWebChannelAbstractTransport_Sender_Callback = QObject* (*)();
    using QWebChannelAbstractTransport_SenderSignalIndex_Callback = int (*)();
    using QWebChannelAbstractTransport_Receivers_Callback = int (*)(const QWebChannelAbstractTransport*, const char*);
    using QWebChannelAbstractTransport_IsSignalConnected_Callback = bool (*)(const QWebChannelAbstractTransport*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QWebChannelAbstractTransport_Metacall_Callback qwebchannelabstracttransport_metacall_callback = nullptr;
    QWebChannelAbstractTransport_SendMessage_Callback qwebchannelabstracttransport_sendmessage_callback = nullptr;
    QWebChannelAbstractTransport_Event_Callback qwebchannelabstracttransport_event_callback = nullptr;
    QWebChannelAbstractTransport_EventFilter_Callback qwebchannelabstracttransport_eventfilter_callback = nullptr;
    QWebChannelAbstractTransport_TimerEvent_Callback qwebchannelabstracttransport_timerevent_callback = nullptr;
    QWebChannelAbstractTransport_ChildEvent_Callback qwebchannelabstracttransport_childevent_callback = nullptr;
    QWebChannelAbstractTransport_CustomEvent_Callback qwebchannelabstracttransport_customevent_callback = nullptr;
    QWebChannelAbstractTransport_ConnectNotify_Callback qwebchannelabstracttransport_connectnotify_callback = nullptr;
    QWebChannelAbstractTransport_DisconnectNotify_Callback qwebchannelabstracttransport_disconnectnotify_callback = nullptr;
    QWebChannelAbstractTransport_Sender_Callback qwebchannelabstracttransport_sender_callback = nullptr;
    QWebChannelAbstractTransport_SenderSignalIndex_Callback qwebchannelabstracttransport_sendersignalindex_callback = nullptr;
    QWebChannelAbstractTransport_Receivers_Callback qwebchannelabstracttransport_receivers_callback = nullptr;
    QWebChannelAbstractTransport_IsSignalConnected_Callback qwebchannelabstracttransport_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebchannelabstracttransport_metacall_isbase = false;
    mutable bool qwebchannelabstracttransport_sendmessage_isbase = false;
    mutable bool qwebchannelabstracttransport_event_isbase = false;
    mutable bool qwebchannelabstracttransport_eventfilter_isbase = false;
    mutable bool qwebchannelabstracttransport_timerevent_isbase = false;
    mutable bool qwebchannelabstracttransport_childevent_isbase = false;
    mutable bool qwebchannelabstracttransport_customevent_isbase = false;
    mutable bool qwebchannelabstracttransport_connectnotify_isbase = false;
    mutable bool qwebchannelabstracttransport_disconnectnotify_isbase = false;
    mutable bool qwebchannelabstracttransport_sender_isbase = false;
    mutable bool qwebchannelabstracttransport_sendersignalindex_isbase = false;
    mutable bool qwebchannelabstracttransport_receivers_isbase = false;
    mutable bool qwebchannelabstracttransport_issignalconnected_isbase = false;

  public:
    VirtualQWebChannelAbstractTransport() : QWebChannelAbstractTransport(){};
    VirtualQWebChannelAbstractTransport(QObject* parent) : QWebChannelAbstractTransport(parent){};

    ~VirtualQWebChannelAbstractTransport() {
        qwebchannelabstracttransport_metacall_callback = nullptr;
        qwebchannelabstracttransport_sendmessage_callback = nullptr;
        qwebchannelabstracttransport_event_callback = nullptr;
        qwebchannelabstracttransport_eventfilter_callback = nullptr;
        qwebchannelabstracttransport_timerevent_callback = nullptr;
        qwebchannelabstracttransport_childevent_callback = nullptr;
        qwebchannelabstracttransport_customevent_callback = nullptr;
        qwebchannelabstracttransport_connectnotify_callback = nullptr;
        qwebchannelabstracttransport_disconnectnotify_callback = nullptr;
        qwebchannelabstracttransport_sender_callback = nullptr;
        qwebchannelabstracttransport_sendersignalindex_callback = nullptr;
        qwebchannelabstracttransport_receivers_callback = nullptr;
        qwebchannelabstracttransport_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQWebChannelAbstractTransport_Metacall_Callback(QWebChannelAbstractTransport_Metacall_Callback cb) { qwebchannelabstracttransport_metacall_callback = cb; }
    void setQWebChannelAbstractTransport_SendMessage_Callback(QWebChannelAbstractTransport_SendMessage_Callback cb) { qwebchannelabstracttransport_sendmessage_callback = cb; }
    void setQWebChannelAbstractTransport_Event_Callback(QWebChannelAbstractTransport_Event_Callback cb) { qwebchannelabstracttransport_event_callback = cb; }
    void setQWebChannelAbstractTransport_EventFilter_Callback(QWebChannelAbstractTransport_EventFilter_Callback cb) { qwebchannelabstracttransport_eventfilter_callback = cb; }
    void setQWebChannelAbstractTransport_TimerEvent_Callback(QWebChannelAbstractTransport_TimerEvent_Callback cb) { qwebchannelabstracttransport_timerevent_callback = cb; }
    void setQWebChannelAbstractTransport_ChildEvent_Callback(QWebChannelAbstractTransport_ChildEvent_Callback cb) { qwebchannelabstracttransport_childevent_callback = cb; }
    void setQWebChannelAbstractTransport_CustomEvent_Callback(QWebChannelAbstractTransport_CustomEvent_Callback cb) { qwebchannelabstracttransport_customevent_callback = cb; }
    void setQWebChannelAbstractTransport_ConnectNotify_Callback(QWebChannelAbstractTransport_ConnectNotify_Callback cb) { qwebchannelabstracttransport_connectnotify_callback = cb; }
    void setQWebChannelAbstractTransport_DisconnectNotify_Callback(QWebChannelAbstractTransport_DisconnectNotify_Callback cb) { qwebchannelabstracttransport_disconnectnotify_callback = cb; }
    void setQWebChannelAbstractTransport_Sender_Callback(QWebChannelAbstractTransport_Sender_Callback cb) { qwebchannelabstracttransport_sender_callback = cb; }
    void setQWebChannelAbstractTransport_SenderSignalIndex_Callback(QWebChannelAbstractTransport_SenderSignalIndex_Callback cb) { qwebchannelabstracttransport_sendersignalindex_callback = cb; }
    void setQWebChannelAbstractTransport_Receivers_Callback(QWebChannelAbstractTransport_Receivers_Callback cb) { qwebchannelabstracttransport_receivers_callback = cb; }
    void setQWebChannelAbstractTransport_IsSignalConnected_Callback(QWebChannelAbstractTransport_IsSignalConnected_Callback cb) { qwebchannelabstracttransport_issignalconnected_callback = cb; }

    // Base flag setters
    void setQWebChannelAbstractTransport_Metacall_IsBase(bool value) const { qwebchannelabstracttransport_metacall_isbase = value; }
    void setQWebChannelAbstractTransport_SendMessage_IsBase(bool value) const { qwebchannelabstracttransport_sendmessage_isbase = value; }
    void setQWebChannelAbstractTransport_Event_IsBase(bool value) const { qwebchannelabstracttransport_event_isbase = value; }
    void setQWebChannelAbstractTransport_EventFilter_IsBase(bool value) const { qwebchannelabstracttransport_eventfilter_isbase = value; }
    void setQWebChannelAbstractTransport_TimerEvent_IsBase(bool value) const { qwebchannelabstracttransport_timerevent_isbase = value; }
    void setQWebChannelAbstractTransport_ChildEvent_IsBase(bool value) const { qwebchannelabstracttransport_childevent_isbase = value; }
    void setQWebChannelAbstractTransport_CustomEvent_IsBase(bool value) const { qwebchannelabstracttransport_customevent_isbase = value; }
    void setQWebChannelAbstractTransport_ConnectNotify_IsBase(bool value) const { qwebchannelabstracttransport_connectnotify_isbase = value; }
    void setQWebChannelAbstractTransport_DisconnectNotify_IsBase(bool value) const { qwebchannelabstracttransport_disconnectnotify_isbase = value; }
    void setQWebChannelAbstractTransport_Sender_IsBase(bool value) const { qwebchannelabstracttransport_sender_isbase = value; }
    void setQWebChannelAbstractTransport_SenderSignalIndex_IsBase(bool value) const { qwebchannelabstracttransport_sendersignalindex_isbase = value; }
    void setQWebChannelAbstractTransport_Receivers_IsBase(bool value) const { qwebchannelabstracttransport_receivers_isbase = value; }
    void setQWebChannelAbstractTransport_IsSignalConnected_IsBase(bool value) const { qwebchannelabstracttransport_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebchannelabstracttransport_metacall_isbase) {
            qwebchannelabstracttransport_metacall_isbase = false;
            return QWebChannelAbstractTransport::qt_metacall(param1, param2, param3);
        } else if (qwebchannelabstracttransport_metacall_callback != nullptr) {
            return qwebchannelabstracttransport_metacall_callback(this, param1, param2, param3);
        } else {
            return QWebChannelAbstractTransport::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendMessage(const QJsonObject& message) override {
        qwebchannelabstracttransport_sendmessage_callback(this, message);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwebchannelabstracttransport_event_isbase) {
            qwebchannelabstracttransport_event_isbase = false;
            return QWebChannelAbstractTransport::event(event);
        } else if (qwebchannelabstracttransport_event_callback != nullptr) {
            return qwebchannelabstracttransport_event_callback(this, event);
        } else {
            return QWebChannelAbstractTransport::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebchannelabstracttransport_eventfilter_isbase) {
            qwebchannelabstracttransport_eventfilter_isbase = false;
            return QWebChannelAbstractTransport::eventFilter(watched, event);
        } else if (qwebchannelabstracttransport_eventfilter_callback != nullptr) {
            return qwebchannelabstracttransport_eventfilter_callback(this, watched, event);
        } else {
            return QWebChannelAbstractTransport::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebchannelabstracttransport_timerevent_isbase) {
            qwebchannelabstracttransport_timerevent_isbase = false;
            QWebChannelAbstractTransport::timerEvent(event);
        } else if (qwebchannelabstracttransport_timerevent_callback != nullptr) {
            qwebchannelabstracttransport_timerevent_callback(this, event);
        } else {
            QWebChannelAbstractTransport::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebchannelabstracttransport_childevent_isbase) {
            qwebchannelabstracttransport_childevent_isbase = false;
            QWebChannelAbstractTransport::childEvent(event);
        } else if (qwebchannelabstracttransport_childevent_callback != nullptr) {
            qwebchannelabstracttransport_childevent_callback(this, event);
        } else {
            QWebChannelAbstractTransport::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebchannelabstracttransport_customevent_isbase) {
            qwebchannelabstracttransport_customevent_isbase = false;
            QWebChannelAbstractTransport::customEvent(event);
        } else if (qwebchannelabstracttransport_customevent_callback != nullptr) {
            qwebchannelabstracttransport_customevent_callback(this, event);
        } else {
            QWebChannelAbstractTransport::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebchannelabstracttransport_connectnotify_isbase) {
            qwebchannelabstracttransport_connectnotify_isbase = false;
            QWebChannelAbstractTransport::connectNotify(signal);
        } else if (qwebchannelabstracttransport_connectnotify_callback != nullptr) {
            qwebchannelabstracttransport_connectnotify_callback(this, signal);
        } else {
            QWebChannelAbstractTransport::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebchannelabstracttransport_disconnectnotify_isbase) {
            qwebchannelabstracttransport_disconnectnotify_isbase = false;
            QWebChannelAbstractTransport::disconnectNotify(signal);
        } else if (qwebchannelabstracttransport_disconnectnotify_callback != nullptr) {
            qwebchannelabstracttransport_disconnectnotify_callback(this, signal);
        } else {
            QWebChannelAbstractTransport::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebchannelabstracttransport_sender_isbase) {
            qwebchannelabstracttransport_sender_isbase = false;
            return QWebChannelAbstractTransport::sender();
        } else if (qwebchannelabstracttransport_sender_callback != nullptr) {
            return qwebchannelabstracttransport_sender_callback();
        } else {
            return QWebChannelAbstractTransport::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebchannelabstracttransport_sendersignalindex_isbase) {
            qwebchannelabstracttransport_sendersignalindex_isbase = false;
            return QWebChannelAbstractTransport::senderSignalIndex();
        } else if (qwebchannelabstracttransport_sendersignalindex_callback != nullptr) {
            return qwebchannelabstracttransport_sendersignalindex_callback();
        } else {
            return QWebChannelAbstractTransport::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebchannelabstracttransport_receivers_isbase) {
            qwebchannelabstracttransport_receivers_isbase = false;
            return QWebChannelAbstractTransport::receivers(signal);
        } else if (qwebchannelabstracttransport_receivers_callback != nullptr) {
            return qwebchannelabstracttransport_receivers_callback(this, signal);
        } else {
            return QWebChannelAbstractTransport::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebchannelabstracttransport_issignalconnected_isbase) {
            qwebchannelabstracttransport_issignalconnected_isbase = false;
            return QWebChannelAbstractTransport::isSignalConnected(signal);
        } else if (qwebchannelabstracttransport_issignalconnected_callback != nullptr) {
            return qwebchannelabstracttransport_issignalconnected_callback(this, signal);
        } else {
            return QWebChannelAbstractTransport::isSignalConnected(signal);
        }
    }
};

#endif

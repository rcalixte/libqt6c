#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQHTTPMULTIPART_H
#define SRC_NETWORKC_LIBVIRTUALQHTTPMULTIPART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QHttpMultiPart so that we can call protected methods
class VirtualQHttpMultiPart : public QHttpMultiPart {

  public:
    // Virtual class public types (including callbacks)
    using QHttpMultiPart_Metacall_Callback = int (*)(QHttpMultiPart*, QMetaObject::Call, int, void**);
    using QHttpMultiPart_Event_Callback = bool (*)(QHttpMultiPart*, QEvent*);
    using QHttpMultiPart_EventFilter_Callback = bool (*)(QHttpMultiPart*, QObject*, QEvent*);
    using QHttpMultiPart_TimerEvent_Callback = void (*)(QHttpMultiPart*, QTimerEvent*);
    using QHttpMultiPart_ChildEvent_Callback = void (*)(QHttpMultiPart*, QChildEvent*);
    using QHttpMultiPart_CustomEvent_Callback = void (*)(QHttpMultiPart*, QEvent*);
    using QHttpMultiPart_ConnectNotify_Callback = void (*)(QHttpMultiPart*, const QMetaMethod&);
    using QHttpMultiPart_DisconnectNotify_Callback = void (*)(QHttpMultiPart*, const QMetaMethod&);
    using QHttpMultiPart_Sender_Callback = QObject* (*)();
    using QHttpMultiPart_SenderSignalIndex_Callback = int (*)();
    using QHttpMultiPart_Receivers_Callback = int (*)(const QHttpMultiPart*, const char*);
    using QHttpMultiPart_IsSignalConnected_Callback = bool (*)(const QHttpMultiPart*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QHttpMultiPart_Metacall_Callback qhttpmultipart_metacall_callback = nullptr;
    QHttpMultiPart_Event_Callback qhttpmultipart_event_callback = nullptr;
    QHttpMultiPart_EventFilter_Callback qhttpmultipart_eventfilter_callback = nullptr;
    QHttpMultiPart_TimerEvent_Callback qhttpmultipart_timerevent_callback = nullptr;
    QHttpMultiPart_ChildEvent_Callback qhttpmultipart_childevent_callback = nullptr;
    QHttpMultiPart_CustomEvent_Callback qhttpmultipart_customevent_callback = nullptr;
    QHttpMultiPart_ConnectNotify_Callback qhttpmultipart_connectnotify_callback = nullptr;
    QHttpMultiPart_DisconnectNotify_Callback qhttpmultipart_disconnectnotify_callback = nullptr;
    QHttpMultiPart_Sender_Callback qhttpmultipart_sender_callback = nullptr;
    QHttpMultiPart_SenderSignalIndex_Callback qhttpmultipart_sendersignalindex_callback = nullptr;
    QHttpMultiPart_Receivers_Callback qhttpmultipart_receivers_callback = nullptr;
    QHttpMultiPart_IsSignalConnected_Callback qhttpmultipart_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qhttpmultipart_metacall_isbase = false;
    mutable bool qhttpmultipart_event_isbase = false;
    mutable bool qhttpmultipart_eventfilter_isbase = false;
    mutable bool qhttpmultipart_timerevent_isbase = false;
    mutable bool qhttpmultipart_childevent_isbase = false;
    mutable bool qhttpmultipart_customevent_isbase = false;
    mutable bool qhttpmultipart_connectnotify_isbase = false;
    mutable bool qhttpmultipart_disconnectnotify_isbase = false;
    mutable bool qhttpmultipart_sender_isbase = false;
    mutable bool qhttpmultipart_sendersignalindex_isbase = false;
    mutable bool qhttpmultipart_receivers_isbase = false;
    mutable bool qhttpmultipart_issignalconnected_isbase = false;

  public:
    VirtualQHttpMultiPart() : QHttpMultiPart(){};
    VirtualQHttpMultiPart(QHttpMultiPart::ContentType contentType) : QHttpMultiPart(contentType){};
    VirtualQHttpMultiPart(QObject* parent) : QHttpMultiPart(parent){};
    VirtualQHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject* parent) : QHttpMultiPart(contentType, parent){};

    ~VirtualQHttpMultiPart() {
        qhttpmultipart_metacall_callback = nullptr;
        qhttpmultipart_event_callback = nullptr;
        qhttpmultipart_eventfilter_callback = nullptr;
        qhttpmultipart_timerevent_callback = nullptr;
        qhttpmultipart_childevent_callback = nullptr;
        qhttpmultipart_customevent_callback = nullptr;
        qhttpmultipart_connectnotify_callback = nullptr;
        qhttpmultipart_disconnectnotify_callback = nullptr;
        qhttpmultipart_sender_callback = nullptr;
        qhttpmultipart_sendersignalindex_callback = nullptr;
        qhttpmultipart_receivers_callback = nullptr;
        qhttpmultipart_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQHttpMultiPart_Metacall_Callback(QHttpMultiPart_Metacall_Callback cb) { qhttpmultipart_metacall_callback = cb; }
    void setQHttpMultiPart_Event_Callback(QHttpMultiPart_Event_Callback cb) { qhttpmultipart_event_callback = cb; }
    void setQHttpMultiPart_EventFilter_Callback(QHttpMultiPart_EventFilter_Callback cb) { qhttpmultipart_eventfilter_callback = cb; }
    void setQHttpMultiPart_TimerEvent_Callback(QHttpMultiPart_TimerEvent_Callback cb) { qhttpmultipart_timerevent_callback = cb; }
    void setQHttpMultiPart_ChildEvent_Callback(QHttpMultiPart_ChildEvent_Callback cb) { qhttpmultipart_childevent_callback = cb; }
    void setQHttpMultiPart_CustomEvent_Callback(QHttpMultiPart_CustomEvent_Callback cb) { qhttpmultipart_customevent_callback = cb; }
    void setQHttpMultiPart_ConnectNotify_Callback(QHttpMultiPart_ConnectNotify_Callback cb) { qhttpmultipart_connectnotify_callback = cb; }
    void setQHttpMultiPart_DisconnectNotify_Callback(QHttpMultiPart_DisconnectNotify_Callback cb) { qhttpmultipart_disconnectnotify_callback = cb; }
    void setQHttpMultiPart_Sender_Callback(QHttpMultiPart_Sender_Callback cb) { qhttpmultipart_sender_callback = cb; }
    void setQHttpMultiPart_SenderSignalIndex_Callback(QHttpMultiPart_SenderSignalIndex_Callback cb) { qhttpmultipart_sendersignalindex_callback = cb; }
    void setQHttpMultiPart_Receivers_Callback(QHttpMultiPart_Receivers_Callback cb) { qhttpmultipart_receivers_callback = cb; }
    void setQHttpMultiPart_IsSignalConnected_Callback(QHttpMultiPart_IsSignalConnected_Callback cb) { qhttpmultipart_issignalconnected_callback = cb; }

    // Base flag setters
    void setQHttpMultiPart_Metacall_IsBase(bool value) const { qhttpmultipart_metacall_isbase = value; }
    void setQHttpMultiPart_Event_IsBase(bool value) const { qhttpmultipart_event_isbase = value; }
    void setQHttpMultiPart_EventFilter_IsBase(bool value) const { qhttpmultipart_eventfilter_isbase = value; }
    void setQHttpMultiPart_TimerEvent_IsBase(bool value) const { qhttpmultipart_timerevent_isbase = value; }
    void setQHttpMultiPart_ChildEvent_IsBase(bool value) const { qhttpmultipart_childevent_isbase = value; }
    void setQHttpMultiPart_CustomEvent_IsBase(bool value) const { qhttpmultipart_customevent_isbase = value; }
    void setQHttpMultiPart_ConnectNotify_IsBase(bool value) const { qhttpmultipart_connectnotify_isbase = value; }
    void setQHttpMultiPart_DisconnectNotify_IsBase(bool value) const { qhttpmultipart_disconnectnotify_isbase = value; }
    void setQHttpMultiPart_Sender_IsBase(bool value) const { qhttpmultipart_sender_isbase = value; }
    void setQHttpMultiPart_SenderSignalIndex_IsBase(bool value) const { qhttpmultipart_sendersignalindex_isbase = value; }
    void setQHttpMultiPart_Receivers_IsBase(bool value) const { qhttpmultipart_receivers_isbase = value; }
    void setQHttpMultiPart_IsSignalConnected_IsBase(bool value) const { qhttpmultipart_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qhttpmultipart_metacall_isbase) {
            qhttpmultipart_metacall_isbase = false;
            return QHttpMultiPart::qt_metacall(param1, param2, param3);
        } else if (qhttpmultipart_metacall_callback != nullptr) {
            return qhttpmultipart_metacall_callback(this, param1, param2, param3);
        } else {
            return QHttpMultiPart::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qhttpmultipart_event_isbase) {
            qhttpmultipart_event_isbase = false;
            return QHttpMultiPart::event(event);
        } else if (qhttpmultipart_event_callback != nullptr) {
            return qhttpmultipart_event_callback(this, event);
        } else {
            return QHttpMultiPart::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qhttpmultipart_eventfilter_isbase) {
            qhttpmultipart_eventfilter_isbase = false;
            return QHttpMultiPart::eventFilter(watched, event);
        } else if (qhttpmultipart_eventfilter_callback != nullptr) {
            return qhttpmultipart_eventfilter_callback(this, watched, event);
        } else {
            return QHttpMultiPart::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qhttpmultipart_timerevent_isbase) {
            qhttpmultipart_timerevent_isbase = false;
            QHttpMultiPart::timerEvent(event);
        } else if (qhttpmultipart_timerevent_callback != nullptr) {
            qhttpmultipart_timerevent_callback(this, event);
        } else {
            QHttpMultiPart::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qhttpmultipart_childevent_isbase) {
            qhttpmultipart_childevent_isbase = false;
            QHttpMultiPart::childEvent(event);
        } else if (qhttpmultipart_childevent_callback != nullptr) {
            qhttpmultipart_childevent_callback(this, event);
        } else {
            QHttpMultiPart::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qhttpmultipart_customevent_isbase) {
            qhttpmultipart_customevent_isbase = false;
            QHttpMultiPart::customEvent(event);
        } else if (qhttpmultipart_customevent_callback != nullptr) {
            qhttpmultipart_customevent_callback(this, event);
        } else {
            QHttpMultiPart::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qhttpmultipart_connectnotify_isbase) {
            qhttpmultipart_connectnotify_isbase = false;
            QHttpMultiPart::connectNotify(signal);
        } else if (qhttpmultipart_connectnotify_callback != nullptr) {
            qhttpmultipart_connectnotify_callback(this, signal);
        } else {
            QHttpMultiPart::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qhttpmultipart_disconnectnotify_isbase) {
            qhttpmultipart_disconnectnotify_isbase = false;
            QHttpMultiPart::disconnectNotify(signal);
        } else if (qhttpmultipart_disconnectnotify_callback != nullptr) {
            qhttpmultipart_disconnectnotify_callback(this, signal);
        } else {
            QHttpMultiPart::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qhttpmultipart_sender_isbase) {
            qhttpmultipart_sender_isbase = false;
            return QHttpMultiPart::sender();
        } else if (qhttpmultipart_sender_callback != nullptr) {
            return qhttpmultipart_sender_callback();
        } else {
            return QHttpMultiPart::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qhttpmultipart_sendersignalindex_isbase) {
            qhttpmultipart_sendersignalindex_isbase = false;
            return QHttpMultiPart::senderSignalIndex();
        } else if (qhttpmultipart_sendersignalindex_callback != nullptr) {
            return qhttpmultipart_sendersignalindex_callback();
        } else {
            return QHttpMultiPart::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qhttpmultipart_receivers_isbase) {
            qhttpmultipart_receivers_isbase = false;
            return QHttpMultiPart::receivers(signal);
        } else if (qhttpmultipart_receivers_callback != nullptr) {
            return qhttpmultipart_receivers_callback(this, signal);
        } else {
            return QHttpMultiPart::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qhttpmultipart_issignalconnected_isbase) {
            qhttpmultipart_issignalconnected_isbase = false;
            return QHttpMultiPart::isSignalConnected(signal);
        } else if (qhttpmultipart_issignalconnected_callback != nullptr) {
            return qhttpmultipart_issignalconnected_callback(this, signal);
        } else {
            return QHttpMultiPart::isSignalConnected(signal);
        }
    }
};

#endif

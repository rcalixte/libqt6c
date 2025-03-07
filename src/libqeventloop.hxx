#pragma once
#ifndef SRCC_LIBVIRTUALQEVENTLOOP_H
#define SRCC_LIBVIRTUALQEVENTLOOP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QEventLoop so that we can call protected methods
class VirtualQEventLoop : public QEventLoop {

  public:
    // Virtual class public types (including callbacks)
    using QEventLoop_Metacall_Callback = int (*)(QEventLoop*, QMetaObject::Call, int, void**);
    using QEventLoop_Event_Callback = bool (*)(QEventLoop*, QEvent*);
    using QEventLoop_EventFilter_Callback = bool (*)(QEventLoop*, QObject*, QEvent*);
    using QEventLoop_TimerEvent_Callback = void (*)(QEventLoop*, QTimerEvent*);
    using QEventLoop_ChildEvent_Callback = void (*)(QEventLoop*, QChildEvent*);
    using QEventLoop_CustomEvent_Callback = void (*)(QEventLoop*, QEvent*);
    using QEventLoop_ConnectNotify_Callback = void (*)(QEventLoop*, const QMetaMethod&);
    using QEventLoop_DisconnectNotify_Callback = void (*)(QEventLoop*, const QMetaMethod&);
    using QEventLoop_Sender_Callback = QObject* (*)();
    using QEventLoop_SenderSignalIndex_Callback = int (*)();
    using QEventLoop_Receivers_Callback = int (*)(const QEventLoop*, const char*);
    using QEventLoop_IsSignalConnected_Callback = bool (*)(const QEventLoop*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QEventLoop_Metacall_Callback qeventloop_metacall_callback = nullptr;
    QEventLoop_Event_Callback qeventloop_event_callback = nullptr;
    QEventLoop_EventFilter_Callback qeventloop_eventfilter_callback = nullptr;
    QEventLoop_TimerEvent_Callback qeventloop_timerevent_callback = nullptr;
    QEventLoop_ChildEvent_Callback qeventloop_childevent_callback = nullptr;
    QEventLoop_CustomEvent_Callback qeventloop_customevent_callback = nullptr;
    QEventLoop_ConnectNotify_Callback qeventloop_connectnotify_callback = nullptr;
    QEventLoop_DisconnectNotify_Callback qeventloop_disconnectnotify_callback = nullptr;
    QEventLoop_Sender_Callback qeventloop_sender_callback = nullptr;
    QEventLoop_SenderSignalIndex_Callback qeventloop_sendersignalindex_callback = nullptr;
    QEventLoop_Receivers_Callback qeventloop_receivers_callback = nullptr;
    QEventLoop_IsSignalConnected_Callback qeventloop_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qeventloop_metacall_isbase = false;
    mutable bool qeventloop_event_isbase = false;
    mutable bool qeventloop_eventfilter_isbase = false;
    mutable bool qeventloop_timerevent_isbase = false;
    mutable bool qeventloop_childevent_isbase = false;
    mutable bool qeventloop_customevent_isbase = false;
    mutable bool qeventloop_connectnotify_isbase = false;
    mutable bool qeventloop_disconnectnotify_isbase = false;
    mutable bool qeventloop_sender_isbase = false;
    mutable bool qeventloop_sendersignalindex_isbase = false;
    mutable bool qeventloop_receivers_isbase = false;
    mutable bool qeventloop_issignalconnected_isbase = false;

  public:
    VirtualQEventLoop() : QEventLoop(){};
    VirtualQEventLoop(QObject* parent) : QEventLoop(parent){};

    ~VirtualQEventLoop() {
        qeventloop_metacall_callback = nullptr;
        qeventloop_event_callback = nullptr;
        qeventloop_eventfilter_callback = nullptr;
        qeventloop_timerevent_callback = nullptr;
        qeventloop_childevent_callback = nullptr;
        qeventloop_customevent_callback = nullptr;
        qeventloop_connectnotify_callback = nullptr;
        qeventloop_disconnectnotify_callback = nullptr;
        qeventloop_sender_callback = nullptr;
        qeventloop_sendersignalindex_callback = nullptr;
        qeventloop_receivers_callback = nullptr;
        qeventloop_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQEventLoop_Metacall_Callback(QEventLoop_Metacall_Callback cb) { qeventloop_metacall_callback = cb; }
    void setQEventLoop_Event_Callback(QEventLoop_Event_Callback cb) { qeventloop_event_callback = cb; }
    void setQEventLoop_EventFilter_Callback(QEventLoop_EventFilter_Callback cb) { qeventloop_eventfilter_callback = cb; }
    void setQEventLoop_TimerEvent_Callback(QEventLoop_TimerEvent_Callback cb) { qeventloop_timerevent_callback = cb; }
    void setQEventLoop_ChildEvent_Callback(QEventLoop_ChildEvent_Callback cb) { qeventloop_childevent_callback = cb; }
    void setQEventLoop_CustomEvent_Callback(QEventLoop_CustomEvent_Callback cb) { qeventloop_customevent_callback = cb; }
    void setQEventLoop_ConnectNotify_Callback(QEventLoop_ConnectNotify_Callback cb) { qeventloop_connectnotify_callback = cb; }
    void setQEventLoop_DisconnectNotify_Callback(QEventLoop_DisconnectNotify_Callback cb) { qeventloop_disconnectnotify_callback = cb; }
    void setQEventLoop_Sender_Callback(QEventLoop_Sender_Callback cb) { qeventloop_sender_callback = cb; }
    void setQEventLoop_SenderSignalIndex_Callback(QEventLoop_SenderSignalIndex_Callback cb) { qeventloop_sendersignalindex_callback = cb; }
    void setQEventLoop_Receivers_Callback(QEventLoop_Receivers_Callback cb) { qeventloop_receivers_callback = cb; }
    void setQEventLoop_IsSignalConnected_Callback(QEventLoop_IsSignalConnected_Callback cb) { qeventloop_issignalconnected_callback = cb; }

    // Base flag setters
    void setQEventLoop_Metacall_IsBase(bool value) const { qeventloop_metacall_isbase = value; }
    void setQEventLoop_Event_IsBase(bool value) const { qeventloop_event_isbase = value; }
    void setQEventLoop_EventFilter_IsBase(bool value) const { qeventloop_eventfilter_isbase = value; }
    void setQEventLoop_TimerEvent_IsBase(bool value) const { qeventloop_timerevent_isbase = value; }
    void setQEventLoop_ChildEvent_IsBase(bool value) const { qeventloop_childevent_isbase = value; }
    void setQEventLoop_CustomEvent_IsBase(bool value) const { qeventloop_customevent_isbase = value; }
    void setQEventLoop_ConnectNotify_IsBase(bool value) const { qeventloop_connectnotify_isbase = value; }
    void setQEventLoop_DisconnectNotify_IsBase(bool value) const { qeventloop_disconnectnotify_isbase = value; }
    void setQEventLoop_Sender_IsBase(bool value) const { qeventloop_sender_isbase = value; }
    void setQEventLoop_SenderSignalIndex_IsBase(bool value) const { qeventloop_sendersignalindex_isbase = value; }
    void setQEventLoop_Receivers_IsBase(bool value) const { qeventloop_receivers_isbase = value; }
    void setQEventLoop_IsSignalConnected_IsBase(bool value) const { qeventloop_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qeventloop_metacall_isbase) {
            qeventloop_metacall_isbase = false;
            return QEventLoop::qt_metacall(param1, param2, param3);
        } else if (qeventloop_metacall_callback != nullptr) {
            return qeventloop_metacall_callback(this, param1, param2, param3);
        } else {
            return QEventLoop::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qeventloop_event_isbase) {
            qeventloop_event_isbase = false;
            return QEventLoop::event(event);
        } else if (qeventloop_event_callback != nullptr) {
            return qeventloop_event_callback(this, event);
        } else {
            return QEventLoop::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qeventloop_eventfilter_isbase) {
            qeventloop_eventfilter_isbase = false;
            return QEventLoop::eventFilter(watched, event);
        } else if (qeventloop_eventfilter_callback != nullptr) {
            return qeventloop_eventfilter_callback(this, watched, event);
        } else {
            return QEventLoop::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qeventloop_timerevent_isbase) {
            qeventloop_timerevent_isbase = false;
            QEventLoop::timerEvent(event);
        } else if (qeventloop_timerevent_callback != nullptr) {
            qeventloop_timerevent_callback(this, event);
        } else {
            QEventLoop::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qeventloop_childevent_isbase) {
            qeventloop_childevent_isbase = false;
            QEventLoop::childEvent(event);
        } else if (qeventloop_childevent_callback != nullptr) {
            qeventloop_childevent_callback(this, event);
        } else {
            QEventLoop::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qeventloop_customevent_isbase) {
            qeventloop_customevent_isbase = false;
            QEventLoop::customEvent(event);
        } else if (qeventloop_customevent_callback != nullptr) {
            qeventloop_customevent_callback(this, event);
        } else {
            QEventLoop::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qeventloop_connectnotify_isbase) {
            qeventloop_connectnotify_isbase = false;
            QEventLoop::connectNotify(signal);
        } else if (qeventloop_connectnotify_callback != nullptr) {
            qeventloop_connectnotify_callback(this, signal);
        } else {
            QEventLoop::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qeventloop_disconnectnotify_isbase) {
            qeventloop_disconnectnotify_isbase = false;
            QEventLoop::disconnectNotify(signal);
        } else if (qeventloop_disconnectnotify_callback != nullptr) {
            qeventloop_disconnectnotify_callback(this, signal);
        } else {
            QEventLoop::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qeventloop_sender_isbase) {
            qeventloop_sender_isbase = false;
            return QEventLoop::sender();
        } else if (qeventloop_sender_callback != nullptr) {
            return qeventloop_sender_callback();
        } else {
            return QEventLoop::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qeventloop_sendersignalindex_isbase) {
            qeventloop_sendersignalindex_isbase = false;
            return QEventLoop::senderSignalIndex();
        } else if (qeventloop_sendersignalindex_callback != nullptr) {
            return qeventloop_sendersignalindex_callback();
        } else {
            return QEventLoop::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qeventloop_receivers_isbase) {
            qeventloop_receivers_isbase = false;
            return QEventLoop::receivers(signal);
        } else if (qeventloop_receivers_callback != nullptr) {
            return qeventloop_receivers_callback(this, signal);
        } else {
            return QEventLoop::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qeventloop_issignalconnected_isbase) {
            qeventloop_issignalconnected_isbase = false;
            return QEventLoop::isSignalConnected(signal);
        } else if (qeventloop_issignalconnected_callback != nullptr) {
            return qeventloop_issignalconnected_callback(this, signal);
        } else {
            return QEventLoop::isSignalConnected(signal);
        }
    }
};

#endif

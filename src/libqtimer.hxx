#pragma once
#ifndef SRCC_LIBVIRTUALQTIMER_H
#define SRCC_LIBVIRTUALQTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTimer so that we can call protected methods
class VirtualQTimer : public QTimer {

  public:
    // Virtual class public types (including callbacks)
    using QTimer_Metacall_Callback = int (*)(QTimer*, QMetaObject::Call, int, void**);
    using QTimer_TimerEvent_Callback = void (*)(QTimer*, QTimerEvent*);
    using QTimer_Event_Callback = bool (*)(QTimer*, QEvent*);
    using QTimer_EventFilter_Callback = bool (*)(QTimer*, QObject*, QEvent*);
    using QTimer_ChildEvent_Callback = void (*)(QTimer*, QChildEvent*);
    using QTimer_CustomEvent_Callback = void (*)(QTimer*, QEvent*);
    using QTimer_ConnectNotify_Callback = void (*)(QTimer*, const QMetaMethod&);
    using QTimer_DisconnectNotify_Callback = void (*)(QTimer*, const QMetaMethod&);
    using QTimer_Sender_Callback = QObject* (*)();
    using QTimer_SenderSignalIndex_Callback = int (*)();
    using QTimer_Receivers_Callback = int (*)(const QTimer*, const char*);
    using QTimer_IsSignalConnected_Callback = bool (*)(const QTimer*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTimer_Metacall_Callback qtimer_metacall_callback = nullptr;
    QTimer_TimerEvent_Callback qtimer_timerevent_callback = nullptr;
    QTimer_Event_Callback qtimer_event_callback = nullptr;
    QTimer_EventFilter_Callback qtimer_eventfilter_callback = nullptr;
    QTimer_ChildEvent_Callback qtimer_childevent_callback = nullptr;
    QTimer_CustomEvent_Callback qtimer_customevent_callback = nullptr;
    QTimer_ConnectNotify_Callback qtimer_connectnotify_callback = nullptr;
    QTimer_DisconnectNotify_Callback qtimer_disconnectnotify_callback = nullptr;
    QTimer_Sender_Callback qtimer_sender_callback = nullptr;
    QTimer_SenderSignalIndex_Callback qtimer_sendersignalindex_callback = nullptr;
    QTimer_Receivers_Callback qtimer_receivers_callback = nullptr;
    QTimer_IsSignalConnected_Callback qtimer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtimer_metacall_isbase = false;
    mutable bool qtimer_timerevent_isbase = false;
    mutable bool qtimer_event_isbase = false;
    mutable bool qtimer_eventfilter_isbase = false;
    mutable bool qtimer_childevent_isbase = false;
    mutable bool qtimer_customevent_isbase = false;
    mutable bool qtimer_connectnotify_isbase = false;
    mutable bool qtimer_disconnectnotify_isbase = false;
    mutable bool qtimer_sender_isbase = false;
    mutable bool qtimer_sendersignalindex_isbase = false;
    mutable bool qtimer_receivers_isbase = false;
    mutable bool qtimer_issignalconnected_isbase = false;

  public:
    VirtualQTimer() : QTimer(){};
    VirtualQTimer(QObject* parent) : QTimer(parent){};

    ~VirtualQTimer() {
        qtimer_metacall_callback = nullptr;
        qtimer_timerevent_callback = nullptr;
        qtimer_event_callback = nullptr;
        qtimer_eventfilter_callback = nullptr;
        qtimer_childevent_callback = nullptr;
        qtimer_customevent_callback = nullptr;
        qtimer_connectnotify_callback = nullptr;
        qtimer_disconnectnotify_callback = nullptr;
        qtimer_sender_callback = nullptr;
        qtimer_sendersignalindex_callback = nullptr;
        qtimer_receivers_callback = nullptr;
        qtimer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTimer_Metacall_Callback(QTimer_Metacall_Callback cb) { qtimer_metacall_callback = cb; }
    void setQTimer_TimerEvent_Callback(QTimer_TimerEvent_Callback cb) { qtimer_timerevent_callback = cb; }
    void setQTimer_Event_Callback(QTimer_Event_Callback cb) { qtimer_event_callback = cb; }
    void setQTimer_EventFilter_Callback(QTimer_EventFilter_Callback cb) { qtimer_eventfilter_callback = cb; }
    void setQTimer_ChildEvent_Callback(QTimer_ChildEvent_Callback cb) { qtimer_childevent_callback = cb; }
    void setQTimer_CustomEvent_Callback(QTimer_CustomEvent_Callback cb) { qtimer_customevent_callback = cb; }
    void setQTimer_ConnectNotify_Callback(QTimer_ConnectNotify_Callback cb) { qtimer_connectnotify_callback = cb; }
    void setQTimer_DisconnectNotify_Callback(QTimer_DisconnectNotify_Callback cb) { qtimer_disconnectnotify_callback = cb; }
    void setQTimer_Sender_Callback(QTimer_Sender_Callback cb) { qtimer_sender_callback = cb; }
    void setQTimer_SenderSignalIndex_Callback(QTimer_SenderSignalIndex_Callback cb) { qtimer_sendersignalindex_callback = cb; }
    void setQTimer_Receivers_Callback(QTimer_Receivers_Callback cb) { qtimer_receivers_callback = cb; }
    void setQTimer_IsSignalConnected_Callback(QTimer_IsSignalConnected_Callback cb) { qtimer_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTimer_Metacall_IsBase(bool value) const { qtimer_metacall_isbase = value; }
    void setQTimer_TimerEvent_IsBase(bool value) const { qtimer_timerevent_isbase = value; }
    void setQTimer_Event_IsBase(bool value) const { qtimer_event_isbase = value; }
    void setQTimer_EventFilter_IsBase(bool value) const { qtimer_eventfilter_isbase = value; }
    void setQTimer_ChildEvent_IsBase(bool value) const { qtimer_childevent_isbase = value; }
    void setQTimer_CustomEvent_IsBase(bool value) const { qtimer_customevent_isbase = value; }
    void setQTimer_ConnectNotify_IsBase(bool value) const { qtimer_connectnotify_isbase = value; }
    void setQTimer_DisconnectNotify_IsBase(bool value) const { qtimer_disconnectnotify_isbase = value; }
    void setQTimer_Sender_IsBase(bool value) const { qtimer_sender_isbase = value; }
    void setQTimer_SenderSignalIndex_IsBase(bool value) const { qtimer_sendersignalindex_isbase = value; }
    void setQTimer_Receivers_IsBase(bool value) const { qtimer_receivers_isbase = value; }
    void setQTimer_IsSignalConnected_IsBase(bool value) const { qtimer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimer_metacall_isbase) {
            qtimer_metacall_isbase = false;
            return QTimer::qt_metacall(param1, param2, param3);
        } else if (qtimer_metacall_callback != nullptr) {
            return qtimer_metacall_callback(this, param1, param2, param3);
        } else {
            return QTimer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qtimer_timerevent_isbase) {
            qtimer_timerevent_isbase = false;
            QTimer::timerEvent(param1);
        } else if (qtimer_timerevent_callback != nullptr) {
            qtimer_timerevent_callback(this, param1);
        } else {
            QTimer::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimer_event_isbase) {
            qtimer_event_isbase = false;
            return QTimer::event(event);
        } else if (qtimer_event_callback != nullptr) {
            return qtimer_event_callback(this, event);
        } else {
            return QTimer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimer_eventfilter_isbase) {
            qtimer_eventfilter_isbase = false;
            return QTimer::eventFilter(watched, event);
        } else if (qtimer_eventfilter_callback != nullptr) {
            return qtimer_eventfilter_callback(this, watched, event);
        } else {
            return QTimer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimer_childevent_isbase) {
            qtimer_childevent_isbase = false;
            QTimer::childEvent(event);
        } else if (qtimer_childevent_callback != nullptr) {
            qtimer_childevent_callback(this, event);
        } else {
            QTimer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimer_customevent_isbase) {
            qtimer_customevent_isbase = false;
            QTimer::customEvent(event);
        } else if (qtimer_customevent_callback != nullptr) {
            qtimer_customevent_callback(this, event);
        } else {
            QTimer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimer_connectnotify_isbase) {
            qtimer_connectnotify_isbase = false;
            QTimer::connectNotify(signal);
        } else if (qtimer_connectnotify_callback != nullptr) {
            qtimer_connectnotify_callback(this, signal);
        } else {
            QTimer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimer_disconnectnotify_isbase) {
            qtimer_disconnectnotify_isbase = false;
            QTimer::disconnectNotify(signal);
        } else if (qtimer_disconnectnotify_callback != nullptr) {
            qtimer_disconnectnotify_callback(this, signal);
        } else {
            QTimer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtimer_sender_isbase) {
            qtimer_sender_isbase = false;
            return QTimer::sender();
        } else if (qtimer_sender_callback != nullptr) {
            return qtimer_sender_callback();
        } else {
            return QTimer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtimer_sendersignalindex_isbase) {
            qtimer_sendersignalindex_isbase = false;
            return QTimer::senderSignalIndex();
        } else if (qtimer_sendersignalindex_callback != nullptr) {
            return qtimer_sendersignalindex_callback();
        } else {
            return QTimer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtimer_receivers_isbase) {
            qtimer_receivers_isbase = false;
            return QTimer::receivers(signal);
        } else if (qtimer_receivers_callback != nullptr) {
            return qtimer_receivers_callback(this, signal);
        } else {
            return QTimer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtimer_issignalconnected_isbase) {
            qtimer_issignalconnected_isbase = false;
            return QTimer::isSignalConnected(signal);
        } else if (qtimer_issignalconnected_callback != nullptr) {
            return qtimer_issignalconnected_callback(this, signal);
        } else {
            return QTimer::isSignalConnected(signal);
        }
    }
};

#endif

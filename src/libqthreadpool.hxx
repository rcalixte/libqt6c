#pragma once
#ifndef SRCC_LIBVIRTUALQTHREADPOOL_H
#define SRCC_LIBVIRTUALQTHREADPOOL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QThreadPool so that we can call protected methods
class VirtualQThreadPool : public QThreadPool {

  public:
    // Virtual class public types (including callbacks)
    using QThreadPool_Metacall_Callback = int (*)(QThreadPool*, QMetaObject::Call, int, void**);
    using QThreadPool_Event_Callback = bool (*)(QThreadPool*, QEvent*);
    using QThreadPool_EventFilter_Callback = bool (*)(QThreadPool*, QObject*, QEvent*);
    using QThreadPool_TimerEvent_Callback = void (*)(QThreadPool*, QTimerEvent*);
    using QThreadPool_ChildEvent_Callback = void (*)(QThreadPool*, QChildEvent*);
    using QThreadPool_CustomEvent_Callback = void (*)(QThreadPool*, QEvent*);
    using QThreadPool_ConnectNotify_Callback = void (*)(QThreadPool*, const QMetaMethod&);
    using QThreadPool_DisconnectNotify_Callback = void (*)(QThreadPool*, const QMetaMethod&);
    using QThreadPool_Sender_Callback = QObject* (*)();
    using QThreadPool_SenderSignalIndex_Callback = int (*)();
    using QThreadPool_Receivers_Callback = int (*)(const QThreadPool*, const char*);
    using QThreadPool_IsSignalConnected_Callback = bool (*)(const QThreadPool*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QThreadPool_Metacall_Callback qthreadpool_metacall_callback = nullptr;
    QThreadPool_Event_Callback qthreadpool_event_callback = nullptr;
    QThreadPool_EventFilter_Callback qthreadpool_eventfilter_callback = nullptr;
    QThreadPool_TimerEvent_Callback qthreadpool_timerevent_callback = nullptr;
    QThreadPool_ChildEvent_Callback qthreadpool_childevent_callback = nullptr;
    QThreadPool_CustomEvent_Callback qthreadpool_customevent_callback = nullptr;
    QThreadPool_ConnectNotify_Callback qthreadpool_connectnotify_callback = nullptr;
    QThreadPool_DisconnectNotify_Callback qthreadpool_disconnectnotify_callback = nullptr;
    QThreadPool_Sender_Callback qthreadpool_sender_callback = nullptr;
    QThreadPool_SenderSignalIndex_Callback qthreadpool_sendersignalindex_callback = nullptr;
    QThreadPool_Receivers_Callback qthreadpool_receivers_callback = nullptr;
    QThreadPool_IsSignalConnected_Callback qthreadpool_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qthreadpool_metacall_isbase = false;
    mutable bool qthreadpool_event_isbase = false;
    mutable bool qthreadpool_eventfilter_isbase = false;
    mutable bool qthreadpool_timerevent_isbase = false;
    mutable bool qthreadpool_childevent_isbase = false;
    mutable bool qthreadpool_customevent_isbase = false;
    mutable bool qthreadpool_connectnotify_isbase = false;
    mutable bool qthreadpool_disconnectnotify_isbase = false;
    mutable bool qthreadpool_sender_isbase = false;
    mutable bool qthreadpool_sendersignalindex_isbase = false;
    mutable bool qthreadpool_receivers_isbase = false;
    mutable bool qthreadpool_issignalconnected_isbase = false;

  public:
    VirtualQThreadPool() : QThreadPool(){};
    VirtualQThreadPool(QObject* parent) : QThreadPool(parent){};

    ~VirtualQThreadPool() {
        qthreadpool_metacall_callback = nullptr;
        qthreadpool_event_callback = nullptr;
        qthreadpool_eventfilter_callback = nullptr;
        qthreadpool_timerevent_callback = nullptr;
        qthreadpool_childevent_callback = nullptr;
        qthreadpool_customevent_callback = nullptr;
        qthreadpool_connectnotify_callback = nullptr;
        qthreadpool_disconnectnotify_callback = nullptr;
        qthreadpool_sender_callback = nullptr;
        qthreadpool_sendersignalindex_callback = nullptr;
        qthreadpool_receivers_callback = nullptr;
        qthreadpool_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQThreadPool_Metacall_Callback(QThreadPool_Metacall_Callback cb) { qthreadpool_metacall_callback = cb; }
    void setQThreadPool_Event_Callback(QThreadPool_Event_Callback cb) { qthreadpool_event_callback = cb; }
    void setQThreadPool_EventFilter_Callback(QThreadPool_EventFilter_Callback cb) { qthreadpool_eventfilter_callback = cb; }
    void setQThreadPool_TimerEvent_Callback(QThreadPool_TimerEvent_Callback cb) { qthreadpool_timerevent_callback = cb; }
    void setQThreadPool_ChildEvent_Callback(QThreadPool_ChildEvent_Callback cb) { qthreadpool_childevent_callback = cb; }
    void setQThreadPool_CustomEvent_Callback(QThreadPool_CustomEvent_Callback cb) { qthreadpool_customevent_callback = cb; }
    void setQThreadPool_ConnectNotify_Callback(QThreadPool_ConnectNotify_Callback cb) { qthreadpool_connectnotify_callback = cb; }
    void setQThreadPool_DisconnectNotify_Callback(QThreadPool_DisconnectNotify_Callback cb) { qthreadpool_disconnectnotify_callback = cb; }
    void setQThreadPool_Sender_Callback(QThreadPool_Sender_Callback cb) { qthreadpool_sender_callback = cb; }
    void setQThreadPool_SenderSignalIndex_Callback(QThreadPool_SenderSignalIndex_Callback cb) { qthreadpool_sendersignalindex_callback = cb; }
    void setQThreadPool_Receivers_Callback(QThreadPool_Receivers_Callback cb) { qthreadpool_receivers_callback = cb; }
    void setQThreadPool_IsSignalConnected_Callback(QThreadPool_IsSignalConnected_Callback cb) { qthreadpool_issignalconnected_callback = cb; }

    // Base flag setters
    void setQThreadPool_Metacall_IsBase(bool value) const { qthreadpool_metacall_isbase = value; }
    void setQThreadPool_Event_IsBase(bool value) const { qthreadpool_event_isbase = value; }
    void setQThreadPool_EventFilter_IsBase(bool value) const { qthreadpool_eventfilter_isbase = value; }
    void setQThreadPool_TimerEvent_IsBase(bool value) const { qthreadpool_timerevent_isbase = value; }
    void setQThreadPool_ChildEvent_IsBase(bool value) const { qthreadpool_childevent_isbase = value; }
    void setQThreadPool_CustomEvent_IsBase(bool value) const { qthreadpool_customevent_isbase = value; }
    void setQThreadPool_ConnectNotify_IsBase(bool value) const { qthreadpool_connectnotify_isbase = value; }
    void setQThreadPool_DisconnectNotify_IsBase(bool value) const { qthreadpool_disconnectnotify_isbase = value; }
    void setQThreadPool_Sender_IsBase(bool value) const { qthreadpool_sender_isbase = value; }
    void setQThreadPool_SenderSignalIndex_IsBase(bool value) const { qthreadpool_sendersignalindex_isbase = value; }
    void setQThreadPool_Receivers_IsBase(bool value) const { qthreadpool_receivers_isbase = value; }
    void setQThreadPool_IsSignalConnected_IsBase(bool value) const { qthreadpool_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qthreadpool_metacall_isbase) {
            qthreadpool_metacall_isbase = false;
            return QThreadPool::qt_metacall(param1, param2, param3);
        } else if (qthreadpool_metacall_callback != nullptr) {
            return qthreadpool_metacall_callback(this, param1, param2, param3);
        } else {
            return QThreadPool::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qthreadpool_event_isbase) {
            qthreadpool_event_isbase = false;
            return QThreadPool::event(event);
        } else if (qthreadpool_event_callback != nullptr) {
            return qthreadpool_event_callback(this, event);
        } else {
            return QThreadPool::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qthreadpool_eventfilter_isbase) {
            qthreadpool_eventfilter_isbase = false;
            return QThreadPool::eventFilter(watched, event);
        } else if (qthreadpool_eventfilter_callback != nullptr) {
            return qthreadpool_eventfilter_callback(this, watched, event);
        } else {
            return QThreadPool::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qthreadpool_timerevent_isbase) {
            qthreadpool_timerevent_isbase = false;
            QThreadPool::timerEvent(event);
        } else if (qthreadpool_timerevent_callback != nullptr) {
            qthreadpool_timerevent_callback(this, event);
        } else {
            QThreadPool::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qthreadpool_childevent_isbase) {
            qthreadpool_childevent_isbase = false;
            QThreadPool::childEvent(event);
        } else if (qthreadpool_childevent_callback != nullptr) {
            qthreadpool_childevent_callback(this, event);
        } else {
            QThreadPool::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qthreadpool_customevent_isbase) {
            qthreadpool_customevent_isbase = false;
            QThreadPool::customEvent(event);
        } else if (qthreadpool_customevent_callback != nullptr) {
            qthreadpool_customevent_callback(this, event);
        } else {
            QThreadPool::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qthreadpool_connectnotify_isbase) {
            qthreadpool_connectnotify_isbase = false;
            QThreadPool::connectNotify(signal);
        } else if (qthreadpool_connectnotify_callback != nullptr) {
            qthreadpool_connectnotify_callback(this, signal);
        } else {
            QThreadPool::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qthreadpool_disconnectnotify_isbase) {
            qthreadpool_disconnectnotify_isbase = false;
            QThreadPool::disconnectNotify(signal);
        } else if (qthreadpool_disconnectnotify_callback != nullptr) {
            qthreadpool_disconnectnotify_callback(this, signal);
        } else {
            QThreadPool::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qthreadpool_sender_isbase) {
            qthreadpool_sender_isbase = false;
            return QThreadPool::sender();
        } else if (qthreadpool_sender_callback != nullptr) {
            return qthreadpool_sender_callback();
        } else {
            return QThreadPool::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qthreadpool_sendersignalindex_isbase) {
            qthreadpool_sendersignalindex_isbase = false;
            return QThreadPool::senderSignalIndex();
        } else if (qthreadpool_sendersignalindex_callback != nullptr) {
            return qthreadpool_sendersignalindex_callback();
        } else {
            return QThreadPool::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qthreadpool_receivers_isbase) {
            qthreadpool_receivers_isbase = false;
            return QThreadPool::receivers(signal);
        } else if (qthreadpool_receivers_callback != nullptr) {
            return qthreadpool_receivers_callback(this, signal);
        } else {
            return QThreadPool::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qthreadpool_issignalconnected_isbase) {
            qthreadpool_issignalconnected_isbase = false;
            return QThreadPool::isSignalConnected(signal);
        } else if (qthreadpool_issignalconnected_callback != nullptr) {
            return qthreadpool_issignalconnected_callback(this, signal);
        } else {
            return QThreadPool::isSignalConnected(signal);
        }
    }
};

#endif

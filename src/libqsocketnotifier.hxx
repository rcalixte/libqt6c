#pragma once
#ifndef SRCC_LIBVIRTUALQSOCKETNOTIFIER_H
#define SRCC_LIBVIRTUALQSOCKETNOTIFIER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSocketNotifier so that we can call protected methods
class VirtualQSocketNotifier : public QSocketNotifier {

  public:
    // Virtual class public types (including callbacks)
    using QSocketNotifier_Metacall_Callback = int (*)(QSocketNotifier*, QMetaObject::Call, int, void**);
    using QSocketNotifier_Event_Callback = bool (*)(QSocketNotifier*, QEvent*);
    using QSocketNotifier_EventFilter_Callback = bool (*)(QSocketNotifier*, QObject*, QEvent*);
    using QSocketNotifier_TimerEvent_Callback = void (*)(QSocketNotifier*, QTimerEvent*);
    using QSocketNotifier_ChildEvent_Callback = void (*)(QSocketNotifier*, QChildEvent*);
    using QSocketNotifier_CustomEvent_Callback = void (*)(QSocketNotifier*, QEvent*);
    using QSocketNotifier_ConnectNotify_Callback = void (*)(QSocketNotifier*, const QMetaMethod&);
    using QSocketNotifier_DisconnectNotify_Callback = void (*)(QSocketNotifier*, const QMetaMethod&);
    using QSocketNotifier_Sender_Callback = QObject* (*)();
    using QSocketNotifier_SenderSignalIndex_Callback = int (*)();
    using QSocketNotifier_Receivers_Callback = int (*)(const QSocketNotifier*, const char*);
    using QSocketNotifier_IsSignalConnected_Callback = bool (*)(const QSocketNotifier*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSocketNotifier_Metacall_Callback qsocketnotifier_metacall_callback = nullptr;
    QSocketNotifier_Event_Callback qsocketnotifier_event_callback = nullptr;
    QSocketNotifier_EventFilter_Callback qsocketnotifier_eventfilter_callback = nullptr;
    QSocketNotifier_TimerEvent_Callback qsocketnotifier_timerevent_callback = nullptr;
    QSocketNotifier_ChildEvent_Callback qsocketnotifier_childevent_callback = nullptr;
    QSocketNotifier_CustomEvent_Callback qsocketnotifier_customevent_callback = nullptr;
    QSocketNotifier_ConnectNotify_Callback qsocketnotifier_connectnotify_callback = nullptr;
    QSocketNotifier_DisconnectNotify_Callback qsocketnotifier_disconnectnotify_callback = nullptr;
    QSocketNotifier_Sender_Callback qsocketnotifier_sender_callback = nullptr;
    QSocketNotifier_SenderSignalIndex_Callback qsocketnotifier_sendersignalindex_callback = nullptr;
    QSocketNotifier_Receivers_Callback qsocketnotifier_receivers_callback = nullptr;
    QSocketNotifier_IsSignalConnected_Callback qsocketnotifier_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsocketnotifier_metacall_isbase = false;
    mutable bool qsocketnotifier_event_isbase = false;
    mutable bool qsocketnotifier_eventfilter_isbase = false;
    mutable bool qsocketnotifier_timerevent_isbase = false;
    mutable bool qsocketnotifier_childevent_isbase = false;
    mutable bool qsocketnotifier_customevent_isbase = false;
    mutable bool qsocketnotifier_connectnotify_isbase = false;
    mutable bool qsocketnotifier_disconnectnotify_isbase = false;
    mutable bool qsocketnotifier_sender_isbase = false;
    mutable bool qsocketnotifier_sendersignalindex_isbase = false;
    mutable bool qsocketnotifier_receivers_isbase = false;
    mutable bool qsocketnotifier_issignalconnected_isbase = false;

  public:
    VirtualQSocketNotifier(QSocketNotifier::Type param1) : QSocketNotifier(param1){};
    VirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2) : QSocketNotifier(socket, param2){};
    VirtualQSocketNotifier(QSocketNotifier::Type param1, QObject* parent) : QSocketNotifier(param1, parent){};
    VirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2, QObject* parent) : QSocketNotifier(socket, param2, parent){};

    ~VirtualQSocketNotifier() {
        qsocketnotifier_metacall_callback = nullptr;
        qsocketnotifier_event_callback = nullptr;
        qsocketnotifier_eventfilter_callback = nullptr;
        qsocketnotifier_timerevent_callback = nullptr;
        qsocketnotifier_childevent_callback = nullptr;
        qsocketnotifier_customevent_callback = nullptr;
        qsocketnotifier_connectnotify_callback = nullptr;
        qsocketnotifier_disconnectnotify_callback = nullptr;
        qsocketnotifier_sender_callback = nullptr;
        qsocketnotifier_sendersignalindex_callback = nullptr;
        qsocketnotifier_receivers_callback = nullptr;
        qsocketnotifier_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSocketNotifier_Metacall_Callback(QSocketNotifier_Metacall_Callback cb) { qsocketnotifier_metacall_callback = cb; }
    void setQSocketNotifier_Event_Callback(QSocketNotifier_Event_Callback cb) { qsocketnotifier_event_callback = cb; }
    void setQSocketNotifier_EventFilter_Callback(QSocketNotifier_EventFilter_Callback cb) { qsocketnotifier_eventfilter_callback = cb; }
    void setQSocketNotifier_TimerEvent_Callback(QSocketNotifier_TimerEvent_Callback cb) { qsocketnotifier_timerevent_callback = cb; }
    void setQSocketNotifier_ChildEvent_Callback(QSocketNotifier_ChildEvent_Callback cb) { qsocketnotifier_childevent_callback = cb; }
    void setQSocketNotifier_CustomEvent_Callback(QSocketNotifier_CustomEvent_Callback cb) { qsocketnotifier_customevent_callback = cb; }
    void setQSocketNotifier_ConnectNotify_Callback(QSocketNotifier_ConnectNotify_Callback cb) { qsocketnotifier_connectnotify_callback = cb; }
    void setQSocketNotifier_DisconnectNotify_Callback(QSocketNotifier_DisconnectNotify_Callback cb) { qsocketnotifier_disconnectnotify_callback = cb; }
    void setQSocketNotifier_Sender_Callback(QSocketNotifier_Sender_Callback cb) { qsocketnotifier_sender_callback = cb; }
    void setQSocketNotifier_SenderSignalIndex_Callback(QSocketNotifier_SenderSignalIndex_Callback cb) { qsocketnotifier_sendersignalindex_callback = cb; }
    void setQSocketNotifier_Receivers_Callback(QSocketNotifier_Receivers_Callback cb) { qsocketnotifier_receivers_callback = cb; }
    void setQSocketNotifier_IsSignalConnected_Callback(QSocketNotifier_IsSignalConnected_Callback cb) { qsocketnotifier_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSocketNotifier_Metacall_IsBase(bool value) const { qsocketnotifier_metacall_isbase = value; }
    void setQSocketNotifier_Event_IsBase(bool value) const { qsocketnotifier_event_isbase = value; }
    void setQSocketNotifier_EventFilter_IsBase(bool value) const { qsocketnotifier_eventfilter_isbase = value; }
    void setQSocketNotifier_TimerEvent_IsBase(bool value) const { qsocketnotifier_timerevent_isbase = value; }
    void setQSocketNotifier_ChildEvent_IsBase(bool value) const { qsocketnotifier_childevent_isbase = value; }
    void setQSocketNotifier_CustomEvent_IsBase(bool value) const { qsocketnotifier_customevent_isbase = value; }
    void setQSocketNotifier_ConnectNotify_IsBase(bool value) const { qsocketnotifier_connectnotify_isbase = value; }
    void setQSocketNotifier_DisconnectNotify_IsBase(bool value) const { qsocketnotifier_disconnectnotify_isbase = value; }
    void setQSocketNotifier_Sender_IsBase(bool value) const { qsocketnotifier_sender_isbase = value; }
    void setQSocketNotifier_SenderSignalIndex_IsBase(bool value) const { qsocketnotifier_sendersignalindex_isbase = value; }
    void setQSocketNotifier_Receivers_IsBase(bool value) const { qsocketnotifier_receivers_isbase = value; }
    void setQSocketNotifier_IsSignalConnected_IsBase(bool value) const { qsocketnotifier_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsocketnotifier_metacall_isbase) {
            qsocketnotifier_metacall_isbase = false;
            return QSocketNotifier::qt_metacall(param1, param2, param3);
        } else if (qsocketnotifier_metacall_callback != nullptr) {
            return qsocketnotifier_metacall_callback(this, param1, param2, param3);
        } else {
            return QSocketNotifier::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsocketnotifier_event_isbase) {
            qsocketnotifier_event_isbase = false;
            return QSocketNotifier::event(param1);
        } else if (qsocketnotifier_event_callback != nullptr) {
            return qsocketnotifier_event_callback(this, param1);
        } else {
            return QSocketNotifier::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsocketnotifier_eventfilter_isbase) {
            qsocketnotifier_eventfilter_isbase = false;
            return QSocketNotifier::eventFilter(watched, event);
        } else if (qsocketnotifier_eventfilter_callback != nullptr) {
            return qsocketnotifier_eventfilter_callback(this, watched, event);
        } else {
            return QSocketNotifier::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsocketnotifier_timerevent_isbase) {
            qsocketnotifier_timerevent_isbase = false;
            QSocketNotifier::timerEvent(event);
        } else if (qsocketnotifier_timerevent_callback != nullptr) {
            qsocketnotifier_timerevent_callback(this, event);
        } else {
            QSocketNotifier::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsocketnotifier_childevent_isbase) {
            qsocketnotifier_childevent_isbase = false;
            QSocketNotifier::childEvent(event);
        } else if (qsocketnotifier_childevent_callback != nullptr) {
            qsocketnotifier_childevent_callback(this, event);
        } else {
            QSocketNotifier::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsocketnotifier_customevent_isbase) {
            qsocketnotifier_customevent_isbase = false;
            QSocketNotifier::customEvent(event);
        } else if (qsocketnotifier_customevent_callback != nullptr) {
            qsocketnotifier_customevent_callback(this, event);
        } else {
            QSocketNotifier::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsocketnotifier_connectnotify_isbase) {
            qsocketnotifier_connectnotify_isbase = false;
            QSocketNotifier::connectNotify(signal);
        } else if (qsocketnotifier_connectnotify_callback != nullptr) {
            qsocketnotifier_connectnotify_callback(this, signal);
        } else {
            QSocketNotifier::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsocketnotifier_disconnectnotify_isbase) {
            qsocketnotifier_disconnectnotify_isbase = false;
            QSocketNotifier::disconnectNotify(signal);
        } else if (qsocketnotifier_disconnectnotify_callback != nullptr) {
            qsocketnotifier_disconnectnotify_callback(this, signal);
        } else {
            QSocketNotifier::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsocketnotifier_sender_isbase) {
            qsocketnotifier_sender_isbase = false;
            return QSocketNotifier::sender();
        } else if (qsocketnotifier_sender_callback != nullptr) {
            return qsocketnotifier_sender_callback();
        } else {
            return QSocketNotifier::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsocketnotifier_sendersignalindex_isbase) {
            qsocketnotifier_sendersignalindex_isbase = false;
            return QSocketNotifier::senderSignalIndex();
        } else if (qsocketnotifier_sendersignalindex_callback != nullptr) {
            return qsocketnotifier_sendersignalindex_callback();
        } else {
            return QSocketNotifier::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsocketnotifier_receivers_isbase) {
            qsocketnotifier_receivers_isbase = false;
            return QSocketNotifier::receivers(signal);
        } else if (qsocketnotifier_receivers_callback != nullptr) {
            return qsocketnotifier_receivers_callback(this, signal);
        } else {
            return QSocketNotifier::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsocketnotifier_issignalconnected_isbase) {
            qsocketnotifier_issignalconnected_isbase = false;
            return QSocketNotifier::isSignalConnected(signal);
        } else if (qsocketnotifier_issignalconnected_callback != nullptr) {
            return qsocketnotifier_issignalconnected_callback(this, signal);
        } else {
            return QSocketNotifier::isSignalConnected(signal);
        }
    }
};

#endif

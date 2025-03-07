#pragma once
#ifndef SRCC_LIBVIRTUALQGESTURE_H
#define SRCC_LIBVIRTUALQGESTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGesture so that we can call protected methods
class VirtualQGesture : public QGesture {

  public:
    // Virtual class public types (including callbacks)
    using QGesture_Metacall_Callback = int (*)(QGesture*, QMetaObject::Call, int, void**);
    using QGesture_Event_Callback = bool (*)(QGesture*, QEvent*);
    using QGesture_EventFilter_Callback = bool (*)(QGesture*, QObject*, QEvent*);
    using QGesture_TimerEvent_Callback = void (*)(QGesture*, QTimerEvent*);
    using QGesture_ChildEvent_Callback = void (*)(QGesture*, QChildEvent*);
    using QGesture_CustomEvent_Callback = void (*)(QGesture*, QEvent*);
    using QGesture_ConnectNotify_Callback = void (*)(QGesture*, const QMetaMethod&);
    using QGesture_DisconnectNotify_Callback = void (*)(QGesture*, const QMetaMethod&);
    using QGesture_Sender_Callback = QObject* (*)();
    using QGesture_SenderSignalIndex_Callback = int (*)();
    using QGesture_Receivers_Callback = int (*)(const QGesture*, const char*);
    using QGesture_IsSignalConnected_Callback = bool (*)(const QGesture*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGesture_Metacall_Callback qgesture_metacall_callback = nullptr;
    QGesture_Event_Callback qgesture_event_callback = nullptr;
    QGesture_EventFilter_Callback qgesture_eventfilter_callback = nullptr;
    QGesture_TimerEvent_Callback qgesture_timerevent_callback = nullptr;
    QGesture_ChildEvent_Callback qgesture_childevent_callback = nullptr;
    QGesture_CustomEvent_Callback qgesture_customevent_callback = nullptr;
    QGesture_ConnectNotify_Callback qgesture_connectnotify_callback = nullptr;
    QGesture_DisconnectNotify_Callback qgesture_disconnectnotify_callback = nullptr;
    QGesture_Sender_Callback qgesture_sender_callback = nullptr;
    QGesture_SenderSignalIndex_Callback qgesture_sendersignalindex_callback = nullptr;
    QGesture_Receivers_Callback qgesture_receivers_callback = nullptr;
    QGesture_IsSignalConnected_Callback qgesture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgesture_metacall_isbase = false;
    mutable bool qgesture_event_isbase = false;
    mutable bool qgesture_eventfilter_isbase = false;
    mutable bool qgesture_timerevent_isbase = false;
    mutable bool qgesture_childevent_isbase = false;
    mutable bool qgesture_customevent_isbase = false;
    mutable bool qgesture_connectnotify_isbase = false;
    mutable bool qgesture_disconnectnotify_isbase = false;
    mutable bool qgesture_sender_isbase = false;
    mutable bool qgesture_sendersignalindex_isbase = false;
    mutable bool qgesture_receivers_isbase = false;
    mutable bool qgesture_issignalconnected_isbase = false;

  public:
    VirtualQGesture() : QGesture(){};
    VirtualQGesture(QObject* parent) : QGesture(parent){};

    ~VirtualQGesture() {
        qgesture_metacall_callback = nullptr;
        qgesture_event_callback = nullptr;
        qgesture_eventfilter_callback = nullptr;
        qgesture_timerevent_callback = nullptr;
        qgesture_childevent_callback = nullptr;
        qgesture_customevent_callback = nullptr;
        qgesture_connectnotify_callback = nullptr;
        qgesture_disconnectnotify_callback = nullptr;
        qgesture_sender_callback = nullptr;
        qgesture_sendersignalindex_callback = nullptr;
        qgesture_receivers_callback = nullptr;
        qgesture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGesture_Metacall_Callback(QGesture_Metacall_Callback cb) { qgesture_metacall_callback = cb; }
    void setQGesture_Event_Callback(QGesture_Event_Callback cb) { qgesture_event_callback = cb; }
    void setQGesture_EventFilter_Callback(QGesture_EventFilter_Callback cb) { qgesture_eventfilter_callback = cb; }
    void setQGesture_TimerEvent_Callback(QGesture_TimerEvent_Callback cb) { qgesture_timerevent_callback = cb; }
    void setQGesture_ChildEvent_Callback(QGesture_ChildEvent_Callback cb) { qgesture_childevent_callback = cb; }
    void setQGesture_CustomEvent_Callback(QGesture_CustomEvent_Callback cb) { qgesture_customevent_callback = cb; }
    void setQGesture_ConnectNotify_Callback(QGesture_ConnectNotify_Callback cb) { qgesture_connectnotify_callback = cb; }
    void setQGesture_DisconnectNotify_Callback(QGesture_DisconnectNotify_Callback cb) { qgesture_disconnectnotify_callback = cb; }
    void setQGesture_Sender_Callback(QGesture_Sender_Callback cb) { qgesture_sender_callback = cb; }
    void setQGesture_SenderSignalIndex_Callback(QGesture_SenderSignalIndex_Callback cb) { qgesture_sendersignalindex_callback = cb; }
    void setQGesture_Receivers_Callback(QGesture_Receivers_Callback cb) { qgesture_receivers_callback = cb; }
    void setQGesture_IsSignalConnected_Callback(QGesture_IsSignalConnected_Callback cb) { qgesture_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGesture_Metacall_IsBase(bool value) const { qgesture_metacall_isbase = value; }
    void setQGesture_Event_IsBase(bool value) const { qgesture_event_isbase = value; }
    void setQGesture_EventFilter_IsBase(bool value) const { qgesture_eventfilter_isbase = value; }
    void setQGesture_TimerEvent_IsBase(bool value) const { qgesture_timerevent_isbase = value; }
    void setQGesture_ChildEvent_IsBase(bool value) const { qgesture_childevent_isbase = value; }
    void setQGesture_CustomEvent_IsBase(bool value) const { qgesture_customevent_isbase = value; }
    void setQGesture_ConnectNotify_IsBase(bool value) const { qgesture_connectnotify_isbase = value; }
    void setQGesture_DisconnectNotify_IsBase(bool value) const { qgesture_disconnectnotify_isbase = value; }
    void setQGesture_Sender_IsBase(bool value) const { qgesture_sender_isbase = value; }
    void setQGesture_SenderSignalIndex_IsBase(bool value) const { qgesture_sendersignalindex_isbase = value; }
    void setQGesture_Receivers_IsBase(bool value) const { qgesture_receivers_isbase = value; }
    void setQGesture_IsSignalConnected_IsBase(bool value) const { qgesture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgesture_metacall_isbase) {
            qgesture_metacall_isbase = false;
            return QGesture::qt_metacall(param1, param2, param3);
        } else if (qgesture_metacall_callback != nullptr) {
            return qgesture_metacall_callback(this, param1, param2, param3);
        } else {
            return QGesture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgesture_event_isbase) {
            qgesture_event_isbase = false;
            return QGesture::event(event);
        } else if (qgesture_event_callback != nullptr) {
            return qgesture_event_callback(this, event);
        } else {
            return QGesture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgesture_eventfilter_isbase) {
            qgesture_eventfilter_isbase = false;
            return QGesture::eventFilter(watched, event);
        } else if (qgesture_eventfilter_callback != nullptr) {
            return qgesture_eventfilter_callback(this, watched, event);
        } else {
            return QGesture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgesture_timerevent_isbase) {
            qgesture_timerevent_isbase = false;
            QGesture::timerEvent(event);
        } else if (qgesture_timerevent_callback != nullptr) {
            qgesture_timerevent_callback(this, event);
        } else {
            QGesture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgesture_childevent_isbase) {
            qgesture_childevent_isbase = false;
            QGesture::childEvent(event);
        } else if (qgesture_childevent_callback != nullptr) {
            qgesture_childevent_callback(this, event);
        } else {
            QGesture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgesture_customevent_isbase) {
            qgesture_customevent_isbase = false;
            QGesture::customEvent(event);
        } else if (qgesture_customevent_callback != nullptr) {
            qgesture_customevent_callback(this, event);
        } else {
            QGesture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgesture_connectnotify_isbase) {
            qgesture_connectnotify_isbase = false;
            QGesture::connectNotify(signal);
        } else if (qgesture_connectnotify_callback != nullptr) {
            qgesture_connectnotify_callback(this, signal);
        } else {
            QGesture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgesture_disconnectnotify_isbase) {
            qgesture_disconnectnotify_isbase = false;
            QGesture::disconnectNotify(signal);
        } else if (qgesture_disconnectnotify_callback != nullptr) {
            qgesture_disconnectnotify_callback(this, signal);
        } else {
            QGesture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgesture_sender_isbase) {
            qgesture_sender_isbase = false;
            return QGesture::sender();
        } else if (qgesture_sender_callback != nullptr) {
            return qgesture_sender_callback();
        } else {
            return QGesture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgesture_sendersignalindex_isbase) {
            qgesture_sendersignalindex_isbase = false;
            return QGesture::senderSignalIndex();
        } else if (qgesture_sendersignalindex_callback != nullptr) {
            return qgesture_sendersignalindex_callback();
        } else {
            return QGesture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgesture_receivers_isbase) {
            qgesture_receivers_isbase = false;
            return QGesture::receivers(signal);
        } else if (qgesture_receivers_callback != nullptr) {
            return qgesture_receivers_callback(this, signal);
        } else {
            return QGesture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgesture_issignalconnected_isbase) {
            qgesture_issignalconnected_isbase = false;
            return QGesture::isSignalConnected(signal);
        } else if (qgesture_issignalconnected_callback != nullptr) {
            return qgesture_issignalconnected_callback(this, signal);
        } else {
            return QGesture::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QPanGesture so that we can call protected methods
class VirtualQPanGesture : public QPanGesture {

  public:
    // Virtual class public types (including callbacks)
    using QPanGesture_Metacall_Callback = int (*)(QPanGesture*, QMetaObject::Call, int, void**);
    using QPanGesture_Event_Callback = bool (*)(QPanGesture*, QEvent*);
    using QPanGesture_EventFilter_Callback = bool (*)(QPanGesture*, QObject*, QEvent*);
    using QPanGesture_TimerEvent_Callback = void (*)(QPanGesture*, QTimerEvent*);
    using QPanGesture_ChildEvent_Callback = void (*)(QPanGesture*, QChildEvent*);
    using QPanGesture_CustomEvent_Callback = void (*)(QPanGesture*, QEvent*);
    using QPanGesture_ConnectNotify_Callback = void (*)(QPanGesture*, const QMetaMethod&);
    using QPanGesture_DisconnectNotify_Callback = void (*)(QPanGesture*, const QMetaMethod&);
    using QPanGesture_Sender_Callback = QObject* (*)();
    using QPanGesture_SenderSignalIndex_Callback = int (*)();
    using QPanGesture_Receivers_Callback = int (*)(const QPanGesture*, const char*);
    using QPanGesture_IsSignalConnected_Callback = bool (*)(const QPanGesture*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPanGesture_Metacall_Callback qpangesture_metacall_callback = nullptr;
    QPanGesture_Event_Callback qpangesture_event_callback = nullptr;
    QPanGesture_EventFilter_Callback qpangesture_eventfilter_callback = nullptr;
    QPanGesture_TimerEvent_Callback qpangesture_timerevent_callback = nullptr;
    QPanGesture_ChildEvent_Callback qpangesture_childevent_callback = nullptr;
    QPanGesture_CustomEvent_Callback qpangesture_customevent_callback = nullptr;
    QPanGesture_ConnectNotify_Callback qpangesture_connectnotify_callback = nullptr;
    QPanGesture_DisconnectNotify_Callback qpangesture_disconnectnotify_callback = nullptr;
    QPanGesture_Sender_Callback qpangesture_sender_callback = nullptr;
    QPanGesture_SenderSignalIndex_Callback qpangesture_sendersignalindex_callback = nullptr;
    QPanGesture_Receivers_Callback qpangesture_receivers_callback = nullptr;
    QPanGesture_IsSignalConnected_Callback qpangesture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpangesture_metacall_isbase = false;
    mutable bool qpangesture_event_isbase = false;
    mutable bool qpangesture_eventfilter_isbase = false;
    mutable bool qpangesture_timerevent_isbase = false;
    mutable bool qpangesture_childevent_isbase = false;
    mutable bool qpangesture_customevent_isbase = false;
    mutable bool qpangesture_connectnotify_isbase = false;
    mutable bool qpangesture_disconnectnotify_isbase = false;
    mutable bool qpangesture_sender_isbase = false;
    mutable bool qpangesture_sendersignalindex_isbase = false;
    mutable bool qpangesture_receivers_isbase = false;
    mutable bool qpangesture_issignalconnected_isbase = false;

  public:
    VirtualQPanGesture() : QPanGesture(){};
    VirtualQPanGesture(QObject* parent) : QPanGesture(parent){};

    ~VirtualQPanGesture() {
        qpangesture_metacall_callback = nullptr;
        qpangesture_event_callback = nullptr;
        qpangesture_eventfilter_callback = nullptr;
        qpangesture_timerevent_callback = nullptr;
        qpangesture_childevent_callback = nullptr;
        qpangesture_customevent_callback = nullptr;
        qpangesture_connectnotify_callback = nullptr;
        qpangesture_disconnectnotify_callback = nullptr;
        qpangesture_sender_callback = nullptr;
        qpangesture_sendersignalindex_callback = nullptr;
        qpangesture_receivers_callback = nullptr;
        qpangesture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPanGesture_Metacall_Callback(QPanGesture_Metacall_Callback cb) { qpangesture_metacall_callback = cb; }
    void setQPanGesture_Event_Callback(QPanGesture_Event_Callback cb) { qpangesture_event_callback = cb; }
    void setQPanGesture_EventFilter_Callback(QPanGesture_EventFilter_Callback cb) { qpangesture_eventfilter_callback = cb; }
    void setQPanGesture_TimerEvent_Callback(QPanGesture_TimerEvent_Callback cb) { qpangesture_timerevent_callback = cb; }
    void setQPanGesture_ChildEvent_Callback(QPanGesture_ChildEvent_Callback cb) { qpangesture_childevent_callback = cb; }
    void setQPanGesture_CustomEvent_Callback(QPanGesture_CustomEvent_Callback cb) { qpangesture_customevent_callback = cb; }
    void setQPanGesture_ConnectNotify_Callback(QPanGesture_ConnectNotify_Callback cb) { qpangesture_connectnotify_callback = cb; }
    void setQPanGesture_DisconnectNotify_Callback(QPanGesture_DisconnectNotify_Callback cb) { qpangesture_disconnectnotify_callback = cb; }
    void setQPanGesture_Sender_Callback(QPanGesture_Sender_Callback cb) { qpangesture_sender_callback = cb; }
    void setQPanGesture_SenderSignalIndex_Callback(QPanGesture_SenderSignalIndex_Callback cb) { qpangesture_sendersignalindex_callback = cb; }
    void setQPanGesture_Receivers_Callback(QPanGesture_Receivers_Callback cb) { qpangesture_receivers_callback = cb; }
    void setQPanGesture_IsSignalConnected_Callback(QPanGesture_IsSignalConnected_Callback cb) { qpangesture_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPanGesture_Metacall_IsBase(bool value) const { qpangesture_metacall_isbase = value; }
    void setQPanGesture_Event_IsBase(bool value) const { qpangesture_event_isbase = value; }
    void setQPanGesture_EventFilter_IsBase(bool value) const { qpangesture_eventfilter_isbase = value; }
    void setQPanGesture_TimerEvent_IsBase(bool value) const { qpangesture_timerevent_isbase = value; }
    void setQPanGesture_ChildEvent_IsBase(bool value) const { qpangesture_childevent_isbase = value; }
    void setQPanGesture_CustomEvent_IsBase(bool value) const { qpangesture_customevent_isbase = value; }
    void setQPanGesture_ConnectNotify_IsBase(bool value) const { qpangesture_connectnotify_isbase = value; }
    void setQPanGesture_DisconnectNotify_IsBase(bool value) const { qpangesture_disconnectnotify_isbase = value; }
    void setQPanGesture_Sender_IsBase(bool value) const { qpangesture_sender_isbase = value; }
    void setQPanGesture_SenderSignalIndex_IsBase(bool value) const { qpangesture_sendersignalindex_isbase = value; }
    void setQPanGesture_Receivers_IsBase(bool value) const { qpangesture_receivers_isbase = value; }
    void setQPanGesture_IsSignalConnected_IsBase(bool value) const { qpangesture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpangesture_metacall_isbase) {
            qpangesture_metacall_isbase = false;
            return QPanGesture::qt_metacall(param1, param2, param3);
        } else if (qpangesture_metacall_callback != nullptr) {
            return qpangesture_metacall_callback(this, param1, param2, param3);
        } else {
            return QPanGesture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpangesture_event_isbase) {
            qpangesture_event_isbase = false;
            return QPanGesture::event(event);
        } else if (qpangesture_event_callback != nullptr) {
            return qpangesture_event_callback(this, event);
        } else {
            return QPanGesture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpangesture_eventfilter_isbase) {
            qpangesture_eventfilter_isbase = false;
            return QPanGesture::eventFilter(watched, event);
        } else if (qpangesture_eventfilter_callback != nullptr) {
            return qpangesture_eventfilter_callback(this, watched, event);
        } else {
            return QPanGesture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpangesture_timerevent_isbase) {
            qpangesture_timerevent_isbase = false;
            QPanGesture::timerEvent(event);
        } else if (qpangesture_timerevent_callback != nullptr) {
            qpangesture_timerevent_callback(this, event);
        } else {
            QPanGesture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpangesture_childevent_isbase) {
            qpangesture_childevent_isbase = false;
            QPanGesture::childEvent(event);
        } else if (qpangesture_childevent_callback != nullptr) {
            qpangesture_childevent_callback(this, event);
        } else {
            QPanGesture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpangesture_customevent_isbase) {
            qpangesture_customevent_isbase = false;
            QPanGesture::customEvent(event);
        } else if (qpangesture_customevent_callback != nullptr) {
            qpangesture_customevent_callback(this, event);
        } else {
            QPanGesture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpangesture_connectnotify_isbase) {
            qpangesture_connectnotify_isbase = false;
            QPanGesture::connectNotify(signal);
        } else if (qpangesture_connectnotify_callback != nullptr) {
            qpangesture_connectnotify_callback(this, signal);
        } else {
            QPanGesture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpangesture_disconnectnotify_isbase) {
            qpangesture_disconnectnotify_isbase = false;
            QPanGesture::disconnectNotify(signal);
        } else if (qpangesture_disconnectnotify_callback != nullptr) {
            qpangesture_disconnectnotify_callback(this, signal);
        } else {
            QPanGesture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpangesture_sender_isbase) {
            qpangesture_sender_isbase = false;
            return QPanGesture::sender();
        } else if (qpangesture_sender_callback != nullptr) {
            return qpangesture_sender_callback();
        } else {
            return QPanGesture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpangesture_sendersignalindex_isbase) {
            qpangesture_sendersignalindex_isbase = false;
            return QPanGesture::senderSignalIndex();
        } else if (qpangesture_sendersignalindex_callback != nullptr) {
            return qpangesture_sendersignalindex_callback();
        } else {
            return QPanGesture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpangesture_receivers_isbase) {
            qpangesture_receivers_isbase = false;
            return QPanGesture::receivers(signal);
        } else if (qpangesture_receivers_callback != nullptr) {
            return qpangesture_receivers_callback(this, signal);
        } else {
            return QPanGesture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpangesture_issignalconnected_isbase) {
            qpangesture_issignalconnected_isbase = false;
            return QPanGesture::isSignalConnected(signal);
        } else if (qpangesture_issignalconnected_callback != nullptr) {
            return qpangesture_issignalconnected_callback(this, signal);
        } else {
            return QPanGesture::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QPinchGesture so that we can call protected methods
class VirtualQPinchGesture : public QPinchGesture {

  public:
    // Virtual class public types (including callbacks)
    using QPinchGesture_Metacall_Callback = int (*)(QPinchGesture*, QMetaObject::Call, int, void**);
    using QPinchGesture_Event_Callback = bool (*)(QPinchGesture*, QEvent*);
    using QPinchGesture_EventFilter_Callback = bool (*)(QPinchGesture*, QObject*, QEvent*);
    using QPinchGesture_TimerEvent_Callback = void (*)(QPinchGesture*, QTimerEvent*);
    using QPinchGesture_ChildEvent_Callback = void (*)(QPinchGesture*, QChildEvent*);
    using QPinchGesture_CustomEvent_Callback = void (*)(QPinchGesture*, QEvent*);
    using QPinchGesture_ConnectNotify_Callback = void (*)(QPinchGesture*, const QMetaMethod&);
    using QPinchGesture_DisconnectNotify_Callback = void (*)(QPinchGesture*, const QMetaMethod&);
    using QPinchGesture_Sender_Callback = QObject* (*)();
    using QPinchGesture_SenderSignalIndex_Callback = int (*)();
    using QPinchGesture_Receivers_Callback = int (*)(const QPinchGesture*, const char*);
    using QPinchGesture_IsSignalConnected_Callback = bool (*)(const QPinchGesture*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPinchGesture_Metacall_Callback qpinchgesture_metacall_callback = nullptr;
    QPinchGesture_Event_Callback qpinchgesture_event_callback = nullptr;
    QPinchGesture_EventFilter_Callback qpinchgesture_eventfilter_callback = nullptr;
    QPinchGesture_TimerEvent_Callback qpinchgesture_timerevent_callback = nullptr;
    QPinchGesture_ChildEvent_Callback qpinchgesture_childevent_callback = nullptr;
    QPinchGesture_CustomEvent_Callback qpinchgesture_customevent_callback = nullptr;
    QPinchGesture_ConnectNotify_Callback qpinchgesture_connectnotify_callback = nullptr;
    QPinchGesture_DisconnectNotify_Callback qpinchgesture_disconnectnotify_callback = nullptr;
    QPinchGesture_Sender_Callback qpinchgesture_sender_callback = nullptr;
    QPinchGesture_SenderSignalIndex_Callback qpinchgesture_sendersignalindex_callback = nullptr;
    QPinchGesture_Receivers_Callback qpinchgesture_receivers_callback = nullptr;
    QPinchGesture_IsSignalConnected_Callback qpinchgesture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpinchgesture_metacall_isbase = false;
    mutable bool qpinchgesture_event_isbase = false;
    mutable bool qpinchgesture_eventfilter_isbase = false;
    mutable bool qpinchgesture_timerevent_isbase = false;
    mutable bool qpinchgesture_childevent_isbase = false;
    mutable bool qpinchgesture_customevent_isbase = false;
    mutable bool qpinchgesture_connectnotify_isbase = false;
    mutable bool qpinchgesture_disconnectnotify_isbase = false;
    mutable bool qpinchgesture_sender_isbase = false;
    mutable bool qpinchgesture_sendersignalindex_isbase = false;
    mutable bool qpinchgesture_receivers_isbase = false;
    mutable bool qpinchgesture_issignalconnected_isbase = false;

  public:
    VirtualQPinchGesture() : QPinchGesture(){};
    VirtualQPinchGesture(QObject* parent) : QPinchGesture(parent){};

    ~VirtualQPinchGesture() {
        qpinchgesture_metacall_callback = nullptr;
        qpinchgesture_event_callback = nullptr;
        qpinchgesture_eventfilter_callback = nullptr;
        qpinchgesture_timerevent_callback = nullptr;
        qpinchgesture_childevent_callback = nullptr;
        qpinchgesture_customevent_callback = nullptr;
        qpinchgesture_connectnotify_callback = nullptr;
        qpinchgesture_disconnectnotify_callback = nullptr;
        qpinchgesture_sender_callback = nullptr;
        qpinchgesture_sendersignalindex_callback = nullptr;
        qpinchgesture_receivers_callback = nullptr;
        qpinchgesture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPinchGesture_Metacall_Callback(QPinchGesture_Metacall_Callback cb) { qpinchgesture_metacall_callback = cb; }
    void setQPinchGesture_Event_Callback(QPinchGesture_Event_Callback cb) { qpinchgesture_event_callback = cb; }
    void setQPinchGesture_EventFilter_Callback(QPinchGesture_EventFilter_Callback cb) { qpinchgesture_eventfilter_callback = cb; }
    void setQPinchGesture_TimerEvent_Callback(QPinchGesture_TimerEvent_Callback cb) { qpinchgesture_timerevent_callback = cb; }
    void setQPinchGesture_ChildEvent_Callback(QPinchGesture_ChildEvent_Callback cb) { qpinchgesture_childevent_callback = cb; }
    void setQPinchGesture_CustomEvent_Callback(QPinchGesture_CustomEvent_Callback cb) { qpinchgesture_customevent_callback = cb; }
    void setQPinchGesture_ConnectNotify_Callback(QPinchGesture_ConnectNotify_Callback cb) { qpinchgesture_connectnotify_callback = cb; }
    void setQPinchGesture_DisconnectNotify_Callback(QPinchGesture_DisconnectNotify_Callback cb) { qpinchgesture_disconnectnotify_callback = cb; }
    void setQPinchGesture_Sender_Callback(QPinchGesture_Sender_Callback cb) { qpinchgesture_sender_callback = cb; }
    void setQPinchGesture_SenderSignalIndex_Callback(QPinchGesture_SenderSignalIndex_Callback cb) { qpinchgesture_sendersignalindex_callback = cb; }
    void setQPinchGesture_Receivers_Callback(QPinchGesture_Receivers_Callback cb) { qpinchgesture_receivers_callback = cb; }
    void setQPinchGesture_IsSignalConnected_Callback(QPinchGesture_IsSignalConnected_Callback cb) { qpinchgesture_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPinchGesture_Metacall_IsBase(bool value) const { qpinchgesture_metacall_isbase = value; }
    void setQPinchGesture_Event_IsBase(bool value) const { qpinchgesture_event_isbase = value; }
    void setQPinchGesture_EventFilter_IsBase(bool value) const { qpinchgesture_eventfilter_isbase = value; }
    void setQPinchGesture_TimerEvent_IsBase(bool value) const { qpinchgesture_timerevent_isbase = value; }
    void setQPinchGesture_ChildEvent_IsBase(bool value) const { qpinchgesture_childevent_isbase = value; }
    void setQPinchGesture_CustomEvent_IsBase(bool value) const { qpinchgesture_customevent_isbase = value; }
    void setQPinchGesture_ConnectNotify_IsBase(bool value) const { qpinchgesture_connectnotify_isbase = value; }
    void setQPinchGesture_DisconnectNotify_IsBase(bool value) const { qpinchgesture_disconnectnotify_isbase = value; }
    void setQPinchGesture_Sender_IsBase(bool value) const { qpinchgesture_sender_isbase = value; }
    void setQPinchGesture_SenderSignalIndex_IsBase(bool value) const { qpinchgesture_sendersignalindex_isbase = value; }
    void setQPinchGesture_Receivers_IsBase(bool value) const { qpinchgesture_receivers_isbase = value; }
    void setQPinchGesture_IsSignalConnected_IsBase(bool value) const { qpinchgesture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpinchgesture_metacall_isbase) {
            qpinchgesture_metacall_isbase = false;
            return QPinchGesture::qt_metacall(param1, param2, param3);
        } else if (qpinchgesture_metacall_callback != nullptr) {
            return qpinchgesture_metacall_callback(this, param1, param2, param3);
        } else {
            return QPinchGesture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpinchgesture_event_isbase) {
            qpinchgesture_event_isbase = false;
            return QPinchGesture::event(event);
        } else if (qpinchgesture_event_callback != nullptr) {
            return qpinchgesture_event_callback(this, event);
        } else {
            return QPinchGesture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpinchgesture_eventfilter_isbase) {
            qpinchgesture_eventfilter_isbase = false;
            return QPinchGesture::eventFilter(watched, event);
        } else if (qpinchgesture_eventfilter_callback != nullptr) {
            return qpinchgesture_eventfilter_callback(this, watched, event);
        } else {
            return QPinchGesture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpinchgesture_timerevent_isbase) {
            qpinchgesture_timerevent_isbase = false;
            QPinchGesture::timerEvent(event);
        } else if (qpinchgesture_timerevent_callback != nullptr) {
            qpinchgesture_timerevent_callback(this, event);
        } else {
            QPinchGesture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpinchgesture_childevent_isbase) {
            qpinchgesture_childevent_isbase = false;
            QPinchGesture::childEvent(event);
        } else if (qpinchgesture_childevent_callback != nullptr) {
            qpinchgesture_childevent_callback(this, event);
        } else {
            QPinchGesture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpinchgesture_customevent_isbase) {
            qpinchgesture_customevent_isbase = false;
            QPinchGesture::customEvent(event);
        } else if (qpinchgesture_customevent_callback != nullptr) {
            qpinchgesture_customevent_callback(this, event);
        } else {
            QPinchGesture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpinchgesture_connectnotify_isbase) {
            qpinchgesture_connectnotify_isbase = false;
            QPinchGesture::connectNotify(signal);
        } else if (qpinchgesture_connectnotify_callback != nullptr) {
            qpinchgesture_connectnotify_callback(this, signal);
        } else {
            QPinchGesture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpinchgesture_disconnectnotify_isbase) {
            qpinchgesture_disconnectnotify_isbase = false;
            QPinchGesture::disconnectNotify(signal);
        } else if (qpinchgesture_disconnectnotify_callback != nullptr) {
            qpinchgesture_disconnectnotify_callback(this, signal);
        } else {
            QPinchGesture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpinchgesture_sender_isbase) {
            qpinchgesture_sender_isbase = false;
            return QPinchGesture::sender();
        } else if (qpinchgesture_sender_callback != nullptr) {
            return qpinchgesture_sender_callback();
        } else {
            return QPinchGesture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpinchgesture_sendersignalindex_isbase) {
            qpinchgesture_sendersignalindex_isbase = false;
            return QPinchGesture::senderSignalIndex();
        } else if (qpinchgesture_sendersignalindex_callback != nullptr) {
            return qpinchgesture_sendersignalindex_callback();
        } else {
            return QPinchGesture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpinchgesture_receivers_isbase) {
            qpinchgesture_receivers_isbase = false;
            return QPinchGesture::receivers(signal);
        } else if (qpinchgesture_receivers_callback != nullptr) {
            return qpinchgesture_receivers_callback(this, signal);
        } else {
            return QPinchGesture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpinchgesture_issignalconnected_isbase) {
            qpinchgesture_issignalconnected_isbase = false;
            return QPinchGesture::isSignalConnected(signal);
        } else if (qpinchgesture_issignalconnected_callback != nullptr) {
            return qpinchgesture_issignalconnected_callback(this, signal);
        } else {
            return QPinchGesture::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QSwipeGesture so that we can call protected methods
class VirtualQSwipeGesture : public QSwipeGesture {

  public:
    // Virtual class public types (including callbacks)
    using QSwipeGesture_Metacall_Callback = int (*)(QSwipeGesture*, QMetaObject::Call, int, void**);
    using QSwipeGesture_Event_Callback = bool (*)(QSwipeGesture*, QEvent*);
    using QSwipeGesture_EventFilter_Callback = bool (*)(QSwipeGesture*, QObject*, QEvent*);
    using QSwipeGesture_TimerEvent_Callback = void (*)(QSwipeGesture*, QTimerEvent*);
    using QSwipeGesture_ChildEvent_Callback = void (*)(QSwipeGesture*, QChildEvent*);
    using QSwipeGesture_CustomEvent_Callback = void (*)(QSwipeGesture*, QEvent*);
    using QSwipeGesture_ConnectNotify_Callback = void (*)(QSwipeGesture*, const QMetaMethod&);
    using QSwipeGesture_DisconnectNotify_Callback = void (*)(QSwipeGesture*, const QMetaMethod&);
    using QSwipeGesture_Sender_Callback = QObject* (*)();
    using QSwipeGesture_SenderSignalIndex_Callback = int (*)();
    using QSwipeGesture_Receivers_Callback = int (*)(const QSwipeGesture*, const char*);
    using QSwipeGesture_IsSignalConnected_Callback = bool (*)(const QSwipeGesture*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSwipeGesture_Metacall_Callback qswipegesture_metacall_callback = nullptr;
    QSwipeGesture_Event_Callback qswipegesture_event_callback = nullptr;
    QSwipeGesture_EventFilter_Callback qswipegesture_eventfilter_callback = nullptr;
    QSwipeGesture_TimerEvent_Callback qswipegesture_timerevent_callback = nullptr;
    QSwipeGesture_ChildEvent_Callback qswipegesture_childevent_callback = nullptr;
    QSwipeGesture_CustomEvent_Callback qswipegesture_customevent_callback = nullptr;
    QSwipeGesture_ConnectNotify_Callback qswipegesture_connectnotify_callback = nullptr;
    QSwipeGesture_DisconnectNotify_Callback qswipegesture_disconnectnotify_callback = nullptr;
    QSwipeGesture_Sender_Callback qswipegesture_sender_callback = nullptr;
    QSwipeGesture_SenderSignalIndex_Callback qswipegesture_sendersignalindex_callback = nullptr;
    QSwipeGesture_Receivers_Callback qswipegesture_receivers_callback = nullptr;
    QSwipeGesture_IsSignalConnected_Callback qswipegesture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qswipegesture_metacall_isbase = false;
    mutable bool qswipegesture_event_isbase = false;
    mutable bool qswipegesture_eventfilter_isbase = false;
    mutable bool qswipegesture_timerevent_isbase = false;
    mutable bool qswipegesture_childevent_isbase = false;
    mutable bool qswipegesture_customevent_isbase = false;
    mutable bool qswipegesture_connectnotify_isbase = false;
    mutable bool qswipegesture_disconnectnotify_isbase = false;
    mutable bool qswipegesture_sender_isbase = false;
    mutable bool qswipegesture_sendersignalindex_isbase = false;
    mutable bool qswipegesture_receivers_isbase = false;
    mutable bool qswipegesture_issignalconnected_isbase = false;

  public:
    VirtualQSwipeGesture() : QSwipeGesture(){};
    VirtualQSwipeGesture(QObject* parent) : QSwipeGesture(parent){};

    ~VirtualQSwipeGesture() {
        qswipegesture_metacall_callback = nullptr;
        qswipegesture_event_callback = nullptr;
        qswipegesture_eventfilter_callback = nullptr;
        qswipegesture_timerevent_callback = nullptr;
        qswipegesture_childevent_callback = nullptr;
        qswipegesture_customevent_callback = nullptr;
        qswipegesture_connectnotify_callback = nullptr;
        qswipegesture_disconnectnotify_callback = nullptr;
        qswipegesture_sender_callback = nullptr;
        qswipegesture_sendersignalindex_callback = nullptr;
        qswipegesture_receivers_callback = nullptr;
        qswipegesture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSwipeGesture_Metacall_Callback(QSwipeGesture_Metacall_Callback cb) { qswipegesture_metacall_callback = cb; }
    void setQSwipeGesture_Event_Callback(QSwipeGesture_Event_Callback cb) { qswipegesture_event_callback = cb; }
    void setQSwipeGesture_EventFilter_Callback(QSwipeGesture_EventFilter_Callback cb) { qswipegesture_eventfilter_callback = cb; }
    void setQSwipeGesture_TimerEvent_Callback(QSwipeGesture_TimerEvent_Callback cb) { qswipegesture_timerevent_callback = cb; }
    void setQSwipeGesture_ChildEvent_Callback(QSwipeGesture_ChildEvent_Callback cb) { qswipegesture_childevent_callback = cb; }
    void setQSwipeGesture_CustomEvent_Callback(QSwipeGesture_CustomEvent_Callback cb) { qswipegesture_customevent_callback = cb; }
    void setQSwipeGesture_ConnectNotify_Callback(QSwipeGesture_ConnectNotify_Callback cb) { qswipegesture_connectnotify_callback = cb; }
    void setQSwipeGesture_DisconnectNotify_Callback(QSwipeGesture_DisconnectNotify_Callback cb) { qswipegesture_disconnectnotify_callback = cb; }
    void setQSwipeGesture_Sender_Callback(QSwipeGesture_Sender_Callback cb) { qswipegesture_sender_callback = cb; }
    void setQSwipeGesture_SenderSignalIndex_Callback(QSwipeGesture_SenderSignalIndex_Callback cb) { qswipegesture_sendersignalindex_callback = cb; }
    void setQSwipeGesture_Receivers_Callback(QSwipeGesture_Receivers_Callback cb) { qswipegesture_receivers_callback = cb; }
    void setQSwipeGesture_IsSignalConnected_Callback(QSwipeGesture_IsSignalConnected_Callback cb) { qswipegesture_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSwipeGesture_Metacall_IsBase(bool value) const { qswipegesture_metacall_isbase = value; }
    void setQSwipeGesture_Event_IsBase(bool value) const { qswipegesture_event_isbase = value; }
    void setQSwipeGesture_EventFilter_IsBase(bool value) const { qswipegesture_eventfilter_isbase = value; }
    void setQSwipeGesture_TimerEvent_IsBase(bool value) const { qswipegesture_timerevent_isbase = value; }
    void setQSwipeGesture_ChildEvent_IsBase(bool value) const { qswipegesture_childevent_isbase = value; }
    void setQSwipeGesture_CustomEvent_IsBase(bool value) const { qswipegesture_customevent_isbase = value; }
    void setQSwipeGesture_ConnectNotify_IsBase(bool value) const { qswipegesture_connectnotify_isbase = value; }
    void setQSwipeGesture_DisconnectNotify_IsBase(bool value) const { qswipegesture_disconnectnotify_isbase = value; }
    void setQSwipeGesture_Sender_IsBase(bool value) const { qswipegesture_sender_isbase = value; }
    void setQSwipeGesture_SenderSignalIndex_IsBase(bool value) const { qswipegesture_sendersignalindex_isbase = value; }
    void setQSwipeGesture_Receivers_IsBase(bool value) const { qswipegesture_receivers_isbase = value; }
    void setQSwipeGesture_IsSignalConnected_IsBase(bool value) const { qswipegesture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qswipegesture_metacall_isbase) {
            qswipegesture_metacall_isbase = false;
            return QSwipeGesture::qt_metacall(param1, param2, param3);
        } else if (qswipegesture_metacall_callback != nullptr) {
            return qswipegesture_metacall_callback(this, param1, param2, param3);
        } else {
            return QSwipeGesture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qswipegesture_event_isbase) {
            qswipegesture_event_isbase = false;
            return QSwipeGesture::event(event);
        } else if (qswipegesture_event_callback != nullptr) {
            return qswipegesture_event_callback(this, event);
        } else {
            return QSwipeGesture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qswipegesture_eventfilter_isbase) {
            qswipegesture_eventfilter_isbase = false;
            return QSwipeGesture::eventFilter(watched, event);
        } else if (qswipegesture_eventfilter_callback != nullptr) {
            return qswipegesture_eventfilter_callback(this, watched, event);
        } else {
            return QSwipeGesture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qswipegesture_timerevent_isbase) {
            qswipegesture_timerevent_isbase = false;
            QSwipeGesture::timerEvent(event);
        } else if (qswipegesture_timerevent_callback != nullptr) {
            qswipegesture_timerevent_callback(this, event);
        } else {
            QSwipeGesture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qswipegesture_childevent_isbase) {
            qswipegesture_childevent_isbase = false;
            QSwipeGesture::childEvent(event);
        } else if (qswipegesture_childevent_callback != nullptr) {
            qswipegesture_childevent_callback(this, event);
        } else {
            QSwipeGesture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qswipegesture_customevent_isbase) {
            qswipegesture_customevent_isbase = false;
            QSwipeGesture::customEvent(event);
        } else if (qswipegesture_customevent_callback != nullptr) {
            qswipegesture_customevent_callback(this, event);
        } else {
            QSwipeGesture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qswipegesture_connectnotify_isbase) {
            qswipegesture_connectnotify_isbase = false;
            QSwipeGesture::connectNotify(signal);
        } else if (qswipegesture_connectnotify_callback != nullptr) {
            qswipegesture_connectnotify_callback(this, signal);
        } else {
            QSwipeGesture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qswipegesture_disconnectnotify_isbase) {
            qswipegesture_disconnectnotify_isbase = false;
            QSwipeGesture::disconnectNotify(signal);
        } else if (qswipegesture_disconnectnotify_callback != nullptr) {
            qswipegesture_disconnectnotify_callback(this, signal);
        } else {
            QSwipeGesture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qswipegesture_sender_isbase) {
            qswipegesture_sender_isbase = false;
            return QSwipeGesture::sender();
        } else if (qswipegesture_sender_callback != nullptr) {
            return qswipegesture_sender_callback();
        } else {
            return QSwipeGesture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qswipegesture_sendersignalindex_isbase) {
            qswipegesture_sendersignalindex_isbase = false;
            return QSwipeGesture::senderSignalIndex();
        } else if (qswipegesture_sendersignalindex_callback != nullptr) {
            return qswipegesture_sendersignalindex_callback();
        } else {
            return QSwipeGesture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qswipegesture_receivers_isbase) {
            qswipegesture_receivers_isbase = false;
            return QSwipeGesture::receivers(signal);
        } else if (qswipegesture_receivers_callback != nullptr) {
            return qswipegesture_receivers_callback(this, signal);
        } else {
            return QSwipeGesture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qswipegesture_issignalconnected_isbase) {
            qswipegesture_issignalconnected_isbase = false;
            return QSwipeGesture::isSignalConnected(signal);
        } else if (qswipegesture_issignalconnected_callback != nullptr) {
            return qswipegesture_issignalconnected_callback(this, signal);
        } else {
            return QSwipeGesture::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QTapGesture so that we can call protected methods
class VirtualQTapGesture : public QTapGesture {

  public:
    // Virtual class public types (including callbacks)
    using QTapGesture_Metacall_Callback = int (*)(QTapGesture*, QMetaObject::Call, int, void**);
    using QTapGesture_Event_Callback = bool (*)(QTapGesture*, QEvent*);
    using QTapGesture_EventFilter_Callback = bool (*)(QTapGesture*, QObject*, QEvent*);
    using QTapGesture_TimerEvent_Callback = void (*)(QTapGesture*, QTimerEvent*);
    using QTapGesture_ChildEvent_Callback = void (*)(QTapGesture*, QChildEvent*);
    using QTapGesture_CustomEvent_Callback = void (*)(QTapGesture*, QEvent*);
    using QTapGesture_ConnectNotify_Callback = void (*)(QTapGesture*, const QMetaMethod&);
    using QTapGesture_DisconnectNotify_Callback = void (*)(QTapGesture*, const QMetaMethod&);
    using QTapGesture_Sender_Callback = QObject* (*)();
    using QTapGesture_SenderSignalIndex_Callback = int (*)();
    using QTapGesture_Receivers_Callback = int (*)(const QTapGesture*, const char*);
    using QTapGesture_IsSignalConnected_Callback = bool (*)(const QTapGesture*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTapGesture_Metacall_Callback qtapgesture_metacall_callback = nullptr;
    QTapGesture_Event_Callback qtapgesture_event_callback = nullptr;
    QTapGesture_EventFilter_Callback qtapgesture_eventfilter_callback = nullptr;
    QTapGesture_TimerEvent_Callback qtapgesture_timerevent_callback = nullptr;
    QTapGesture_ChildEvent_Callback qtapgesture_childevent_callback = nullptr;
    QTapGesture_CustomEvent_Callback qtapgesture_customevent_callback = nullptr;
    QTapGesture_ConnectNotify_Callback qtapgesture_connectnotify_callback = nullptr;
    QTapGesture_DisconnectNotify_Callback qtapgesture_disconnectnotify_callback = nullptr;
    QTapGesture_Sender_Callback qtapgesture_sender_callback = nullptr;
    QTapGesture_SenderSignalIndex_Callback qtapgesture_sendersignalindex_callback = nullptr;
    QTapGesture_Receivers_Callback qtapgesture_receivers_callback = nullptr;
    QTapGesture_IsSignalConnected_Callback qtapgesture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtapgesture_metacall_isbase = false;
    mutable bool qtapgesture_event_isbase = false;
    mutable bool qtapgesture_eventfilter_isbase = false;
    mutable bool qtapgesture_timerevent_isbase = false;
    mutable bool qtapgesture_childevent_isbase = false;
    mutable bool qtapgesture_customevent_isbase = false;
    mutable bool qtapgesture_connectnotify_isbase = false;
    mutable bool qtapgesture_disconnectnotify_isbase = false;
    mutable bool qtapgesture_sender_isbase = false;
    mutable bool qtapgesture_sendersignalindex_isbase = false;
    mutable bool qtapgesture_receivers_isbase = false;
    mutable bool qtapgesture_issignalconnected_isbase = false;

  public:
    VirtualQTapGesture() : QTapGesture(){};
    VirtualQTapGesture(QObject* parent) : QTapGesture(parent){};

    ~VirtualQTapGesture() {
        qtapgesture_metacall_callback = nullptr;
        qtapgesture_event_callback = nullptr;
        qtapgesture_eventfilter_callback = nullptr;
        qtapgesture_timerevent_callback = nullptr;
        qtapgesture_childevent_callback = nullptr;
        qtapgesture_customevent_callback = nullptr;
        qtapgesture_connectnotify_callback = nullptr;
        qtapgesture_disconnectnotify_callback = nullptr;
        qtapgesture_sender_callback = nullptr;
        qtapgesture_sendersignalindex_callback = nullptr;
        qtapgesture_receivers_callback = nullptr;
        qtapgesture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTapGesture_Metacall_Callback(QTapGesture_Metacall_Callback cb) { qtapgesture_metacall_callback = cb; }
    void setQTapGesture_Event_Callback(QTapGesture_Event_Callback cb) { qtapgesture_event_callback = cb; }
    void setQTapGesture_EventFilter_Callback(QTapGesture_EventFilter_Callback cb) { qtapgesture_eventfilter_callback = cb; }
    void setQTapGesture_TimerEvent_Callback(QTapGesture_TimerEvent_Callback cb) { qtapgesture_timerevent_callback = cb; }
    void setQTapGesture_ChildEvent_Callback(QTapGesture_ChildEvent_Callback cb) { qtapgesture_childevent_callback = cb; }
    void setQTapGesture_CustomEvent_Callback(QTapGesture_CustomEvent_Callback cb) { qtapgesture_customevent_callback = cb; }
    void setQTapGesture_ConnectNotify_Callback(QTapGesture_ConnectNotify_Callback cb) { qtapgesture_connectnotify_callback = cb; }
    void setQTapGesture_DisconnectNotify_Callback(QTapGesture_DisconnectNotify_Callback cb) { qtapgesture_disconnectnotify_callback = cb; }
    void setQTapGesture_Sender_Callback(QTapGesture_Sender_Callback cb) { qtapgesture_sender_callback = cb; }
    void setQTapGesture_SenderSignalIndex_Callback(QTapGesture_SenderSignalIndex_Callback cb) { qtapgesture_sendersignalindex_callback = cb; }
    void setQTapGesture_Receivers_Callback(QTapGesture_Receivers_Callback cb) { qtapgesture_receivers_callback = cb; }
    void setQTapGesture_IsSignalConnected_Callback(QTapGesture_IsSignalConnected_Callback cb) { qtapgesture_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTapGesture_Metacall_IsBase(bool value) const { qtapgesture_metacall_isbase = value; }
    void setQTapGesture_Event_IsBase(bool value) const { qtapgesture_event_isbase = value; }
    void setQTapGesture_EventFilter_IsBase(bool value) const { qtapgesture_eventfilter_isbase = value; }
    void setQTapGesture_TimerEvent_IsBase(bool value) const { qtapgesture_timerevent_isbase = value; }
    void setQTapGesture_ChildEvent_IsBase(bool value) const { qtapgesture_childevent_isbase = value; }
    void setQTapGesture_CustomEvent_IsBase(bool value) const { qtapgesture_customevent_isbase = value; }
    void setQTapGesture_ConnectNotify_IsBase(bool value) const { qtapgesture_connectnotify_isbase = value; }
    void setQTapGesture_DisconnectNotify_IsBase(bool value) const { qtapgesture_disconnectnotify_isbase = value; }
    void setQTapGesture_Sender_IsBase(bool value) const { qtapgesture_sender_isbase = value; }
    void setQTapGesture_SenderSignalIndex_IsBase(bool value) const { qtapgesture_sendersignalindex_isbase = value; }
    void setQTapGesture_Receivers_IsBase(bool value) const { qtapgesture_receivers_isbase = value; }
    void setQTapGesture_IsSignalConnected_IsBase(bool value) const { qtapgesture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtapgesture_metacall_isbase) {
            qtapgesture_metacall_isbase = false;
            return QTapGesture::qt_metacall(param1, param2, param3);
        } else if (qtapgesture_metacall_callback != nullptr) {
            return qtapgesture_metacall_callback(this, param1, param2, param3);
        } else {
            return QTapGesture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtapgesture_event_isbase) {
            qtapgesture_event_isbase = false;
            return QTapGesture::event(event);
        } else if (qtapgesture_event_callback != nullptr) {
            return qtapgesture_event_callback(this, event);
        } else {
            return QTapGesture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtapgesture_eventfilter_isbase) {
            qtapgesture_eventfilter_isbase = false;
            return QTapGesture::eventFilter(watched, event);
        } else if (qtapgesture_eventfilter_callback != nullptr) {
            return qtapgesture_eventfilter_callback(this, watched, event);
        } else {
            return QTapGesture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtapgesture_timerevent_isbase) {
            qtapgesture_timerevent_isbase = false;
            QTapGesture::timerEvent(event);
        } else if (qtapgesture_timerevent_callback != nullptr) {
            qtapgesture_timerevent_callback(this, event);
        } else {
            QTapGesture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtapgesture_childevent_isbase) {
            qtapgesture_childevent_isbase = false;
            QTapGesture::childEvent(event);
        } else if (qtapgesture_childevent_callback != nullptr) {
            qtapgesture_childevent_callback(this, event);
        } else {
            QTapGesture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtapgesture_customevent_isbase) {
            qtapgesture_customevent_isbase = false;
            QTapGesture::customEvent(event);
        } else if (qtapgesture_customevent_callback != nullptr) {
            qtapgesture_customevent_callback(this, event);
        } else {
            QTapGesture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtapgesture_connectnotify_isbase) {
            qtapgesture_connectnotify_isbase = false;
            QTapGesture::connectNotify(signal);
        } else if (qtapgesture_connectnotify_callback != nullptr) {
            qtapgesture_connectnotify_callback(this, signal);
        } else {
            QTapGesture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtapgesture_disconnectnotify_isbase) {
            qtapgesture_disconnectnotify_isbase = false;
            QTapGesture::disconnectNotify(signal);
        } else if (qtapgesture_disconnectnotify_callback != nullptr) {
            qtapgesture_disconnectnotify_callback(this, signal);
        } else {
            QTapGesture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtapgesture_sender_isbase) {
            qtapgesture_sender_isbase = false;
            return QTapGesture::sender();
        } else if (qtapgesture_sender_callback != nullptr) {
            return qtapgesture_sender_callback();
        } else {
            return QTapGesture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtapgesture_sendersignalindex_isbase) {
            qtapgesture_sendersignalindex_isbase = false;
            return QTapGesture::senderSignalIndex();
        } else if (qtapgesture_sendersignalindex_callback != nullptr) {
            return qtapgesture_sendersignalindex_callback();
        } else {
            return QTapGesture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtapgesture_receivers_isbase) {
            qtapgesture_receivers_isbase = false;
            return QTapGesture::receivers(signal);
        } else if (qtapgesture_receivers_callback != nullptr) {
            return qtapgesture_receivers_callback(this, signal);
        } else {
            return QTapGesture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtapgesture_issignalconnected_isbase) {
            qtapgesture_issignalconnected_isbase = false;
            return QTapGesture::isSignalConnected(signal);
        } else if (qtapgesture_issignalconnected_callback != nullptr) {
            return qtapgesture_issignalconnected_callback(this, signal);
        } else {
            return QTapGesture::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QTapAndHoldGesture so that we can call protected methods
class VirtualQTapAndHoldGesture : public QTapAndHoldGesture {

  public:
    // Virtual class public types (including callbacks)
    using QTapAndHoldGesture_Metacall_Callback = int (*)(QTapAndHoldGesture*, QMetaObject::Call, int, void**);
    using QTapAndHoldGesture_Event_Callback = bool (*)(QTapAndHoldGesture*, QEvent*);
    using QTapAndHoldGesture_EventFilter_Callback = bool (*)(QTapAndHoldGesture*, QObject*, QEvent*);
    using QTapAndHoldGesture_TimerEvent_Callback = void (*)(QTapAndHoldGesture*, QTimerEvent*);
    using QTapAndHoldGesture_ChildEvent_Callback = void (*)(QTapAndHoldGesture*, QChildEvent*);
    using QTapAndHoldGesture_CustomEvent_Callback = void (*)(QTapAndHoldGesture*, QEvent*);
    using QTapAndHoldGesture_ConnectNotify_Callback = void (*)(QTapAndHoldGesture*, const QMetaMethod&);
    using QTapAndHoldGesture_DisconnectNotify_Callback = void (*)(QTapAndHoldGesture*, const QMetaMethod&);
    using QTapAndHoldGesture_Sender_Callback = QObject* (*)();
    using QTapAndHoldGesture_SenderSignalIndex_Callback = int (*)();
    using QTapAndHoldGesture_Receivers_Callback = int (*)(const QTapAndHoldGesture*, const char*);
    using QTapAndHoldGesture_IsSignalConnected_Callback = bool (*)(const QTapAndHoldGesture*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTapAndHoldGesture_Metacall_Callback qtapandholdgesture_metacall_callback = nullptr;
    QTapAndHoldGesture_Event_Callback qtapandholdgesture_event_callback = nullptr;
    QTapAndHoldGesture_EventFilter_Callback qtapandholdgesture_eventfilter_callback = nullptr;
    QTapAndHoldGesture_TimerEvent_Callback qtapandholdgesture_timerevent_callback = nullptr;
    QTapAndHoldGesture_ChildEvent_Callback qtapandholdgesture_childevent_callback = nullptr;
    QTapAndHoldGesture_CustomEvent_Callback qtapandholdgesture_customevent_callback = nullptr;
    QTapAndHoldGesture_ConnectNotify_Callback qtapandholdgesture_connectnotify_callback = nullptr;
    QTapAndHoldGesture_DisconnectNotify_Callback qtapandholdgesture_disconnectnotify_callback = nullptr;
    QTapAndHoldGesture_Sender_Callback qtapandholdgesture_sender_callback = nullptr;
    QTapAndHoldGesture_SenderSignalIndex_Callback qtapandholdgesture_sendersignalindex_callback = nullptr;
    QTapAndHoldGesture_Receivers_Callback qtapandholdgesture_receivers_callback = nullptr;
    QTapAndHoldGesture_IsSignalConnected_Callback qtapandholdgesture_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtapandholdgesture_metacall_isbase = false;
    mutable bool qtapandholdgesture_event_isbase = false;
    mutable bool qtapandholdgesture_eventfilter_isbase = false;
    mutable bool qtapandholdgesture_timerevent_isbase = false;
    mutable bool qtapandholdgesture_childevent_isbase = false;
    mutable bool qtapandholdgesture_customevent_isbase = false;
    mutable bool qtapandholdgesture_connectnotify_isbase = false;
    mutable bool qtapandholdgesture_disconnectnotify_isbase = false;
    mutable bool qtapandholdgesture_sender_isbase = false;
    mutable bool qtapandholdgesture_sendersignalindex_isbase = false;
    mutable bool qtapandholdgesture_receivers_isbase = false;
    mutable bool qtapandholdgesture_issignalconnected_isbase = false;

  public:
    VirtualQTapAndHoldGesture() : QTapAndHoldGesture(){};
    VirtualQTapAndHoldGesture(QObject* parent) : QTapAndHoldGesture(parent){};

    ~VirtualQTapAndHoldGesture() {
        qtapandholdgesture_metacall_callback = nullptr;
        qtapandholdgesture_event_callback = nullptr;
        qtapandholdgesture_eventfilter_callback = nullptr;
        qtapandholdgesture_timerevent_callback = nullptr;
        qtapandholdgesture_childevent_callback = nullptr;
        qtapandholdgesture_customevent_callback = nullptr;
        qtapandholdgesture_connectnotify_callback = nullptr;
        qtapandholdgesture_disconnectnotify_callback = nullptr;
        qtapandholdgesture_sender_callback = nullptr;
        qtapandholdgesture_sendersignalindex_callback = nullptr;
        qtapandholdgesture_receivers_callback = nullptr;
        qtapandholdgesture_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTapAndHoldGesture_Metacall_Callback(QTapAndHoldGesture_Metacall_Callback cb) { qtapandholdgesture_metacall_callback = cb; }
    void setQTapAndHoldGesture_Event_Callback(QTapAndHoldGesture_Event_Callback cb) { qtapandholdgesture_event_callback = cb; }
    void setQTapAndHoldGesture_EventFilter_Callback(QTapAndHoldGesture_EventFilter_Callback cb) { qtapandholdgesture_eventfilter_callback = cb; }
    void setQTapAndHoldGesture_TimerEvent_Callback(QTapAndHoldGesture_TimerEvent_Callback cb) { qtapandholdgesture_timerevent_callback = cb; }
    void setQTapAndHoldGesture_ChildEvent_Callback(QTapAndHoldGesture_ChildEvent_Callback cb) { qtapandholdgesture_childevent_callback = cb; }
    void setQTapAndHoldGesture_CustomEvent_Callback(QTapAndHoldGesture_CustomEvent_Callback cb) { qtapandholdgesture_customevent_callback = cb; }
    void setQTapAndHoldGesture_ConnectNotify_Callback(QTapAndHoldGesture_ConnectNotify_Callback cb) { qtapandholdgesture_connectnotify_callback = cb; }
    void setQTapAndHoldGesture_DisconnectNotify_Callback(QTapAndHoldGesture_DisconnectNotify_Callback cb) { qtapandholdgesture_disconnectnotify_callback = cb; }
    void setQTapAndHoldGesture_Sender_Callback(QTapAndHoldGesture_Sender_Callback cb) { qtapandholdgesture_sender_callback = cb; }
    void setQTapAndHoldGesture_SenderSignalIndex_Callback(QTapAndHoldGesture_SenderSignalIndex_Callback cb) { qtapandholdgesture_sendersignalindex_callback = cb; }
    void setQTapAndHoldGesture_Receivers_Callback(QTapAndHoldGesture_Receivers_Callback cb) { qtapandholdgesture_receivers_callback = cb; }
    void setQTapAndHoldGesture_IsSignalConnected_Callback(QTapAndHoldGesture_IsSignalConnected_Callback cb) { qtapandholdgesture_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTapAndHoldGesture_Metacall_IsBase(bool value) const { qtapandholdgesture_metacall_isbase = value; }
    void setQTapAndHoldGesture_Event_IsBase(bool value) const { qtapandholdgesture_event_isbase = value; }
    void setQTapAndHoldGesture_EventFilter_IsBase(bool value) const { qtapandholdgesture_eventfilter_isbase = value; }
    void setQTapAndHoldGesture_TimerEvent_IsBase(bool value) const { qtapandholdgesture_timerevent_isbase = value; }
    void setQTapAndHoldGesture_ChildEvent_IsBase(bool value) const { qtapandholdgesture_childevent_isbase = value; }
    void setQTapAndHoldGesture_CustomEvent_IsBase(bool value) const { qtapandholdgesture_customevent_isbase = value; }
    void setQTapAndHoldGesture_ConnectNotify_IsBase(bool value) const { qtapandholdgesture_connectnotify_isbase = value; }
    void setQTapAndHoldGesture_DisconnectNotify_IsBase(bool value) const { qtapandholdgesture_disconnectnotify_isbase = value; }
    void setQTapAndHoldGesture_Sender_IsBase(bool value) const { qtapandholdgesture_sender_isbase = value; }
    void setQTapAndHoldGesture_SenderSignalIndex_IsBase(bool value) const { qtapandholdgesture_sendersignalindex_isbase = value; }
    void setQTapAndHoldGesture_Receivers_IsBase(bool value) const { qtapandholdgesture_receivers_isbase = value; }
    void setQTapAndHoldGesture_IsSignalConnected_IsBase(bool value) const { qtapandholdgesture_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtapandholdgesture_metacall_isbase) {
            qtapandholdgesture_metacall_isbase = false;
            return QTapAndHoldGesture::qt_metacall(param1, param2, param3);
        } else if (qtapandholdgesture_metacall_callback != nullptr) {
            return qtapandholdgesture_metacall_callback(this, param1, param2, param3);
        } else {
            return QTapAndHoldGesture::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtapandholdgesture_event_isbase) {
            qtapandholdgesture_event_isbase = false;
            return QTapAndHoldGesture::event(event);
        } else if (qtapandholdgesture_event_callback != nullptr) {
            return qtapandholdgesture_event_callback(this, event);
        } else {
            return QTapAndHoldGesture::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtapandholdgesture_eventfilter_isbase) {
            qtapandholdgesture_eventfilter_isbase = false;
            return QTapAndHoldGesture::eventFilter(watched, event);
        } else if (qtapandholdgesture_eventfilter_callback != nullptr) {
            return qtapandholdgesture_eventfilter_callback(this, watched, event);
        } else {
            return QTapAndHoldGesture::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtapandholdgesture_timerevent_isbase) {
            qtapandholdgesture_timerevent_isbase = false;
            QTapAndHoldGesture::timerEvent(event);
        } else if (qtapandholdgesture_timerevent_callback != nullptr) {
            qtapandholdgesture_timerevent_callback(this, event);
        } else {
            QTapAndHoldGesture::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtapandholdgesture_childevent_isbase) {
            qtapandholdgesture_childevent_isbase = false;
            QTapAndHoldGesture::childEvent(event);
        } else if (qtapandholdgesture_childevent_callback != nullptr) {
            qtapandholdgesture_childevent_callback(this, event);
        } else {
            QTapAndHoldGesture::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtapandholdgesture_customevent_isbase) {
            qtapandholdgesture_customevent_isbase = false;
            QTapAndHoldGesture::customEvent(event);
        } else if (qtapandholdgesture_customevent_callback != nullptr) {
            qtapandholdgesture_customevent_callback(this, event);
        } else {
            QTapAndHoldGesture::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtapandholdgesture_connectnotify_isbase) {
            qtapandholdgesture_connectnotify_isbase = false;
            QTapAndHoldGesture::connectNotify(signal);
        } else if (qtapandholdgesture_connectnotify_callback != nullptr) {
            qtapandholdgesture_connectnotify_callback(this, signal);
        } else {
            QTapAndHoldGesture::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtapandholdgesture_disconnectnotify_isbase) {
            qtapandholdgesture_disconnectnotify_isbase = false;
            QTapAndHoldGesture::disconnectNotify(signal);
        } else if (qtapandholdgesture_disconnectnotify_callback != nullptr) {
            qtapandholdgesture_disconnectnotify_callback(this, signal);
        } else {
            QTapAndHoldGesture::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtapandholdgesture_sender_isbase) {
            qtapandholdgesture_sender_isbase = false;
            return QTapAndHoldGesture::sender();
        } else if (qtapandholdgesture_sender_callback != nullptr) {
            return qtapandholdgesture_sender_callback();
        } else {
            return QTapAndHoldGesture::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtapandholdgesture_sendersignalindex_isbase) {
            qtapandholdgesture_sendersignalindex_isbase = false;
            return QTapAndHoldGesture::senderSignalIndex();
        } else if (qtapandholdgesture_sendersignalindex_callback != nullptr) {
            return qtapandholdgesture_sendersignalindex_callback();
        } else {
            return QTapAndHoldGesture::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtapandholdgesture_receivers_isbase) {
            qtapandholdgesture_receivers_isbase = false;
            return QTapAndHoldGesture::receivers(signal);
        } else if (qtapandholdgesture_receivers_callback != nullptr) {
            return qtapandholdgesture_receivers_callback(this, signal);
        } else {
            return QTapAndHoldGesture::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtapandholdgesture_issignalconnected_isbase) {
            qtapandholdgesture_issignalconnected_isbase = false;
            return QTapAndHoldGesture::isSignalConnected(signal);
        } else if (qtapandholdgesture_issignalconnected_callback != nullptr) {
            return qtapandholdgesture_issignalconnected_callback(this, signal);
        } else {
            return QTapAndHoldGesture::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QGestureEvent so that we can call protected methods
class VirtualQGestureEvent : public QGestureEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGestureEvent_SetAccepted_Callback = void (*)(QGestureEvent*, bool);
    using QGestureEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGestureEvent_SetAccepted_Callback qgestureevent_setaccepted_callback = nullptr;
    QGestureEvent_Clone_Callback qgestureevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgestureevent_setaccepted_isbase = false;
    mutable bool qgestureevent_clone_isbase = false;

  public:
    VirtualQGestureEvent(const QList<QGesture*>& gestures) : QGestureEvent(gestures){};
    VirtualQGestureEvent(const QGestureEvent& param1) : QGestureEvent(param1){};

    ~VirtualQGestureEvent() {
        qgestureevent_setaccepted_callback = nullptr;
        qgestureevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGestureEvent_SetAccepted_Callback(QGestureEvent_SetAccepted_Callback cb) { qgestureevent_setaccepted_callback = cb; }
    void setQGestureEvent_Clone_Callback(QGestureEvent_Clone_Callback cb) { qgestureevent_clone_callback = cb; }

    // Base flag setters
    void setQGestureEvent_SetAccepted_IsBase(bool value) const { qgestureevent_setaccepted_isbase = value; }
    void setQGestureEvent_Clone_IsBase(bool value) const { qgestureevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgestureevent_setaccepted_isbase) {
            qgestureevent_setaccepted_isbase = false;
            QGestureEvent::setAccepted(accepted);
        } else if (qgestureevent_setaccepted_callback != nullptr) {
            qgestureevent_setaccepted_callback(this, accepted);
        } else {
            QGestureEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgestureevent_clone_isbase) {
            qgestureevent_clone_isbase = false;
            return QGestureEvent::clone();
        } else if (qgestureevent_clone_callback != nullptr) {
            return qgestureevent_clone_callback();
        } else {
            return QGestureEvent::clone();
        }
    }
};

#endif

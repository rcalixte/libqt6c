#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQMEDIADEVICES_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQMEDIADEVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaDevices so that we can call protected methods
class VirtualQMediaDevices : public QMediaDevices {

  public:
    // Virtual class public types (including callbacks)
    using QMediaDevices_Metacall_Callback = int (*)(QMediaDevices*, QMetaObject::Call, int, void**);
    using QMediaDevices_Event_Callback = bool (*)(QMediaDevices*, QEvent*);
    using QMediaDevices_EventFilter_Callback = bool (*)(QMediaDevices*, QObject*, QEvent*);
    using QMediaDevices_TimerEvent_Callback = void (*)(QMediaDevices*, QTimerEvent*);
    using QMediaDevices_ChildEvent_Callback = void (*)(QMediaDevices*, QChildEvent*);
    using QMediaDevices_CustomEvent_Callback = void (*)(QMediaDevices*, QEvent*);
    using QMediaDevices_ConnectNotify_Callback = void (*)(QMediaDevices*, const QMetaMethod&);
    using QMediaDevices_DisconnectNotify_Callback = void (*)(QMediaDevices*, const QMetaMethod&);
    using QMediaDevices_Sender_Callback = QObject* (*)();
    using QMediaDevices_SenderSignalIndex_Callback = int (*)();
    using QMediaDevices_Receivers_Callback = int (*)(const QMediaDevices*, const char*);
    using QMediaDevices_IsSignalConnected_Callback = bool (*)(const QMediaDevices*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QMediaDevices_Metacall_Callback qmediadevices_metacall_callback = nullptr;
    QMediaDevices_Event_Callback qmediadevices_event_callback = nullptr;
    QMediaDevices_EventFilter_Callback qmediadevices_eventfilter_callback = nullptr;
    QMediaDevices_TimerEvent_Callback qmediadevices_timerevent_callback = nullptr;
    QMediaDevices_ChildEvent_Callback qmediadevices_childevent_callback = nullptr;
    QMediaDevices_CustomEvent_Callback qmediadevices_customevent_callback = nullptr;
    QMediaDevices_ConnectNotify_Callback qmediadevices_connectnotify_callback = nullptr;
    QMediaDevices_DisconnectNotify_Callback qmediadevices_disconnectnotify_callback = nullptr;
    QMediaDevices_Sender_Callback qmediadevices_sender_callback = nullptr;
    QMediaDevices_SenderSignalIndex_Callback qmediadevices_sendersignalindex_callback = nullptr;
    QMediaDevices_Receivers_Callback qmediadevices_receivers_callback = nullptr;
    QMediaDevices_IsSignalConnected_Callback qmediadevices_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmediadevices_metacall_isbase = false;
    mutable bool qmediadevices_event_isbase = false;
    mutable bool qmediadevices_eventfilter_isbase = false;
    mutable bool qmediadevices_timerevent_isbase = false;
    mutable bool qmediadevices_childevent_isbase = false;
    mutable bool qmediadevices_customevent_isbase = false;
    mutable bool qmediadevices_connectnotify_isbase = false;
    mutable bool qmediadevices_disconnectnotify_isbase = false;
    mutable bool qmediadevices_sender_isbase = false;
    mutable bool qmediadevices_sendersignalindex_isbase = false;
    mutable bool qmediadevices_receivers_isbase = false;
    mutable bool qmediadevices_issignalconnected_isbase = false;

  public:
    VirtualQMediaDevices() : QMediaDevices(){};
    VirtualQMediaDevices(QObject* parent) : QMediaDevices(parent){};

    ~VirtualQMediaDevices() {
        qmediadevices_metacall_callback = nullptr;
        qmediadevices_event_callback = nullptr;
        qmediadevices_eventfilter_callback = nullptr;
        qmediadevices_timerevent_callback = nullptr;
        qmediadevices_childevent_callback = nullptr;
        qmediadevices_customevent_callback = nullptr;
        qmediadevices_connectnotify_callback = nullptr;
        qmediadevices_disconnectnotify_callback = nullptr;
        qmediadevices_sender_callback = nullptr;
        qmediadevices_sendersignalindex_callback = nullptr;
        qmediadevices_receivers_callback = nullptr;
        qmediadevices_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQMediaDevices_Metacall_Callback(QMediaDevices_Metacall_Callback cb) { qmediadevices_metacall_callback = cb; }
    void setQMediaDevices_Event_Callback(QMediaDevices_Event_Callback cb) { qmediadevices_event_callback = cb; }
    void setQMediaDevices_EventFilter_Callback(QMediaDevices_EventFilter_Callback cb) { qmediadevices_eventfilter_callback = cb; }
    void setQMediaDevices_TimerEvent_Callback(QMediaDevices_TimerEvent_Callback cb) { qmediadevices_timerevent_callback = cb; }
    void setQMediaDevices_ChildEvent_Callback(QMediaDevices_ChildEvent_Callback cb) { qmediadevices_childevent_callback = cb; }
    void setQMediaDevices_CustomEvent_Callback(QMediaDevices_CustomEvent_Callback cb) { qmediadevices_customevent_callback = cb; }
    void setQMediaDevices_ConnectNotify_Callback(QMediaDevices_ConnectNotify_Callback cb) { qmediadevices_connectnotify_callback = cb; }
    void setQMediaDevices_DisconnectNotify_Callback(QMediaDevices_DisconnectNotify_Callback cb) { qmediadevices_disconnectnotify_callback = cb; }
    void setQMediaDevices_Sender_Callback(QMediaDevices_Sender_Callback cb) { qmediadevices_sender_callback = cb; }
    void setQMediaDevices_SenderSignalIndex_Callback(QMediaDevices_SenderSignalIndex_Callback cb) { qmediadevices_sendersignalindex_callback = cb; }
    void setQMediaDevices_Receivers_Callback(QMediaDevices_Receivers_Callback cb) { qmediadevices_receivers_callback = cb; }
    void setQMediaDevices_IsSignalConnected_Callback(QMediaDevices_IsSignalConnected_Callback cb) { qmediadevices_issignalconnected_callback = cb; }

    // Base flag setters
    void setQMediaDevices_Metacall_IsBase(bool value) const { qmediadevices_metacall_isbase = value; }
    void setQMediaDevices_Event_IsBase(bool value) const { qmediadevices_event_isbase = value; }
    void setQMediaDevices_EventFilter_IsBase(bool value) const { qmediadevices_eventfilter_isbase = value; }
    void setQMediaDevices_TimerEvent_IsBase(bool value) const { qmediadevices_timerevent_isbase = value; }
    void setQMediaDevices_ChildEvent_IsBase(bool value) const { qmediadevices_childevent_isbase = value; }
    void setQMediaDevices_CustomEvent_IsBase(bool value) const { qmediadevices_customevent_isbase = value; }
    void setQMediaDevices_ConnectNotify_IsBase(bool value) const { qmediadevices_connectnotify_isbase = value; }
    void setQMediaDevices_DisconnectNotify_IsBase(bool value) const { qmediadevices_disconnectnotify_isbase = value; }
    void setQMediaDevices_Sender_IsBase(bool value) const { qmediadevices_sender_isbase = value; }
    void setQMediaDevices_SenderSignalIndex_IsBase(bool value) const { qmediadevices_sendersignalindex_isbase = value; }
    void setQMediaDevices_Receivers_IsBase(bool value) const { qmediadevices_receivers_isbase = value; }
    void setQMediaDevices_IsSignalConnected_IsBase(bool value) const { qmediadevices_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediadevices_metacall_isbase) {
            qmediadevices_metacall_isbase = false;
            return QMediaDevices::qt_metacall(param1, param2, param3);
        } else if (qmediadevices_metacall_callback != nullptr) {
            return qmediadevices_metacall_callback(this, param1, param2, param3);
        } else {
            return QMediaDevices::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediadevices_event_isbase) {
            qmediadevices_event_isbase = false;
            return QMediaDevices::event(event);
        } else if (qmediadevices_event_callback != nullptr) {
            return qmediadevices_event_callback(this, event);
        } else {
            return QMediaDevices::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediadevices_eventfilter_isbase) {
            qmediadevices_eventfilter_isbase = false;
            return QMediaDevices::eventFilter(watched, event);
        } else if (qmediadevices_eventfilter_callback != nullptr) {
            return qmediadevices_eventfilter_callback(this, watched, event);
        } else {
            return QMediaDevices::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediadevices_timerevent_isbase) {
            qmediadevices_timerevent_isbase = false;
            QMediaDevices::timerEvent(event);
        } else if (qmediadevices_timerevent_callback != nullptr) {
            qmediadevices_timerevent_callback(this, event);
        } else {
            QMediaDevices::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediadevices_childevent_isbase) {
            qmediadevices_childevent_isbase = false;
            QMediaDevices::childEvent(event);
        } else if (qmediadevices_childevent_callback != nullptr) {
            qmediadevices_childevent_callback(this, event);
        } else {
            QMediaDevices::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediadevices_customevent_isbase) {
            qmediadevices_customevent_isbase = false;
            QMediaDevices::customEvent(event);
        } else if (qmediadevices_customevent_callback != nullptr) {
            qmediadevices_customevent_callback(this, event);
        } else {
            QMediaDevices::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediadevices_connectnotify_isbase) {
            qmediadevices_connectnotify_isbase = false;
            QMediaDevices::connectNotify(signal);
        } else if (qmediadevices_connectnotify_callback != nullptr) {
            qmediadevices_connectnotify_callback(this, signal);
        } else {
            QMediaDevices::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediadevices_disconnectnotify_isbase) {
            qmediadevices_disconnectnotify_isbase = false;
            QMediaDevices::disconnectNotify(signal);
        } else if (qmediadevices_disconnectnotify_callback != nullptr) {
            qmediadevices_disconnectnotify_callback(this, signal);
        } else {
            QMediaDevices::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmediadevices_sender_isbase) {
            qmediadevices_sender_isbase = false;
            return QMediaDevices::sender();
        } else if (qmediadevices_sender_callback != nullptr) {
            return qmediadevices_sender_callback();
        } else {
            return QMediaDevices::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmediadevices_sendersignalindex_isbase) {
            qmediadevices_sendersignalindex_isbase = false;
            return QMediaDevices::senderSignalIndex();
        } else if (qmediadevices_sendersignalindex_callback != nullptr) {
            return qmediadevices_sendersignalindex_callback();
        } else {
            return QMediaDevices::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmediadevices_receivers_isbase) {
            qmediadevices_receivers_isbase = false;
            return QMediaDevices::receivers(signal);
        } else if (qmediadevices_receivers_callback != nullptr) {
            return qmediadevices_receivers_callback(this, signal);
        } else {
            return QMediaDevices::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmediadevices_issignalconnected_isbase) {
            qmediadevices_issignalconnected_isbase = false;
            return QMediaDevices::isSignalConnected(signal);
        } else if (qmediadevices_issignalconnected_callback != nullptr) {
            return qmediadevices_issignalconnected_callback(this, signal);
        } else {
            return QMediaDevices::isSignalConnected(signal);
        }
    }
};

#endif

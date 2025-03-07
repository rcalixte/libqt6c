#pragma once
#ifndef SRCC_LIBVIRTUALQCOREAPPLICATION_H
#define SRCC_LIBVIRTUALQCOREAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCoreApplication so that we can call protected methods
class VirtualQCoreApplication : public QCoreApplication {

  public:
    // Virtual class public types (including callbacks)
    using QCoreApplication_Metacall_Callback = int (*)(QCoreApplication*, QMetaObject::Call, int, void**);
    using QCoreApplication_Notify_Callback = bool (*)(QCoreApplication*, QObject*, QEvent*);
    using QCoreApplication_Event_Callback = bool (*)(QCoreApplication*, QEvent*);
    using QCoreApplication_EventFilter_Callback = bool (*)(QCoreApplication*, QObject*, QEvent*);
    using QCoreApplication_TimerEvent_Callback = void (*)(QCoreApplication*, QTimerEvent*);
    using QCoreApplication_ChildEvent_Callback = void (*)(QCoreApplication*, QChildEvent*);
    using QCoreApplication_CustomEvent_Callback = void (*)(QCoreApplication*, QEvent*);
    using QCoreApplication_ConnectNotify_Callback = void (*)(QCoreApplication*, const QMetaMethod&);
    using QCoreApplication_DisconnectNotify_Callback = void (*)(QCoreApplication*, const QMetaMethod&);
    using QCoreApplication_ResolveInterface_Callback = void* (*)(const QCoreApplication*, const char*, int);
    using QCoreApplication_Sender_Callback = QObject* (*)();
    using QCoreApplication_SenderSignalIndex_Callback = int (*)();
    using QCoreApplication_Receivers_Callback = int (*)(const QCoreApplication*, const char*);
    using QCoreApplication_IsSignalConnected_Callback = bool (*)(const QCoreApplication*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QCoreApplication_Metacall_Callback qcoreapplication_metacall_callback = nullptr;
    QCoreApplication_Notify_Callback qcoreapplication_notify_callback = nullptr;
    QCoreApplication_Event_Callback qcoreapplication_event_callback = nullptr;
    QCoreApplication_EventFilter_Callback qcoreapplication_eventfilter_callback = nullptr;
    QCoreApplication_TimerEvent_Callback qcoreapplication_timerevent_callback = nullptr;
    QCoreApplication_ChildEvent_Callback qcoreapplication_childevent_callback = nullptr;
    QCoreApplication_CustomEvent_Callback qcoreapplication_customevent_callback = nullptr;
    QCoreApplication_ConnectNotify_Callback qcoreapplication_connectnotify_callback = nullptr;
    QCoreApplication_DisconnectNotify_Callback qcoreapplication_disconnectnotify_callback = nullptr;
    QCoreApplication_ResolveInterface_Callback qcoreapplication_resolveinterface_callback = nullptr;
    QCoreApplication_Sender_Callback qcoreapplication_sender_callback = nullptr;
    QCoreApplication_SenderSignalIndex_Callback qcoreapplication_sendersignalindex_callback = nullptr;
    QCoreApplication_Receivers_Callback qcoreapplication_receivers_callback = nullptr;
    QCoreApplication_IsSignalConnected_Callback qcoreapplication_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcoreapplication_metacall_isbase = false;
    mutable bool qcoreapplication_notify_isbase = false;
    mutable bool qcoreapplication_event_isbase = false;
    mutable bool qcoreapplication_eventfilter_isbase = false;
    mutable bool qcoreapplication_timerevent_isbase = false;
    mutable bool qcoreapplication_childevent_isbase = false;
    mutable bool qcoreapplication_customevent_isbase = false;
    mutable bool qcoreapplication_connectnotify_isbase = false;
    mutable bool qcoreapplication_disconnectnotify_isbase = false;
    mutable bool qcoreapplication_resolveinterface_isbase = false;
    mutable bool qcoreapplication_sender_isbase = false;
    mutable bool qcoreapplication_sendersignalindex_isbase = false;
    mutable bool qcoreapplication_receivers_isbase = false;
    mutable bool qcoreapplication_issignalconnected_isbase = false;

  public:
    VirtualQCoreApplication(int& argc, char** argv) : QCoreApplication(argc, argv){};
    VirtualQCoreApplication(int& argc, char** argv, int param3) : QCoreApplication(argc, argv, param3){};

    ~VirtualQCoreApplication() {
        qcoreapplication_metacall_callback = nullptr;
        qcoreapplication_notify_callback = nullptr;
        qcoreapplication_event_callback = nullptr;
        qcoreapplication_eventfilter_callback = nullptr;
        qcoreapplication_timerevent_callback = nullptr;
        qcoreapplication_childevent_callback = nullptr;
        qcoreapplication_customevent_callback = nullptr;
        qcoreapplication_connectnotify_callback = nullptr;
        qcoreapplication_disconnectnotify_callback = nullptr;
        qcoreapplication_resolveinterface_callback = nullptr;
        qcoreapplication_sender_callback = nullptr;
        qcoreapplication_sendersignalindex_callback = nullptr;
        qcoreapplication_receivers_callback = nullptr;
        qcoreapplication_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQCoreApplication_Metacall_Callback(QCoreApplication_Metacall_Callback cb) { qcoreapplication_metacall_callback = cb; }
    void setQCoreApplication_Notify_Callback(QCoreApplication_Notify_Callback cb) { qcoreapplication_notify_callback = cb; }
    void setQCoreApplication_Event_Callback(QCoreApplication_Event_Callback cb) { qcoreapplication_event_callback = cb; }
    void setQCoreApplication_EventFilter_Callback(QCoreApplication_EventFilter_Callback cb) { qcoreapplication_eventfilter_callback = cb; }
    void setQCoreApplication_TimerEvent_Callback(QCoreApplication_TimerEvent_Callback cb) { qcoreapplication_timerevent_callback = cb; }
    void setQCoreApplication_ChildEvent_Callback(QCoreApplication_ChildEvent_Callback cb) { qcoreapplication_childevent_callback = cb; }
    void setQCoreApplication_CustomEvent_Callback(QCoreApplication_CustomEvent_Callback cb) { qcoreapplication_customevent_callback = cb; }
    void setQCoreApplication_ConnectNotify_Callback(QCoreApplication_ConnectNotify_Callback cb) { qcoreapplication_connectnotify_callback = cb; }
    void setQCoreApplication_DisconnectNotify_Callback(QCoreApplication_DisconnectNotify_Callback cb) { qcoreapplication_disconnectnotify_callback = cb; }
    void setQCoreApplication_ResolveInterface_Callback(QCoreApplication_ResolveInterface_Callback cb) { qcoreapplication_resolveinterface_callback = cb; }
    void setQCoreApplication_Sender_Callback(QCoreApplication_Sender_Callback cb) { qcoreapplication_sender_callback = cb; }
    void setQCoreApplication_SenderSignalIndex_Callback(QCoreApplication_SenderSignalIndex_Callback cb) { qcoreapplication_sendersignalindex_callback = cb; }
    void setQCoreApplication_Receivers_Callback(QCoreApplication_Receivers_Callback cb) { qcoreapplication_receivers_callback = cb; }
    void setQCoreApplication_IsSignalConnected_Callback(QCoreApplication_IsSignalConnected_Callback cb) { qcoreapplication_issignalconnected_callback = cb; }

    // Base flag setters
    void setQCoreApplication_Metacall_IsBase(bool value) const { qcoreapplication_metacall_isbase = value; }
    void setQCoreApplication_Notify_IsBase(bool value) const { qcoreapplication_notify_isbase = value; }
    void setQCoreApplication_Event_IsBase(bool value) const { qcoreapplication_event_isbase = value; }
    void setQCoreApplication_EventFilter_IsBase(bool value) const { qcoreapplication_eventfilter_isbase = value; }
    void setQCoreApplication_TimerEvent_IsBase(bool value) const { qcoreapplication_timerevent_isbase = value; }
    void setQCoreApplication_ChildEvent_IsBase(bool value) const { qcoreapplication_childevent_isbase = value; }
    void setQCoreApplication_CustomEvent_IsBase(bool value) const { qcoreapplication_customevent_isbase = value; }
    void setQCoreApplication_ConnectNotify_IsBase(bool value) const { qcoreapplication_connectnotify_isbase = value; }
    void setQCoreApplication_DisconnectNotify_IsBase(bool value) const { qcoreapplication_disconnectnotify_isbase = value; }
    void setQCoreApplication_ResolveInterface_IsBase(bool value) const { qcoreapplication_resolveinterface_isbase = value; }
    void setQCoreApplication_Sender_IsBase(bool value) const { qcoreapplication_sender_isbase = value; }
    void setQCoreApplication_SenderSignalIndex_IsBase(bool value) const { qcoreapplication_sendersignalindex_isbase = value; }
    void setQCoreApplication_Receivers_IsBase(bool value) const { qcoreapplication_receivers_isbase = value; }
    void setQCoreApplication_IsSignalConnected_IsBase(bool value) const { qcoreapplication_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcoreapplication_metacall_isbase) {
            qcoreapplication_metacall_isbase = false;
            return QCoreApplication::qt_metacall(param1, param2, param3);
        } else if (qcoreapplication_metacall_callback != nullptr) {
            return qcoreapplication_metacall_callback(this, param1, param2, param3);
        } else {
            return QCoreApplication::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool notify(QObject* param1, QEvent* param2) override {
        if (qcoreapplication_notify_isbase) {
            qcoreapplication_notify_isbase = false;
            return QCoreApplication::notify(param1, param2);
        } else if (qcoreapplication_notify_callback != nullptr) {
            return qcoreapplication_notify_callback(this, param1, param2);
        } else {
            return QCoreApplication::notify(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qcoreapplication_event_isbase) {
            qcoreapplication_event_isbase = false;
            return QCoreApplication::event(param1);
        } else if (qcoreapplication_event_callback != nullptr) {
            return qcoreapplication_event_callback(this, param1);
        } else {
            return QCoreApplication::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcoreapplication_eventfilter_isbase) {
            qcoreapplication_eventfilter_isbase = false;
            return QCoreApplication::eventFilter(watched, event);
        } else if (qcoreapplication_eventfilter_callback != nullptr) {
            return qcoreapplication_eventfilter_callback(this, watched, event);
        } else {
            return QCoreApplication::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcoreapplication_timerevent_isbase) {
            qcoreapplication_timerevent_isbase = false;
            QCoreApplication::timerEvent(event);
        } else if (qcoreapplication_timerevent_callback != nullptr) {
            qcoreapplication_timerevent_callback(this, event);
        } else {
            QCoreApplication::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcoreapplication_childevent_isbase) {
            qcoreapplication_childevent_isbase = false;
            QCoreApplication::childEvent(event);
        } else if (qcoreapplication_childevent_callback != nullptr) {
            qcoreapplication_childevent_callback(this, event);
        } else {
            QCoreApplication::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcoreapplication_customevent_isbase) {
            qcoreapplication_customevent_isbase = false;
            QCoreApplication::customEvent(event);
        } else if (qcoreapplication_customevent_callback != nullptr) {
            qcoreapplication_customevent_callback(this, event);
        } else {
            QCoreApplication::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcoreapplication_connectnotify_isbase) {
            qcoreapplication_connectnotify_isbase = false;
            QCoreApplication::connectNotify(signal);
        } else if (qcoreapplication_connectnotify_callback != nullptr) {
            qcoreapplication_connectnotify_callback(this, signal);
        } else {
            QCoreApplication::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcoreapplication_disconnectnotify_isbase) {
            qcoreapplication_disconnectnotify_isbase = false;
            QCoreApplication::disconnectNotify(signal);
        } else if (qcoreapplication_disconnectnotify_callback != nullptr) {
            qcoreapplication_disconnectnotify_callback(this, signal);
        } else {
            QCoreApplication::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qcoreapplication_resolveinterface_isbase) {
            qcoreapplication_resolveinterface_isbase = false;
            return QCoreApplication::resolveInterface(name, revision);
        } else if (qcoreapplication_resolveinterface_callback != nullptr) {
            return qcoreapplication_resolveinterface_callback(this, name, revision);
        } else {
            return QCoreApplication::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcoreapplication_sender_isbase) {
            qcoreapplication_sender_isbase = false;
            return QCoreApplication::sender();
        } else if (qcoreapplication_sender_callback != nullptr) {
            return qcoreapplication_sender_callback();
        } else {
            return QCoreApplication::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcoreapplication_sendersignalindex_isbase) {
            qcoreapplication_sendersignalindex_isbase = false;
            return QCoreApplication::senderSignalIndex();
        } else if (qcoreapplication_sendersignalindex_callback != nullptr) {
            return qcoreapplication_sendersignalindex_callback();
        } else {
            return QCoreApplication::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcoreapplication_receivers_isbase) {
            qcoreapplication_receivers_isbase = false;
            return QCoreApplication::receivers(signal);
        } else if (qcoreapplication_receivers_callback != nullptr) {
            return qcoreapplication_receivers_callback(this, signal);
        } else {
            return QCoreApplication::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcoreapplication_issignalconnected_isbase) {
            qcoreapplication_issignalconnected_isbase = false;
            return QCoreApplication::isSignalConnected(signal);
        } else if (qcoreapplication_issignalconnected_callback != nullptr) {
            return qcoreapplication_issignalconnected_callback(this, signal);
        } else {
            return QCoreApplication::isSignalConnected(signal);
        }
    }
};

#endif

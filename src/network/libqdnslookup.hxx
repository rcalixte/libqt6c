#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQDNSLOOKUP_H
#define SRC_NETWORKC_LIBVIRTUALQDNSLOOKUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDnsLookup so that we can call protected methods
class VirtualQDnsLookup : public QDnsLookup {

  public:
    // Virtual class public types (including callbacks)
    using QDnsLookup_Metacall_Callback = int (*)(QDnsLookup*, QMetaObject::Call, int, void**);
    using QDnsLookup_Event_Callback = bool (*)(QDnsLookup*, QEvent*);
    using QDnsLookup_EventFilter_Callback = bool (*)(QDnsLookup*, QObject*, QEvent*);
    using QDnsLookup_TimerEvent_Callback = void (*)(QDnsLookup*, QTimerEvent*);
    using QDnsLookup_ChildEvent_Callback = void (*)(QDnsLookup*, QChildEvent*);
    using QDnsLookup_CustomEvent_Callback = void (*)(QDnsLookup*, QEvent*);
    using QDnsLookup_ConnectNotify_Callback = void (*)(QDnsLookup*, const QMetaMethod&);
    using QDnsLookup_DisconnectNotify_Callback = void (*)(QDnsLookup*, const QMetaMethod&);
    using QDnsLookup_Sender_Callback = QObject* (*)();
    using QDnsLookup_SenderSignalIndex_Callback = int (*)();
    using QDnsLookup_Receivers_Callback = int (*)(const QDnsLookup*, const char*);
    using QDnsLookup_IsSignalConnected_Callback = bool (*)(const QDnsLookup*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDnsLookup_Metacall_Callback qdnslookup_metacall_callback = nullptr;
    QDnsLookup_Event_Callback qdnslookup_event_callback = nullptr;
    QDnsLookup_EventFilter_Callback qdnslookup_eventfilter_callback = nullptr;
    QDnsLookup_TimerEvent_Callback qdnslookup_timerevent_callback = nullptr;
    QDnsLookup_ChildEvent_Callback qdnslookup_childevent_callback = nullptr;
    QDnsLookup_CustomEvent_Callback qdnslookup_customevent_callback = nullptr;
    QDnsLookup_ConnectNotify_Callback qdnslookup_connectnotify_callback = nullptr;
    QDnsLookup_DisconnectNotify_Callback qdnslookup_disconnectnotify_callback = nullptr;
    QDnsLookup_Sender_Callback qdnslookup_sender_callback = nullptr;
    QDnsLookup_SenderSignalIndex_Callback qdnslookup_sendersignalindex_callback = nullptr;
    QDnsLookup_Receivers_Callback qdnslookup_receivers_callback = nullptr;
    QDnsLookup_IsSignalConnected_Callback qdnslookup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdnslookup_metacall_isbase = false;
    mutable bool qdnslookup_event_isbase = false;
    mutable bool qdnslookup_eventfilter_isbase = false;
    mutable bool qdnslookup_timerevent_isbase = false;
    mutable bool qdnslookup_childevent_isbase = false;
    mutable bool qdnslookup_customevent_isbase = false;
    mutable bool qdnslookup_connectnotify_isbase = false;
    mutable bool qdnslookup_disconnectnotify_isbase = false;
    mutable bool qdnslookup_sender_isbase = false;
    mutable bool qdnslookup_sendersignalindex_isbase = false;
    mutable bool qdnslookup_receivers_isbase = false;
    mutable bool qdnslookup_issignalconnected_isbase = false;

  public:
    VirtualQDnsLookup() : QDnsLookup(){};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name) : QDnsLookup(typeVal, name){};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, const QHostAddress& nameserver) : QDnsLookup(typeVal, name, nameserver){};
    VirtualQDnsLookup(QObject* parent) : QDnsLookup(parent){};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, QObject* parent) : QDnsLookup(typeVal, name, parent){};
    VirtualQDnsLookup(QDnsLookup::Type typeVal, const QString& name, const QHostAddress& nameserver, QObject* parent) : QDnsLookup(typeVal, name, nameserver, parent){};

    ~VirtualQDnsLookup() {
        qdnslookup_metacall_callback = nullptr;
        qdnslookup_event_callback = nullptr;
        qdnslookup_eventfilter_callback = nullptr;
        qdnslookup_timerevent_callback = nullptr;
        qdnslookup_childevent_callback = nullptr;
        qdnslookup_customevent_callback = nullptr;
        qdnslookup_connectnotify_callback = nullptr;
        qdnslookup_disconnectnotify_callback = nullptr;
        qdnslookup_sender_callback = nullptr;
        qdnslookup_sendersignalindex_callback = nullptr;
        qdnslookup_receivers_callback = nullptr;
        qdnslookup_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDnsLookup_Metacall_Callback(QDnsLookup_Metacall_Callback cb) { qdnslookup_metacall_callback = cb; }
    void setQDnsLookup_Event_Callback(QDnsLookup_Event_Callback cb) { qdnslookup_event_callback = cb; }
    void setQDnsLookup_EventFilter_Callback(QDnsLookup_EventFilter_Callback cb) { qdnslookup_eventfilter_callback = cb; }
    void setQDnsLookup_TimerEvent_Callback(QDnsLookup_TimerEvent_Callback cb) { qdnslookup_timerevent_callback = cb; }
    void setQDnsLookup_ChildEvent_Callback(QDnsLookup_ChildEvent_Callback cb) { qdnslookup_childevent_callback = cb; }
    void setQDnsLookup_CustomEvent_Callback(QDnsLookup_CustomEvent_Callback cb) { qdnslookup_customevent_callback = cb; }
    void setQDnsLookup_ConnectNotify_Callback(QDnsLookup_ConnectNotify_Callback cb) { qdnslookup_connectnotify_callback = cb; }
    void setQDnsLookup_DisconnectNotify_Callback(QDnsLookup_DisconnectNotify_Callback cb) { qdnslookup_disconnectnotify_callback = cb; }
    void setQDnsLookup_Sender_Callback(QDnsLookup_Sender_Callback cb) { qdnslookup_sender_callback = cb; }
    void setQDnsLookup_SenderSignalIndex_Callback(QDnsLookup_SenderSignalIndex_Callback cb) { qdnslookup_sendersignalindex_callback = cb; }
    void setQDnsLookup_Receivers_Callback(QDnsLookup_Receivers_Callback cb) { qdnslookup_receivers_callback = cb; }
    void setQDnsLookup_IsSignalConnected_Callback(QDnsLookup_IsSignalConnected_Callback cb) { qdnslookup_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDnsLookup_Metacall_IsBase(bool value) const { qdnslookup_metacall_isbase = value; }
    void setQDnsLookup_Event_IsBase(bool value) const { qdnslookup_event_isbase = value; }
    void setQDnsLookup_EventFilter_IsBase(bool value) const { qdnslookup_eventfilter_isbase = value; }
    void setQDnsLookup_TimerEvent_IsBase(bool value) const { qdnslookup_timerevent_isbase = value; }
    void setQDnsLookup_ChildEvent_IsBase(bool value) const { qdnslookup_childevent_isbase = value; }
    void setQDnsLookup_CustomEvent_IsBase(bool value) const { qdnslookup_customevent_isbase = value; }
    void setQDnsLookup_ConnectNotify_IsBase(bool value) const { qdnslookup_connectnotify_isbase = value; }
    void setQDnsLookup_DisconnectNotify_IsBase(bool value) const { qdnslookup_disconnectnotify_isbase = value; }
    void setQDnsLookup_Sender_IsBase(bool value) const { qdnslookup_sender_isbase = value; }
    void setQDnsLookup_SenderSignalIndex_IsBase(bool value) const { qdnslookup_sendersignalindex_isbase = value; }
    void setQDnsLookup_Receivers_IsBase(bool value) const { qdnslookup_receivers_isbase = value; }
    void setQDnsLookup_IsSignalConnected_IsBase(bool value) const { qdnslookup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdnslookup_metacall_isbase) {
            qdnslookup_metacall_isbase = false;
            return QDnsLookup::qt_metacall(param1, param2, param3);
        } else if (qdnslookup_metacall_callback != nullptr) {
            return qdnslookup_metacall_callback(this, param1, param2, param3);
        } else {
            return QDnsLookup::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdnslookup_event_isbase) {
            qdnslookup_event_isbase = false;
            return QDnsLookup::event(event);
        } else if (qdnslookup_event_callback != nullptr) {
            return qdnslookup_event_callback(this, event);
        } else {
            return QDnsLookup::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdnslookup_eventfilter_isbase) {
            qdnslookup_eventfilter_isbase = false;
            return QDnsLookup::eventFilter(watched, event);
        } else if (qdnslookup_eventfilter_callback != nullptr) {
            return qdnslookup_eventfilter_callback(this, watched, event);
        } else {
            return QDnsLookup::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdnslookup_timerevent_isbase) {
            qdnslookup_timerevent_isbase = false;
            QDnsLookup::timerEvent(event);
        } else if (qdnslookup_timerevent_callback != nullptr) {
            qdnslookup_timerevent_callback(this, event);
        } else {
            QDnsLookup::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdnslookup_childevent_isbase) {
            qdnslookup_childevent_isbase = false;
            QDnsLookup::childEvent(event);
        } else if (qdnslookup_childevent_callback != nullptr) {
            qdnslookup_childevent_callback(this, event);
        } else {
            QDnsLookup::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdnslookup_customevent_isbase) {
            qdnslookup_customevent_isbase = false;
            QDnsLookup::customEvent(event);
        } else if (qdnslookup_customevent_callback != nullptr) {
            qdnslookup_customevent_callback(this, event);
        } else {
            QDnsLookup::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdnslookup_connectnotify_isbase) {
            qdnslookup_connectnotify_isbase = false;
            QDnsLookup::connectNotify(signal);
        } else if (qdnslookup_connectnotify_callback != nullptr) {
            qdnslookup_connectnotify_callback(this, signal);
        } else {
            QDnsLookup::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdnslookup_disconnectnotify_isbase) {
            qdnslookup_disconnectnotify_isbase = false;
            QDnsLookup::disconnectNotify(signal);
        } else if (qdnslookup_disconnectnotify_callback != nullptr) {
            qdnslookup_disconnectnotify_callback(this, signal);
        } else {
            QDnsLookup::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdnslookup_sender_isbase) {
            qdnslookup_sender_isbase = false;
            return QDnsLookup::sender();
        } else if (qdnslookup_sender_callback != nullptr) {
            return qdnslookup_sender_callback();
        } else {
            return QDnsLookup::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdnslookup_sendersignalindex_isbase) {
            qdnslookup_sendersignalindex_isbase = false;
            return QDnsLookup::senderSignalIndex();
        } else if (qdnslookup_sendersignalindex_callback != nullptr) {
            return qdnslookup_sendersignalindex_callback();
        } else {
            return QDnsLookup::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdnslookup_receivers_isbase) {
            qdnslookup_receivers_isbase = false;
            return QDnsLookup::receivers(signal);
        } else if (qdnslookup_receivers_callback != nullptr) {
            return qdnslookup_receivers_callback(this, signal);
        } else {
            return QDnsLookup::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdnslookup_issignalconnected_isbase) {
            qdnslookup_issignalconnected_isbase = false;
            return QDnsLookup::isSignalConnected(signal);
        } else if (qdnslookup_issignalconnected_callback != nullptr) {
            return qdnslookup_issignalconnected_callback(this, signal);
        } else {
            return QDnsLookup::isSignalConnected(signal);
        }
    }
};

#endif

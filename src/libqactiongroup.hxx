#pragma once
#ifndef SRCC_LIBVIRTUALQACTIONGROUP_H
#define SRCC_LIBVIRTUALQACTIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QActionGroup so that we can call protected methods
class VirtualQActionGroup : public QActionGroup {

  public:
    // Virtual class public types (including callbacks)
    using QActionGroup_Metacall_Callback = int (*)(QActionGroup*, QMetaObject::Call, int, void**);
    using QActionGroup_Event_Callback = bool (*)(QActionGroup*, QEvent*);
    using QActionGroup_EventFilter_Callback = bool (*)(QActionGroup*, QObject*, QEvent*);
    using QActionGroup_TimerEvent_Callback = void (*)(QActionGroup*, QTimerEvent*);
    using QActionGroup_ChildEvent_Callback = void (*)(QActionGroup*, QChildEvent*);
    using QActionGroup_CustomEvent_Callback = void (*)(QActionGroup*, QEvent*);
    using QActionGroup_ConnectNotify_Callback = void (*)(QActionGroup*, const QMetaMethod&);
    using QActionGroup_DisconnectNotify_Callback = void (*)(QActionGroup*, const QMetaMethod&);
    using QActionGroup_Sender_Callback = QObject* (*)();
    using QActionGroup_SenderSignalIndex_Callback = int (*)();
    using QActionGroup_Receivers_Callback = int (*)(const QActionGroup*, const char*);
    using QActionGroup_IsSignalConnected_Callback = bool (*)(const QActionGroup*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QActionGroup_Metacall_Callback qactiongroup_metacall_callback = nullptr;
    QActionGroup_Event_Callback qactiongroup_event_callback = nullptr;
    QActionGroup_EventFilter_Callback qactiongroup_eventfilter_callback = nullptr;
    QActionGroup_TimerEvent_Callback qactiongroup_timerevent_callback = nullptr;
    QActionGroup_ChildEvent_Callback qactiongroup_childevent_callback = nullptr;
    QActionGroup_CustomEvent_Callback qactiongroup_customevent_callback = nullptr;
    QActionGroup_ConnectNotify_Callback qactiongroup_connectnotify_callback = nullptr;
    QActionGroup_DisconnectNotify_Callback qactiongroup_disconnectnotify_callback = nullptr;
    QActionGroup_Sender_Callback qactiongroup_sender_callback = nullptr;
    QActionGroup_SenderSignalIndex_Callback qactiongroup_sendersignalindex_callback = nullptr;
    QActionGroup_Receivers_Callback qactiongroup_receivers_callback = nullptr;
    QActionGroup_IsSignalConnected_Callback qactiongroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qactiongroup_metacall_isbase = false;
    mutable bool qactiongroup_event_isbase = false;
    mutable bool qactiongroup_eventfilter_isbase = false;
    mutable bool qactiongroup_timerevent_isbase = false;
    mutable bool qactiongroup_childevent_isbase = false;
    mutable bool qactiongroup_customevent_isbase = false;
    mutable bool qactiongroup_connectnotify_isbase = false;
    mutable bool qactiongroup_disconnectnotify_isbase = false;
    mutable bool qactiongroup_sender_isbase = false;
    mutable bool qactiongroup_sendersignalindex_isbase = false;
    mutable bool qactiongroup_receivers_isbase = false;
    mutable bool qactiongroup_issignalconnected_isbase = false;

  public:
    VirtualQActionGroup(QObject* parent) : QActionGroup(parent){};

    ~VirtualQActionGroup() {
        qactiongroup_metacall_callback = nullptr;
        qactiongroup_event_callback = nullptr;
        qactiongroup_eventfilter_callback = nullptr;
        qactiongroup_timerevent_callback = nullptr;
        qactiongroup_childevent_callback = nullptr;
        qactiongroup_customevent_callback = nullptr;
        qactiongroup_connectnotify_callback = nullptr;
        qactiongroup_disconnectnotify_callback = nullptr;
        qactiongroup_sender_callback = nullptr;
        qactiongroup_sendersignalindex_callback = nullptr;
        qactiongroup_receivers_callback = nullptr;
        qactiongroup_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQActionGroup_Metacall_Callback(QActionGroup_Metacall_Callback cb) { qactiongroup_metacall_callback = cb; }
    void setQActionGroup_Event_Callback(QActionGroup_Event_Callback cb) { qactiongroup_event_callback = cb; }
    void setQActionGroup_EventFilter_Callback(QActionGroup_EventFilter_Callback cb) { qactiongroup_eventfilter_callback = cb; }
    void setQActionGroup_TimerEvent_Callback(QActionGroup_TimerEvent_Callback cb) { qactiongroup_timerevent_callback = cb; }
    void setQActionGroup_ChildEvent_Callback(QActionGroup_ChildEvent_Callback cb) { qactiongroup_childevent_callback = cb; }
    void setQActionGroup_CustomEvent_Callback(QActionGroup_CustomEvent_Callback cb) { qactiongroup_customevent_callback = cb; }
    void setQActionGroup_ConnectNotify_Callback(QActionGroup_ConnectNotify_Callback cb) { qactiongroup_connectnotify_callback = cb; }
    void setQActionGroup_DisconnectNotify_Callback(QActionGroup_DisconnectNotify_Callback cb) { qactiongroup_disconnectnotify_callback = cb; }
    void setQActionGroup_Sender_Callback(QActionGroup_Sender_Callback cb) { qactiongroup_sender_callback = cb; }
    void setQActionGroup_SenderSignalIndex_Callback(QActionGroup_SenderSignalIndex_Callback cb) { qactiongroup_sendersignalindex_callback = cb; }
    void setQActionGroup_Receivers_Callback(QActionGroup_Receivers_Callback cb) { qactiongroup_receivers_callback = cb; }
    void setQActionGroup_IsSignalConnected_Callback(QActionGroup_IsSignalConnected_Callback cb) { qactiongroup_issignalconnected_callback = cb; }

    // Base flag setters
    void setQActionGroup_Metacall_IsBase(bool value) const { qactiongroup_metacall_isbase = value; }
    void setQActionGroup_Event_IsBase(bool value) const { qactiongroup_event_isbase = value; }
    void setQActionGroup_EventFilter_IsBase(bool value) const { qactiongroup_eventfilter_isbase = value; }
    void setQActionGroup_TimerEvent_IsBase(bool value) const { qactiongroup_timerevent_isbase = value; }
    void setQActionGroup_ChildEvent_IsBase(bool value) const { qactiongroup_childevent_isbase = value; }
    void setQActionGroup_CustomEvent_IsBase(bool value) const { qactiongroup_customevent_isbase = value; }
    void setQActionGroup_ConnectNotify_IsBase(bool value) const { qactiongroup_connectnotify_isbase = value; }
    void setQActionGroup_DisconnectNotify_IsBase(bool value) const { qactiongroup_disconnectnotify_isbase = value; }
    void setQActionGroup_Sender_IsBase(bool value) const { qactiongroup_sender_isbase = value; }
    void setQActionGroup_SenderSignalIndex_IsBase(bool value) const { qactiongroup_sendersignalindex_isbase = value; }
    void setQActionGroup_Receivers_IsBase(bool value) const { qactiongroup_receivers_isbase = value; }
    void setQActionGroup_IsSignalConnected_IsBase(bool value) const { qactiongroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qactiongroup_metacall_isbase) {
            qactiongroup_metacall_isbase = false;
            return QActionGroup::qt_metacall(param1, param2, param3);
        } else if (qactiongroup_metacall_callback != nullptr) {
            return qactiongroup_metacall_callback(this, param1, param2, param3);
        } else {
            return QActionGroup::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qactiongroup_event_isbase) {
            qactiongroup_event_isbase = false;
            return QActionGroup::event(event);
        } else if (qactiongroup_event_callback != nullptr) {
            return qactiongroup_event_callback(this, event);
        } else {
            return QActionGroup::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qactiongroup_eventfilter_isbase) {
            qactiongroup_eventfilter_isbase = false;
            return QActionGroup::eventFilter(watched, event);
        } else if (qactiongroup_eventfilter_callback != nullptr) {
            return qactiongroup_eventfilter_callback(this, watched, event);
        } else {
            return QActionGroup::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qactiongroup_timerevent_isbase) {
            qactiongroup_timerevent_isbase = false;
            QActionGroup::timerEvent(event);
        } else if (qactiongroup_timerevent_callback != nullptr) {
            qactiongroup_timerevent_callback(this, event);
        } else {
            QActionGroup::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qactiongroup_childevent_isbase) {
            qactiongroup_childevent_isbase = false;
            QActionGroup::childEvent(event);
        } else if (qactiongroup_childevent_callback != nullptr) {
            qactiongroup_childevent_callback(this, event);
        } else {
            QActionGroup::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qactiongroup_customevent_isbase) {
            qactiongroup_customevent_isbase = false;
            QActionGroup::customEvent(event);
        } else if (qactiongroup_customevent_callback != nullptr) {
            qactiongroup_customevent_callback(this, event);
        } else {
            QActionGroup::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qactiongroup_connectnotify_isbase) {
            qactiongroup_connectnotify_isbase = false;
            QActionGroup::connectNotify(signal);
        } else if (qactiongroup_connectnotify_callback != nullptr) {
            qactiongroup_connectnotify_callback(this, signal);
        } else {
            QActionGroup::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qactiongroup_disconnectnotify_isbase) {
            qactiongroup_disconnectnotify_isbase = false;
            QActionGroup::disconnectNotify(signal);
        } else if (qactiongroup_disconnectnotify_callback != nullptr) {
            qactiongroup_disconnectnotify_callback(this, signal);
        } else {
            QActionGroup::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qactiongroup_sender_isbase) {
            qactiongroup_sender_isbase = false;
            return QActionGroup::sender();
        } else if (qactiongroup_sender_callback != nullptr) {
            return qactiongroup_sender_callback();
        } else {
            return QActionGroup::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qactiongroup_sendersignalindex_isbase) {
            qactiongroup_sendersignalindex_isbase = false;
            return QActionGroup::senderSignalIndex();
        } else if (qactiongroup_sendersignalindex_callback != nullptr) {
            return qactiongroup_sendersignalindex_callback();
        } else {
            return QActionGroup::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qactiongroup_receivers_isbase) {
            qactiongroup_receivers_isbase = false;
            return QActionGroup::receivers(signal);
        } else if (qactiongroup_receivers_callback != nullptr) {
            return qactiongroup_receivers_callback(this, signal);
        } else {
            return QActionGroup::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qactiongroup_issignalconnected_isbase) {
            qactiongroup_issignalconnected_isbase = false;
            return QActionGroup::isSignalConnected(signal);
        } else if (qactiongroup_issignalconnected_callback != nullptr) {
            return qactiongroup_issignalconnected_callback(this, signal);
        } else {
            return QActionGroup::isSignalConnected(signal);
        }
    }
};

#endif

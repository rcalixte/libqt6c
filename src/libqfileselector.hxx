#pragma once
#ifndef SRCC_LIBVIRTUALQFILESELECTOR_H
#define SRCC_LIBVIRTUALQFILESELECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSelector so that we can call protected methods
class VirtualQFileSelector : public QFileSelector {

  public:
    // Virtual class public types (including callbacks)
    using QFileSelector_Metacall_Callback = int (*)(QFileSelector*, QMetaObject::Call, int, void**);
    using QFileSelector_Event_Callback = bool (*)(QFileSelector*, QEvent*);
    using QFileSelector_EventFilter_Callback = bool (*)(QFileSelector*, QObject*, QEvent*);
    using QFileSelector_TimerEvent_Callback = void (*)(QFileSelector*, QTimerEvent*);
    using QFileSelector_ChildEvent_Callback = void (*)(QFileSelector*, QChildEvent*);
    using QFileSelector_CustomEvent_Callback = void (*)(QFileSelector*, QEvent*);
    using QFileSelector_ConnectNotify_Callback = void (*)(QFileSelector*, const QMetaMethod&);
    using QFileSelector_DisconnectNotify_Callback = void (*)(QFileSelector*, const QMetaMethod&);
    using QFileSelector_Sender_Callback = QObject* (*)();
    using QFileSelector_SenderSignalIndex_Callback = int (*)();
    using QFileSelector_Receivers_Callback = int (*)(const QFileSelector*, const char*);
    using QFileSelector_IsSignalConnected_Callback = bool (*)(const QFileSelector*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QFileSelector_Metacall_Callback qfileselector_metacall_callback = nullptr;
    QFileSelector_Event_Callback qfileselector_event_callback = nullptr;
    QFileSelector_EventFilter_Callback qfileselector_eventfilter_callback = nullptr;
    QFileSelector_TimerEvent_Callback qfileselector_timerevent_callback = nullptr;
    QFileSelector_ChildEvent_Callback qfileselector_childevent_callback = nullptr;
    QFileSelector_CustomEvent_Callback qfileselector_customevent_callback = nullptr;
    QFileSelector_ConnectNotify_Callback qfileselector_connectnotify_callback = nullptr;
    QFileSelector_DisconnectNotify_Callback qfileselector_disconnectnotify_callback = nullptr;
    QFileSelector_Sender_Callback qfileselector_sender_callback = nullptr;
    QFileSelector_SenderSignalIndex_Callback qfileselector_sendersignalindex_callback = nullptr;
    QFileSelector_Receivers_Callback qfileselector_receivers_callback = nullptr;
    QFileSelector_IsSignalConnected_Callback qfileselector_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfileselector_metacall_isbase = false;
    mutable bool qfileselector_event_isbase = false;
    mutable bool qfileselector_eventfilter_isbase = false;
    mutable bool qfileselector_timerevent_isbase = false;
    mutable bool qfileselector_childevent_isbase = false;
    mutable bool qfileselector_customevent_isbase = false;
    mutable bool qfileselector_connectnotify_isbase = false;
    mutable bool qfileselector_disconnectnotify_isbase = false;
    mutable bool qfileselector_sender_isbase = false;
    mutable bool qfileselector_sendersignalindex_isbase = false;
    mutable bool qfileselector_receivers_isbase = false;
    mutable bool qfileselector_issignalconnected_isbase = false;

  public:
    VirtualQFileSelector() : QFileSelector(){};
    VirtualQFileSelector(QObject* parent) : QFileSelector(parent){};

    ~VirtualQFileSelector() {
        qfileselector_metacall_callback = nullptr;
        qfileselector_event_callback = nullptr;
        qfileselector_eventfilter_callback = nullptr;
        qfileselector_timerevent_callback = nullptr;
        qfileselector_childevent_callback = nullptr;
        qfileselector_customevent_callback = nullptr;
        qfileselector_connectnotify_callback = nullptr;
        qfileselector_disconnectnotify_callback = nullptr;
        qfileselector_sender_callback = nullptr;
        qfileselector_sendersignalindex_callback = nullptr;
        qfileselector_receivers_callback = nullptr;
        qfileselector_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQFileSelector_Metacall_Callback(QFileSelector_Metacall_Callback cb) { qfileselector_metacall_callback = cb; }
    void setQFileSelector_Event_Callback(QFileSelector_Event_Callback cb) { qfileselector_event_callback = cb; }
    void setQFileSelector_EventFilter_Callback(QFileSelector_EventFilter_Callback cb) { qfileselector_eventfilter_callback = cb; }
    void setQFileSelector_TimerEvent_Callback(QFileSelector_TimerEvent_Callback cb) { qfileselector_timerevent_callback = cb; }
    void setQFileSelector_ChildEvent_Callback(QFileSelector_ChildEvent_Callback cb) { qfileselector_childevent_callback = cb; }
    void setQFileSelector_CustomEvent_Callback(QFileSelector_CustomEvent_Callback cb) { qfileselector_customevent_callback = cb; }
    void setQFileSelector_ConnectNotify_Callback(QFileSelector_ConnectNotify_Callback cb) { qfileselector_connectnotify_callback = cb; }
    void setQFileSelector_DisconnectNotify_Callback(QFileSelector_DisconnectNotify_Callback cb) { qfileselector_disconnectnotify_callback = cb; }
    void setQFileSelector_Sender_Callback(QFileSelector_Sender_Callback cb) { qfileselector_sender_callback = cb; }
    void setQFileSelector_SenderSignalIndex_Callback(QFileSelector_SenderSignalIndex_Callback cb) { qfileselector_sendersignalindex_callback = cb; }
    void setQFileSelector_Receivers_Callback(QFileSelector_Receivers_Callback cb) { qfileselector_receivers_callback = cb; }
    void setQFileSelector_IsSignalConnected_Callback(QFileSelector_IsSignalConnected_Callback cb) { qfileselector_issignalconnected_callback = cb; }

    // Base flag setters
    void setQFileSelector_Metacall_IsBase(bool value) const { qfileselector_metacall_isbase = value; }
    void setQFileSelector_Event_IsBase(bool value) const { qfileselector_event_isbase = value; }
    void setQFileSelector_EventFilter_IsBase(bool value) const { qfileselector_eventfilter_isbase = value; }
    void setQFileSelector_TimerEvent_IsBase(bool value) const { qfileselector_timerevent_isbase = value; }
    void setQFileSelector_ChildEvent_IsBase(bool value) const { qfileselector_childevent_isbase = value; }
    void setQFileSelector_CustomEvent_IsBase(bool value) const { qfileselector_customevent_isbase = value; }
    void setQFileSelector_ConnectNotify_IsBase(bool value) const { qfileselector_connectnotify_isbase = value; }
    void setQFileSelector_DisconnectNotify_IsBase(bool value) const { qfileselector_disconnectnotify_isbase = value; }
    void setQFileSelector_Sender_IsBase(bool value) const { qfileselector_sender_isbase = value; }
    void setQFileSelector_SenderSignalIndex_IsBase(bool value) const { qfileselector_sendersignalindex_isbase = value; }
    void setQFileSelector_Receivers_IsBase(bool value) const { qfileselector_receivers_isbase = value; }
    void setQFileSelector_IsSignalConnected_IsBase(bool value) const { qfileselector_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfileselector_metacall_isbase) {
            qfileselector_metacall_isbase = false;
            return QFileSelector::qt_metacall(param1, param2, param3);
        } else if (qfileselector_metacall_callback != nullptr) {
            return qfileselector_metacall_callback(this, param1, param2, param3);
        } else {
            return QFileSelector::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfileselector_event_isbase) {
            qfileselector_event_isbase = false;
            return QFileSelector::event(event);
        } else if (qfileselector_event_callback != nullptr) {
            return qfileselector_event_callback(this, event);
        } else {
            return QFileSelector::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfileselector_eventfilter_isbase) {
            qfileselector_eventfilter_isbase = false;
            return QFileSelector::eventFilter(watched, event);
        } else if (qfileselector_eventfilter_callback != nullptr) {
            return qfileselector_eventfilter_callback(this, watched, event);
        } else {
            return QFileSelector::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfileselector_timerevent_isbase) {
            qfileselector_timerevent_isbase = false;
            QFileSelector::timerEvent(event);
        } else if (qfileselector_timerevent_callback != nullptr) {
            qfileselector_timerevent_callback(this, event);
        } else {
            QFileSelector::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfileselector_childevent_isbase) {
            qfileselector_childevent_isbase = false;
            QFileSelector::childEvent(event);
        } else if (qfileselector_childevent_callback != nullptr) {
            qfileselector_childevent_callback(this, event);
        } else {
            QFileSelector::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfileselector_customevent_isbase) {
            qfileselector_customevent_isbase = false;
            QFileSelector::customEvent(event);
        } else if (qfileselector_customevent_callback != nullptr) {
            qfileselector_customevent_callback(this, event);
        } else {
            QFileSelector::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfileselector_connectnotify_isbase) {
            qfileselector_connectnotify_isbase = false;
            QFileSelector::connectNotify(signal);
        } else if (qfileselector_connectnotify_callback != nullptr) {
            qfileselector_connectnotify_callback(this, signal);
        } else {
            QFileSelector::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfileselector_disconnectnotify_isbase) {
            qfileselector_disconnectnotify_isbase = false;
            QFileSelector::disconnectNotify(signal);
        } else if (qfileselector_disconnectnotify_callback != nullptr) {
            qfileselector_disconnectnotify_callback(this, signal);
        } else {
            QFileSelector::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfileselector_sender_isbase) {
            qfileselector_sender_isbase = false;
            return QFileSelector::sender();
        } else if (qfileselector_sender_callback != nullptr) {
            return qfileselector_sender_callback();
        } else {
            return QFileSelector::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfileselector_sendersignalindex_isbase) {
            qfileselector_sendersignalindex_isbase = false;
            return QFileSelector::senderSignalIndex();
        } else if (qfileselector_sendersignalindex_callback != nullptr) {
            return qfileselector_sendersignalindex_callback();
        } else {
            return QFileSelector::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfileselector_receivers_isbase) {
            qfileselector_receivers_isbase = false;
            return QFileSelector::receivers(signal);
        } else if (qfileselector_receivers_callback != nullptr) {
            return qfileselector_receivers_callback(this, signal);
        } else {
            return QFileSelector::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfileselector_issignalconnected_isbase) {
            qfileselector_issignalconnected_isbase = false;
            return QFileSelector::isSignalConnected(signal);
        } else if (qfileselector_issignalconnected_callback != nullptr) {
            return qfileselector_issignalconnected_callback(this, signal);
        } else {
            return QFileSelector::isSignalConnected(signal);
        }
    }
};

#endif

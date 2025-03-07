#pragma once
#ifndef SRCC_LIBVIRTUALQSHORTCUT_H
#define SRCC_LIBVIRTUALQSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QShortcut so that we can call protected methods
class VirtualQShortcut : public QShortcut {

  public:
    // Virtual class public types (including callbacks)
    using QShortcut_Metacall_Callback = int (*)(QShortcut*, QMetaObject::Call, int, void**);
    using QShortcut_Event_Callback = bool (*)(QShortcut*, QEvent*);
    using QShortcut_EventFilter_Callback = bool (*)(QShortcut*, QObject*, QEvent*);
    using QShortcut_TimerEvent_Callback = void (*)(QShortcut*, QTimerEvent*);
    using QShortcut_ChildEvent_Callback = void (*)(QShortcut*, QChildEvent*);
    using QShortcut_CustomEvent_Callback = void (*)(QShortcut*, QEvent*);
    using QShortcut_ConnectNotify_Callback = void (*)(QShortcut*, const QMetaMethod&);
    using QShortcut_DisconnectNotify_Callback = void (*)(QShortcut*, const QMetaMethod&);
    using QShortcut_Sender_Callback = QObject* (*)();
    using QShortcut_SenderSignalIndex_Callback = int (*)();
    using QShortcut_Receivers_Callback = int (*)(const QShortcut*, const char*);
    using QShortcut_IsSignalConnected_Callback = bool (*)(const QShortcut*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QShortcut_Metacall_Callback qshortcut_metacall_callback = nullptr;
    QShortcut_Event_Callback qshortcut_event_callback = nullptr;
    QShortcut_EventFilter_Callback qshortcut_eventfilter_callback = nullptr;
    QShortcut_TimerEvent_Callback qshortcut_timerevent_callback = nullptr;
    QShortcut_ChildEvent_Callback qshortcut_childevent_callback = nullptr;
    QShortcut_CustomEvent_Callback qshortcut_customevent_callback = nullptr;
    QShortcut_ConnectNotify_Callback qshortcut_connectnotify_callback = nullptr;
    QShortcut_DisconnectNotify_Callback qshortcut_disconnectnotify_callback = nullptr;
    QShortcut_Sender_Callback qshortcut_sender_callback = nullptr;
    QShortcut_SenderSignalIndex_Callback qshortcut_sendersignalindex_callback = nullptr;
    QShortcut_Receivers_Callback qshortcut_receivers_callback = nullptr;
    QShortcut_IsSignalConnected_Callback qshortcut_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qshortcut_metacall_isbase = false;
    mutable bool qshortcut_event_isbase = false;
    mutable bool qshortcut_eventfilter_isbase = false;
    mutable bool qshortcut_timerevent_isbase = false;
    mutable bool qshortcut_childevent_isbase = false;
    mutable bool qshortcut_customevent_isbase = false;
    mutable bool qshortcut_connectnotify_isbase = false;
    mutable bool qshortcut_disconnectnotify_isbase = false;
    mutable bool qshortcut_sender_isbase = false;
    mutable bool qshortcut_sendersignalindex_isbase = false;
    mutable bool qshortcut_receivers_isbase = false;
    mutable bool qshortcut_issignalconnected_isbase = false;

  public:
    VirtualQShortcut(QObject* parent) : QShortcut(parent){};
    VirtualQShortcut(const QKeySequence& key, QObject* parent) : QShortcut(key, parent){};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent) : QShortcut(key, parent){};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member) : QShortcut(key, parent, member){};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember) : QShortcut(key, parent, member, ambiguousMember){};
    VirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context){};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member) : QShortcut(key, parent, member){};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember) : QShortcut(key, parent, member, ambiguousMember){};
    VirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context) : QShortcut(key, parent, member, ambiguousMember, context){};

    ~VirtualQShortcut() {
        qshortcut_metacall_callback = nullptr;
        qshortcut_event_callback = nullptr;
        qshortcut_eventfilter_callback = nullptr;
        qshortcut_timerevent_callback = nullptr;
        qshortcut_childevent_callback = nullptr;
        qshortcut_customevent_callback = nullptr;
        qshortcut_connectnotify_callback = nullptr;
        qshortcut_disconnectnotify_callback = nullptr;
        qshortcut_sender_callback = nullptr;
        qshortcut_sendersignalindex_callback = nullptr;
        qshortcut_receivers_callback = nullptr;
        qshortcut_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQShortcut_Metacall_Callback(QShortcut_Metacall_Callback cb) { qshortcut_metacall_callback = cb; }
    void setQShortcut_Event_Callback(QShortcut_Event_Callback cb) { qshortcut_event_callback = cb; }
    void setQShortcut_EventFilter_Callback(QShortcut_EventFilter_Callback cb) { qshortcut_eventfilter_callback = cb; }
    void setQShortcut_TimerEvent_Callback(QShortcut_TimerEvent_Callback cb) { qshortcut_timerevent_callback = cb; }
    void setQShortcut_ChildEvent_Callback(QShortcut_ChildEvent_Callback cb) { qshortcut_childevent_callback = cb; }
    void setQShortcut_CustomEvent_Callback(QShortcut_CustomEvent_Callback cb) { qshortcut_customevent_callback = cb; }
    void setQShortcut_ConnectNotify_Callback(QShortcut_ConnectNotify_Callback cb) { qshortcut_connectnotify_callback = cb; }
    void setQShortcut_DisconnectNotify_Callback(QShortcut_DisconnectNotify_Callback cb) { qshortcut_disconnectnotify_callback = cb; }
    void setQShortcut_Sender_Callback(QShortcut_Sender_Callback cb) { qshortcut_sender_callback = cb; }
    void setQShortcut_SenderSignalIndex_Callback(QShortcut_SenderSignalIndex_Callback cb) { qshortcut_sendersignalindex_callback = cb; }
    void setQShortcut_Receivers_Callback(QShortcut_Receivers_Callback cb) { qshortcut_receivers_callback = cb; }
    void setQShortcut_IsSignalConnected_Callback(QShortcut_IsSignalConnected_Callback cb) { qshortcut_issignalconnected_callback = cb; }

    // Base flag setters
    void setQShortcut_Metacall_IsBase(bool value) const { qshortcut_metacall_isbase = value; }
    void setQShortcut_Event_IsBase(bool value) const { qshortcut_event_isbase = value; }
    void setQShortcut_EventFilter_IsBase(bool value) const { qshortcut_eventfilter_isbase = value; }
    void setQShortcut_TimerEvent_IsBase(bool value) const { qshortcut_timerevent_isbase = value; }
    void setQShortcut_ChildEvent_IsBase(bool value) const { qshortcut_childevent_isbase = value; }
    void setQShortcut_CustomEvent_IsBase(bool value) const { qshortcut_customevent_isbase = value; }
    void setQShortcut_ConnectNotify_IsBase(bool value) const { qshortcut_connectnotify_isbase = value; }
    void setQShortcut_DisconnectNotify_IsBase(bool value) const { qshortcut_disconnectnotify_isbase = value; }
    void setQShortcut_Sender_IsBase(bool value) const { qshortcut_sender_isbase = value; }
    void setQShortcut_SenderSignalIndex_IsBase(bool value) const { qshortcut_sendersignalindex_isbase = value; }
    void setQShortcut_Receivers_IsBase(bool value) const { qshortcut_receivers_isbase = value; }
    void setQShortcut_IsSignalConnected_IsBase(bool value) const { qshortcut_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qshortcut_metacall_isbase) {
            qshortcut_metacall_isbase = false;
            return QShortcut::qt_metacall(param1, param2, param3);
        } else if (qshortcut_metacall_callback != nullptr) {
            return qshortcut_metacall_callback(this, param1, param2, param3);
        } else {
            return QShortcut::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qshortcut_event_isbase) {
            qshortcut_event_isbase = false;
            return QShortcut::event(e);
        } else if (qshortcut_event_callback != nullptr) {
            return qshortcut_event_callback(this, e);
        } else {
            return QShortcut::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qshortcut_eventfilter_isbase) {
            qshortcut_eventfilter_isbase = false;
            return QShortcut::eventFilter(watched, event);
        } else if (qshortcut_eventfilter_callback != nullptr) {
            return qshortcut_eventfilter_callback(this, watched, event);
        } else {
            return QShortcut::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qshortcut_timerevent_isbase) {
            qshortcut_timerevent_isbase = false;
            QShortcut::timerEvent(event);
        } else if (qshortcut_timerevent_callback != nullptr) {
            qshortcut_timerevent_callback(this, event);
        } else {
            QShortcut::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qshortcut_childevent_isbase) {
            qshortcut_childevent_isbase = false;
            QShortcut::childEvent(event);
        } else if (qshortcut_childevent_callback != nullptr) {
            qshortcut_childevent_callback(this, event);
        } else {
            QShortcut::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qshortcut_customevent_isbase) {
            qshortcut_customevent_isbase = false;
            QShortcut::customEvent(event);
        } else if (qshortcut_customevent_callback != nullptr) {
            qshortcut_customevent_callback(this, event);
        } else {
            QShortcut::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qshortcut_connectnotify_isbase) {
            qshortcut_connectnotify_isbase = false;
            QShortcut::connectNotify(signal);
        } else if (qshortcut_connectnotify_callback != nullptr) {
            qshortcut_connectnotify_callback(this, signal);
        } else {
            QShortcut::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qshortcut_disconnectnotify_isbase) {
            qshortcut_disconnectnotify_isbase = false;
            QShortcut::disconnectNotify(signal);
        } else if (qshortcut_disconnectnotify_callback != nullptr) {
            qshortcut_disconnectnotify_callback(this, signal);
        } else {
            QShortcut::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qshortcut_sender_isbase) {
            qshortcut_sender_isbase = false;
            return QShortcut::sender();
        } else if (qshortcut_sender_callback != nullptr) {
            return qshortcut_sender_callback();
        } else {
            return QShortcut::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qshortcut_sendersignalindex_isbase) {
            qshortcut_sendersignalindex_isbase = false;
            return QShortcut::senderSignalIndex();
        } else if (qshortcut_sendersignalindex_callback != nullptr) {
            return qshortcut_sendersignalindex_callback();
        } else {
            return QShortcut::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qshortcut_receivers_isbase) {
            qshortcut_receivers_isbase = false;
            return QShortcut::receivers(signal);
        } else if (qshortcut_receivers_callback != nullptr) {
            return qshortcut_receivers_callback(this, signal);
        } else {
            return QShortcut::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qshortcut_issignalconnected_isbase) {
            qshortcut_issignalconnected_isbase = false;
            return QShortcut::isSignalConnected(signal);
        } else if (qshortcut_issignalconnected_callback != nullptr) {
            return qshortcut_issignalconnected_callback(this, signal);
        } else {
            return QShortcut::isSignalConnected(signal);
        }
    }
};

#endif

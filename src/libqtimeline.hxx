#pragma once
#ifndef SRCC_LIBVIRTUALQTIMELINE_H
#define SRCC_LIBVIRTUALQTIMELINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTimeLine so that we can call protected methods
class VirtualQTimeLine : public QTimeLine {

  public:
    // Virtual class public types (including callbacks)
    using QTimeLine_Metacall_Callback = int (*)(QTimeLine*, QMetaObject::Call, int, void**);
    using QTimeLine_ValueForTime_Callback = qreal (*)(const QTimeLine*, int);
    using QTimeLine_TimerEvent_Callback = void (*)(QTimeLine*, QTimerEvent*);
    using QTimeLine_Event_Callback = bool (*)(QTimeLine*, QEvent*);
    using QTimeLine_EventFilter_Callback = bool (*)(QTimeLine*, QObject*, QEvent*);
    using QTimeLine_ChildEvent_Callback = void (*)(QTimeLine*, QChildEvent*);
    using QTimeLine_CustomEvent_Callback = void (*)(QTimeLine*, QEvent*);
    using QTimeLine_ConnectNotify_Callback = void (*)(QTimeLine*, const QMetaMethod&);
    using QTimeLine_DisconnectNotify_Callback = void (*)(QTimeLine*, const QMetaMethod&);
    using QTimeLine_Sender_Callback = QObject* (*)();
    using QTimeLine_SenderSignalIndex_Callback = int (*)();
    using QTimeLine_Receivers_Callback = int (*)(const QTimeLine*, const char*);
    using QTimeLine_IsSignalConnected_Callback = bool (*)(const QTimeLine*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTimeLine_Metacall_Callback qtimeline_metacall_callback = nullptr;
    QTimeLine_ValueForTime_Callback qtimeline_valuefortime_callback = nullptr;
    QTimeLine_TimerEvent_Callback qtimeline_timerevent_callback = nullptr;
    QTimeLine_Event_Callback qtimeline_event_callback = nullptr;
    QTimeLine_EventFilter_Callback qtimeline_eventfilter_callback = nullptr;
    QTimeLine_ChildEvent_Callback qtimeline_childevent_callback = nullptr;
    QTimeLine_CustomEvent_Callback qtimeline_customevent_callback = nullptr;
    QTimeLine_ConnectNotify_Callback qtimeline_connectnotify_callback = nullptr;
    QTimeLine_DisconnectNotify_Callback qtimeline_disconnectnotify_callback = nullptr;
    QTimeLine_Sender_Callback qtimeline_sender_callback = nullptr;
    QTimeLine_SenderSignalIndex_Callback qtimeline_sendersignalindex_callback = nullptr;
    QTimeLine_Receivers_Callback qtimeline_receivers_callback = nullptr;
    QTimeLine_IsSignalConnected_Callback qtimeline_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtimeline_metacall_isbase = false;
    mutable bool qtimeline_valuefortime_isbase = false;
    mutable bool qtimeline_timerevent_isbase = false;
    mutable bool qtimeline_event_isbase = false;
    mutable bool qtimeline_eventfilter_isbase = false;
    mutable bool qtimeline_childevent_isbase = false;
    mutable bool qtimeline_customevent_isbase = false;
    mutable bool qtimeline_connectnotify_isbase = false;
    mutable bool qtimeline_disconnectnotify_isbase = false;
    mutable bool qtimeline_sender_isbase = false;
    mutable bool qtimeline_sendersignalindex_isbase = false;
    mutable bool qtimeline_receivers_isbase = false;
    mutable bool qtimeline_issignalconnected_isbase = false;

  public:
    VirtualQTimeLine() : QTimeLine(){};
    VirtualQTimeLine(int duration) : QTimeLine(duration){};
    VirtualQTimeLine(int duration, QObject* parent) : QTimeLine(duration, parent){};

    ~VirtualQTimeLine() {
        qtimeline_metacall_callback = nullptr;
        qtimeline_valuefortime_callback = nullptr;
        qtimeline_timerevent_callback = nullptr;
        qtimeline_event_callback = nullptr;
        qtimeline_eventfilter_callback = nullptr;
        qtimeline_childevent_callback = nullptr;
        qtimeline_customevent_callback = nullptr;
        qtimeline_connectnotify_callback = nullptr;
        qtimeline_disconnectnotify_callback = nullptr;
        qtimeline_sender_callback = nullptr;
        qtimeline_sendersignalindex_callback = nullptr;
        qtimeline_receivers_callback = nullptr;
        qtimeline_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTimeLine_Metacall_Callback(QTimeLine_Metacall_Callback cb) { qtimeline_metacall_callback = cb; }
    void setQTimeLine_ValueForTime_Callback(QTimeLine_ValueForTime_Callback cb) { qtimeline_valuefortime_callback = cb; }
    void setQTimeLine_TimerEvent_Callback(QTimeLine_TimerEvent_Callback cb) { qtimeline_timerevent_callback = cb; }
    void setQTimeLine_Event_Callback(QTimeLine_Event_Callback cb) { qtimeline_event_callback = cb; }
    void setQTimeLine_EventFilter_Callback(QTimeLine_EventFilter_Callback cb) { qtimeline_eventfilter_callback = cb; }
    void setQTimeLine_ChildEvent_Callback(QTimeLine_ChildEvent_Callback cb) { qtimeline_childevent_callback = cb; }
    void setQTimeLine_CustomEvent_Callback(QTimeLine_CustomEvent_Callback cb) { qtimeline_customevent_callback = cb; }
    void setQTimeLine_ConnectNotify_Callback(QTimeLine_ConnectNotify_Callback cb) { qtimeline_connectnotify_callback = cb; }
    void setQTimeLine_DisconnectNotify_Callback(QTimeLine_DisconnectNotify_Callback cb) { qtimeline_disconnectnotify_callback = cb; }
    void setQTimeLine_Sender_Callback(QTimeLine_Sender_Callback cb) { qtimeline_sender_callback = cb; }
    void setQTimeLine_SenderSignalIndex_Callback(QTimeLine_SenderSignalIndex_Callback cb) { qtimeline_sendersignalindex_callback = cb; }
    void setQTimeLine_Receivers_Callback(QTimeLine_Receivers_Callback cb) { qtimeline_receivers_callback = cb; }
    void setQTimeLine_IsSignalConnected_Callback(QTimeLine_IsSignalConnected_Callback cb) { qtimeline_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTimeLine_Metacall_IsBase(bool value) const { qtimeline_metacall_isbase = value; }
    void setQTimeLine_ValueForTime_IsBase(bool value) const { qtimeline_valuefortime_isbase = value; }
    void setQTimeLine_TimerEvent_IsBase(bool value) const { qtimeline_timerevent_isbase = value; }
    void setQTimeLine_Event_IsBase(bool value) const { qtimeline_event_isbase = value; }
    void setQTimeLine_EventFilter_IsBase(bool value) const { qtimeline_eventfilter_isbase = value; }
    void setQTimeLine_ChildEvent_IsBase(bool value) const { qtimeline_childevent_isbase = value; }
    void setQTimeLine_CustomEvent_IsBase(bool value) const { qtimeline_customevent_isbase = value; }
    void setQTimeLine_ConnectNotify_IsBase(bool value) const { qtimeline_connectnotify_isbase = value; }
    void setQTimeLine_DisconnectNotify_IsBase(bool value) const { qtimeline_disconnectnotify_isbase = value; }
    void setQTimeLine_Sender_IsBase(bool value) const { qtimeline_sender_isbase = value; }
    void setQTimeLine_SenderSignalIndex_IsBase(bool value) const { qtimeline_sendersignalindex_isbase = value; }
    void setQTimeLine_Receivers_IsBase(bool value) const { qtimeline_receivers_isbase = value; }
    void setQTimeLine_IsSignalConnected_IsBase(bool value) const { qtimeline_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimeline_metacall_isbase) {
            qtimeline_metacall_isbase = false;
            return QTimeLine::qt_metacall(param1, param2, param3);
        } else if (qtimeline_metacall_callback != nullptr) {
            return qtimeline_metacall_callback(this, param1, param2, param3);
        } else {
            return QTimeLine::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qreal valueForTime(int msec) const override {
        if (qtimeline_valuefortime_isbase) {
            qtimeline_valuefortime_isbase = false;
            return QTimeLine::valueForTime(msec);
        } else if (qtimeline_valuefortime_callback != nullptr) {
            return qtimeline_valuefortime_callback(this, msec);
        } else {
            return QTimeLine::valueForTime(msec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtimeline_timerevent_isbase) {
            qtimeline_timerevent_isbase = false;
            QTimeLine::timerEvent(event);
        } else if (qtimeline_timerevent_callback != nullptr) {
            qtimeline_timerevent_callback(this, event);
        } else {
            QTimeLine::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimeline_event_isbase) {
            qtimeline_event_isbase = false;
            return QTimeLine::event(event);
        } else if (qtimeline_event_callback != nullptr) {
            return qtimeline_event_callback(this, event);
        } else {
            return QTimeLine::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimeline_eventfilter_isbase) {
            qtimeline_eventfilter_isbase = false;
            return QTimeLine::eventFilter(watched, event);
        } else if (qtimeline_eventfilter_callback != nullptr) {
            return qtimeline_eventfilter_callback(this, watched, event);
        } else {
            return QTimeLine::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimeline_childevent_isbase) {
            qtimeline_childevent_isbase = false;
            QTimeLine::childEvent(event);
        } else if (qtimeline_childevent_callback != nullptr) {
            qtimeline_childevent_callback(this, event);
        } else {
            QTimeLine::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimeline_customevent_isbase) {
            qtimeline_customevent_isbase = false;
            QTimeLine::customEvent(event);
        } else if (qtimeline_customevent_callback != nullptr) {
            qtimeline_customevent_callback(this, event);
        } else {
            QTimeLine::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimeline_connectnotify_isbase) {
            qtimeline_connectnotify_isbase = false;
            QTimeLine::connectNotify(signal);
        } else if (qtimeline_connectnotify_callback != nullptr) {
            qtimeline_connectnotify_callback(this, signal);
        } else {
            QTimeLine::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimeline_disconnectnotify_isbase) {
            qtimeline_disconnectnotify_isbase = false;
            QTimeLine::disconnectNotify(signal);
        } else if (qtimeline_disconnectnotify_callback != nullptr) {
            qtimeline_disconnectnotify_callback(this, signal);
        } else {
            QTimeLine::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtimeline_sender_isbase) {
            qtimeline_sender_isbase = false;
            return QTimeLine::sender();
        } else if (qtimeline_sender_callback != nullptr) {
            return qtimeline_sender_callback();
        } else {
            return QTimeLine::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtimeline_sendersignalindex_isbase) {
            qtimeline_sendersignalindex_isbase = false;
            return QTimeLine::senderSignalIndex();
        } else if (qtimeline_sendersignalindex_callback != nullptr) {
            return qtimeline_sendersignalindex_callback();
        } else {
            return QTimeLine::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtimeline_receivers_isbase) {
            qtimeline_receivers_isbase = false;
            return QTimeLine::receivers(signal);
        } else if (qtimeline_receivers_callback != nullptr) {
            return qtimeline_receivers_callback(this, signal);
        } else {
            return QTimeLine::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtimeline_issignalconnected_isbase) {
            qtimeline_issignalconnected_isbase = false;
            return QTimeLine::isSignalConnected(signal);
        } else if (qtimeline_issignalconnected_callback != nullptr) {
            return qtimeline_issignalconnected_callback(this, signal);
        } else {
            return QTimeLine::isSignalConnected(signal);
        }
    }
};

#endif

#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQMEDIARECORDER_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQMEDIARECORDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QMediaRecorder so that we can call protected methods
class VirtualQMediaRecorder : public QMediaRecorder {

  public:
    // Virtual class public types (including callbacks)
    using QMediaRecorder_Metacall_Callback = int (*)(QMediaRecorder*, QMetaObject::Call, int, void**);
    using QMediaRecorder_Event_Callback = bool (*)(QMediaRecorder*, QEvent*);
    using QMediaRecorder_EventFilter_Callback = bool (*)(QMediaRecorder*, QObject*, QEvent*);
    using QMediaRecorder_TimerEvent_Callback = void (*)(QMediaRecorder*, QTimerEvent*);
    using QMediaRecorder_ChildEvent_Callback = void (*)(QMediaRecorder*, QChildEvent*);
    using QMediaRecorder_CustomEvent_Callback = void (*)(QMediaRecorder*, QEvent*);
    using QMediaRecorder_ConnectNotify_Callback = void (*)(QMediaRecorder*, const QMetaMethod&);
    using QMediaRecorder_DisconnectNotify_Callback = void (*)(QMediaRecorder*, const QMetaMethod&);
    using QMediaRecorder_Sender_Callback = QObject* (*)();
    using QMediaRecorder_SenderSignalIndex_Callback = int (*)();
    using QMediaRecorder_Receivers_Callback = int (*)(const QMediaRecorder*, const char*);
    using QMediaRecorder_IsSignalConnected_Callback = bool (*)(const QMediaRecorder*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QMediaRecorder_Metacall_Callback qmediarecorder_metacall_callback = nullptr;
    QMediaRecorder_Event_Callback qmediarecorder_event_callback = nullptr;
    QMediaRecorder_EventFilter_Callback qmediarecorder_eventfilter_callback = nullptr;
    QMediaRecorder_TimerEvent_Callback qmediarecorder_timerevent_callback = nullptr;
    QMediaRecorder_ChildEvent_Callback qmediarecorder_childevent_callback = nullptr;
    QMediaRecorder_CustomEvent_Callback qmediarecorder_customevent_callback = nullptr;
    QMediaRecorder_ConnectNotify_Callback qmediarecorder_connectnotify_callback = nullptr;
    QMediaRecorder_DisconnectNotify_Callback qmediarecorder_disconnectnotify_callback = nullptr;
    QMediaRecorder_Sender_Callback qmediarecorder_sender_callback = nullptr;
    QMediaRecorder_SenderSignalIndex_Callback qmediarecorder_sendersignalindex_callback = nullptr;
    QMediaRecorder_Receivers_Callback qmediarecorder_receivers_callback = nullptr;
    QMediaRecorder_IsSignalConnected_Callback qmediarecorder_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmediarecorder_metacall_isbase = false;
    mutable bool qmediarecorder_event_isbase = false;
    mutable bool qmediarecorder_eventfilter_isbase = false;
    mutable bool qmediarecorder_timerevent_isbase = false;
    mutable bool qmediarecorder_childevent_isbase = false;
    mutable bool qmediarecorder_customevent_isbase = false;
    mutable bool qmediarecorder_connectnotify_isbase = false;
    mutable bool qmediarecorder_disconnectnotify_isbase = false;
    mutable bool qmediarecorder_sender_isbase = false;
    mutable bool qmediarecorder_sendersignalindex_isbase = false;
    mutable bool qmediarecorder_receivers_isbase = false;
    mutable bool qmediarecorder_issignalconnected_isbase = false;

  public:
    VirtualQMediaRecorder() : QMediaRecorder(){};
    VirtualQMediaRecorder(QObject* parent) : QMediaRecorder(parent){};

    ~VirtualQMediaRecorder() {
        qmediarecorder_metacall_callback = nullptr;
        qmediarecorder_event_callback = nullptr;
        qmediarecorder_eventfilter_callback = nullptr;
        qmediarecorder_timerevent_callback = nullptr;
        qmediarecorder_childevent_callback = nullptr;
        qmediarecorder_customevent_callback = nullptr;
        qmediarecorder_connectnotify_callback = nullptr;
        qmediarecorder_disconnectnotify_callback = nullptr;
        qmediarecorder_sender_callback = nullptr;
        qmediarecorder_sendersignalindex_callback = nullptr;
        qmediarecorder_receivers_callback = nullptr;
        qmediarecorder_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQMediaRecorder_Metacall_Callback(QMediaRecorder_Metacall_Callback cb) { qmediarecorder_metacall_callback = cb; }
    void setQMediaRecorder_Event_Callback(QMediaRecorder_Event_Callback cb) { qmediarecorder_event_callback = cb; }
    void setQMediaRecorder_EventFilter_Callback(QMediaRecorder_EventFilter_Callback cb) { qmediarecorder_eventfilter_callback = cb; }
    void setQMediaRecorder_TimerEvent_Callback(QMediaRecorder_TimerEvent_Callback cb) { qmediarecorder_timerevent_callback = cb; }
    void setQMediaRecorder_ChildEvent_Callback(QMediaRecorder_ChildEvent_Callback cb) { qmediarecorder_childevent_callback = cb; }
    void setQMediaRecorder_CustomEvent_Callback(QMediaRecorder_CustomEvent_Callback cb) { qmediarecorder_customevent_callback = cb; }
    void setQMediaRecorder_ConnectNotify_Callback(QMediaRecorder_ConnectNotify_Callback cb) { qmediarecorder_connectnotify_callback = cb; }
    void setQMediaRecorder_DisconnectNotify_Callback(QMediaRecorder_DisconnectNotify_Callback cb) { qmediarecorder_disconnectnotify_callback = cb; }
    void setQMediaRecorder_Sender_Callback(QMediaRecorder_Sender_Callback cb) { qmediarecorder_sender_callback = cb; }
    void setQMediaRecorder_SenderSignalIndex_Callback(QMediaRecorder_SenderSignalIndex_Callback cb) { qmediarecorder_sendersignalindex_callback = cb; }
    void setQMediaRecorder_Receivers_Callback(QMediaRecorder_Receivers_Callback cb) { qmediarecorder_receivers_callback = cb; }
    void setQMediaRecorder_IsSignalConnected_Callback(QMediaRecorder_IsSignalConnected_Callback cb) { qmediarecorder_issignalconnected_callback = cb; }

    // Base flag setters
    void setQMediaRecorder_Metacall_IsBase(bool value) const { qmediarecorder_metacall_isbase = value; }
    void setQMediaRecorder_Event_IsBase(bool value) const { qmediarecorder_event_isbase = value; }
    void setQMediaRecorder_EventFilter_IsBase(bool value) const { qmediarecorder_eventfilter_isbase = value; }
    void setQMediaRecorder_TimerEvent_IsBase(bool value) const { qmediarecorder_timerevent_isbase = value; }
    void setQMediaRecorder_ChildEvent_IsBase(bool value) const { qmediarecorder_childevent_isbase = value; }
    void setQMediaRecorder_CustomEvent_IsBase(bool value) const { qmediarecorder_customevent_isbase = value; }
    void setQMediaRecorder_ConnectNotify_IsBase(bool value) const { qmediarecorder_connectnotify_isbase = value; }
    void setQMediaRecorder_DisconnectNotify_IsBase(bool value) const { qmediarecorder_disconnectnotify_isbase = value; }
    void setQMediaRecorder_Sender_IsBase(bool value) const { qmediarecorder_sender_isbase = value; }
    void setQMediaRecorder_SenderSignalIndex_IsBase(bool value) const { qmediarecorder_sendersignalindex_isbase = value; }
    void setQMediaRecorder_Receivers_IsBase(bool value) const { qmediarecorder_receivers_isbase = value; }
    void setQMediaRecorder_IsSignalConnected_IsBase(bool value) const { qmediarecorder_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmediarecorder_metacall_isbase) {
            qmediarecorder_metacall_isbase = false;
            return QMediaRecorder::qt_metacall(param1, param2, param3);
        } else if (qmediarecorder_metacall_callback != nullptr) {
            return qmediarecorder_metacall_callback(this, param1, param2, param3);
        } else {
            return QMediaRecorder::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmediarecorder_event_isbase) {
            qmediarecorder_event_isbase = false;
            return QMediaRecorder::event(event);
        } else if (qmediarecorder_event_callback != nullptr) {
            return qmediarecorder_event_callback(this, event);
        } else {
            return QMediaRecorder::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmediarecorder_eventfilter_isbase) {
            qmediarecorder_eventfilter_isbase = false;
            return QMediaRecorder::eventFilter(watched, event);
        } else if (qmediarecorder_eventfilter_callback != nullptr) {
            return qmediarecorder_eventfilter_callback(this, watched, event);
        } else {
            return QMediaRecorder::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmediarecorder_timerevent_isbase) {
            qmediarecorder_timerevent_isbase = false;
            QMediaRecorder::timerEvent(event);
        } else if (qmediarecorder_timerevent_callback != nullptr) {
            qmediarecorder_timerevent_callback(this, event);
        } else {
            QMediaRecorder::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmediarecorder_childevent_isbase) {
            qmediarecorder_childevent_isbase = false;
            QMediaRecorder::childEvent(event);
        } else if (qmediarecorder_childevent_callback != nullptr) {
            qmediarecorder_childevent_callback(this, event);
        } else {
            QMediaRecorder::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmediarecorder_customevent_isbase) {
            qmediarecorder_customevent_isbase = false;
            QMediaRecorder::customEvent(event);
        } else if (qmediarecorder_customevent_callback != nullptr) {
            qmediarecorder_customevent_callback(this, event);
        } else {
            QMediaRecorder::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmediarecorder_connectnotify_isbase) {
            qmediarecorder_connectnotify_isbase = false;
            QMediaRecorder::connectNotify(signal);
        } else if (qmediarecorder_connectnotify_callback != nullptr) {
            qmediarecorder_connectnotify_callback(this, signal);
        } else {
            QMediaRecorder::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmediarecorder_disconnectnotify_isbase) {
            qmediarecorder_disconnectnotify_isbase = false;
            QMediaRecorder::disconnectNotify(signal);
        } else if (qmediarecorder_disconnectnotify_callback != nullptr) {
            qmediarecorder_disconnectnotify_callback(this, signal);
        } else {
            QMediaRecorder::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmediarecorder_sender_isbase) {
            qmediarecorder_sender_isbase = false;
            return QMediaRecorder::sender();
        } else if (qmediarecorder_sender_callback != nullptr) {
            return qmediarecorder_sender_callback();
        } else {
            return QMediaRecorder::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmediarecorder_sendersignalindex_isbase) {
            qmediarecorder_sendersignalindex_isbase = false;
            return QMediaRecorder::senderSignalIndex();
        } else if (qmediarecorder_sendersignalindex_callback != nullptr) {
            return qmediarecorder_sendersignalindex_callback();
        } else {
            return QMediaRecorder::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmediarecorder_receivers_isbase) {
            qmediarecorder_receivers_isbase = false;
            return QMediaRecorder::receivers(signal);
        } else if (qmediarecorder_receivers_callback != nullptr) {
            return qmediarecorder_receivers_callback(this, signal);
        } else {
            return QMediaRecorder::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmediarecorder_issignalconnected_isbase) {
            qmediarecorder_issignalconnected_isbase = false;
            return QMediaRecorder::isSignalConnected(signal);
        } else if (qmediarecorder_issignalconnected_callback != nullptr) {
            return qmediarecorder_issignalconnected_callback(this, signal);
        } else {
            return QMediaRecorder::isSignalConnected(signal);
        }
    }
};

#endif

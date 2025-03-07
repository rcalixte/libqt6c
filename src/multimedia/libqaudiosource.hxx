#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOSOURCE_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOSOURCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioSource so that we can call protected methods
class VirtualQAudioSource : public QAudioSource {

  public:
    // Virtual class public types (including callbacks)
    using QAudioSource_Metacall_Callback = int (*)(QAudioSource*, QMetaObject::Call, int, void**);
    using QAudioSource_Event_Callback = bool (*)(QAudioSource*, QEvent*);
    using QAudioSource_EventFilter_Callback = bool (*)(QAudioSource*, QObject*, QEvent*);
    using QAudioSource_TimerEvent_Callback = void (*)(QAudioSource*, QTimerEvent*);
    using QAudioSource_ChildEvent_Callback = void (*)(QAudioSource*, QChildEvent*);
    using QAudioSource_CustomEvent_Callback = void (*)(QAudioSource*, QEvent*);
    using QAudioSource_ConnectNotify_Callback = void (*)(QAudioSource*, const QMetaMethod&);
    using QAudioSource_DisconnectNotify_Callback = void (*)(QAudioSource*, const QMetaMethod&);
    using QAudioSource_Sender_Callback = QObject* (*)();
    using QAudioSource_SenderSignalIndex_Callback = int (*)();
    using QAudioSource_Receivers_Callback = int (*)(const QAudioSource*, const char*);
    using QAudioSource_IsSignalConnected_Callback = bool (*)(const QAudioSource*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAudioSource_Metacall_Callback qaudiosource_metacall_callback = nullptr;
    QAudioSource_Event_Callback qaudiosource_event_callback = nullptr;
    QAudioSource_EventFilter_Callback qaudiosource_eventfilter_callback = nullptr;
    QAudioSource_TimerEvent_Callback qaudiosource_timerevent_callback = nullptr;
    QAudioSource_ChildEvent_Callback qaudiosource_childevent_callback = nullptr;
    QAudioSource_CustomEvent_Callback qaudiosource_customevent_callback = nullptr;
    QAudioSource_ConnectNotify_Callback qaudiosource_connectnotify_callback = nullptr;
    QAudioSource_DisconnectNotify_Callback qaudiosource_disconnectnotify_callback = nullptr;
    QAudioSource_Sender_Callback qaudiosource_sender_callback = nullptr;
    QAudioSource_SenderSignalIndex_Callback qaudiosource_sendersignalindex_callback = nullptr;
    QAudioSource_Receivers_Callback qaudiosource_receivers_callback = nullptr;
    QAudioSource_IsSignalConnected_Callback qaudiosource_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiosource_metacall_isbase = false;
    mutable bool qaudiosource_event_isbase = false;
    mutable bool qaudiosource_eventfilter_isbase = false;
    mutable bool qaudiosource_timerevent_isbase = false;
    mutable bool qaudiosource_childevent_isbase = false;
    mutable bool qaudiosource_customevent_isbase = false;
    mutable bool qaudiosource_connectnotify_isbase = false;
    mutable bool qaudiosource_disconnectnotify_isbase = false;
    mutable bool qaudiosource_sender_isbase = false;
    mutable bool qaudiosource_sendersignalindex_isbase = false;
    mutable bool qaudiosource_receivers_isbase = false;
    mutable bool qaudiosource_issignalconnected_isbase = false;

  public:
    VirtualQAudioSource() : QAudioSource(){};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo) : QAudioSource(audioDeviceInfo){};
    VirtualQAudioSource(const QAudioFormat& format) : QAudioSource(format){};
    VirtualQAudioSource(const QAudioFormat& format, QObject* parent) : QAudioSource(format, parent){};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format) : QAudioSource(audioDeviceInfo, format){};
    VirtualQAudioSource(const QAudioDevice& audioDeviceInfo, const QAudioFormat& format, QObject* parent) : QAudioSource(audioDeviceInfo, format, parent){};

    ~VirtualQAudioSource() {
        qaudiosource_metacall_callback = nullptr;
        qaudiosource_event_callback = nullptr;
        qaudiosource_eventfilter_callback = nullptr;
        qaudiosource_timerevent_callback = nullptr;
        qaudiosource_childevent_callback = nullptr;
        qaudiosource_customevent_callback = nullptr;
        qaudiosource_connectnotify_callback = nullptr;
        qaudiosource_disconnectnotify_callback = nullptr;
        qaudiosource_sender_callback = nullptr;
        qaudiosource_sendersignalindex_callback = nullptr;
        qaudiosource_receivers_callback = nullptr;
        qaudiosource_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAudioSource_Metacall_Callback(QAudioSource_Metacall_Callback cb) { qaudiosource_metacall_callback = cb; }
    void setQAudioSource_Event_Callback(QAudioSource_Event_Callback cb) { qaudiosource_event_callback = cb; }
    void setQAudioSource_EventFilter_Callback(QAudioSource_EventFilter_Callback cb) { qaudiosource_eventfilter_callback = cb; }
    void setQAudioSource_TimerEvent_Callback(QAudioSource_TimerEvent_Callback cb) { qaudiosource_timerevent_callback = cb; }
    void setQAudioSource_ChildEvent_Callback(QAudioSource_ChildEvent_Callback cb) { qaudiosource_childevent_callback = cb; }
    void setQAudioSource_CustomEvent_Callback(QAudioSource_CustomEvent_Callback cb) { qaudiosource_customevent_callback = cb; }
    void setQAudioSource_ConnectNotify_Callback(QAudioSource_ConnectNotify_Callback cb) { qaudiosource_connectnotify_callback = cb; }
    void setQAudioSource_DisconnectNotify_Callback(QAudioSource_DisconnectNotify_Callback cb) { qaudiosource_disconnectnotify_callback = cb; }
    void setQAudioSource_Sender_Callback(QAudioSource_Sender_Callback cb) { qaudiosource_sender_callback = cb; }
    void setQAudioSource_SenderSignalIndex_Callback(QAudioSource_SenderSignalIndex_Callback cb) { qaudiosource_sendersignalindex_callback = cb; }
    void setQAudioSource_Receivers_Callback(QAudioSource_Receivers_Callback cb) { qaudiosource_receivers_callback = cb; }
    void setQAudioSource_IsSignalConnected_Callback(QAudioSource_IsSignalConnected_Callback cb) { qaudiosource_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAudioSource_Metacall_IsBase(bool value) const { qaudiosource_metacall_isbase = value; }
    void setQAudioSource_Event_IsBase(bool value) const { qaudiosource_event_isbase = value; }
    void setQAudioSource_EventFilter_IsBase(bool value) const { qaudiosource_eventfilter_isbase = value; }
    void setQAudioSource_TimerEvent_IsBase(bool value) const { qaudiosource_timerevent_isbase = value; }
    void setQAudioSource_ChildEvent_IsBase(bool value) const { qaudiosource_childevent_isbase = value; }
    void setQAudioSource_CustomEvent_IsBase(bool value) const { qaudiosource_customevent_isbase = value; }
    void setQAudioSource_ConnectNotify_IsBase(bool value) const { qaudiosource_connectnotify_isbase = value; }
    void setQAudioSource_DisconnectNotify_IsBase(bool value) const { qaudiosource_disconnectnotify_isbase = value; }
    void setQAudioSource_Sender_IsBase(bool value) const { qaudiosource_sender_isbase = value; }
    void setQAudioSource_SenderSignalIndex_IsBase(bool value) const { qaudiosource_sendersignalindex_isbase = value; }
    void setQAudioSource_Receivers_IsBase(bool value) const { qaudiosource_receivers_isbase = value; }
    void setQAudioSource_IsSignalConnected_IsBase(bool value) const { qaudiosource_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiosource_metacall_isbase) {
            qaudiosource_metacall_isbase = false;
            return QAudioSource::qt_metacall(param1, param2, param3);
        } else if (qaudiosource_metacall_callback != nullptr) {
            return qaudiosource_metacall_callback(this, param1, param2, param3);
        } else {
            return QAudioSource::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiosource_event_isbase) {
            qaudiosource_event_isbase = false;
            return QAudioSource::event(event);
        } else if (qaudiosource_event_callback != nullptr) {
            return qaudiosource_event_callback(this, event);
        } else {
            return QAudioSource::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiosource_eventfilter_isbase) {
            qaudiosource_eventfilter_isbase = false;
            return QAudioSource::eventFilter(watched, event);
        } else if (qaudiosource_eventfilter_callback != nullptr) {
            return qaudiosource_eventfilter_callback(this, watched, event);
        } else {
            return QAudioSource::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiosource_timerevent_isbase) {
            qaudiosource_timerevent_isbase = false;
            QAudioSource::timerEvent(event);
        } else if (qaudiosource_timerevent_callback != nullptr) {
            qaudiosource_timerevent_callback(this, event);
        } else {
            QAudioSource::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiosource_childevent_isbase) {
            qaudiosource_childevent_isbase = false;
            QAudioSource::childEvent(event);
        } else if (qaudiosource_childevent_callback != nullptr) {
            qaudiosource_childevent_callback(this, event);
        } else {
            QAudioSource::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiosource_customevent_isbase) {
            qaudiosource_customevent_isbase = false;
            QAudioSource::customEvent(event);
        } else if (qaudiosource_customevent_callback != nullptr) {
            qaudiosource_customevent_callback(this, event);
        } else {
            QAudioSource::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiosource_connectnotify_isbase) {
            qaudiosource_connectnotify_isbase = false;
            QAudioSource::connectNotify(signal);
        } else if (qaudiosource_connectnotify_callback != nullptr) {
            qaudiosource_connectnotify_callback(this, signal);
        } else {
            QAudioSource::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiosource_disconnectnotify_isbase) {
            qaudiosource_disconnectnotify_isbase = false;
            QAudioSource::disconnectNotify(signal);
        } else if (qaudiosource_disconnectnotify_callback != nullptr) {
            qaudiosource_disconnectnotify_callback(this, signal);
        } else {
            QAudioSource::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiosource_sender_isbase) {
            qaudiosource_sender_isbase = false;
            return QAudioSource::sender();
        } else if (qaudiosource_sender_callback != nullptr) {
            return qaudiosource_sender_callback();
        } else {
            return QAudioSource::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiosource_sendersignalindex_isbase) {
            qaudiosource_sendersignalindex_isbase = false;
            return QAudioSource::senderSignalIndex();
        } else if (qaudiosource_sendersignalindex_callback != nullptr) {
            return qaudiosource_sendersignalindex_callback();
        } else {
            return QAudioSource::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiosource_receivers_isbase) {
            qaudiosource_receivers_isbase = false;
            return QAudioSource::receivers(signal);
        } else if (qaudiosource_receivers_callback != nullptr) {
            return qaudiosource_receivers_callback(this, signal);
        } else {
            return QAudioSource::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiosource_issignalconnected_isbase) {
            qaudiosource_issignalconnected_isbase = false;
            return QAudioSource::isSignalConnected(signal);
        } else if (qaudiosource_issignalconnected_callback != nullptr) {
            return qaudiosource_issignalconnected_callback(this, signal);
        } else {
            return QAudioSource::isSignalConnected(signal);
        }
    }
};

#endif

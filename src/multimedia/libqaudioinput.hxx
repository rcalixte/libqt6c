#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOINPUT_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOINPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioInput so that we can call protected methods
class VirtualQAudioInput : public QAudioInput {

  public:
    // Virtual class public types (including callbacks)
    using QAudioInput_Metacall_Callback = int (*)(QAudioInput*, QMetaObject::Call, int, void**);
    using QAudioInput_Event_Callback = bool (*)(QAudioInput*, QEvent*);
    using QAudioInput_EventFilter_Callback = bool (*)(QAudioInput*, QObject*, QEvent*);
    using QAudioInput_TimerEvent_Callback = void (*)(QAudioInput*, QTimerEvent*);
    using QAudioInput_ChildEvent_Callback = void (*)(QAudioInput*, QChildEvent*);
    using QAudioInput_CustomEvent_Callback = void (*)(QAudioInput*, QEvent*);
    using QAudioInput_ConnectNotify_Callback = void (*)(QAudioInput*, const QMetaMethod&);
    using QAudioInput_DisconnectNotify_Callback = void (*)(QAudioInput*, const QMetaMethod&);
    using QAudioInput_Sender_Callback = QObject* (*)();
    using QAudioInput_SenderSignalIndex_Callback = int (*)();
    using QAudioInput_Receivers_Callback = int (*)(const QAudioInput*, const char*);
    using QAudioInput_IsSignalConnected_Callback = bool (*)(const QAudioInput*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAudioInput_Metacall_Callback qaudioinput_metacall_callback = nullptr;
    QAudioInput_Event_Callback qaudioinput_event_callback = nullptr;
    QAudioInput_EventFilter_Callback qaudioinput_eventfilter_callback = nullptr;
    QAudioInput_TimerEvent_Callback qaudioinput_timerevent_callback = nullptr;
    QAudioInput_ChildEvent_Callback qaudioinput_childevent_callback = nullptr;
    QAudioInput_CustomEvent_Callback qaudioinput_customevent_callback = nullptr;
    QAudioInput_ConnectNotify_Callback qaudioinput_connectnotify_callback = nullptr;
    QAudioInput_DisconnectNotify_Callback qaudioinput_disconnectnotify_callback = nullptr;
    QAudioInput_Sender_Callback qaudioinput_sender_callback = nullptr;
    QAudioInput_SenderSignalIndex_Callback qaudioinput_sendersignalindex_callback = nullptr;
    QAudioInput_Receivers_Callback qaudioinput_receivers_callback = nullptr;
    QAudioInput_IsSignalConnected_Callback qaudioinput_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudioinput_metacall_isbase = false;
    mutable bool qaudioinput_event_isbase = false;
    mutable bool qaudioinput_eventfilter_isbase = false;
    mutable bool qaudioinput_timerevent_isbase = false;
    mutable bool qaudioinput_childevent_isbase = false;
    mutable bool qaudioinput_customevent_isbase = false;
    mutable bool qaudioinput_connectnotify_isbase = false;
    mutable bool qaudioinput_disconnectnotify_isbase = false;
    mutable bool qaudioinput_sender_isbase = false;
    mutable bool qaudioinput_sendersignalindex_isbase = false;
    mutable bool qaudioinput_receivers_isbase = false;
    mutable bool qaudioinput_issignalconnected_isbase = false;

  public:
    VirtualQAudioInput() : QAudioInput(){};
    VirtualQAudioInput(const QAudioDevice& deviceInfo) : QAudioInput(deviceInfo){};
    VirtualQAudioInput(QObject* parent) : QAudioInput(parent){};
    VirtualQAudioInput(const QAudioDevice& deviceInfo, QObject* parent) : QAudioInput(deviceInfo, parent){};

    ~VirtualQAudioInput() {
        qaudioinput_metacall_callback = nullptr;
        qaudioinput_event_callback = nullptr;
        qaudioinput_eventfilter_callback = nullptr;
        qaudioinput_timerevent_callback = nullptr;
        qaudioinput_childevent_callback = nullptr;
        qaudioinput_customevent_callback = nullptr;
        qaudioinput_connectnotify_callback = nullptr;
        qaudioinput_disconnectnotify_callback = nullptr;
        qaudioinput_sender_callback = nullptr;
        qaudioinput_sendersignalindex_callback = nullptr;
        qaudioinput_receivers_callback = nullptr;
        qaudioinput_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAudioInput_Metacall_Callback(QAudioInput_Metacall_Callback cb) { qaudioinput_metacall_callback = cb; }
    void setQAudioInput_Event_Callback(QAudioInput_Event_Callback cb) { qaudioinput_event_callback = cb; }
    void setQAudioInput_EventFilter_Callback(QAudioInput_EventFilter_Callback cb) { qaudioinput_eventfilter_callback = cb; }
    void setQAudioInput_TimerEvent_Callback(QAudioInput_TimerEvent_Callback cb) { qaudioinput_timerevent_callback = cb; }
    void setQAudioInput_ChildEvent_Callback(QAudioInput_ChildEvent_Callback cb) { qaudioinput_childevent_callback = cb; }
    void setQAudioInput_CustomEvent_Callback(QAudioInput_CustomEvent_Callback cb) { qaudioinput_customevent_callback = cb; }
    void setQAudioInput_ConnectNotify_Callback(QAudioInput_ConnectNotify_Callback cb) { qaudioinput_connectnotify_callback = cb; }
    void setQAudioInput_DisconnectNotify_Callback(QAudioInput_DisconnectNotify_Callback cb) { qaudioinput_disconnectnotify_callback = cb; }
    void setQAudioInput_Sender_Callback(QAudioInput_Sender_Callback cb) { qaudioinput_sender_callback = cb; }
    void setQAudioInput_SenderSignalIndex_Callback(QAudioInput_SenderSignalIndex_Callback cb) { qaudioinput_sendersignalindex_callback = cb; }
    void setQAudioInput_Receivers_Callback(QAudioInput_Receivers_Callback cb) { qaudioinput_receivers_callback = cb; }
    void setQAudioInput_IsSignalConnected_Callback(QAudioInput_IsSignalConnected_Callback cb) { qaudioinput_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAudioInput_Metacall_IsBase(bool value) const { qaudioinput_metacall_isbase = value; }
    void setQAudioInput_Event_IsBase(bool value) const { qaudioinput_event_isbase = value; }
    void setQAudioInput_EventFilter_IsBase(bool value) const { qaudioinput_eventfilter_isbase = value; }
    void setQAudioInput_TimerEvent_IsBase(bool value) const { qaudioinput_timerevent_isbase = value; }
    void setQAudioInput_ChildEvent_IsBase(bool value) const { qaudioinput_childevent_isbase = value; }
    void setQAudioInput_CustomEvent_IsBase(bool value) const { qaudioinput_customevent_isbase = value; }
    void setQAudioInput_ConnectNotify_IsBase(bool value) const { qaudioinput_connectnotify_isbase = value; }
    void setQAudioInput_DisconnectNotify_IsBase(bool value) const { qaudioinput_disconnectnotify_isbase = value; }
    void setQAudioInput_Sender_IsBase(bool value) const { qaudioinput_sender_isbase = value; }
    void setQAudioInput_SenderSignalIndex_IsBase(bool value) const { qaudioinput_sendersignalindex_isbase = value; }
    void setQAudioInput_Receivers_IsBase(bool value) const { qaudioinput_receivers_isbase = value; }
    void setQAudioInput_IsSignalConnected_IsBase(bool value) const { qaudioinput_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudioinput_metacall_isbase) {
            qaudioinput_metacall_isbase = false;
            return QAudioInput::qt_metacall(param1, param2, param3);
        } else if (qaudioinput_metacall_callback != nullptr) {
            return qaudioinput_metacall_callback(this, param1, param2, param3);
        } else {
            return QAudioInput::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudioinput_event_isbase) {
            qaudioinput_event_isbase = false;
            return QAudioInput::event(event);
        } else if (qaudioinput_event_callback != nullptr) {
            return qaudioinput_event_callback(this, event);
        } else {
            return QAudioInput::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudioinput_eventfilter_isbase) {
            qaudioinput_eventfilter_isbase = false;
            return QAudioInput::eventFilter(watched, event);
        } else if (qaudioinput_eventfilter_callback != nullptr) {
            return qaudioinput_eventfilter_callback(this, watched, event);
        } else {
            return QAudioInput::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudioinput_timerevent_isbase) {
            qaudioinput_timerevent_isbase = false;
            QAudioInput::timerEvent(event);
        } else if (qaudioinput_timerevent_callback != nullptr) {
            qaudioinput_timerevent_callback(this, event);
        } else {
            QAudioInput::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudioinput_childevent_isbase) {
            qaudioinput_childevent_isbase = false;
            QAudioInput::childEvent(event);
        } else if (qaudioinput_childevent_callback != nullptr) {
            qaudioinput_childevent_callback(this, event);
        } else {
            QAudioInput::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudioinput_customevent_isbase) {
            qaudioinput_customevent_isbase = false;
            QAudioInput::customEvent(event);
        } else if (qaudioinput_customevent_callback != nullptr) {
            qaudioinput_customevent_callback(this, event);
        } else {
            QAudioInput::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudioinput_connectnotify_isbase) {
            qaudioinput_connectnotify_isbase = false;
            QAudioInput::connectNotify(signal);
        } else if (qaudioinput_connectnotify_callback != nullptr) {
            qaudioinput_connectnotify_callback(this, signal);
        } else {
            QAudioInput::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudioinput_disconnectnotify_isbase) {
            qaudioinput_disconnectnotify_isbase = false;
            QAudioInput::disconnectNotify(signal);
        } else if (qaudioinput_disconnectnotify_callback != nullptr) {
            qaudioinput_disconnectnotify_callback(this, signal);
        } else {
            QAudioInput::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudioinput_sender_isbase) {
            qaudioinput_sender_isbase = false;
            return QAudioInput::sender();
        } else if (qaudioinput_sender_callback != nullptr) {
            return qaudioinput_sender_callback();
        } else {
            return QAudioInput::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudioinput_sendersignalindex_isbase) {
            qaudioinput_sendersignalindex_isbase = false;
            return QAudioInput::senderSignalIndex();
        } else if (qaudioinput_sendersignalindex_callback != nullptr) {
            return qaudioinput_sendersignalindex_callback();
        } else {
            return QAudioInput::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudioinput_receivers_isbase) {
            qaudioinput_receivers_isbase = false;
            return QAudioInput::receivers(signal);
        } else if (qaudioinput_receivers_callback != nullptr) {
            return qaudioinput_receivers_callback(this, signal);
        } else {
            return QAudioInput::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudioinput_issignalconnected_isbase) {
            qaudioinput_issignalconnected_isbase = false;
            return QAudioInput::isSignalConnected(signal);
        } else if (qaudioinput_issignalconnected_callback != nullptr) {
            return qaudioinput_issignalconnected_callback(this, signal);
        } else {
            return QAudioInput::isSignalConnected(signal);
        }
    }
};

#endif

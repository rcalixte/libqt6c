#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOOUTPUT_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQAUDIOOUTPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAudioOutput so that we can call protected methods
class VirtualQAudioOutput : public QAudioOutput {

  public:
    // Virtual class public types (including callbacks)
    using QAudioOutput_Metacall_Callback = int (*)(QAudioOutput*, QMetaObject::Call, int, void**);
    using QAudioOutput_Event_Callback = bool (*)(QAudioOutput*, QEvent*);
    using QAudioOutput_EventFilter_Callback = bool (*)(QAudioOutput*, QObject*, QEvent*);
    using QAudioOutput_TimerEvent_Callback = void (*)(QAudioOutput*, QTimerEvent*);
    using QAudioOutput_ChildEvent_Callback = void (*)(QAudioOutput*, QChildEvent*);
    using QAudioOutput_CustomEvent_Callback = void (*)(QAudioOutput*, QEvent*);
    using QAudioOutput_ConnectNotify_Callback = void (*)(QAudioOutput*, const QMetaMethod&);
    using QAudioOutput_DisconnectNotify_Callback = void (*)(QAudioOutput*, const QMetaMethod&);
    using QAudioOutput_Sender_Callback = QObject* (*)();
    using QAudioOutput_SenderSignalIndex_Callback = int (*)();
    using QAudioOutput_Receivers_Callback = int (*)(const QAudioOutput*, const char*);
    using QAudioOutput_IsSignalConnected_Callback = bool (*)(const QAudioOutput*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAudioOutput_Metacall_Callback qaudiooutput_metacall_callback = nullptr;
    QAudioOutput_Event_Callback qaudiooutput_event_callback = nullptr;
    QAudioOutput_EventFilter_Callback qaudiooutput_eventfilter_callback = nullptr;
    QAudioOutput_TimerEvent_Callback qaudiooutput_timerevent_callback = nullptr;
    QAudioOutput_ChildEvent_Callback qaudiooutput_childevent_callback = nullptr;
    QAudioOutput_CustomEvent_Callback qaudiooutput_customevent_callback = nullptr;
    QAudioOutput_ConnectNotify_Callback qaudiooutput_connectnotify_callback = nullptr;
    QAudioOutput_DisconnectNotify_Callback qaudiooutput_disconnectnotify_callback = nullptr;
    QAudioOutput_Sender_Callback qaudiooutput_sender_callback = nullptr;
    QAudioOutput_SenderSignalIndex_Callback qaudiooutput_sendersignalindex_callback = nullptr;
    QAudioOutput_Receivers_Callback qaudiooutput_receivers_callback = nullptr;
    QAudioOutput_IsSignalConnected_Callback qaudiooutput_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaudiooutput_metacall_isbase = false;
    mutable bool qaudiooutput_event_isbase = false;
    mutable bool qaudiooutput_eventfilter_isbase = false;
    mutable bool qaudiooutput_timerevent_isbase = false;
    mutable bool qaudiooutput_childevent_isbase = false;
    mutable bool qaudiooutput_customevent_isbase = false;
    mutable bool qaudiooutput_connectnotify_isbase = false;
    mutable bool qaudiooutput_disconnectnotify_isbase = false;
    mutable bool qaudiooutput_sender_isbase = false;
    mutable bool qaudiooutput_sendersignalindex_isbase = false;
    mutable bool qaudiooutput_receivers_isbase = false;
    mutable bool qaudiooutput_issignalconnected_isbase = false;

  public:
    VirtualQAudioOutput() : QAudioOutput(){};
    VirtualQAudioOutput(const QAudioDevice& device) : QAudioOutput(device){};
    VirtualQAudioOutput(QObject* parent) : QAudioOutput(parent){};
    VirtualQAudioOutput(const QAudioDevice& device, QObject* parent) : QAudioOutput(device, parent){};

    ~VirtualQAudioOutput() {
        qaudiooutput_metacall_callback = nullptr;
        qaudiooutput_event_callback = nullptr;
        qaudiooutput_eventfilter_callback = nullptr;
        qaudiooutput_timerevent_callback = nullptr;
        qaudiooutput_childevent_callback = nullptr;
        qaudiooutput_customevent_callback = nullptr;
        qaudiooutput_connectnotify_callback = nullptr;
        qaudiooutput_disconnectnotify_callback = nullptr;
        qaudiooutput_sender_callback = nullptr;
        qaudiooutput_sendersignalindex_callback = nullptr;
        qaudiooutput_receivers_callback = nullptr;
        qaudiooutput_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAudioOutput_Metacall_Callback(QAudioOutput_Metacall_Callback cb) { qaudiooutput_metacall_callback = cb; }
    void setQAudioOutput_Event_Callback(QAudioOutput_Event_Callback cb) { qaudiooutput_event_callback = cb; }
    void setQAudioOutput_EventFilter_Callback(QAudioOutput_EventFilter_Callback cb) { qaudiooutput_eventfilter_callback = cb; }
    void setQAudioOutput_TimerEvent_Callback(QAudioOutput_TimerEvent_Callback cb) { qaudiooutput_timerevent_callback = cb; }
    void setQAudioOutput_ChildEvent_Callback(QAudioOutput_ChildEvent_Callback cb) { qaudiooutput_childevent_callback = cb; }
    void setQAudioOutput_CustomEvent_Callback(QAudioOutput_CustomEvent_Callback cb) { qaudiooutput_customevent_callback = cb; }
    void setQAudioOutput_ConnectNotify_Callback(QAudioOutput_ConnectNotify_Callback cb) { qaudiooutput_connectnotify_callback = cb; }
    void setQAudioOutput_DisconnectNotify_Callback(QAudioOutput_DisconnectNotify_Callback cb) { qaudiooutput_disconnectnotify_callback = cb; }
    void setQAudioOutput_Sender_Callback(QAudioOutput_Sender_Callback cb) { qaudiooutput_sender_callback = cb; }
    void setQAudioOutput_SenderSignalIndex_Callback(QAudioOutput_SenderSignalIndex_Callback cb) { qaudiooutput_sendersignalindex_callback = cb; }
    void setQAudioOutput_Receivers_Callback(QAudioOutput_Receivers_Callback cb) { qaudiooutput_receivers_callback = cb; }
    void setQAudioOutput_IsSignalConnected_Callback(QAudioOutput_IsSignalConnected_Callback cb) { qaudiooutput_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAudioOutput_Metacall_IsBase(bool value) const { qaudiooutput_metacall_isbase = value; }
    void setQAudioOutput_Event_IsBase(bool value) const { qaudiooutput_event_isbase = value; }
    void setQAudioOutput_EventFilter_IsBase(bool value) const { qaudiooutput_eventfilter_isbase = value; }
    void setQAudioOutput_TimerEvent_IsBase(bool value) const { qaudiooutput_timerevent_isbase = value; }
    void setQAudioOutput_ChildEvent_IsBase(bool value) const { qaudiooutput_childevent_isbase = value; }
    void setQAudioOutput_CustomEvent_IsBase(bool value) const { qaudiooutput_customevent_isbase = value; }
    void setQAudioOutput_ConnectNotify_IsBase(bool value) const { qaudiooutput_connectnotify_isbase = value; }
    void setQAudioOutput_DisconnectNotify_IsBase(bool value) const { qaudiooutput_disconnectnotify_isbase = value; }
    void setQAudioOutput_Sender_IsBase(bool value) const { qaudiooutput_sender_isbase = value; }
    void setQAudioOutput_SenderSignalIndex_IsBase(bool value) const { qaudiooutput_sendersignalindex_isbase = value; }
    void setQAudioOutput_Receivers_IsBase(bool value) const { qaudiooutput_receivers_isbase = value; }
    void setQAudioOutput_IsSignalConnected_IsBase(bool value) const { qaudiooutput_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaudiooutput_metacall_isbase) {
            qaudiooutput_metacall_isbase = false;
            return QAudioOutput::qt_metacall(param1, param2, param3);
        } else if (qaudiooutput_metacall_callback != nullptr) {
            return qaudiooutput_metacall_callback(this, param1, param2, param3);
        } else {
            return QAudioOutput::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaudiooutput_event_isbase) {
            qaudiooutput_event_isbase = false;
            return QAudioOutput::event(event);
        } else if (qaudiooutput_event_callback != nullptr) {
            return qaudiooutput_event_callback(this, event);
        } else {
            return QAudioOutput::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaudiooutput_eventfilter_isbase) {
            qaudiooutput_eventfilter_isbase = false;
            return QAudioOutput::eventFilter(watched, event);
        } else if (qaudiooutput_eventfilter_callback != nullptr) {
            return qaudiooutput_eventfilter_callback(this, watched, event);
        } else {
            return QAudioOutput::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaudiooutput_timerevent_isbase) {
            qaudiooutput_timerevent_isbase = false;
            QAudioOutput::timerEvent(event);
        } else if (qaudiooutput_timerevent_callback != nullptr) {
            qaudiooutput_timerevent_callback(this, event);
        } else {
            QAudioOutput::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaudiooutput_childevent_isbase) {
            qaudiooutput_childevent_isbase = false;
            QAudioOutput::childEvent(event);
        } else if (qaudiooutput_childevent_callback != nullptr) {
            qaudiooutput_childevent_callback(this, event);
        } else {
            QAudioOutput::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaudiooutput_customevent_isbase) {
            qaudiooutput_customevent_isbase = false;
            QAudioOutput::customEvent(event);
        } else if (qaudiooutput_customevent_callback != nullptr) {
            qaudiooutput_customevent_callback(this, event);
        } else {
            QAudioOutput::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaudiooutput_connectnotify_isbase) {
            qaudiooutput_connectnotify_isbase = false;
            QAudioOutput::connectNotify(signal);
        } else if (qaudiooutput_connectnotify_callback != nullptr) {
            qaudiooutput_connectnotify_callback(this, signal);
        } else {
            QAudioOutput::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaudiooutput_disconnectnotify_isbase) {
            qaudiooutput_disconnectnotify_isbase = false;
            QAudioOutput::disconnectNotify(signal);
        } else if (qaudiooutput_disconnectnotify_callback != nullptr) {
            qaudiooutput_disconnectnotify_callback(this, signal);
        } else {
            QAudioOutput::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaudiooutput_sender_isbase) {
            qaudiooutput_sender_isbase = false;
            return QAudioOutput::sender();
        } else if (qaudiooutput_sender_callback != nullptr) {
            return qaudiooutput_sender_callback();
        } else {
            return QAudioOutput::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaudiooutput_sendersignalindex_isbase) {
            qaudiooutput_sendersignalindex_isbase = false;
            return QAudioOutput::senderSignalIndex();
        } else if (qaudiooutput_sendersignalindex_callback != nullptr) {
            return qaudiooutput_sendersignalindex_callback();
        } else {
            return QAudioOutput::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaudiooutput_receivers_isbase) {
            qaudiooutput_receivers_isbase = false;
            return QAudioOutput::receivers(signal);
        } else if (qaudiooutput_receivers_callback != nullptr) {
            return qaudiooutput_receivers_callback(this, signal);
        } else {
            return QAudioOutput::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaudiooutput_issignalconnected_isbase) {
            qaudiooutput_issignalconnected_isbase = false;
            return QAudioOutput::isSignalConnected(signal);
        } else if (qaudiooutput_issignalconnected_callback != nullptr) {
            return qaudiooutput_issignalconnected_callback(this, signal);
        } else {
            return QAudioOutput::isSignalConnected(signal);
        }
    }
};

#endif

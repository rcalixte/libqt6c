#pragma once
#ifndef SRCC_LIBVIRTUALQPAUSEANIMATION_H
#define SRCC_LIBVIRTUALQPAUSEANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPauseAnimation so that we can call protected methods
class VirtualQPauseAnimation : public QPauseAnimation {

  public:
    // Virtual class public types (including callbacks)
    using QPauseAnimation_Metacall_Callback = int (*)(QPauseAnimation*, QMetaObject::Call, int, void**);
    using QPauseAnimation_Duration_Callback = int (*)();
    using QPauseAnimation_Event_Callback = bool (*)(QPauseAnimation*, QEvent*);
    using QPauseAnimation_UpdateCurrentTime_Callback = void (*)(QPauseAnimation*, int);
    using QPauseAnimation_UpdateState_Callback = void (*)(QPauseAnimation*, QAbstractAnimation::State, QAbstractAnimation::State);
    using QPauseAnimation_UpdateDirection_Callback = void (*)(QPauseAnimation*, QAbstractAnimation::Direction);
    using QPauseAnimation_EventFilter_Callback = bool (*)(QPauseAnimation*, QObject*, QEvent*);
    using QPauseAnimation_TimerEvent_Callback = void (*)(QPauseAnimation*, QTimerEvent*);
    using QPauseAnimation_ChildEvent_Callback = void (*)(QPauseAnimation*, QChildEvent*);
    using QPauseAnimation_CustomEvent_Callback = void (*)(QPauseAnimation*, QEvent*);
    using QPauseAnimation_ConnectNotify_Callback = void (*)(QPauseAnimation*, const QMetaMethod&);
    using QPauseAnimation_DisconnectNotify_Callback = void (*)(QPauseAnimation*, const QMetaMethod&);
    using QPauseAnimation_Sender_Callback = QObject* (*)();
    using QPauseAnimation_SenderSignalIndex_Callback = int (*)();
    using QPauseAnimation_Receivers_Callback = int (*)(const QPauseAnimation*, const char*);
    using QPauseAnimation_IsSignalConnected_Callback = bool (*)(const QPauseAnimation*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPauseAnimation_Metacall_Callback qpauseanimation_metacall_callback = nullptr;
    QPauseAnimation_Duration_Callback qpauseanimation_duration_callback = nullptr;
    QPauseAnimation_Event_Callback qpauseanimation_event_callback = nullptr;
    QPauseAnimation_UpdateCurrentTime_Callback qpauseanimation_updatecurrenttime_callback = nullptr;
    QPauseAnimation_UpdateState_Callback qpauseanimation_updatestate_callback = nullptr;
    QPauseAnimation_UpdateDirection_Callback qpauseanimation_updatedirection_callback = nullptr;
    QPauseAnimation_EventFilter_Callback qpauseanimation_eventfilter_callback = nullptr;
    QPauseAnimation_TimerEvent_Callback qpauseanimation_timerevent_callback = nullptr;
    QPauseAnimation_ChildEvent_Callback qpauseanimation_childevent_callback = nullptr;
    QPauseAnimation_CustomEvent_Callback qpauseanimation_customevent_callback = nullptr;
    QPauseAnimation_ConnectNotify_Callback qpauseanimation_connectnotify_callback = nullptr;
    QPauseAnimation_DisconnectNotify_Callback qpauseanimation_disconnectnotify_callback = nullptr;
    QPauseAnimation_Sender_Callback qpauseanimation_sender_callback = nullptr;
    QPauseAnimation_SenderSignalIndex_Callback qpauseanimation_sendersignalindex_callback = nullptr;
    QPauseAnimation_Receivers_Callback qpauseanimation_receivers_callback = nullptr;
    QPauseAnimation_IsSignalConnected_Callback qpauseanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpauseanimation_metacall_isbase = false;
    mutable bool qpauseanimation_duration_isbase = false;
    mutable bool qpauseanimation_event_isbase = false;
    mutable bool qpauseanimation_updatecurrenttime_isbase = false;
    mutable bool qpauseanimation_updatestate_isbase = false;
    mutable bool qpauseanimation_updatedirection_isbase = false;
    mutable bool qpauseanimation_eventfilter_isbase = false;
    mutable bool qpauseanimation_timerevent_isbase = false;
    mutable bool qpauseanimation_childevent_isbase = false;
    mutable bool qpauseanimation_customevent_isbase = false;
    mutable bool qpauseanimation_connectnotify_isbase = false;
    mutable bool qpauseanimation_disconnectnotify_isbase = false;
    mutable bool qpauseanimation_sender_isbase = false;
    mutable bool qpauseanimation_sendersignalindex_isbase = false;
    mutable bool qpauseanimation_receivers_isbase = false;
    mutable bool qpauseanimation_issignalconnected_isbase = false;

  public:
    VirtualQPauseAnimation() : QPauseAnimation(){};
    VirtualQPauseAnimation(int msecs) : QPauseAnimation(msecs){};
    VirtualQPauseAnimation(QObject* parent) : QPauseAnimation(parent){};
    VirtualQPauseAnimation(int msecs, QObject* parent) : QPauseAnimation(msecs, parent){};

    ~VirtualQPauseAnimation() {
        qpauseanimation_metacall_callback = nullptr;
        qpauseanimation_duration_callback = nullptr;
        qpauseanimation_event_callback = nullptr;
        qpauseanimation_updatecurrenttime_callback = nullptr;
        qpauseanimation_updatestate_callback = nullptr;
        qpauseanimation_updatedirection_callback = nullptr;
        qpauseanimation_eventfilter_callback = nullptr;
        qpauseanimation_timerevent_callback = nullptr;
        qpauseanimation_childevent_callback = nullptr;
        qpauseanimation_customevent_callback = nullptr;
        qpauseanimation_connectnotify_callback = nullptr;
        qpauseanimation_disconnectnotify_callback = nullptr;
        qpauseanimation_sender_callback = nullptr;
        qpauseanimation_sendersignalindex_callback = nullptr;
        qpauseanimation_receivers_callback = nullptr;
        qpauseanimation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPauseAnimation_Metacall_Callback(QPauseAnimation_Metacall_Callback cb) { qpauseanimation_metacall_callback = cb; }
    void setQPauseAnimation_Duration_Callback(QPauseAnimation_Duration_Callback cb) { qpauseanimation_duration_callback = cb; }
    void setQPauseAnimation_Event_Callback(QPauseAnimation_Event_Callback cb) { qpauseanimation_event_callback = cb; }
    void setQPauseAnimation_UpdateCurrentTime_Callback(QPauseAnimation_UpdateCurrentTime_Callback cb) { qpauseanimation_updatecurrenttime_callback = cb; }
    void setQPauseAnimation_UpdateState_Callback(QPauseAnimation_UpdateState_Callback cb) { qpauseanimation_updatestate_callback = cb; }
    void setQPauseAnimation_UpdateDirection_Callback(QPauseAnimation_UpdateDirection_Callback cb) { qpauseanimation_updatedirection_callback = cb; }
    void setQPauseAnimation_EventFilter_Callback(QPauseAnimation_EventFilter_Callback cb) { qpauseanimation_eventfilter_callback = cb; }
    void setQPauseAnimation_TimerEvent_Callback(QPauseAnimation_TimerEvent_Callback cb) { qpauseanimation_timerevent_callback = cb; }
    void setQPauseAnimation_ChildEvent_Callback(QPauseAnimation_ChildEvent_Callback cb) { qpauseanimation_childevent_callback = cb; }
    void setQPauseAnimation_CustomEvent_Callback(QPauseAnimation_CustomEvent_Callback cb) { qpauseanimation_customevent_callback = cb; }
    void setQPauseAnimation_ConnectNotify_Callback(QPauseAnimation_ConnectNotify_Callback cb) { qpauseanimation_connectnotify_callback = cb; }
    void setQPauseAnimation_DisconnectNotify_Callback(QPauseAnimation_DisconnectNotify_Callback cb) { qpauseanimation_disconnectnotify_callback = cb; }
    void setQPauseAnimation_Sender_Callback(QPauseAnimation_Sender_Callback cb) { qpauseanimation_sender_callback = cb; }
    void setQPauseAnimation_SenderSignalIndex_Callback(QPauseAnimation_SenderSignalIndex_Callback cb) { qpauseanimation_sendersignalindex_callback = cb; }
    void setQPauseAnimation_Receivers_Callback(QPauseAnimation_Receivers_Callback cb) { qpauseanimation_receivers_callback = cb; }
    void setQPauseAnimation_IsSignalConnected_Callback(QPauseAnimation_IsSignalConnected_Callback cb) { qpauseanimation_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPauseAnimation_Metacall_IsBase(bool value) const { qpauseanimation_metacall_isbase = value; }
    void setQPauseAnimation_Duration_IsBase(bool value) const { qpauseanimation_duration_isbase = value; }
    void setQPauseAnimation_Event_IsBase(bool value) const { qpauseanimation_event_isbase = value; }
    void setQPauseAnimation_UpdateCurrentTime_IsBase(bool value) const { qpauseanimation_updatecurrenttime_isbase = value; }
    void setQPauseAnimation_UpdateState_IsBase(bool value) const { qpauseanimation_updatestate_isbase = value; }
    void setQPauseAnimation_UpdateDirection_IsBase(bool value) const { qpauseanimation_updatedirection_isbase = value; }
    void setQPauseAnimation_EventFilter_IsBase(bool value) const { qpauseanimation_eventfilter_isbase = value; }
    void setQPauseAnimation_TimerEvent_IsBase(bool value) const { qpauseanimation_timerevent_isbase = value; }
    void setQPauseAnimation_ChildEvent_IsBase(bool value) const { qpauseanimation_childevent_isbase = value; }
    void setQPauseAnimation_CustomEvent_IsBase(bool value) const { qpauseanimation_customevent_isbase = value; }
    void setQPauseAnimation_ConnectNotify_IsBase(bool value) const { qpauseanimation_connectnotify_isbase = value; }
    void setQPauseAnimation_DisconnectNotify_IsBase(bool value) const { qpauseanimation_disconnectnotify_isbase = value; }
    void setQPauseAnimation_Sender_IsBase(bool value) const { qpauseanimation_sender_isbase = value; }
    void setQPauseAnimation_SenderSignalIndex_IsBase(bool value) const { qpauseanimation_sendersignalindex_isbase = value; }
    void setQPauseAnimation_Receivers_IsBase(bool value) const { qpauseanimation_receivers_isbase = value; }
    void setQPauseAnimation_IsSignalConnected_IsBase(bool value) const { qpauseanimation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpauseanimation_metacall_isbase) {
            qpauseanimation_metacall_isbase = false;
            return QPauseAnimation::qt_metacall(param1, param2, param3);
        } else if (qpauseanimation_metacall_callback != nullptr) {
            return qpauseanimation_metacall_callback(this, param1, param2, param3);
        } else {
            return QPauseAnimation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qpauseanimation_duration_isbase) {
            qpauseanimation_duration_isbase = false;
            return QPauseAnimation::duration();
        } else if (qpauseanimation_duration_callback != nullptr) {
            return qpauseanimation_duration_callback();
        } else {
            return QPauseAnimation::duration();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qpauseanimation_event_isbase) {
            qpauseanimation_event_isbase = false;
            return QPauseAnimation::event(e);
        } else if (qpauseanimation_event_callback != nullptr) {
            return qpauseanimation_event_callback(this, e);
        } else {
            return QPauseAnimation::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qpauseanimation_updatecurrenttime_isbase) {
            qpauseanimation_updatecurrenttime_isbase = false;
            QPauseAnimation::updateCurrentTime(param1);
        } else if (qpauseanimation_updatecurrenttime_callback != nullptr) {
            qpauseanimation_updatecurrenttime_callback(this, param1);
        } else {
            QPauseAnimation::updateCurrentTime(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qpauseanimation_updatestate_isbase) {
            qpauseanimation_updatestate_isbase = false;
            QPauseAnimation::updateState(newState, oldState);
        } else if (qpauseanimation_updatestate_callback != nullptr) {
            qpauseanimation_updatestate_callback(this, newState, oldState);
        } else {
            QPauseAnimation::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qpauseanimation_updatedirection_isbase) {
            qpauseanimation_updatedirection_isbase = false;
            QPauseAnimation::updateDirection(direction);
        } else if (qpauseanimation_updatedirection_callback != nullptr) {
            qpauseanimation_updatedirection_callback(this, direction);
        } else {
            QPauseAnimation::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpauseanimation_eventfilter_isbase) {
            qpauseanimation_eventfilter_isbase = false;
            return QPauseAnimation::eventFilter(watched, event);
        } else if (qpauseanimation_eventfilter_callback != nullptr) {
            return qpauseanimation_eventfilter_callback(this, watched, event);
        } else {
            return QPauseAnimation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpauseanimation_timerevent_isbase) {
            qpauseanimation_timerevent_isbase = false;
            QPauseAnimation::timerEvent(event);
        } else if (qpauseanimation_timerevent_callback != nullptr) {
            qpauseanimation_timerevent_callback(this, event);
        } else {
            QPauseAnimation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpauseanimation_childevent_isbase) {
            qpauseanimation_childevent_isbase = false;
            QPauseAnimation::childEvent(event);
        } else if (qpauseanimation_childevent_callback != nullptr) {
            qpauseanimation_childevent_callback(this, event);
        } else {
            QPauseAnimation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpauseanimation_customevent_isbase) {
            qpauseanimation_customevent_isbase = false;
            QPauseAnimation::customEvent(event);
        } else if (qpauseanimation_customevent_callback != nullptr) {
            qpauseanimation_customevent_callback(this, event);
        } else {
            QPauseAnimation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpauseanimation_connectnotify_isbase) {
            qpauseanimation_connectnotify_isbase = false;
            QPauseAnimation::connectNotify(signal);
        } else if (qpauseanimation_connectnotify_callback != nullptr) {
            qpauseanimation_connectnotify_callback(this, signal);
        } else {
            QPauseAnimation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpauseanimation_disconnectnotify_isbase) {
            qpauseanimation_disconnectnotify_isbase = false;
            QPauseAnimation::disconnectNotify(signal);
        } else if (qpauseanimation_disconnectnotify_callback != nullptr) {
            qpauseanimation_disconnectnotify_callback(this, signal);
        } else {
            QPauseAnimation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpauseanimation_sender_isbase) {
            qpauseanimation_sender_isbase = false;
            return QPauseAnimation::sender();
        } else if (qpauseanimation_sender_callback != nullptr) {
            return qpauseanimation_sender_callback();
        } else {
            return QPauseAnimation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpauseanimation_sendersignalindex_isbase) {
            qpauseanimation_sendersignalindex_isbase = false;
            return QPauseAnimation::senderSignalIndex();
        } else if (qpauseanimation_sendersignalindex_callback != nullptr) {
            return qpauseanimation_sendersignalindex_callback();
        } else {
            return QPauseAnimation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpauseanimation_receivers_isbase) {
            qpauseanimation_receivers_isbase = false;
            return QPauseAnimation::receivers(signal);
        } else if (qpauseanimation_receivers_callback != nullptr) {
            return qpauseanimation_receivers_callback(this, signal);
        } else {
            return QPauseAnimation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpauseanimation_issignalconnected_isbase) {
            qpauseanimation_issignalconnected_isbase = false;
            return QPauseAnimation::isSignalConnected(signal);
        } else if (qpauseanimation_issignalconnected_callback != nullptr) {
            return qpauseanimation_issignalconnected_callback(this, signal);
        } else {
            return QPauseAnimation::isSignalConnected(signal);
        }
    }
};

#endif

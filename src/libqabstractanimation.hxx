#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTANIMATION_H
#define SRCC_LIBVIRTUALQABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractAnimation so that we can call protected methods
class VirtualQAbstractAnimation : public QAbstractAnimation {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractAnimation_Metacall_Callback = int (*)(QAbstractAnimation*, QMetaObject::Call, int, void**);
    using QAbstractAnimation_Duration_Callback = int (*)();
    using QAbstractAnimation_Event_Callback = bool (*)(QAbstractAnimation*, QEvent*);
    using QAbstractAnimation_UpdateCurrentTime_Callback = void (*)(QAbstractAnimation*, int);
    using QAbstractAnimation_UpdateState_Callback = void (*)(QAbstractAnimation*, QAbstractAnimation::State, QAbstractAnimation::State);
    using QAbstractAnimation_UpdateDirection_Callback = void (*)(QAbstractAnimation*, QAbstractAnimation::Direction);
    using QAbstractAnimation_EventFilter_Callback = bool (*)(QAbstractAnimation*, QObject*, QEvent*);
    using QAbstractAnimation_TimerEvent_Callback = void (*)(QAbstractAnimation*, QTimerEvent*);
    using QAbstractAnimation_ChildEvent_Callback = void (*)(QAbstractAnimation*, QChildEvent*);
    using QAbstractAnimation_CustomEvent_Callback = void (*)(QAbstractAnimation*, QEvent*);
    using QAbstractAnimation_ConnectNotify_Callback = void (*)(QAbstractAnimation*, const QMetaMethod&);
    using QAbstractAnimation_DisconnectNotify_Callback = void (*)(QAbstractAnimation*, const QMetaMethod&);
    using QAbstractAnimation_Sender_Callback = QObject* (*)();
    using QAbstractAnimation_SenderSignalIndex_Callback = int (*)();
    using QAbstractAnimation_Receivers_Callback = int (*)(const QAbstractAnimation*, const char*);
    using QAbstractAnimation_IsSignalConnected_Callback = bool (*)(const QAbstractAnimation*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAbstractAnimation_Metacall_Callback qabstractanimation_metacall_callback = nullptr;
    QAbstractAnimation_Duration_Callback qabstractanimation_duration_callback = nullptr;
    QAbstractAnimation_Event_Callback qabstractanimation_event_callback = nullptr;
    QAbstractAnimation_UpdateCurrentTime_Callback qabstractanimation_updatecurrenttime_callback = nullptr;
    QAbstractAnimation_UpdateState_Callback qabstractanimation_updatestate_callback = nullptr;
    QAbstractAnimation_UpdateDirection_Callback qabstractanimation_updatedirection_callback = nullptr;
    QAbstractAnimation_EventFilter_Callback qabstractanimation_eventfilter_callback = nullptr;
    QAbstractAnimation_TimerEvent_Callback qabstractanimation_timerevent_callback = nullptr;
    QAbstractAnimation_ChildEvent_Callback qabstractanimation_childevent_callback = nullptr;
    QAbstractAnimation_CustomEvent_Callback qabstractanimation_customevent_callback = nullptr;
    QAbstractAnimation_ConnectNotify_Callback qabstractanimation_connectnotify_callback = nullptr;
    QAbstractAnimation_DisconnectNotify_Callback qabstractanimation_disconnectnotify_callback = nullptr;
    QAbstractAnimation_Sender_Callback qabstractanimation_sender_callback = nullptr;
    QAbstractAnimation_SenderSignalIndex_Callback qabstractanimation_sendersignalindex_callback = nullptr;
    QAbstractAnimation_Receivers_Callback qabstractanimation_receivers_callback = nullptr;
    QAbstractAnimation_IsSignalConnected_Callback qabstractanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractanimation_metacall_isbase = false;
    mutable bool qabstractanimation_duration_isbase = false;
    mutable bool qabstractanimation_event_isbase = false;
    mutable bool qabstractanimation_updatecurrenttime_isbase = false;
    mutable bool qabstractanimation_updatestate_isbase = false;
    mutable bool qabstractanimation_updatedirection_isbase = false;
    mutable bool qabstractanimation_eventfilter_isbase = false;
    mutable bool qabstractanimation_timerevent_isbase = false;
    mutable bool qabstractanimation_childevent_isbase = false;
    mutable bool qabstractanimation_customevent_isbase = false;
    mutable bool qabstractanimation_connectnotify_isbase = false;
    mutable bool qabstractanimation_disconnectnotify_isbase = false;
    mutable bool qabstractanimation_sender_isbase = false;
    mutable bool qabstractanimation_sendersignalindex_isbase = false;
    mutable bool qabstractanimation_receivers_isbase = false;
    mutable bool qabstractanimation_issignalconnected_isbase = false;

  public:
    VirtualQAbstractAnimation() : QAbstractAnimation(){};
    VirtualQAbstractAnimation(QObject* parent) : QAbstractAnimation(parent){};

    ~VirtualQAbstractAnimation() {
        qabstractanimation_metacall_callback = nullptr;
        qabstractanimation_duration_callback = nullptr;
        qabstractanimation_event_callback = nullptr;
        qabstractanimation_updatecurrenttime_callback = nullptr;
        qabstractanimation_updatestate_callback = nullptr;
        qabstractanimation_updatedirection_callback = nullptr;
        qabstractanimation_eventfilter_callback = nullptr;
        qabstractanimation_timerevent_callback = nullptr;
        qabstractanimation_childevent_callback = nullptr;
        qabstractanimation_customevent_callback = nullptr;
        qabstractanimation_connectnotify_callback = nullptr;
        qabstractanimation_disconnectnotify_callback = nullptr;
        qabstractanimation_sender_callback = nullptr;
        qabstractanimation_sendersignalindex_callback = nullptr;
        qabstractanimation_receivers_callback = nullptr;
        qabstractanimation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAbstractAnimation_Metacall_Callback(QAbstractAnimation_Metacall_Callback cb) { qabstractanimation_metacall_callback = cb; }
    void setQAbstractAnimation_Duration_Callback(QAbstractAnimation_Duration_Callback cb) { qabstractanimation_duration_callback = cb; }
    void setQAbstractAnimation_Event_Callback(QAbstractAnimation_Event_Callback cb) { qabstractanimation_event_callback = cb; }
    void setQAbstractAnimation_UpdateCurrentTime_Callback(QAbstractAnimation_UpdateCurrentTime_Callback cb) { qabstractanimation_updatecurrenttime_callback = cb; }
    void setQAbstractAnimation_UpdateState_Callback(QAbstractAnimation_UpdateState_Callback cb) { qabstractanimation_updatestate_callback = cb; }
    void setQAbstractAnimation_UpdateDirection_Callback(QAbstractAnimation_UpdateDirection_Callback cb) { qabstractanimation_updatedirection_callback = cb; }
    void setQAbstractAnimation_EventFilter_Callback(QAbstractAnimation_EventFilter_Callback cb) { qabstractanimation_eventfilter_callback = cb; }
    void setQAbstractAnimation_TimerEvent_Callback(QAbstractAnimation_TimerEvent_Callback cb) { qabstractanimation_timerevent_callback = cb; }
    void setQAbstractAnimation_ChildEvent_Callback(QAbstractAnimation_ChildEvent_Callback cb) { qabstractanimation_childevent_callback = cb; }
    void setQAbstractAnimation_CustomEvent_Callback(QAbstractAnimation_CustomEvent_Callback cb) { qabstractanimation_customevent_callback = cb; }
    void setQAbstractAnimation_ConnectNotify_Callback(QAbstractAnimation_ConnectNotify_Callback cb) { qabstractanimation_connectnotify_callback = cb; }
    void setQAbstractAnimation_DisconnectNotify_Callback(QAbstractAnimation_DisconnectNotify_Callback cb) { qabstractanimation_disconnectnotify_callback = cb; }
    void setQAbstractAnimation_Sender_Callback(QAbstractAnimation_Sender_Callback cb) { qabstractanimation_sender_callback = cb; }
    void setQAbstractAnimation_SenderSignalIndex_Callback(QAbstractAnimation_SenderSignalIndex_Callback cb) { qabstractanimation_sendersignalindex_callback = cb; }
    void setQAbstractAnimation_Receivers_Callback(QAbstractAnimation_Receivers_Callback cb) { qabstractanimation_receivers_callback = cb; }
    void setQAbstractAnimation_IsSignalConnected_Callback(QAbstractAnimation_IsSignalConnected_Callback cb) { qabstractanimation_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAbstractAnimation_Metacall_IsBase(bool value) const { qabstractanimation_metacall_isbase = value; }
    void setQAbstractAnimation_Duration_IsBase(bool value) const { qabstractanimation_duration_isbase = value; }
    void setQAbstractAnimation_Event_IsBase(bool value) const { qabstractanimation_event_isbase = value; }
    void setQAbstractAnimation_UpdateCurrentTime_IsBase(bool value) const { qabstractanimation_updatecurrenttime_isbase = value; }
    void setQAbstractAnimation_UpdateState_IsBase(bool value) const { qabstractanimation_updatestate_isbase = value; }
    void setQAbstractAnimation_UpdateDirection_IsBase(bool value) const { qabstractanimation_updatedirection_isbase = value; }
    void setQAbstractAnimation_EventFilter_IsBase(bool value) const { qabstractanimation_eventfilter_isbase = value; }
    void setQAbstractAnimation_TimerEvent_IsBase(bool value) const { qabstractanimation_timerevent_isbase = value; }
    void setQAbstractAnimation_ChildEvent_IsBase(bool value) const { qabstractanimation_childevent_isbase = value; }
    void setQAbstractAnimation_CustomEvent_IsBase(bool value) const { qabstractanimation_customevent_isbase = value; }
    void setQAbstractAnimation_ConnectNotify_IsBase(bool value) const { qabstractanimation_connectnotify_isbase = value; }
    void setQAbstractAnimation_DisconnectNotify_IsBase(bool value) const { qabstractanimation_disconnectnotify_isbase = value; }
    void setQAbstractAnimation_Sender_IsBase(bool value) const { qabstractanimation_sender_isbase = value; }
    void setQAbstractAnimation_SenderSignalIndex_IsBase(bool value) const { qabstractanimation_sendersignalindex_isbase = value; }
    void setQAbstractAnimation_Receivers_IsBase(bool value) const { qabstractanimation_receivers_isbase = value; }
    void setQAbstractAnimation_IsSignalConnected_IsBase(bool value) const { qabstractanimation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractanimation_metacall_isbase) {
            qabstractanimation_metacall_isbase = false;
            return QAbstractAnimation::qt_metacall(param1, param2, param3);
        } else if (qabstractanimation_metacall_callback != nullptr) {
            return qabstractanimation_metacall_callback(this, param1, param2, param3);
        } else {
            return QAbstractAnimation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        return qabstractanimation_duration_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractanimation_event_isbase) {
            qabstractanimation_event_isbase = false;
            return QAbstractAnimation::event(event);
        } else if (qabstractanimation_event_callback != nullptr) {
            return qabstractanimation_event_callback(this, event);
        } else {
            return QAbstractAnimation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int currentTime) override {
        qabstractanimation_updatecurrenttime_callback(this, currentTime);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qabstractanimation_updatestate_isbase) {
            qabstractanimation_updatestate_isbase = false;
            QAbstractAnimation::updateState(newState, oldState);
        } else if (qabstractanimation_updatestate_callback != nullptr) {
            qabstractanimation_updatestate_callback(this, newState, oldState);
        } else {
            QAbstractAnimation::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qabstractanimation_updatedirection_isbase) {
            qabstractanimation_updatedirection_isbase = false;
            QAbstractAnimation::updateDirection(direction);
        } else if (qabstractanimation_updatedirection_callback != nullptr) {
            qabstractanimation_updatedirection_callback(this, direction);
        } else {
            QAbstractAnimation::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractanimation_eventfilter_isbase) {
            qabstractanimation_eventfilter_isbase = false;
            return QAbstractAnimation::eventFilter(watched, event);
        } else if (qabstractanimation_eventfilter_callback != nullptr) {
            return qabstractanimation_eventfilter_callback(this, watched, event);
        } else {
            return QAbstractAnimation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractanimation_timerevent_isbase) {
            qabstractanimation_timerevent_isbase = false;
            QAbstractAnimation::timerEvent(event);
        } else if (qabstractanimation_timerevent_callback != nullptr) {
            qabstractanimation_timerevent_callback(this, event);
        } else {
            QAbstractAnimation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractanimation_childevent_isbase) {
            qabstractanimation_childevent_isbase = false;
            QAbstractAnimation::childEvent(event);
        } else if (qabstractanimation_childevent_callback != nullptr) {
            qabstractanimation_childevent_callback(this, event);
        } else {
            QAbstractAnimation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractanimation_customevent_isbase) {
            qabstractanimation_customevent_isbase = false;
            QAbstractAnimation::customEvent(event);
        } else if (qabstractanimation_customevent_callback != nullptr) {
            qabstractanimation_customevent_callback(this, event);
        } else {
            QAbstractAnimation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractanimation_connectnotify_isbase) {
            qabstractanimation_connectnotify_isbase = false;
            QAbstractAnimation::connectNotify(signal);
        } else if (qabstractanimation_connectnotify_callback != nullptr) {
            qabstractanimation_connectnotify_callback(this, signal);
        } else {
            QAbstractAnimation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractanimation_disconnectnotify_isbase) {
            qabstractanimation_disconnectnotify_isbase = false;
            QAbstractAnimation::disconnectNotify(signal);
        } else if (qabstractanimation_disconnectnotify_callback != nullptr) {
            qabstractanimation_disconnectnotify_callback(this, signal);
        } else {
            QAbstractAnimation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractanimation_sender_isbase) {
            qabstractanimation_sender_isbase = false;
            return QAbstractAnimation::sender();
        } else if (qabstractanimation_sender_callback != nullptr) {
            return qabstractanimation_sender_callback();
        } else {
            return QAbstractAnimation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractanimation_sendersignalindex_isbase) {
            qabstractanimation_sendersignalindex_isbase = false;
            return QAbstractAnimation::senderSignalIndex();
        } else if (qabstractanimation_sendersignalindex_callback != nullptr) {
            return qabstractanimation_sendersignalindex_callback();
        } else {
            return QAbstractAnimation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractanimation_receivers_isbase) {
            qabstractanimation_receivers_isbase = false;
            return QAbstractAnimation::receivers(signal);
        } else if (qabstractanimation_receivers_callback != nullptr) {
            return qabstractanimation_receivers_callback(this, signal);
        } else {
            return QAbstractAnimation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractanimation_issignalconnected_isbase) {
            qabstractanimation_issignalconnected_isbase = false;
            return QAbstractAnimation::isSignalConnected(signal);
        } else if (qabstractanimation_issignalconnected_callback != nullptr) {
            return qabstractanimation_issignalconnected_callback(this, signal);
        } else {
            return QAbstractAnimation::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QAnimationDriver so that we can call protected methods
class VirtualQAnimationDriver : public QAnimationDriver {

  public:
    // Virtual class public types (including callbacks)
    using QAnimationDriver_Metacall_Callback = int (*)(QAnimationDriver*, QMetaObject::Call, int, void**);
    using QAnimationDriver_Advance_Callback = void (*)();
    using QAnimationDriver_Elapsed_Callback = qint64 (*)();
    using QAnimationDriver_Start_Callback = void (*)();
    using QAnimationDriver_Stop_Callback = void (*)();
    using QAnimationDriver_Event_Callback = bool (*)(QAnimationDriver*, QEvent*);
    using QAnimationDriver_EventFilter_Callback = bool (*)(QAnimationDriver*, QObject*, QEvent*);
    using QAnimationDriver_TimerEvent_Callback = void (*)(QAnimationDriver*, QTimerEvent*);
    using QAnimationDriver_ChildEvent_Callback = void (*)(QAnimationDriver*, QChildEvent*);
    using QAnimationDriver_CustomEvent_Callback = void (*)(QAnimationDriver*, QEvent*);
    using QAnimationDriver_ConnectNotify_Callback = void (*)(QAnimationDriver*, const QMetaMethod&);
    using QAnimationDriver_DisconnectNotify_Callback = void (*)(QAnimationDriver*, const QMetaMethod&);
    using QAnimationDriver_AdvanceAnimation_Callback = void (*)();
    using QAnimationDriver_Sender_Callback = QObject* (*)();
    using QAnimationDriver_SenderSignalIndex_Callback = int (*)();
    using QAnimationDriver_Receivers_Callback = int (*)(const QAnimationDriver*, const char*);
    using QAnimationDriver_IsSignalConnected_Callback = bool (*)(const QAnimationDriver*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAnimationDriver_Metacall_Callback qanimationdriver_metacall_callback = nullptr;
    QAnimationDriver_Advance_Callback qanimationdriver_advance_callback = nullptr;
    QAnimationDriver_Elapsed_Callback qanimationdriver_elapsed_callback = nullptr;
    QAnimationDriver_Start_Callback qanimationdriver_start_callback = nullptr;
    QAnimationDriver_Stop_Callback qanimationdriver_stop_callback = nullptr;
    QAnimationDriver_Event_Callback qanimationdriver_event_callback = nullptr;
    QAnimationDriver_EventFilter_Callback qanimationdriver_eventfilter_callback = nullptr;
    QAnimationDriver_TimerEvent_Callback qanimationdriver_timerevent_callback = nullptr;
    QAnimationDriver_ChildEvent_Callback qanimationdriver_childevent_callback = nullptr;
    QAnimationDriver_CustomEvent_Callback qanimationdriver_customevent_callback = nullptr;
    QAnimationDriver_ConnectNotify_Callback qanimationdriver_connectnotify_callback = nullptr;
    QAnimationDriver_DisconnectNotify_Callback qanimationdriver_disconnectnotify_callback = nullptr;
    QAnimationDriver_AdvanceAnimation_Callback qanimationdriver_advanceanimation_callback = nullptr;
    QAnimationDriver_Sender_Callback qanimationdriver_sender_callback = nullptr;
    QAnimationDriver_SenderSignalIndex_Callback qanimationdriver_sendersignalindex_callback = nullptr;
    QAnimationDriver_Receivers_Callback qanimationdriver_receivers_callback = nullptr;
    QAnimationDriver_IsSignalConnected_Callback qanimationdriver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qanimationdriver_metacall_isbase = false;
    mutable bool qanimationdriver_advance_isbase = false;
    mutable bool qanimationdriver_elapsed_isbase = false;
    mutable bool qanimationdriver_start_isbase = false;
    mutable bool qanimationdriver_stop_isbase = false;
    mutable bool qanimationdriver_event_isbase = false;
    mutable bool qanimationdriver_eventfilter_isbase = false;
    mutable bool qanimationdriver_timerevent_isbase = false;
    mutable bool qanimationdriver_childevent_isbase = false;
    mutable bool qanimationdriver_customevent_isbase = false;
    mutable bool qanimationdriver_connectnotify_isbase = false;
    mutable bool qanimationdriver_disconnectnotify_isbase = false;
    mutable bool qanimationdriver_advanceanimation_isbase = false;
    mutable bool qanimationdriver_sender_isbase = false;
    mutable bool qanimationdriver_sendersignalindex_isbase = false;
    mutable bool qanimationdriver_receivers_isbase = false;
    mutable bool qanimationdriver_issignalconnected_isbase = false;

  public:
    VirtualQAnimationDriver() : QAnimationDriver(){};
    VirtualQAnimationDriver(QObject* parent) : QAnimationDriver(parent){};

    ~VirtualQAnimationDriver() {
        qanimationdriver_metacall_callback = nullptr;
        qanimationdriver_advance_callback = nullptr;
        qanimationdriver_elapsed_callback = nullptr;
        qanimationdriver_start_callback = nullptr;
        qanimationdriver_stop_callback = nullptr;
        qanimationdriver_event_callback = nullptr;
        qanimationdriver_eventfilter_callback = nullptr;
        qanimationdriver_timerevent_callback = nullptr;
        qanimationdriver_childevent_callback = nullptr;
        qanimationdriver_customevent_callback = nullptr;
        qanimationdriver_connectnotify_callback = nullptr;
        qanimationdriver_disconnectnotify_callback = nullptr;
        qanimationdriver_advanceanimation_callback = nullptr;
        qanimationdriver_sender_callback = nullptr;
        qanimationdriver_sendersignalindex_callback = nullptr;
        qanimationdriver_receivers_callback = nullptr;
        qanimationdriver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAnimationDriver_Metacall_Callback(QAnimationDriver_Metacall_Callback cb) { qanimationdriver_metacall_callback = cb; }
    void setQAnimationDriver_Advance_Callback(QAnimationDriver_Advance_Callback cb) { qanimationdriver_advance_callback = cb; }
    void setQAnimationDriver_Elapsed_Callback(QAnimationDriver_Elapsed_Callback cb) { qanimationdriver_elapsed_callback = cb; }
    void setQAnimationDriver_Start_Callback(QAnimationDriver_Start_Callback cb) { qanimationdriver_start_callback = cb; }
    void setQAnimationDriver_Stop_Callback(QAnimationDriver_Stop_Callback cb) { qanimationdriver_stop_callback = cb; }
    void setQAnimationDriver_Event_Callback(QAnimationDriver_Event_Callback cb) { qanimationdriver_event_callback = cb; }
    void setQAnimationDriver_EventFilter_Callback(QAnimationDriver_EventFilter_Callback cb) { qanimationdriver_eventfilter_callback = cb; }
    void setQAnimationDriver_TimerEvent_Callback(QAnimationDriver_TimerEvent_Callback cb) { qanimationdriver_timerevent_callback = cb; }
    void setQAnimationDriver_ChildEvent_Callback(QAnimationDriver_ChildEvent_Callback cb) { qanimationdriver_childevent_callback = cb; }
    void setQAnimationDriver_CustomEvent_Callback(QAnimationDriver_CustomEvent_Callback cb) { qanimationdriver_customevent_callback = cb; }
    void setQAnimationDriver_ConnectNotify_Callback(QAnimationDriver_ConnectNotify_Callback cb) { qanimationdriver_connectnotify_callback = cb; }
    void setQAnimationDriver_DisconnectNotify_Callback(QAnimationDriver_DisconnectNotify_Callback cb) { qanimationdriver_disconnectnotify_callback = cb; }
    void setQAnimationDriver_AdvanceAnimation_Callback(QAnimationDriver_AdvanceAnimation_Callback cb) { qanimationdriver_advanceanimation_callback = cb; }
    void setQAnimationDriver_Sender_Callback(QAnimationDriver_Sender_Callback cb) { qanimationdriver_sender_callback = cb; }
    void setQAnimationDriver_SenderSignalIndex_Callback(QAnimationDriver_SenderSignalIndex_Callback cb) { qanimationdriver_sendersignalindex_callback = cb; }
    void setQAnimationDriver_Receivers_Callback(QAnimationDriver_Receivers_Callback cb) { qanimationdriver_receivers_callback = cb; }
    void setQAnimationDriver_IsSignalConnected_Callback(QAnimationDriver_IsSignalConnected_Callback cb) { qanimationdriver_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAnimationDriver_Metacall_IsBase(bool value) const { qanimationdriver_metacall_isbase = value; }
    void setQAnimationDriver_Advance_IsBase(bool value) const { qanimationdriver_advance_isbase = value; }
    void setQAnimationDriver_Elapsed_IsBase(bool value) const { qanimationdriver_elapsed_isbase = value; }
    void setQAnimationDriver_Start_IsBase(bool value) const { qanimationdriver_start_isbase = value; }
    void setQAnimationDriver_Stop_IsBase(bool value) const { qanimationdriver_stop_isbase = value; }
    void setQAnimationDriver_Event_IsBase(bool value) const { qanimationdriver_event_isbase = value; }
    void setQAnimationDriver_EventFilter_IsBase(bool value) const { qanimationdriver_eventfilter_isbase = value; }
    void setQAnimationDriver_TimerEvent_IsBase(bool value) const { qanimationdriver_timerevent_isbase = value; }
    void setQAnimationDriver_ChildEvent_IsBase(bool value) const { qanimationdriver_childevent_isbase = value; }
    void setQAnimationDriver_CustomEvent_IsBase(bool value) const { qanimationdriver_customevent_isbase = value; }
    void setQAnimationDriver_ConnectNotify_IsBase(bool value) const { qanimationdriver_connectnotify_isbase = value; }
    void setQAnimationDriver_DisconnectNotify_IsBase(bool value) const { qanimationdriver_disconnectnotify_isbase = value; }
    void setQAnimationDriver_AdvanceAnimation_IsBase(bool value) const { qanimationdriver_advanceanimation_isbase = value; }
    void setQAnimationDriver_Sender_IsBase(bool value) const { qanimationdriver_sender_isbase = value; }
    void setQAnimationDriver_SenderSignalIndex_IsBase(bool value) const { qanimationdriver_sendersignalindex_isbase = value; }
    void setQAnimationDriver_Receivers_IsBase(bool value) const { qanimationdriver_receivers_isbase = value; }
    void setQAnimationDriver_IsSignalConnected_IsBase(bool value) const { qanimationdriver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qanimationdriver_metacall_isbase) {
            qanimationdriver_metacall_isbase = false;
            return QAnimationDriver::qt_metacall(param1, param2, param3);
        } else if (qanimationdriver_metacall_callback != nullptr) {
            return qanimationdriver_metacall_callback(this, param1, param2, param3);
        } else {
            return QAnimationDriver::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance() override {
        if (qanimationdriver_advance_isbase) {
            qanimationdriver_advance_isbase = false;
            QAnimationDriver::advance();
        } else if (qanimationdriver_advance_callback != nullptr) {
            qanimationdriver_advance_callback();
        } else {
            QAnimationDriver::advance();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 elapsed() const override {
        if (qanimationdriver_elapsed_isbase) {
            qanimationdriver_elapsed_isbase = false;
            return QAnimationDriver::elapsed();
        } else if (qanimationdriver_elapsed_callback != nullptr) {
            return qanimationdriver_elapsed_callback();
        } else {
            return QAnimationDriver::elapsed();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void start() override {
        if (qanimationdriver_start_isbase) {
            qanimationdriver_start_isbase = false;
            QAnimationDriver::start();
        } else if (qanimationdriver_start_callback != nullptr) {
            qanimationdriver_start_callback();
        } else {
            QAnimationDriver::start();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (qanimationdriver_stop_isbase) {
            qanimationdriver_stop_isbase = false;
            QAnimationDriver::stop();
        } else if (qanimationdriver_stop_callback != nullptr) {
            qanimationdriver_stop_callback();
        } else {
            QAnimationDriver::stop();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qanimationdriver_event_isbase) {
            qanimationdriver_event_isbase = false;
            return QAnimationDriver::event(event);
        } else if (qanimationdriver_event_callback != nullptr) {
            return qanimationdriver_event_callback(this, event);
        } else {
            return QAnimationDriver::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qanimationdriver_eventfilter_isbase) {
            qanimationdriver_eventfilter_isbase = false;
            return QAnimationDriver::eventFilter(watched, event);
        } else if (qanimationdriver_eventfilter_callback != nullptr) {
            return qanimationdriver_eventfilter_callback(this, watched, event);
        } else {
            return QAnimationDriver::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qanimationdriver_timerevent_isbase) {
            qanimationdriver_timerevent_isbase = false;
            QAnimationDriver::timerEvent(event);
        } else if (qanimationdriver_timerevent_callback != nullptr) {
            qanimationdriver_timerevent_callback(this, event);
        } else {
            QAnimationDriver::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qanimationdriver_childevent_isbase) {
            qanimationdriver_childevent_isbase = false;
            QAnimationDriver::childEvent(event);
        } else if (qanimationdriver_childevent_callback != nullptr) {
            qanimationdriver_childevent_callback(this, event);
        } else {
            QAnimationDriver::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qanimationdriver_customevent_isbase) {
            qanimationdriver_customevent_isbase = false;
            QAnimationDriver::customEvent(event);
        } else if (qanimationdriver_customevent_callback != nullptr) {
            qanimationdriver_customevent_callback(this, event);
        } else {
            QAnimationDriver::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qanimationdriver_connectnotify_isbase) {
            qanimationdriver_connectnotify_isbase = false;
            QAnimationDriver::connectNotify(signal);
        } else if (qanimationdriver_connectnotify_callback != nullptr) {
            qanimationdriver_connectnotify_callback(this, signal);
        } else {
            QAnimationDriver::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qanimationdriver_disconnectnotify_isbase) {
            qanimationdriver_disconnectnotify_isbase = false;
            QAnimationDriver::disconnectNotify(signal);
        } else if (qanimationdriver_disconnectnotify_callback != nullptr) {
            qanimationdriver_disconnectnotify_callback(this, signal);
        } else {
            QAnimationDriver::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void advanceAnimation() {
        if (qanimationdriver_advanceanimation_isbase) {
            qanimationdriver_advanceanimation_isbase = false;
            QAnimationDriver::advanceAnimation();
        } else if (qanimationdriver_advanceanimation_callback != nullptr) {
            qanimationdriver_advanceanimation_callback();
        } else {
            QAnimationDriver::advanceAnimation();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qanimationdriver_sender_isbase) {
            qanimationdriver_sender_isbase = false;
            return QAnimationDriver::sender();
        } else if (qanimationdriver_sender_callback != nullptr) {
            return qanimationdriver_sender_callback();
        } else {
            return QAnimationDriver::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qanimationdriver_sendersignalindex_isbase) {
            qanimationdriver_sendersignalindex_isbase = false;
            return QAnimationDriver::senderSignalIndex();
        } else if (qanimationdriver_sendersignalindex_callback != nullptr) {
            return qanimationdriver_sendersignalindex_callback();
        } else {
            return QAnimationDriver::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qanimationdriver_receivers_isbase) {
            qanimationdriver_receivers_isbase = false;
            return QAnimationDriver::receivers(signal);
        } else if (qanimationdriver_receivers_callback != nullptr) {
            return qanimationdriver_receivers_callback(this, signal);
        } else {
            return QAnimationDriver::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qanimationdriver_issignalconnected_isbase) {
            qanimationdriver_issignalconnected_isbase = false;
            return QAnimationDriver::isSignalConnected(signal);
        } else if (qanimationdriver_issignalconnected_callback != nullptr) {
            return qanimationdriver_issignalconnected_callback(this, signal);
        } else {
            return QAnimationDriver::isSignalConnected(signal);
        }
    }
};

#endif

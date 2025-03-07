#pragma once
#ifndef SRCC_LIBVIRTUALQSEQUENTIALANIMATIONGROUP_H
#define SRCC_LIBVIRTUALQSEQUENTIALANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSequentialAnimationGroup so that we can call protected methods
class VirtualQSequentialAnimationGroup : public QSequentialAnimationGroup {

  public:
    // Virtual class public types (including callbacks)
    using QSequentialAnimationGroup_Metacall_Callback = int (*)(QSequentialAnimationGroup*, QMetaObject::Call, int, void**);
    using QSequentialAnimationGroup_Duration_Callback = int (*)();
    using QSequentialAnimationGroup_Event_Callback = bool (*)(QSequentialAnimationGroup*, QEvent*);
    using QSequentialAnimationGroup_UpdateCurrentTime_Callback = void (*)(QSequentialAnimationGroup*, int);
    using QSequentialAnimationGroup_UpdateState_Callback = void (*)(QSequentialAnimationGroup*, QAbstractAnimation::State, QAbstractAnimation::State);
    using QSequentialAnimationGroup_UpdateDirection_Callback = void (*)(QSequentialAnimationGroup*, QAbstractAnimation::Direction);
    using QSequentialAnimationGroup_EventFilter_Callback = bool (*)(QSequentialAnimationGroup*, QObject*, QEvent*);
    using QSequentialAnimationGroup_TimerEvent_Callback = void (*)(QSequentialAnimationGroup*, QTimerEvent*);
    using QSequentialAnimationGroup_ChildEvent_Callback = void (*)(QSequentialAnimationGroup*, QChildEvent*);
    using QSequentialAnimationGroup_CustomEvent_Callback = void (*)(QSequentialAnimationGroup*, QEvent*);
    using QSequentialAnimationGroup_ConnectNotify_Callback = void (*)(QSequentialAnimationGroup*, const QMetaMethod&);
    using QSequentialAnimationGroup_DisconnectNotify_Callback = void (*)(QSequentialAnimationGroup*, const QMetaMethod&);
    using QSequentialAnimationGroup_Sender_Callback = QObject* (*)();
    using QSequentialAnimationGroup_SenderSignalIndex_Callback = int (*)();
    using QSequentialAnimationGroup_Receivers_Callback = int (*)(const QSequentialAnimationGroup*, const char*);
    using QSequentialAnimationGroup_IsSignalConnected_Callback = bool (*)(const QSequentialAnimationGroup*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSequentialAnimationGroup_Metacall_Callback qsequentialanimationgroup_metacall_callback = nullptr;
    QSequentialAnimationGroup_Duration_Callback qsequentialanimationgroup_duration_callback = nullptr;
    QSequentialAnimationGroup_Event_Callback qsequentialanimationgroup_event_callback = nullptr;
    QSequentialAnimationGroup_UpdateCurrentTime_Callback qsequentialanimationgroup_updatecurrenttime_callback = nullptr;
    QSequentialAnimationGroup_UpdateState_Callback qsequentialanimationgroup_updatestate_callback = nullptr;
    QSequentialAnimationGroup_UpdateDirection_Callback qsequentialanimationgroup_updatedirection_callback = nullptr;
    QSequentialAnimationGroup_EventFilter_Callback qsequentialanimationgroup_eventfilter_callback = nullptr;
    QSequentialAnimationGroup_TimerEvent_Callback qsequentialanimationgroup_timerevent_callback = nullptr;
    QSequentialAnimationGroup_ChildEvent_Callback qsequentialanimationgroup_childevent_callback = nullptr;
    QSequentialAnimationGroup_CustomEvent_Callback qsequentialanimationgroup_customevent_callback = nullptr;
    QSequentialAnimationGroup_ConnectNotify_Callback qsequentialanimationgroup_connectnotify_callback = nullptr;
    QSequentialAnimationGroup_DisconnectNotify_Callback qsequentialanimationgroup_disconnectnotify_callback = nullptr;
    QSequentialAnimationGroup_Sender_Callback qsequentialanimationgroup_sender_callback = nullptr;
    QSequentialAnimationGroup_SenderSignalIndex_Callback qsequentialanimationgroup_sendersignalindex_callback = nullptr;
    QSequentialAnimationGroup_Receivers_Callback qsequentialanimationgroup_receivers_callback = nullptr;
    QSequentialAnimationGroup_IsSignalConnected_Callback qsequentialanimationgroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsequentialanimationgroup_metacall_isbase = false;
    mutable bool qsequentialanimationgroup_duration_isbase = false;
    mutable bool qsequentialanimationgroup_event_isbase = false;
    mutable bool qsequentialanimationgroup_updatecurrenttime_isbase = false;
    mutable bool qsequentialanimationgroup_updatestate_isbase = false;
    mutable bool qsequentialanimationgroup_updatedirection_isbase = false;
    mutable bool qsequentialanimationgroup_eventfilter_isbase = false;
    mutable bool qsequentialanimationgroup_timerevent_isbase = false;
    mutable bool qsequentialanimationgroup_childevent_isbase = false;
    mutable bool qsequentialanimationgroup_customevent_isbase = false;
    mutable bool qsequentialanimationgroup_connectnotify_isbase = false;
    mutable bool qsequentialanimationgroup_disconnectnotify_isbase = false;
    mutable bool qsequentialanimationgroup_sender_isbase = false;
    mutable bool qsequentialanimationgroup_sendersignalindex_isbase = false;
    mutable bool qsequentialanimationgroup_receivers_isbase = false;
    mutable bool qsequentialanimationgroup_issignalconnected_isbase = false;

  public:
    VirtualQSequentialAnimationGroup() : QSequentialAnimationGroup(){};
    VirtualQSequentialAnimationGroup(QObject* parent) : QSequentialAnimationGroup(parent){};

    ~VirtualQSequentialAnimationGroup() {
        qsequentialanimationgroup_metacall_callback = nullptr;
        qsequentialanimationgroup_duration_callback = nullptr;
        qsequentialanimationgroup_event_callback = nullptr;
        qsequentialanimationgroup_updatecurrenttime_callback = nullptr;
        qsequentialanimationgroup_updatestate_callback = nullptr;
        qsequentialanimationgroup_updatedirection_callback = nullptr;
        qsequentialanimationgroup_eventfilter_callback = nullptr;
        qsequentialanimationgroup_timerevent_callback = nullptr;
        qsequentialanimationgroup_childevent_callback = nullptr;
        qsequentialanimationgroup_customevent_callback = nullptr;
        qsequentialanimationgroup_connectnotify_callback = nullptr;
        qsequentialanimationgroup_disconnectnotify_callback = nullptr;
        qsequentialanimationgroup_sender_callback = nullptr;
        qsequentialanimationgroup_sendersignalindex_callback = nullptr;
        qsequentialanimationgroup_receivers_callback = nullptr;
        qsequentialanimationgroup_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSequentialAnimationGroup_Metacall_Callback(QSequentialAnimationGroup_Metacall_Callback cb) { qsequentialanimationgroup_metacall_callback = cb; }
    void setQSequentialAnimationGroup_Duration_Callback(QSequentialAnimationGroup_Duration_Callback cb) { qsequentialanimationgroup_duration_callback = cb; }
    void setQSequentialAnimationGroup_Event_Callback(QSequentialAnimationGroup_Event_Callback cb) { qsequentialanimationgroup_event_callback = cb; }
    void setQSequentialAnimationGroup_UpdateCurrentTime_Callback(QSequentialAnimationGroup_UpdateCurrentTime_Callback cb) { qsequentialanimationgroup_updatecurrenttime_callback = cb; }
    void setQSequentialAnimationGroup_UpdateState_Callback(QSequentialAnimationGroup_UpdateState_Callback cb) { qsequentialanimationgroup_updatestate_callback = cb; }
    void setQSequentialAnimationGroup_UpdateDirection_Callback(QSequentialAnimationGroup_UpdateDirection_Callback cb) { qsequentialanimationgroup_updatedirection_callback = cb; }
    void setQSequentialAnimationGroup_EventFilter_Callback(QSequentialAnimationGroup_EventFilter_Callback cb) { qsequentialanimationgroup_eventfilter_callback = cb; }
    void setQSequentialAnimationGroup_TimerEvent_Callback(QSequentialAnimationGroup_TimerEvent_Callback cb) { qsequentialanimationgroup_timerevent_callback = cb; }
    void setQSequentialAnimationGroup_ChildEvent_Callback(QSequentialAnimationGroup_ChildEvent_Callback cb) { qsequentialanimationgroup_childevent_callback = cb; }
    void setQSequentialAnimationGroup_CustomEvent_Callback(QSequentialAnimationGroup_CustomEvent_Callback cb) { qsequentialanimationgroup_customevent_callback = cb; }
    void setQSequentialAnimationGroup_ConnectNotify_Callback(QSequentialAnimationGroup_ConnectNotify_Callback cb) { qsequentialanimationgroup_connectnotify_callback = cb; }
    void setQSequentialAnimationGroup_DisconnectNotify_Callback(QSequentialAnimationGroup_DisconnectNotify_Callback cb) { qsequentialanimationgroup_disconnectnotify_callback = cb; }
    void setQSequentialAnimationGroup_Sender_Callback(QSequentialAnimationGroup_Sender_Callback cb) { qsequentialanimationgroup_sender_callback = cb; }
    void setQSequentialAnimationGroup_SenderSignalIndex_Callback(QSequentialAnimationGroup_SenderSignalIndex_Callback cb) { qsequentialanimationgroup_sendersignalindex_callback = cb; }
    void setQSequentialAnimationGroup_Receivers_Callback(QSequentialAnimationGroup_Receivers_Callback cb) { qsequentialanimationgroup_receivers_callback = cb; }
    void setQSequentialAnimationGroup_IsSignalConnected_Callback(QSequentialAnimationGroup_IsSignalConnected_Callback cb) { qsequentialanimationgroup_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSequentialAnimationGroup_Metacall_IsBase(bool value) const { qsequentialanimationgroup_metacall_isbase = value; }
    void setQSequentialAnimationGroup_Duration_IsBase(bool value) const { qsequentialanimationgroup_duration_isbase = value; }
    void setQSequentialAnimationGroup_Event_IsBase(bool value) const { qsequentialanimationgroup_event_isbase = value; }
    void setQSequentialAnimationGroup_UpdateCurrentTime_IsBase(bool value) const { qsequentialanimationgroup_updatecurrenttime_isbase = value; }
    void setQSequentialAnimationGroup_UpdateState_IsBase(bool value) const { qsequentialanimationgroup_updatestate_isbase = value; }
    void setQSequentialAnimationGroup_UpdateDirection_IsBase(bool value) const { qsequentialanimationgroup_updatedirection_isbase = value; }
    void setQSequentialAnimationGroup_EventFilter_IsBase(bool value) const { qsequentialanimationgroup_eventfilter_isbase = value; }
    void setQSequentialAnimationGroup_TimerEvent_IsBase(bool value) const { qsequentialanimationgroup_timerevent_isbase = value; }
    void setQSequentialAnimationGroup_ChildEvent_IsBase(bool value) const { qsequentialanimationgroup_childevent_isbase = value; }
    void setQSequentialAnimationGroup_CustomEvent_IsBase(bool value) const { qsequentialanimationgroup_customevent_isbase = value; }
    void setQSequentialAnimationGroup_ConnectNotify_IsBase(bool value) const { qsequentialanimationgroup_connectnotify_isbase = value; }
    void setQSequentialAnimationGroup_DisconnectNotify_IsBase(bool value) const { qsequentialanimationgroup_disconnectnotify_isbase = value; }
    void setQSequentialAnimationGroup_Sender_IsBase(bool value) const { qsequentialanimationgroup_sender_isbase = value; }
    void setQSequentialAnimationGroup_SenderSignalIndex_IsBase(bool value) const { qsequentialanimationgroup_sendersignalindex_isbase = value; }
    void setQSequentialAnimationGroup_Receivers_IsBase(bool value) const { qsequentialanimationgroup_receivers_isbase = value; }
    void setQSequentialAnimationGroup_IsSignalConnected_IsBase(bool value) const { qsequentialanimationgroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsequentialanimationgroup_metacall_isbase) {
            qsequentialanimationgroup_metacall_isbase = false;
            return QSequentialAnimationGroup::qt_metacall(param1, param2, param3);
        } else if (qsequentialanimationgroup_metacall_callback != nullptr) {
            return qsequentialanimationgroup_metacall_callback(this, param1, param2, param3);
        } else {
            return QSequentialAnimationGroup::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qsequentialanimationgroup_duration_isbase) {
            qsequentialanimationgroup_duration_isbase = false;
            return QSequentialAnimationGroup::duration();
        } else if (qsequentialanimationgroup_duration_callback != nullptr) {
            return qsequentialanimationgroup_duration_callback();
        } else {
            return QSequentialAnimationGroup::duration();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsequentialanimationgroup_event_isbase) {
            qsequentialanimationgroup_event_isbase = false;
            return QSequentialAnimationGroup::event(event);
        } else if (qsequentialanimationgroup_event_callback != nullptr) {
            return qsequentialanimationgroup_event_callback(this, event);
        } else {
            return QSequentialAnimationGroup::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qsequentialanimationgroup_updatecurrenttime_isbase) {
            qsequentialanimationgroup_updatecurrenttime_isbase = false;
            QSequentialAnimationGroup::updateCurrentTime(param1);
        } else if (qsequentialanimationgroup_updatecurrenttime_callback != nullptr) {
            qsequentialanimationgroup_updatecurrenttime_callback(this, param1);
        } else {
            QSequentialAnimationGroup::updateCurrentTime(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qsequentialanimationgroup_updatestate_isbase) {
            qsequentialanimationgroup_updatestate_isbase = false;
            QSequentialAnimationGroup::updateState(newState, oldState);
        } else if (qsequentialanimationgroup_updatestate_callback != nullptr) {
            qsequentialanimationgroup_updatestate_callback(this, newState, oldState);
        } else {
            QSequentialAnimationGroup::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qsequentialanimationgroup_updatedirection_isbase) {
            qsequentialanimationgroup_updatedirection_isbase = false;
            QSequentialAnimationGroup::updateDirection(direction);
        } else if (qsequentialanimationgroup_updatedirection_callback != nullptr) {
            qsequentialanimationgroup_updatedirection_callback(this, direction);
        } else {
            QSequentialAnimationGroup::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsequentialanimationgroup_eventfilter_isbase) {
            qsequentialanimationgroup_eventfilter_isbase = false;
            return QSequentialAnimationGroup::eventFilter(watched, event);
        } else if (qsequentialanimationgroup_eventfilter_callback != nullptr) {
            return qsequentialanimationgroup_eventfilter_callback(this, watched, event);
        } else {
            return QSequentialAnimationGroup::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsequentialanimationgroup_timerevent_isbase) {
            qsequentialanimationgroup_timerevent_isbase = false;
            QSequentialAnimationGroup::timerEvent(event);
        } else if (qsequentialanimationgroup_timerevent_callback != nullptr) {
            qsequentialanimationgroup_timerevent_callback(this, event);
        } else {
            QSequentialAnimationGroup::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsequentialanimationgroup_childevent_isbase) {
            qsequentialanimationgroup_childevent_isbase = false;
            QSequentialAnimationGroup::childEvent(event);
        } else if (qsequentialanimationgroup_childevent_callback != nullptr) {
            qsequentialanimationgroup_childevent_callback(this, event);
        } else {
            QSequentialAnimationGroup::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsequentialanimationgroup_customevent_isbase) {
            qsequentialanimationgroup_customevent_isbase = false;
            QSequentialAnimationGroup::customEvent(event);
        } else if (qsequentialanimationgroup_customevent_callback != nullptr) {
            qsequentialanimationgroup_customevent_callback(this, event);
        } else {
            QSequentialAnimationGroup::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsequentialanimationgroup_connectnotify_isbase) {
            qsequentialanimationgroup_connectnotify_isbase = false;
            QSequentialAnimationGroup::connectNotify(signal);
        } else if (qsequentialanimationgroup_connectnotify_callback != nullptr) {
            qsequentialanimationgroup_connectnotify_callback(this, signal);
        } else {
            QSequentialAnimationGroup::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsequentialanimationgroup_disconnectnotify_isbase) {
            qsequentialanimationgroup_disconnectnotify_isbase = false;
            QSequentialAnimationGroup::disconnectNotify(signal);
        } else if (qsequentialanimationgroup_disconnectnotify_callback != nullptr) {
            qsequentialanimationgroup_disconnectnotify_callback(this, signal);
        } else {
            QSequentialAnimationGroup::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsequentialanimationgroup_sender_isbase) {
            qsequentialanimationgroup_sender_isbase = false;
            return QSequentialAnimationGroup::sender();
        } else if (qsequentialanimationgroup_sender_callback != nullptr) {
            return qsequentialanimationgroup_sender_callback();
        } else {
            return QSequentialAnimationGroup::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsequentialanimationgroup_sendersignalindex_isbase) {
            qsequentialanimationgroup_sendersignalindex_isbase = false;
            return QSequentialAnimationGroup::senderSignalIndex();
        } else if (qsequentialanimationgroup_sendersignalindex_callback != nullptr) {
            return qsequentialanimationgroup_sendersignalindex_callback();
        } else {
            return QSequentialAnimationGroup::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsequentialanimationgroup_receivers_isbase) {
            qsequentialanimationgroup_receivers_isbase = false;
            return QSequentialAnimationGroup::receivers(signal);
        } else if (qsequentialanimationgroup_receivers_callback != nullptr) {
            return qsequentialanimationgroup_receivers_callback(this, signal);
        } else {
            return QSequentialAnimationGroup::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsequentialanimationgroup_issignalconnected_isbase) {
            qsequentialanimationgroup_issignalconnected_isbase = false;
            return QSequentialAnimationGroup::isSignalConnected(signal);
        } else if (qsequentialanimationgroup_issignalconnected_callback != nullptr) {
            return qsequentialanimationgroup_issignalconnected_callback(this, signal);
        } else {
            return QSequentialAnimationGroup::isSignalConnected(signal);
        }
    }
};

#endif

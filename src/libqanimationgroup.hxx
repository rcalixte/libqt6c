#pragma once
#ifndef SRCC_LIBVIRTUALQANIMATIONGROUP_H
#define SRCC_LIBVIRTUALQANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAnimationGroup so that we can call protected methods
class VirtualQAnimationGroup : public QAnimationGroup {

  public:
    // Virtual class public types (including callbacks)
    using QAnimationGroup_Metacall_Callback = int (*)(QAnimationGroup*, QMetaObject::Call, int, void**);
    using QAnimationGroup_Event_Callback = bool (*)(QAnimationGroup*, QEvent*);
    using QAnimationGroup_Duration_Callback = int (*)();
    using QAnimationGroup_UpdateCurrentTime_Callback = void (*)(QAnimationGroup*, int);
    using QAnimationGroup_UpdateState_Callback = void (*)(QAnimationGroup*, QAbstractAnimation::State, QAbstractAnimation::State);
    using QAnimationGroup_UpdateDirection_Callback = void (*)(QAnimationGroup*, QAbstractAnimation::Direction);
    using QAnimationGroup_EventFilter_Callback = bool (*)(QAnimationGroup*, QObject*, QEvent*);
    using QAnimationGroup_TimerEvent_Callback = void (*)(QAnimationGroup*, QTimerEvent*);
    using QAnimationGroup_ChildEvent_Callback = void (*)(QAnimationGroup*, QChildEvent*);
    using QAnimationGroup_CustomEvent_Callback = void (*)(QAnimationGroup*, QEvent*);
    using QAnimationGroup_ConnectNotify_Callback = void (*)(QAnimationGroup*, const QMetaMethod&);
    using QAnimationGroup_DisconnectNotify_Callback = void (*)(QAnimationGroup*, const QMetaMethod&);
    using QAnimationGroup_Sender_Callback = QObject* (*)();
    using QAnimationGroup_SenderSignalIndex_Callback = int (*)();
    using QAnimationGroup_Receivers_Callback = int (*)(const QAnimationGroup*, const char*);
    using QAnimationGroup_IsSignalConnected_Callback = bool (*)(const QAnimationGroup*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAnimationGroup_Metacall_Callback qanimationgroup_metacall_callback = nullptr;
    QAnimationGroup_Event_Callback qanimationgroup_event_callback = nullptr;
    QAnimationGroup_Duration_Callback qanimationgroup_duration_callback = nullptr;
    QAnimationGroup_UpdateCurrentTime_Callback qanimationgroup_updatecurrenttime_callback = nullptr;
    QAnimationGroup_UpdateState_Callback qanimationgroup_updatestate_callback = nullptr;
    QAnimationGroup_UpdateDirection_Callback qanimationgroup_updatedirection_callback = nullptr;
    QAnimationGroup_EventFilter_Callback qanimationgroup_eventfilter_callback = nullptr;
    QAnimationGroup_TimerEvent_Callback qanimationgroup_timerevent_callback = nullptr;
    QAnimationGroup_ChildEvent_Callback qanimationgroup_childevent_callback = nullptr;
    QAnimationGroup_CustomEvent_Callback qanimationgroup_customevent_callback = nullptr;
    QAnimationGroup_ConnectNotify_Callback qanimationgroup_connectnotify_callback = nullptr;
    QAnimationGroup_DisconnectNotify_Callback qanimationgroup_disconnectnotify_callback = nullptr;
    QAnimationGroup_Sender_Callback qanimationgroup_sender_callback = nullptr;
    QAnimationGroup_SenderSignalIndex_Callback qanimationgroup_sendersignalindex_callback = nullptr;
    QAnimationGroup_Receivers_Callback qanimationgroup_receivers_callback = nullptr;
    QAnimationGroup_IsSignalConnected_Callback qanimationgroup_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qanimationgroup_metacall_isbase = false;
    mutable bool qanimationgroup_event_isbase = false;
    mutable bool qanimationgroup_duration_isbase = false;
    mutable bool qanimationgroup_updatecurrenttime_isbase = false;
    mutable bool qanimationgroup_updatestate_isbase = false;
    mutable bool qanimationgroup_updatedirection_isbase = false;
    mutable bool qanimationgroup_eventfilter_isbase = false;
    mutable bool qanimationgroup_timerevent_isbase = false;
    mutable bool qanimationgroup_childevent_isbase = false;
    mutable bool qanimationgroup_customevent_isbase = false;
    mutable bool qanimationgroup_connectnotify_isbase = false;
    mutable bool qanimationgroup_disconnectnotify_isbase = false;
    mutable bool qanimationgroup_sender_isbase = false;
    mutable bool qanimationgroup_sendersignalindex_isbase = false;
    mutable bool qanimationgroup_receivers_isbase = false;
    mutable bool qanimationgroup_issignalconnected_isbase = false;

  public:
    VirtualQAnimationGroup() : QAnimationGroup(){};
    VirtualQAnimationGroup(QObject* parent) : QAnimationGroup(parent){};

    ~VirtualQAnimationGroup() {
        qanimationgroup_metacall_callback = nullptr;
        qanimationgroup_event_callback = nullptr;
        qanimationgroup_duration_callback = nullptr;
        qanimationgroup_updatecurrenttime_callback = nullptr;
        qanimationgroup_updatestate_callback = nullptr;
        qanimationgroup_updatedirection_callback = nullptr;
        qanimationgroup_eventfilter_callback = nullptr;
        qanimationgroup_timerevent_callback = nullptr;
        qanimationgroup_childevent_callback = nullptr;
        qanimationgroup_customevent_callback = nullptr;
        qanimationgroup_connectnotify_callback = nullptr;
        qanimationgroup_disconnectnotify_callback = nullptr;
        qanimationgroup_sender_callback = nullptr;
        qanimationgroup_sendersignalindex_callback = nullptr;
        qanimationgroup_receivers_callback = nullptr;
        qanimationgroup_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAnimationGroup_Metacall_Callback(QAnimationGroup_Metacall_Callback cb) { qanimationgroup_metacall_callback = cb; }
    void setQAnimationGroup_Event_Callback(QAnimationGroup_Event_Callback cb) { qanimationgroup_event_callback = cb; }
    void setQAnimationGroup_Duration_Callback(QAnimationGroup_Duration_Callback cb) { qanimationgroup_duration_callback = cb; }
    void setQAnimationGroup_UpdateCurrentTime_Callback(QAnimationGroup_UpdateCurrentTime_Callback cb) { qanimationgroup_updatecurrenttime_callback = cb; }
    void setQAnimationGroup_UpdateState_Callback(QAnimationGroup_UpdateState_Callback cb) { qanimationgroup_updatestate_callback = cb; }
    void setQAnimationGroup_UpdateDirection_Callback(QAnimationGroup_UpdateDirection_Callback cb) { qanimationgroup_updatedirection_callback = cb; }
    void setQAnimationGroup_EventFilter_Callback(QAnimationGroup_EventFilter_Callback cb) { qanimationgroup_eventfilter_callback = cb; }
    void setQAnimationGroup_TimerEvent_Callback(QAnimationGroup_TimerEvent_Callback cb) { qanimationgroup_timerevent_callback = cb; }
    void setQAnimationGroup_ChildEvent_Callback(QAnimationGroup_ChildEvent_Callback cb) { qanimationgroup_childevent_callback = cb; }
    void setQAnimationGroup_CustomEvent_Callback(QAnimationGroup_CustomEvent_Callback cb) { qanimationgroup_customevent_callback = cb; }
    void setQAnimationGroup_ConnectNotify_Callback(QAnimationGroup_ConnectNotify_Callback cb) { qanimationgroup_connectnotify_callback = cb; }
    void setQAnimationGroup_DisconnectNotify_Callback(QAnimationGroup_DisconnectNotify_Callback cb) { qanimationgroup_disconnectnotify_callback = cb; }
    void setQAnimationGroup_Sender_Callback(QAnimationGroup_Sender_Callback cb) { qanimationgroup_sender_callback = cb; }
    void setQAnimationGroup_SenderSignalIndex_Callback(QAnimationGroup_SenderSignalIndex_Callback cb) { qanimationgroup_sendersignalindex_callback = cb; }
    void setQAnimationGroup_Receivers_Callback(QAnimationGroup_Receivers_Callback cb) { qanimationgroup_receivers_callback = cb; }
    void setQAnimationGroup_IsSignalConnected_Callback(QAnimationGroup_IsSignalConnected_Callback cb) { qanimationgroup_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAnimationGroup_Metacall_IsBase(bool value) const { qanimationgroup_metacall_isbase = value; }
    void setQAnimationGroup_Event_IsBase(bool value) const { qanimationgroup_event_isbase = value; }
    void setQAnimationGroup_Duration_IsBase(bool value) const { qanimationgroup_duration_isbase = value; }
    void setQAnimationGroup_UpdateCurrentTime_IsBase(bool value) const { qanimationgroup_updatecurrenttime_isbase = value; }
    void setQAnimationGroup_UpdateState_IsBase(bool value) const { qanimationgroup_updatestate_isbase = value; }
    void setQAnimationGroup_UpdateDirection_IsBase(bool value) const { qanimationgroup_updatedirection_isbase = value; }
    void setQAnimationGroup_EventFilter_IsBase(bool value) const { qanimationgroup_eventfilter_isbase = value; }
    void setQAnimationGroup_TimerEvent_IsBase(bool value) const { qanimationgroup_timerevent_isbase = value; }
    void setQAnimationGroup_ChildEvent_IsBase(bool value) const { qanimationgroup_childevent_isbase = value; }
    void setQAnimationGroup_CustomEvent_IsBase(bool value) const { qanimationgroup_customevent_isbase = value; }
    void setQAnimationGroup_ConnectNotify_IsBase(bool value) const { qanimationgroup_connectnotify_isbase = value; }
    void setQAnimationGroup_DisconnectNotify_IsBase(bool value) const { qanimationgroup_disconnectnotify_isbase = value; }
    void setQAnimationGroup_Sender_IsBase(bool value) const { qanimationgroup_sender_isbase = value; }
    void setQAnimationGroup_SenderSignalIndex_IsBase(bool value) const { qanimationgroup_sendersignalindex_isbase = value; }
    void setQAnimationGroup_Receivers_IsBase(bool value) const { qanimationgroup_receivers_isbase = value; }
    void setQAnimationGroup_IsSignalConnected_IsBase(bool value) const { qanimationgroup_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qanimationgroup_metacall_isbase) {
            qanimationgroup_metacall_isbase = false;
            return QAnimationGroup::qt_metacall(param1, param2, param3);
        } else if (qanimationgroup_metacall_callback != nullptr) {
            return qanimationgroup_metacall_callback(this, param1, param2, param3);
        } else {
            return QAnimationGroup::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qanimationgroup_event_isbase) {
            qanimationgroup_event_isbase = false;
            return QAnimationGroup::event(event);
        } else if (qanimationgroup_event_callback != nullptr) {
            return qanimationgroup_event_callback(this, event);
        } else {
            return QAnimationGroup::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        return qanimationgroup_duration_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int currentTime) override {
        qanimationgroup_updatecurrenttime_callback(this, currentTime);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qanimationgroup_updatestate_isbase) {
            qanimationgroup_updatestate_isbase = false;
            QAnimationGroup::updateState(newState, oldState);
        } else if (qanimationgroup_updatestate_callback != nullptr) {
            qanimationgroup_updatestate_callback(this, newState, oldState);
        } else {
            QAnimationGroup::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qanimationgroup_updatedirection_isbase) {
            qanimationgroup_updatedirection_isbase = false;
            QAnimationGroup::updateDirection(direction);
        } else if (qanimationgroup_updatedirection_callback != nullptr) {
            qanimationgroup_updatedirection_callback(this, direction);
        } else {
            QAnimationGroup::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qanimationgroup_eventfilter_isbase) {
            qanimationgroup_eventfilter_isbase = false;
            return QAnimationGroup::eventFilter(watched, event);
        } else if (qanimationgroup_eventfilter_callback != nullptr) {
            return qanimationgroup_eventfilter_callback(this, watched, event);
        } else {
            return QAnimationGroup::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qanimationgroup_timerevent_isbase) {
            qanimationgroup_timerevent_isbase = false;
            QAnimationGroup::timerEvent(event);
        } else if (qanimationgroup_timerevent_callback != nullptr) {
            qanimationgroup_timerevent_callback(this, event);
        } else {
            QAnimationGroup::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qanimationgroup_childevent_isbase) {
            qanimationgroup_childevent_isbase = false;
            QAnimationGroup::childEvent(event);
        } else if (qanimationgroup_childevent_callback != nullptr) {
            qanimationgroup_childevent_callback(this, event);
        } else {
            QAnimationGroup::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qanimationgroup_customevent_isbase) {
            qanimationgroup_customevent_isbase = false;
            QAnimationGroup::customEvent(event);
        } else if (qanimationgroup_customevent_callback != nullptr) {
            qanimationgroup_customevent_callback(this, event);
        } else {
            QAnimationGroup::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qanimationgroup_connectnotify_isbase) {
            qanimationgroup_connectnotify_isbase = false;
            QAnimationGroup::connectNotify(signal);
        } else if (qanimationgroup_connectnotify_callback != nullptr) {
            qanimationgroup_connectnotify_callback(this, signal);
        } else {
            QAnimationGroup::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qanimationgroup_disconnectnotify_isbase) {
            qanimationgroup_disconnectnotify_isbase = false;
            QAnimationGroup::disconnectNotify(signal);
        } else if (qanimationgroup_disconnectnotify_callback != nullptr) {
            qanimationgroup_disconnectnotify_callback(this, signal);
        } else {
            QAnimationGroup::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qanimationgroup_sender_isbase) {
            qanimationgroup_sender_isbase = false;
            return QAnimationGroup::sender();
        } else if (qanimationgroup_sender_callback != nullptr) {
            return qanimationgroup_sender_callback();
        } else {
            return QAnimationGroup::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qanimationgroup_sendersignalindex_isbase) {
            qanimationgroup_sendersignalindex_isbase = false;
            return QAnimationGroup::senderSignalIndex();
        } else if (qanimationgroup_sendersignalindex_callback != nullptr) {
            return qanimationgroup_sendersignalindex_callback();
        } else {
            return QAnimationGroup::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qanimationgroup_receivers_isbase) {
            qanimationgroup_receivers_isbase = false;
            return QAnimationGroup::receivers(signal);
        } else if (qanimationgroup_receivers_callback != nullptr) {
            return qanimationgroup_receivers_callback(this, signal);
        } else {
            return QAnimationGroup::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qanimationgroup_issignalconnected_isbase) {
            qanimationgroup_issignalconnected_isbase = false;
            return QAnimationGroup::isSignalConnected(signal);
        } else if (qanimationgroup_issignalconnected_callback != nullptr) {
            return qanimationgroup_issignalconnected_callback(this, signal);
        } else {
            return QAnimationGroup::isSignalConnected(signal);
        }
    }
};

#endif

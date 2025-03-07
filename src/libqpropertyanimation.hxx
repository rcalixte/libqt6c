#pragma once
#ifndef SRCC_LIBVIRTUALQPROPERTYANIMATION_H
#define SRCC_LIBVIRTUALQPROPERTYANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPropertyAnimation so that we can call protected methods
class VirtualQPropertyAnimation : public QPropertyAnimation {

  public:
    // Virtual class public types (including callbacks)
    using QPropertyAnimation_Metacall_Callback = int (*)(QPropertyAnimation*, QMetaObject::Call, int, void**);
    using QPropertyAnimation_Event_Callback = bool (*)(QPropertyAnimation*, QEvent*);
    using QPropertyAnimation_UpdateCurrentValue_Callback = void (*)(QPropertyAnimation*, const QVariant&);
    using QPropertyAnimation_UpdateState_Callback = void (*)(QPropertyAnimation*, QAbstractAnimation::State, QAbstractAnimation::State);
    using QPropertyAnimation_Duration_Callback = int (*)();
    using QPropertyAnimation_UpdateCurrentTime_Callback = void (*)(QPropertyAnimation*, int);
    using QPropertyAnimation_Interpolated_Callback = QVariant (*)(const QPropertyAnimation*, const QVariant&, const QVariant&, qreal);
    using QPropertyAnimation_UpdateDirection_Callback = void (*)(QPropertyAnimation*, QAbstractAnimation::Direction);
    using QPropertyAnimation_EventFilter_Callback = bool (*)(QPropertyAnimation*, QObject*, QEvent*);
    using QPropertyAnimation_TimerEvent_Callback = void (*)(QPropertyAnimation*, QTimerEvent*);
    using QPropertyAnimation_ChildEvent_Callback = void (*)(QPropertyAnimation*, QChildEvent*);
    using QPropertyAnimation_CustomEvent_Callback = void (*)(QPropertyAnimation*, QEvent*);
    using QPropertyAnimation_ConnectNotify_Callback = void (*)(QPropertyAnimation*, const QMetaMethod&);
    using QPropertyAnimation_DisconnectNotify_Callback = void (*)(QPropertyAnimation*, const QMetaMethod&);
    using QPropertyAnimation_Sender_Callback = QObject* (*)();
    using QPropertyAnimation_SenderSignalIndex_Callback = int (*)();
    using QPropertyAnimation_Receivers_Callback = int (*)(const QPropertyAnimation*, const char*);
    using QPropertyAnimation_IsSignalConnected_Callback = bool (*)(const QPropertyAnimation*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPropertyAnimation_Metacall_Callback qpropertyanimation_metacall_callback = nullptr;
    QPropertyAnimation_Event_Callback qpropertyanimation_event_callback = nullptr;
    QPropertyAnimation_UpdateCurrentValue_Callback qpropertyanimation_updatecurrentvalue_callback = nullptr;
    QPropertyAnimation_UpdateState_Callback qpropertyanimation_updatestate_callback = nullptr;
    QPropertyAnimation_Duration_Callback qpropertyanimation_duration_callback = nullptr;
    QPropertyAnimation_UpdateCurrentTime_Callback qpropertyanimation_updatecurrenttime_callback = nullptr;
    QPropertyAnimation_Interpolated_Callback qpropertyanimation_interpolated_callback = nullptr;
    QPropertyAnimation_UpdateDirection_Callback qpropertyanimation_updatedirection_callback = nullptr;
    QPropertyAnimation_EventFilter_Callback qpropertyanimation_eventfilter_callback = nullptr;
    QPropertyAnimation_TimerEvent_Callback qpropertyanimation_timerevent_callback = nullptr;
    QPropertyAnimation_ChildEvent_Callback qpropertyanimation_childevent_callback = nullptr;
    QPropertyAnimation_CustomEvent_Callback qpropertyanimation_customevent_callback = nullptr;
    QPropertyAnimation_ConnectNotify_Callback qpropertyanimation_connectnotify_callback = nullptr;
    QPropertyAnimation_DisconnectNotify_Callback qpropertyanimation_disconnectnotify_callback = nullptr;
    QPropertyAnimation_Sender_Callback qpropertyanimation_sender_callback = nullptr;
    QPropertyAnimation_SenderSignalIndex_Callback qpropertyanimation_sendersignalindex_callback = nullptr;
    QPropertyAnimation_Receivers_Callback qpropertyanimation_receivers_callback = nullptr;
    QPropertyAnimation_IsSignalConnected_Callback qpropertyanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpropertyanimation_metacall_isbase = false;
    mutable bool qpropertyanimation_event_isbase = false;
    mutable bool qpropertyanimation_updatecurrentvalue_isbase = false;
    mutable bool qpropertyanimation_updatestate_isbase = false;
    mutable bool qpropertyanimation_duration_isbase = false;
    mutable bool qpropertyanimation_updatecurrenttime_isbase = false;
    mutable bool qpropertyanimation_interpolated_isbase = false;
    mutable bool qpropertyanimation_updatedirection_isbase = false;
    mutable bool qpropertyanimation_eventfilter_isbase = false;
    mutable bool qpropertyanimation_timerevent_isbase = false;
    mutable bool qpropertyanimation_childevent_isbase = false;
    mutable bool qpropertyanimation_customevent_isbase = false;
    mutable bool qpropertyanimation_connectnotify_isbase = false;
    mutable bool qpropertyanimation_disconnectnotify_isbase = false;
    mutable bool qpropertyanimation_sender_isbase = false;
    mutable bool qpropertyanimation_sendersignalindex_isbase = false;
    mutable bool qpropertyanimation_receivers_isbase = false;
    mutable bool qpropertyanimation_issignalconnected_isbase = false;

  public:
    VirtualQPropertyAnimation() : QPropertyAnimation(){};
    VirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName) : QPropertyAnimation(target, propertyName){};
    VirtualQPropertyAnimation(QObject* parent) : QPropertyAnimation(parent){};
    VirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName, QObject* parent) : QPropertyAnimation(target, propertyName, parent){};

    ~VirtualQPropertyAnimation() {
        qpropertyanimation_metacall_callback = nullptr;
        qpropertyanimation_event_callback = nullptr;
        qpropertyanimation_updatecurrentvalue_callback = nullptr;
        qpropertyanimation_updatestate_callback = nullptr;
        qpropertyanimation_duration_callback = nullptr;
        qpropertyanimation_updatecurrenttime_callback = nullptr;
        qpropertyanimation_interpolated_callback = nullptr;
        qpropertyanimation_updatedirection_callback = nullptr;
        qpropertyanimation_eventfilter_callback = nullptr;
        qpropertyanimation_timerevent_callback = nullptr;
        qpropertyanimation_childevent_callback = nullptr;
        qpropertyanimation_customevent_callback = nullptr;
        qpropertyanimation_connectnotify_callback = nullptr;
        qpropertyanimation_disconnectnotify_callback = nullptr;
        qpropertyanimation_sender_callback = nullptr;
        qpropertyanimation_sendersignalindex_callback = nullptr;
        qpropertyanimation_receivers_callback = nullptr;
        qpropertyanimation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPropertyAnimation_Metacall_Callback(QPropertyAnimation_Metacall_Callback cb) { qpropertyanimation_metacall_callback = cb; }
    void setQPropertyAnimation_Event_Callback(QPropertyAnimation_Event_Callback cb) { qpropertyanimation_event_callback = cb; }
    void setQPropertyAnimation_UpdateCurrentValue_Callback(QPropertyAnimation_UpdateCurrentValue_Callback cb) { qpropertyanimation_updatecurrentvalue_callback = cb; }
    void setQPropertyAnimation_UpdateState_Callback(QPropertyAnimation_UpdateState_Callback cb) { qpropertyanimation_updatestate_callback = cb; }
    void setQPropertyAnimation_Duration_Callback(QPropertyAnimation_Duration_Callback cb) { qpropertyanimation_duration_callback = cb; }
    void setQPropertyAnimation_UpdateCurrentTime_Callback(QPropertyAnimation_UpdateCurrentTime_Callback cb) { qpropertyanimation_updatecurrenttime_callback = cb; }
    void setQPropertyAnimation_Interpolated_Callback(QPropertyAnimation_Interpolated_Callback cb) { qpropertyanimation_interpolated_callback = cb; }
    void setQPropertyAnimation_UpdateDirection_Callback(QPropertyAnimation_UpdateDirection_Callback cb) { qpropertyanimation_updatedirection_callback = cb; }
    void setQPropertyAnimation_EventFilter_Callback(QPropertyAnimation_EventFilter_Callback cb) { qpropertyanimation_eventfilter_callback = cb; }
    void setQPropertyAnimation_TimerEvent_Callback(QPropertyAnimation_TimerEvent_Callback cb) { qpropertyanimation_timerevent_callback = cb; }
    void setQPropertyAnimation_ChildEvent_Callback(QPropertyAnimation_ChildEvent_Callback cb) { qpropertyanimation_childevent_callback = cb; }
    void setQPropertyAnimation_CustomEvent_Callback(QPropertyAnimation_CustomEvent_Callback cb) { qpropertyanimation_customevent_callback = cb; }
    void setQPropertyAnimation_ConnectNotify_Callback(QPropertyAnimation_ConnectNotify_Callback cb) { qpropertyanimation_connectnotify_callback = cb; }
    void setQPropertyAnimation_DisconnectNotify_Callback(QPropertyAnimation_DisconnectNotify_Callback cb) { qpropertyanimation_disconnectnotify_callback = cb; }
    void setQPropertyAnimation_Sender_Callback(QPropertyAnimation_Sender_Callback cb) { qpropertyanimation_sender_callback = cb; }
    void setQPropertyAnimation_SenderSignalIndex_Callback(QPropertyAnimation_SenderSignalIndex_Callback cb) { qpropertyanimation_sendersignalindex_callback = cb; }
    void setQPropertyAnimation_Receivers_Callback(QPropertyAnimation_Receivers_Callback cb) { qpropertyanimation_receivers_callback = cb; }
    void setQPropertyAnimation_IsSignalConnected_Callback(QPropertyAnimation_IsSignalConnected_Callback cb) { qpropertyanimation_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPropertyAnimation_Metacall_IsBase(bool value) const { qpropertyanimation_metacall_isbase = value; }
    void setQPropertyAnimation_Event_IsBase(bool value) const { qpropertyanimation_event_isbase = value; }
    void setQPropertyAnimation_UpdateCurrentValue_IsBase(bool value) const { qpropertyanimation_updatecurrentvalue_isbase = value; }
    void setQPropertyAnimation_UpdateState_IsBase(bool value) const { qpropertyanimation_updatestate_isbase = value; }
    void setQPropertyAnimation_Duration_IsBase(bool value) const { qpropertyanimation_duration_isbase = value; }
    void setQPropertyAnimation_UpdateCurrentTime_IsBase(bool value) const { qpropertyanimation_updatecurrenttime_isbase = value; }
    void setQPropertyAnimation_Interpolated_IsBase(bool value) const { qpropertyanimation_interpolated_isbase = value; }
    void setQPropertyAnimation_UpdateDirection_IsBase(bool value) const { qpropertyanimation_updatedirection_isbase = value; }
    void setQPropertyAnimation_EventFilter_IsBase(bool value) const { qpropertyanimation_eventfilter_isbase = value; }
    void setQPropertyAnimation_TimerEvent_IsBase(bool value) const { qpropertyanimation_timerevent_isbase = value; }
    void setQPropertyAnimation_ChildEvent_IsBase(bool value) const { qpropertyanimation_childevent_isbase = value; }
    void setQPropertyAnimation_CustomEvent_IsBase(bool value) const { qpropertyanimation_customevent_isbase = value; }
    void setQPropertyAnimation_ConnectNotify_IsBase(bool value) const { qpropertyanimation_connectnotify_isbase = value; }
    void setQPropertyAnimation_DisconnectNotify_IsBase(bool value) const { qpropertyanimation_disconnectnotify_isbase = value; }
    void setQPropertyAnimation_Sender_IsBase(bool value) const { qpropertyanimation_sender_isbase = value; }
    void setQPropertyAnimation_SenderSignalIndex_IsBase(bool value) const { qpropertyanimation_sendersignalindex_isbase = value; }
    void setQPropertyAnimation_Receivers_IsBase(bool value) const { qpropertyanimation_receivers_isbase = value; }
    void setQPropertyAnimation_IsSignalConnected_IsBase(bool value) const { qpropertyanimation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpropertyanimation_metacall_isbase) {
            qpropertyanimation_metacall_isbase = false;
            return QPropertyAnimation::qt_metacall(param1, param2, param3);
        } else if (qpropertyanimation_metacall_callback != nullptr) {
            return qpropertyanimation_metacall_callback(this, param1, param2, param3);
        } else {
            return QPropertyAnimation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpropertyanimation_event_isbase) {
            qpropertyanimation_event_isbase = false;
            return QPropertyAnimation::event(event);
        } else if (qpropertyanimation_event_callback != nullptr) {
            return qpropertyanimation_event_callback(this, event);
        } else {
            return QPropertyAnimation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentValue(const QVariant& value) override {
        if (qpropertyanimation_updatecurrentvalue_isbase) {
            qpropertyanimation_updatecurrentvalue_isbase = false;
            QPropertyAnimation::updateCurrentValue(value);
        } else if (qpropertyanimation_updatecurrentvalue_callback != nullptr) {
            qpropertyanimation_updatecurrentvalue_callback(this, value);
        } else {
            QPropertyAnimation::updateCurrentValue(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qpropertyanimation_updatestate_isbase) {
            qpropertyanimation_updatestate_isbase = false;
            QPropertyAnimation::updateState(newState, oldState);
        } else if (qpropertyanimation_updatestate_callback != nullptr) {
            qpropertyanimation_updatestate_callback(this, newState, oldState);
        } else {
            QPropertyAnimation::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qpropertyanimation_duration_isbase) {
            qpropertyanimation_duration_isbase = false;
            return QPropertyAnimation::duration();
        } else if (qpropertyanimation_duration_callback != nullptr) {
            return qpropertyanimation_duration_callback();
        } else {
            return QPropertyAnimation::duration();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qpropertyanimation_updatecurrenttime_isbase) {
            qpropertyanimation_updatecurrenttime_isbase = false;
            QPropertyAnimation::updateCurrentTime(param1);
        } else if (qpropertyanimation_updatecurrenttime_callback != nullptr) {
            qpropertyanimation_updatecurrenttime_callback(this, param1);
        } else {
            QPropertyAnimation::updateCurrentTime(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
        if (qpropertyanimation_interpolated_isbase) {
            qpropertyanimation_interpolated_isbase = false;
            return QPropertyAnimation::interpolated(from, to, progress);
        } else if (qpropertyanimation_interpolated_callback != nullptr) {
            return qpropertyanimation_interpolated_callback(this, from, to, progress);
        } else {
            return QPropertyAnimation::interpolated(from, to, progress);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qpropertyanimation_updatedirection_isbase) {
            qpropertyanimation_updatedirection_isbase = false;
            QPropertyAnimation::updateDirection(direction);
        } else if (qpropertyanimation_updatedirection_callback != nullptr) {
            qpropertyanimation_updatedirection_callback(this, direction);
        } else {
            QPropertyAnimation::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpropertyanimation_eventfilter_isbase) {
            qpropertyanimation_eventfilter_isbase = false;
            return QPropertyAnimation::eventFilter(watched, event);
        } else if (qpropertyanimation_eventfilter_callback != nullptr) {
            return qpropertyanimation_eventfilter_callback(this, watched, event);
        } else {
            return QPropertyAnimation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpropertyanimation_timerevent_isbase) {
            qpropertyanimation_timerevent_isbase = false;
            QPropertyAnimation::timerEvent(event);
        } else if (qpropertyanimation_timerevent_callback != nullptr) {
            qpropertyanimation_timerevent_callback(this, event);
        } else {
            QPropertyAnimation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpropertyanimation_childevent_isbase) {
            qpropertyanimation_childevent_isbase = false;
            QPropertyAnimation::childEvent(event);
        } else if (qpropertyanimation_childevent_callback != nullptr) {
            qpropertyanimation_childevent_callback(this, event);
        } else {
            QPropertyAnimation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpropertyanimation_customevent_isbase) {
            qpropertyanimation_customevent_isbase = false;
            QPropertyAnimation::customEvent(event);
        } else if (qpropertyanimation_customevent_callback != nullptr) {
            qpropertyanimation_customevent_callback(this, event);
        } else {
            QPropertyAnimation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpropertyanimation_connectnotify_isbase) {
            qpropertyanimation_connectnotify_isbase = false;
            QPropertyAnimation::connectNotify(signal);
        } else if (qpropertyanimation_connectnotify_callback != nullptr) {
            qpropertyanimation_connectnotify_callback(this, signal);
        } else {
            QPropertyAnimation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpropertyanimation_disconnectnotify_isbase) {
            qpropertyanimation_disconnectnotify_isbase = false;
            QPropertyAnimation::disconnectNotify(signal);
        } else if (qpropertyanimation_disconnectnotify_callback != nullptr) {
            qpropertyanimation_disconnectnotify_callback(this, signal);
        } else {
            QPropertyAnimation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpropertyanimation_sender_isbase) {
            qpropertyanimation_sender_isbase = false;
            return QPropertyAnimation::sender();
        } else if (qpropertyanimation_sender_callback != nullptr) {
            return qpropertyanimation_sender_callback();
        } else {
            return QPropertyAnimation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpropertyanimation_sendersignalindex_isbase) {
            qpropertyanimation_sendersignalindex_isbase = false;
            return QPropertyAnimation::senderSignalIndex();
        } else if (qpropertyanimation_sendersignalindex_callback != nullptr) {
            return qpropertyanimation_sendersignalindex_callback();
        } else {
            return QPropertyAnimation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpropertyanimation_receivers_isbase) {
            qpropertyanimation_receivers_isbase = false;
            return QPropertyAnimation::receivers(signal);
        } else if (qpropertyanimation_receivers_callback != nullptr) {
            return qpropertyanimation_receivers_callback(this, signal);
        } else {
            return QPropertyAnimation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpropertyanimation_issignalconnected_isbase) {
            qpropertyanimation_issignalconnected_isbase = false;
            return QPropertyAnimation::isSignalConnected(signal);
        } else if (qpropertyanimation_issignalconnected_callback != nullptr) {
            return qpropertyanimation_issignalconnected_callback(this, signal);
        } else {
            return QPropertyAnimation::isSignalConnected(signal);
        }
    }
};

#endif

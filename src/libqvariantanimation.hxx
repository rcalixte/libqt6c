#pragma once
#ifndef SRCC_LIBVIRTUALQVARIANTANIMATION_H
#define SRCC_LIBVIRTUALQVARIANTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QVariantAnimation so that we can call protected methods
class VirtualQVariantAnimation : public QVariantAnimation {

  public:
    // Virtual class public types (including callbacks)
    using QVariantAnimation_Metacall_Callback = int (*)(QVariantAnimation*, QMetaObject::Call, int, void**);
    using QVariantAnimation_Duration_Callback = int (*)();
    using QVariantAnimation_Event_Callback = bool (*)(QVariantAnimation*, QEvent*);
    using QVariantAnimation_UpdateCurrentTime_Callback = void (*)(QVariantAnimation*, int);
    using QVariantAnimation_UpdateState_Callback = void (*)(QVariantAnimation*, QAbstractAnimation::State, QAbstractAnimation::State);
    using QVariantAnimation_UpdateCurrentValue_Callback = void (*)(QVariantAnimation*, const QVariant&);
    using QVariantAnimation_Interpolated_Callback = QVariant (*)(const QVariantAnimation*, const QVariant&, const QVariant&, qreal);
    using QVariantAnimation_UpdateDirection_Callback = void (*)(QVariantAnimation*, QAbstractAnimation::Direction);
    using QVariantAnimation_EventFilter_Callback = bool (*)(QVariantAnimation*, QObject*, QEvent*);
    using QVariantAnimation_TimerEvent_Callback = void (*)(QVariantAnimation*, QTimerEvent*);
    using QVariantAnimation_ChildEvent_Callback = void (*)(QVariantAnimation*, QChildEvent*);
    using QVariantAnimation_CustomEvent_Callback = void (*)(QVariantAnimation*, QEvent*);
    using QVariantAnimation_ConnectNotify_Callback = void (*)(QVariantAnimation*, const QMetaMethod&);
    using QVariantAnimation_DisconnectNotify_Callback = void (*)(QVariantAnimation*, const QMetaMethod&);
    using QVariantAnimation_Sender_Callback = QObject* (*)();
    using QVariantAnimation_SenderSignalIndex_Callback = int (*)();
    using QVariantAnimation_Receivers_Callback = int (*)(const QVariantAnimation*, const char*);
    using QVariantAnimation_IsSignalConnected_Callback = bool (*)(const QVariantAnimation*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QVariantAnimation_Metacall_Callback qvariantanimation_metacall_callback = nullptr;
    QVariantAnimation_Duration_Callback qvariantanimation_duration_callback = nullptr;
    QVariantAnimation_Event_Callback qvariantanimation_event_callback = nullptr;
    QVariantAnimation_UpdateCurrentTime_Callback qvariantanimation_updatecurrenttime_callback = nullptr;
    QVariantAnimation_UpdateState_Callback qvariantanimation_updatestate_callback = nullptr;
    QVariantAnimation_UpdateCurrentValue_Callback qvariantanimation_updatecurrentvalue_callback = nullptr;
    QVariantAnimation_Interpolated_Callback qvariantanimation_interpolated_callback = nullptr;
    QVariantAnimation_UpdateDirection_Callback qvariantanimation_updatedirection_callback = nullptr;
    QVariantAnimation_EventFilter_Callback qvariantanimation_eventfilter_callback = nullptr;
    QVariantAnimation_TimerEvent_Callback qvariantanimation_timerevent_callback = nullptr;
    QVariantAnimation_ChildEvent_Callback qvariantanimation_childevent_callback = nullptr;
    QVariantAnimation_CustomEvent_Callback qvariantanimation_customevent_callback = nullptr;
    QVariantAnimation_ConnectNotify_Callback qvariantanimation_connectnotify_callback = nullptr;
    QVariantAnimation_DisconnectNotify_Callback qvariantanimation_disconnectnotify_callback = nullptr;
    QVariantAnimation_Sender_Callback qvariantanimation_sender_callback = nullptr;
    QVariantAnimation_SenderSignalIndex_Callback qvariantanimation_sendersignalindex_callback = nullptr;
    QVariantAnimation_Receivers_Callback qvariantanimation_receivers_callback = nullptr;
    QVariantAnimation_IsSignalConnected_Callback qvariantanimation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvariantanimation_metacall_isbase = false;
    mutable bool qvariantanimation_duration_isbase = false;
    mutable bool qvariantanimation_event_isbase = false;
    mutable bool qvariantanimation_updatecurrenttime_isbase = false;
    mutable bool qvariantanimation_updatestate_isbase = false;
    mutable bool qvariantanimation_updatecurrentvalue_isbase = false;
    mutable bool qvariantanimation_interpolated_isbase = false;
    mutable bool qvariantanimation_updatedirection_isbase = false;
    mutable bool qvariantanimation_eventfilter_isbase = false;
    mutable bool qvariantanimation_timerevent_isbase = false;
    mutable bool qvariantanimation_childevent_isbase = false;
    mutable bool qvariantanimation_customevent_isbase = false;
    mutable bool qvariantanimation_connectnotify_isbase = false;
    mutable bool qvariantanimation_disconnectnotify_isbase = false;
    mutable bool qvariantanimation_sender_isbase = false;
    mutable bool qvariantanimation_sendersignalindex_isbase = false;
    mutable bool qvariantanimation_receivers_isbase = false;
    mutable bool qvariantanimation_issignalconnected_isbase = false;

  public:
    VirtualQVariantAnimation() : QVariantAnimation(){};
    VirtualQVariantAnimation(QObject* parent) : QVariantAnimation(parent){};

    ~VirtualQVariantAnimation() {
        qvariantanimation_metacall_callback = nullptr;
        qvariantanimation_duration_callback = nullptr;
        qvariantanimation_event_callback = nullptr;
        qvariantanimation_updatecurrenttime_callback = nullptr;
        qvariantanimation_updatestate_callback = nullptr;
        qvariantanimation_updatecurrentvalue_callback = nullptr;
        qvariantanimation_interpolated_callback = nullptr;
        qvariantanimation_updatedirection_callback = nullptr;
        qvariantanimation_eventfilter_callback = nullptr;
        qvariantanimation_timerevent_callback = nullptr;
        qvariantanimation_childevent_callback = nullptr;
        qvariantanimation_customevent_callback = nullptr;
        qvariantanimation_connectnotify_callback = nullptr;
        qvariantanimation_disconnectnotify_callback = nullptr;
        qvariantanimation_sender_callback = nullptr;
        qvariantanimation_sendersignalindex_callback = nullptr;
        qvariantanimation_receivers_callback = nullptr;
        qvariantanimation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQVariantAnimation_Metacall_Callback(QVariantAnimation_Metacall_Callback cb) { qvariantanimation_metacall_callback = cb; }
    void setQVariantAnimation_Duration_Callback(QVariantAnimation_Duration_Callback cb) { qvariantanimation_duration_callback = cb; }
    void setQVariantAnimation_Event_Callback(QVariantAnimation_Event_Callback cb) { qvariantanimation_event_callback = cb; }
    void setQVariantAnimation_UpdateCurrentTime_Callback(QVariantAnimation_UpdateCurrentTime_Callback cb) { qvariantanimation_updatecurrenttime_callback = cb; }
    void setQVariantAnimation_UpdateState_Callback(QVariantAnimation_UpdateState_Callback cb) { qvariantanimation_updatestate_callback = cb; }
    void setQVariantAnimation_UpdateCurrentValue_Callback(QVariantAnimation_UpdateCurrentValue_Callback cb) { qvariantanimation_updatecurrentvalue_callback = cb; }
    void setQVariantAnimation_Interpolated_Callback(QVariantAnimation_Interpolated_Callback cb) { qvariantanimation_interpolated_callback = cb; }
    void setQVariantAnimation_UpdateDirection_Callback(QVariantAnimation_UpdateDirection_Callback cb) { qvariantanimation_updatedirection_callback = cb; }
    void setQVariantAnimation_EventFilter_Callback(QVariantAnimation_EventFilter_Callback cb) { qvariantanimation_eventfilter_callback = cb; }
    void setQVariantAnimation_TimerEvent_Callback(QVariantAnimation_TimerEvent_Callback cb) { qvariantanimation_timerevent_callback = cb; }
    void setQVariantAnimation_ChildEvent_Callback(QVariantAnimation_ChildEvent_Callback cb) { qvariantanimation_childevent_callback = cb; }
    void setQVariantAnimation_CustomEvent_Callback(QVariantAnimation_CustomEvent_Callback cb) { qvariantanimation_customevent_callback = cb; }
    void setQVariantAnimation_ConnectNotify_Callback(QVariantAnimation_ConnectNotify_Callback cb) { qvariantanimation_connectnotify_callback = cb; }
    void setQVariantAnimation_DisconnectNotify_Callback(QVariantAnimation_DisconnectNotify_Callback cb) { qvariantanimation_disconnectnotify_callback = cb; }
    void setQVariantAnimation_Sender_Callback(QVariantAnimation_Sender_Callback cb) { qvariantanimation_sender_callback = cb; }
    void setQVariantAnimation_SenderSignalIndex_Callback(QVariantAnimation_SenderSignalIndex_Callback cb) { qvariantanimation_sendersignalindex_callback = cb; }
    void setQVariantAnimation_Receivers_Callback(QVariantAnimation_Receivers_Callback cb) { qvariantanimation_receivers_callback = cb; }
    void setQVariantAnimation_IsSignalConnected_Callback(QVariantAnimation_IsSignalConnected_Callback cb) { qvariantanimation_issignalconnected_callback = cb; }

    // Base flag setters
    void setQVariantAnimation_Metacall_IsBase(bool value) const { qvariantanimation_metacall_isbase = value; }
    void setQVariantAnimation_Duration_IsBase(bool value) const { qvariantanimation_duration_isbase = value; }
    void setQVariantAnimation_Event_IsBase(bool value) const { qvariantanimation_event_isbase = value; }
    void setQVariantAnimation_UpdateCurrentTime_IsBase(bool value) const { qvariantanimation_updatecurrenttime_isbase = value; }
    void setQVariantAnimation_UpdateState_IsBase(bool value) const { qvariantanimation_updatestate_isbase = value; }
    void setQVariantAnimation_UpdateCurrentValue_IsBase(bool value) const { qvariantanimation_updatecurrentvalue_isbase = value; }
    void setQVariantAnimation_Interpolated_IsBase(bool value) const { qvariantanimation_interpolated_isbase = value; }
    void setQVariantAnimation_UpdateDirection_IsBase(bool value) const { qvariantanimation_updatedirection_isbase = value; }
    void setQVariantAnimation_EventFilter_IsBase(bool value) const { qvariantanimation_eventfilter_isbase = value; }
    void setQVariantAnimation_TimerEvent_IsBase(bool value) const { qvariantanimation_timerevent_isbase = value; }
    void setQVariantAnimation_ChildEvent_IsBase(bool value) const { qvariantanimation_childevent_isbase = value; }
    void setQVariantAnimation_CustomEvent_IsBase(bool value) const { qvariantanimation_customevent_isbase = value; }
    void setQVariantAnimation_ConnectNotify_IsBase(bool value) const { qvariantanimation_connectnotify_isbase = value; }
    void setQVariantAnimation_DisconnectNotify_IsBase(bool value) const { qvariantanimation_disconnectnotify_isbase = value; }
    void setQVariantAnimation_Sender_IsBase(bool value) const { qvariantanimation_sender_isbase = value; }
    void setQVariantAnimation_SenderSignalIndex_IsBase(bool value) const { qvariantanimation_sendersignalindex_isbase = value; }
    void setQVariantAnimation_Receivers_IsBase(bool value) const { qvariantanimation_receivers_isbase = value; }
    void setQVariantAnimation_IsSignalConnected_IsBase(bool value) const { qvariantanimation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvariantanimation_metacall_isbase) {
            qvariantanimation_metacall_isbase = false;
            return QVariantAnimation::qt_metacall(param1, param2, param3);
        } else if (qvariantanimation_metacall_callback != nullptr) {
            return qvariantanimation_metacall_callback(this, param1, param2, param3);
        } else {
            return QVariantAnimation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int duration() const override {
        if (qvariantanimation_duration_isbase) {
            qvariantanimation_duration_isbase = false;
            return QVariantAnimation::duration();
        } else if (qvariantanimation_duration_callback != nullptr) {
            return qvariantanimation_duration_callback();
        } else {
            return QVariantAnimation::duration();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvariantanimation_event_isbase) {
            qvariantanimation_event_isbase = false;
            return QVariantAnimation::event(event);
        } else if (qvariantanimation_event_callback != nullptr) {
            return qvariantanimation_event_callback(this, event);
        } else {
            return QVariantAnimation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentTime(int param1) override {
        if (qvariantanimation_updatecurrenttime_isbase) {
            qvariantanimation_updatecurrenttime_isbase = false;
            QVariantAnimation::updateCurrentTime(param1);
        } else if (qvariantanimation_updatecurrenttime_callback != nullptr) {
            qvariantanimation_updatecurrenttime_callback(this, param1);
        } else {
            QVariantAnimation::updateCurrentTime(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
        if (qvariantanimation_updatestate_isbase) {
            qvariantanimation_updatestate_isbase = false;
            QVariantAnimation::updateState(newState, oldState);
        } else if (qvariantanimation_updatestate_callback != nullptr) {
            qvariantanimation_updatestate_callback(this, newState, oldState);
        } else {
            QVariantAnimation::updateState(newState, oldState);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCurrentValue(const QVariant& value) override {
        if (qvariantanimation_updatecurrentvalue_isbase) {
            qvariantanimation_updatecurrentvalue_isbase = false;
            QVariantAnimation::updateCurrentValue(value);
        } else if (qvariantanimation_updatecurrentvalue_callback != nullptr) {
            qvariantanimation_updatecurrentvalue_callback(this, value);
        } else {
            QVariantAnimation::updateCurrentValue(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
        if (qvariantanimation_interpolated_isbase) {
            qvariantanimation_interpolated_isbase = false;
            return QVariantAnimation::interpolated(from, to, progress);
        } else if (qvariantanimation_interpolated_callback != nullptr) {
            return qvariantanimation_interpolated_callback(this, from, to, progress);
        } else {
            return QVariantAnimation::interpolated(from, to, progress);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateDirection(QAbstractAnimation::Direction direction) override {
        if (qvariantanimation_updatedirection_isbase) {
            qvariantanimation_updatedirection_isbase = false;
            QVariantAnimation::updateDirection(direction);
        } else if (qvariantanimation_updatedirection_callback != nullptr) {
            qvariantanimation_updatedirection_callback(this, direction);
        } else {
            QVariantAnimation::updateDirection(direction);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvariantanimation_eventfilter_isbase) {
            qvariantanimation_eventfilter_isbase = false;
            return QVariantAnimation::eventFilter(watched, event);
        } else if (qvariantanimation_eventfilter_callback != nullptr) {
            return qvariantanimation_eventfilter_callback(this, watched, event);
        } else {
            return QVariantAnimation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvariantanimation_timerevent_isbase) {
            qvariantanimation_timerevent_isbase = false;
            QVariantAnimation::timerEvent(event);
        } else if (qvariantanimation_timerevent_callback != nullptr) {
            qvariantanimation_timerevent_callback(this, event);
        } else {
            QVariantAnimation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvariantanimation_childevent_isbase) {
            qvariantanimation_childevent_isbase = false;
            QVariantAnimation::childEvent(event);
        } else if (qvariantanimation_childevent_callback != nullptr) {
            qvariantanimation_childevent_callback(this, event);
        } else {
            QVariantAnimation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvariantanimation_customevent_isbase) {
            qvariantanimation_customevent_isbase = false;
            QVariantAnimation::customEvent(event);
        } else if (qvariantanimation_customevent_callback != nullptr) {
            qvariantanimation_customevent_callback(this, event);
        } else {
            QVariantAnimation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvariantanimation_connectnotify_isbase) {
            qvariantanimation_connectnotify_isbase = false;
            QVariantAnimation::connectNotify(signal);
        } else if (qvariantanimation_connectnotify_callback != nullptr) {
            qvariantanimation_connectnotify_callback(this, signal);
        } else {
            QVariantAnimation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvariantanimation_disconnectnotify_isbase) {
            qvariantanimation_disconnectnotify_isbase = false;
            QVariantAnimation::disconnectNotify(signal);
        } else if (qvariantanimation_disconnectnotify_callback != nullptr) {
            qvariantanimation_disconnectnotify_callback(this, signal);
        } else {
            QVariantAnimation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvariantanimation_sender_isbase) {
            qvariantanimation_sender_isbase = false;
            return QVariantAnimation::sender();
        } else if (qvariantanimation_sender_callback != nullptr) {
            return qvariantanimation_sender_callback();
        } else {
            return QVariantAnimation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvariantanimation_sendersignalindex_isbase) {
            qvariantanimation_sendersignalindex_isbase = false;
            return QVariantAnimation::senderSignalIndex();
        } else if (qvariantanimation_sendersignalindex_callback != nullptr) {
            return qvariantanimation_sendersignalindex_callback();
        } else {
            return QVariantAnimation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvariantanimation_receivers_isbase) {
            qvariantanimation_receivers_isbase = false;
            return QVariantAnimation::receivers(signal);
        } else if (qvariantanimation_receivers_callback != nullptr) {
            return qvariantanimation_receivers_callback(this, signal);
        } else {
            return QVariantAnimation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvariantanimation_issignalconnected_isbase) {
            qvariantanimation_issignalconnected_isbase = false;
            return QVariantAnimation::isSignalConnected(signal);
        } else if (qvariantanimation_issignalconnected_callback != nullptr) {
            return qvariantanimation_issignalconnected_callback(this, signal);
        } else {
            return QVariantAnimation::isSignalConnected(signal);
        }
    }
};

#endif

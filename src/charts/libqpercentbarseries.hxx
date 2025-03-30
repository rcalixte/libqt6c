#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQPERCENTBARSERIES_H
#define SRC_CHARTSC_LIBVIRTUALQPERCENTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPercentBarSeries so that we can call protected methods
class VirtualQPercentBarSeries : public QPercentBarSeries {

  public:
    // Virtual class public types (including callbacks)
    using QPercentBarSeries_Metacall_Callback = int (*)(QPercentBarSeries*, QMetaObject::Call, int, void**);
    using QPercentBarSeries_Type_Callback = QAbstractSeries::SeriesType (*)();
    using QPercentBarSeries_Event_Callback = bool (*)(QPercentBarSeries*, QEvent*);
    using QPercentBarSeries_EventFilter_Callback = bool (*)(QPercentBarSeries*, QObject*, QEvent*);
    using QPercentBarSeries_TimerEvent_Callback = void (*)(QPercentBarSeries*, QTimerEvent*);
    using QPercentBarSeries_ChildEvent_Callback = void (*)(QPercentBarSeries*, QChildEvent*);
    using QPercentBarSeries_CustomEvent_Callback = void (*)(QPercentBarSeries*, QEvent*);
    using QPercentBarSeries_ConnectNotify_Callback = void (*)(QPercentBarSeries*, const QMetaMethod&);
    using QPercentBarSeries_DisconnectNotify_Callback = void (*)(QPercentBarSeries*, const QMetaMethod&);
    using QPercentBarSeries_Sender_Callback = QObject* (*)();
    using QPercentBarSeries_SenderSignalIndex_Callback = int (*)();
    using QPercentBarSeries_Receivers_Callback = int (*)(const QPercentBarSeries*, const char*);
    using QPercentBarSeries_IsSignalConnected_Callback = bool (*)(const QPercentBarSeries*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPercentBarSeries_Metacall_Callback qpercentbarseries_metacall_callback = nullptr;
    QPercentBarSeries_Type_Callback qpercentbarseries_type_callback = nullptr;
    QPercentBarSeries_Event_Callback qpercentbarseries_event_callback = nullptr;
    QPercentBarSeries_EventFilter_Callback qpercentbarseries_eventfilter_callback = nullptr;
    QPercentBarSeries_TimerEvent_Callback qpercentbarseries_timerevent_callback = nullptr;
    QPercentBarSeries_ChildEvent_Callback qpercentbarseries_childevent_callback = nullptr;
    QPercentBarSeries_CustomEvent_Callback qpercentbarseries_customevent_callback = nullptr;
    QPercentBarSeries_ConnectNotify_Callback qpercentbarseries_connectnotify_callback = nullptr;
    QPercentBarSeries_DisconnectNotify_Callback qpercentbarseries_disconnectnotify_callback = nullptr;
    QPercentBarSeries_Sender_Callback qpercentbarseries_sender_callback = nullptr;
    QPercentBarSeries_SenderSignalIndex_Callback qpercentbarseries_sendersignalindex_callback = nullptr;
    QPercentBarSeries_Receivers_Callback qpercentbarseries_receivers_callback = nullptr;
    QPercentBarSeries_IsSignalConnected_Callback qpercentbarseries_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpercentbarseries_metacall_isbase = false;
    mutable bool qpercentbarseries_type_isbase = false;
    mutable bool qpercentbarseries_event_isbase = false;
    mutable bool qpercentbarseries_eventfilter_isbase = false;
    mutable bool qpercentbarseries_timerevent_isbase = false;
    mutable bool qpercentbarseries_childevent_isbase = false;
    mutable bool qpercentbarseries_customevent_isbase = false;
    mutable bool qpercentbarseries_connectnotify_isbase = false;
    mutable bool qpercentbarseries_disconnectnotify_isbase = false;
    mutable bool qpercentbarseries_sender_isbase = false;
    mutable bool qpercentbarseries_sendersignalindex_isbase = false;
    mutable bool qpercentbarseries_receivers_isbase = false;
    mutable bool qpercentbarseries_issignalconnected_isbase = false;

  public:
    VirtualQPercentBarSeries() : QPercentBarSeries(){};
    VirtualQPercentBarSeries(QObject* parent) : QPercentBarSeries(parent){};

    ~VirtualQPercentBarSeries() {
        qpercentbarseries_metacall_callback = nullptr;
        qpercentbarseries_type_callback = nullptr;
        qpercentbarseries_event_callback = nullptr;
        qpercentbarseries_eventfilter_callback = nullptr;
        qpercentbarseries_timerevent_callback = nullptr;
        qpercentbarseries_childevent_callback = nullptr;
        qpercentbarseries_customevent_callback = nullptr;
        qpercentbarseries_connectnotify_callback = nullptr;
        qpercentbarseries_disconnectnotify_callback = nullptr;
        qpercentbarseries_sender_callback = nullptr;
        qpercentbarseries_sendersignalindex_callback = nullptr;
        qpercentbarseries_receivers_callback = nullptr;
        qpercentbarseries_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPercentBarSeries_Metacall_Callback(QPercentBarSeries_Metacall_Callback cb) { qpercentbarseries_metacall_callback = cb; }
    void setQPercentBarSeries_Type_Callback(QPercentBarSeries_Type_Callback cb) { qpercentbarseries_type_callback = cb; }
    void setQPercentBarSeries_Event_Callback(QPercentBarSeries_Event_Callback cb) { qpercentbarseries_event_callback = cb; }
    void setQPercentBarSeries_EventFilter_Callback(QPercentBarSeries_EventFilter_Callback cb) { qpercentbarseries_eventfilter_callback = cb; }
    void setQPercentBarSeries_TimerEvent_Callback(QPercentBarSeries_TimerEvent_Callback cb) { qpercentbarseries_timerevent_callback = cb; }
    void setQPercentBarSeries_ChildEvent_Callback(QPercentBarSeries_ChildEvent_Callback cb) { qpercentbarseries_childevent_callback = cb; }
    void setQPercentBarSeries_CustomEvent_Callback(QPercentBarSeries_CustomEvent_Callback cb) { qpercentbarseries_customevent_callback = cb; }
    void setQPercentBarSeries_ConnectNotify_Callback(QPercentBarSeries_ConnectNotify_Callback cb) { qpercentbarseries_connectnotify_callback = cb; }
    void setQPercentBarSeries_DisconnectNotify_Callback(QPercentBarSeries_DisconnectNotify_Callback cb) { qpercentbarseries_disconnectnotify_callback = cb; }
    void setQPercentBarSeries_Sender_Callback(QPercentBarSeries_Sender_Callback cb) { qpercentbarseries_sender_callback = cb; }
    void setQPercentBarSeries_SenderSignalIndex_Callback(QPercentBarSeries_SenderSignalIndex_Callback cb) { qpercentbarseries_sendersignalindex_callback = cb; }
    void setQPercentBarSeries_Receivers_Callback(QPercentBarSeries_Receivers_Callback cb) { qpercentbarseries_receivers_callback = cb; }
    void setQPercentBarSeries_IsSignalConnected_Callback(QPercentBarSeries_IsSignalConnected_Callback cb) { qpercentbarseries_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPercentBarSeries_Metacall_IsBase(bool value) const { qpercentbarseries_metacall_isbase = value; }
    void setQPercentBarSeries_Type_IsBase(bool value) const { qpercentbarseries_type_isbase = value; }
    void setQPercentBarSeries_Event_IsBase(bool value) const { qpercentbarseries_event_isbase = value; }
    void setQPercentBarSeries_EventFilter_IsBase(bool value) const { qpercentbarseries_eventfilter_isbase = value; }
    void setQPercentBarSeries_TimerEvent_IsBase(bool value) const { qpercentbarseries_timerevent_isbase = value; }
    void setQPercentBarSeries_ChildEvent_IsBase(bool value) const { qpercentbarseries_childevent_isbase = value; }
    void setQPercentBarSeries_CustomEvent_IsBase(bool value) const { qpercentbarseries_customevent_isbase = value; }
    void setQPercentBarSeries_ConnectNotify_IsBase(bool value) const { qpercentbarseries_connectnotify_isbase = value; }
    void setQPercentBarSeries_DisconnectNotify_IsBase(bool value) const { qpercentbarseries_disconnectnotify_isbase = value; }
    void setQPercentBarSeries_Sender_IsBase(bool value) const { qpercentbarseries_sender_isbase = value; }
    void setQPercentBarSeries_SenderSignalIndex_IsBase(bool value) const { qpercentbarseries_sendersignalindex_isbase = value; }
    void setQPercentBarSeries_Receivers_IsBase(bool value) const { qpercentbarseries_receivers_isbase = value; }
    void setQPercentBarSeries_IsSignalConnected_IsBase(bool value) const { qpercentbarseries_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpercentbarseries_metacall_isbase) {
            qpercentbarseries_metacall_isbase = false;
            return QPercentBarSeries::qt_metacall(param1, param2, param3);
        } else if (qpercentbarseries_metacall_callback != nullptr) {
            return qpercentbarseries_metacall_callback(this, param1, param2, param3);
        } else {
            return QPercentBarSeries::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSeries::SeriesType type() const override {
        if (qpercentbarseries_type_isbase) {
            qpercentbarseries_type_isbase = false;
            return QPercentBarSeries::type();
        } else if (qpercentbarseries_type_callback != nullptr) {
            return qpercentbarseries_type_callback();
        } else {
            return QPercentBarSeries::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpercentbarseries_event_isbase) {
            qpercentbarseries_event_isbase = false;
            return QPercentBarSeries::event(event);
        } else if (qpercentbarseries_event_callback != nullptr) {
            return qpercentbarseries_event_callback(this, event);
        } else {
            return QPercentBarSeries::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpercentbarseries_eventfilter_isbase) {
            qpercentbarseries_eventfilter_isbase = false;
            return QPercentBarSeries::eventFilter(watched, event);
        } else if (qpercentbarseries_eventfilter_callback != nullptr) {
            return qpercentbarseries_eventfilter_callback(this, watched, event);
        } else {
            return QPercentBarSeries::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpercentbarseries_timerevent_isbase) {
            qpercentbarseries_timerevent_isbase = false;
            QPercentBarSeries::timerEvent(event);
        } else if (qpercentbarseries_timerevent_callback != nullptr) {
            qpercentbarseries_timerevent_callback(this, event);
        } else {
            QPercentBarSeries::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpercentbarseries_childevent_isbase) {
            qpercentbarseries_childevent_isbase = false;
            QPercentBarSeries::childEvent(event);
        } else if (qpercentbarseries_childevent_callback != nullptr) {
            qpercentbarseries_childevent_callback(this, event);
        } else {
            QPercentBarSeries::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpercentbarseries_customevent_isbase) {
            qpercentbarseries_customevent_isbase = false;
            QPercentBarSeries::customEvent(event);
        } else if (qpercentbarseries_customevent_callback != nullptr) {
            qpercentbarseries_customevent_callback(this, event);
        } else {
            QPercentBarSeries::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpercentbarseries_connectnotify_isbase) {
            qpercentbarseries_connectnotify_isbase = false;
            QPercentBarSeries::connectNotify(signal);
        } else if (qpercentbarseries_connectnotify_callback != nullptr) {
            qpercentbarseries_connectnotify_callback(this, signal);
        } else {
            QPercentBarSeries::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpercentbarseries_disconnectnotify_isbase) {
            qpercentbarseries_disconnectnotify_isbase = false;
            QPercentBarSeries::disconnectNotify(signal);
        } else if (qpercentbarseries_disconnectnotify_callback != nullptr) {
            qpercentbarseries_disconnectnotify_callback(this, signal);
        } else {
            QPercentBarSeries::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpercentbarseries_sender_isbase) {
            qpercentbarseries_sender_isbase = false;
            return QPercentBarSeries::sender();
        } else if (qpercentbarseries_sender_callback != nullptr) {
            return qpercentbarseries_sender_callback();
        } else {
            return QPercentBarSeries::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpercentbarseries_sendersignalindex_isbase) {
            qpercentbarseries_sendersignalindex_isbase = false;
            return QPercentBarSeries::senderSignalIndex();
        } else if (qpercentbarseries_sendersignalindex_callback != nullptr) {
            return qpercentbarseries_sendersignalindex_callback();
        } else {
            return QPercentBarSeries::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpercentbarseries_receivers_isbase) {
            qpercentbarseries_receivers_isbase = false;
            return QPercentBarSeries::receivers(signal);
        } else if (qpercentbarseries_receivers_callback != nullptr) {
            return qpercentbarseries_receivers_callback(this, signal);
        } else {
            return QPercentBarSeries::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpercentbarseries_issignalconnected_isbase) {
            qpercentbarseries_issignalconnected_isbase = false;
            return QPercentBarSeries::isSignalConnected(signal);
        } else if (qpercentbarseries_issignalconnected_callback != nullptr) {
            return qpercentbarseries_issignalconnected_callback(this, signal);
        } else {
            return QPercentBarSeries::isSignalConnected(signal);
        }
    }
};

#endif

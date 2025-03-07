#pragma once
#ifndef SRCC_LIBVIRTUALQDATAWIDGETMAPPER_H
#define SRCC_LIBVIRTUALQDATAWIDGETMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDataWidgetMapper so that we can call protected methods
class VirtualQDataWidgetMapper : public QDataWidgetMapper {

  public:
    // Virtual class public types (including callbacks)
    using QDataWidgetMapper_Metacall_Callback = int (*)(QDataWidgetMapper*, QMetaObject::Call, int, void**);
    using QDataWidgetMapper_SetCurrentIndex_Callback = void (*)(QDataWidgetMapper*, int);
    using QDataWidgetMapper_Event_Callback = bool (*)(QDataWidgetMapper*, QEvent*);
    using QDataWidgetMapper_EventFilter_Callback = bool (*)(QDataWidgetMapper*, QObject*, QEvent*);
    using QDataWidgetMapper_TimerEvent_Callback = void (*)(QDataWidgetMapper*, QTimerEvent*);
    using QDataWidgetMapper_ChildEvent_Callback = void (*)(QDataWidgetMapper*, QChildEvent*);
    using QDataWidgetMapper_CustomEvent_Callback = void (*)(QDataWidgetMapper*, QEvent*);
    using QDataWidgetMapper_ConnectNotify_Callback = void (*)(QDataWidgetMapper*, const QMetaMethod&);
    using QDataWidgetMapper_DisconnectNotify_Callback = void (*)(QDataWidgetMapper*, const QMetaMethod&);
    using QDataWidgetMapper_Sender_Callback = QObject* (*)();
    using QDataWidgetMapper_SenderSignalIndex_Callback = int (*)();
    using QDataWidgetMapper_Receivers_Callback = int (*)(const QDataWidgetMapper*, const char*);
    using QDataWidgetMapper_IsSignalConnected_Callback = bool (*)(const QDataWidgetMapper*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDataWidgetMapper_Metacall_Callback qdatawidgetmapper_metacall_callback = nullptr;
    QDataWidgetMapper_SetCurrentIndex_Callback qdatawidgetmapper_setcurrentindex_callback = nullptr;
    QDataWidgetMapper_Event_Callback qdatawidgetmapper_event_callback = nullptr;
    QDataWidgetMapper_EventFilter_Callback qdatawidgetmapper_eventfilter_callback = nullptr;
    QDataWidgetMapper_TimerEvent_Callback qdatawidgetmapper_timerevent_callback = nullptr;
    QDataWidgetMapper_ChildEvent_Callback qdatawidgetmapper_childevent_callback = nullptr;
    QDataWidgetMapper_CustomEvent_Callback qdatawidgetmapper_customevent_callback = nullptr;
    QDataWidgetMapper_ConnectNotify_Callback qdatawidgetmapper_connectnotify_callback = nullptr;
    QDataWidgetMapper_DisconnectNotify_Callback qdatawidgetmapper_disconnectnotify_callback = nullptr;
    QDataWidgetMapper_Sender_Callback qdatawidgetmapper_sender_callback = nullptr;
    QDataWidgetMapper_SenderSignalIndex_Callback qdatawidgetmapper_sendersignalindex_callback = nullptr;
    QDataWidgetMapper_Receivers_Callback qdatawidgetmapper_receivers_callback = nullptr;
    QDataWidgetMapper_IsSignalConnected_Callback qdatawidgetmapper_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdatawidgetmapper_metacall_isbase = false;
    mutable bool qdatawidgetmapper_setcurrentindex_isbase = false;
    mutable bool qdatawidgetmapper_event_isbase = false;
    mutable bool qdatawidgetmapper_eventfilter_isbase = false;
    mutable bool qdatawidgetmapper_timerevent_isbase = false;
    mutable bool qdatawidgetmapper_childevent_isbase = false;
    mutable bool qdatawidgetmapper_customevent_isbase = false;
    mutable bool qdatawidgetmapper_connectnotify_isbase = false;
    mutable bool qdatawidgetmapper_disconnectnotify_isbase = false;
    mutable bool qdatawidgetmapper_sender_isbase = false;
    mutable bool qdatawidgetmapper_sendersignalindex_isbase = false;
    mutable bool qdatawidgetmapper_receivers_isbase = false;
    mutable bool qdatawidgetmapper_issignalconnected_isbase = false;

  public:
    VirtualQDataWidgetMapper() : QDataWidgetMapper(){};
    VirtualQDataWidgetMapper(QObject* parent) : QDataWidgetMapper(parent){};

    ~VirtualQDataWidgetMapper() {
        qdatawidgetmapper_metacall_callback = nullptr;
        qdatawidgetmapper_setcurrentindex_callback = nullptr;
        qdatawidgetmapper_event_callback = nullptr;
        qdatawidgetmapper_eventfilter_callback = nullptr;
        qdatawidgetmapper_timerevent_callback = nullptr;
        qdatawidgetmapper_childevent_callback = nullptr;
        qdatawidgetmapper_customevent_callback = nullptr;
        qdatawidgetmapper_connectnotify_callback = nullptr;
        qdatawidgetmapper_disconnectnotify_callback = nullptr;
        qdatawidgetmapper_sender_callback = nullptr;
        qdatawidgetmapper_sendersignalindex_callback = nullptr;
        qdatawidgetmapper_receivers_callback = nullptr;
        qdatawidgetmapper_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDataWidgetMapper_Metacall_Callback(QDataWidgetMapper_Metacall_Callback cb) { qdatawidgetmapper_metacall_callback = cb; }
    void setQDataWidgetMapper_SetCurrentIndex_Callback(QDataWidgetMapper_SetCurrentIndex_Callback cb) { qdatawidgetmapper_setcurrentindex_callback = cb; }
    void setQDataWidgetMapper_Event_Callback(QDataWidgetMapper_Event_Callback cb) { qdatawidgetmapper_event_callback = cb; }
    void setQDataWidgetMapper_EventFilter_Callback(QDataWidgetMapper_EventFilter_Callback cb) { qdatawidgetmapper_eventfilter_callback = cb; }
    void setQDataWidgetMapper_TimerEvent_Callback(QDataWidgetMapper_TimerEvent_Callback cb) { qdatawidgetmapper_timerevent_callback = cb; }
    void setQDataWidgetMapper_ChildEvent_Callback(QDataWidgetMapper_ChildEvent_Callback cb) { qdatawidgetmapper_childevent_callback = cb; }
    void setQDataWidgetMapper_CustomEvent_Callback(QDataWidgetMapper_CustomEvent_Callback cb) { qdatawidgetmapper_customevent_callback = cb; }
    void setQDataWidgetMapper_ConnectNotify_Callback(QDataWidgetMapper_ConnectNotify_Callback cb) { qdatawidgetmapper_connectnotify_callback = cb; }
    void setQDataWidgetMapper_DisconnectNotify_Callback(QDataWidgetMapper_DisconnectNotify_Callback cb) { qdatawidgetmapper_disconnectnotify_callback = cb; }
    void setQDataWidgetMapper_Sender_Callback(QDataWidgetMapper_Sender_Callback cb) { qdatawidgetmapper_sender_callback = cb; }
    void setQDataWidgetMapper_SenderSignalIndex_Callback(QDataWidgetMapper_SenderSignalIndex_Callback cb) { qdatawidgetmapper_sendersignalindex_callback = cb; }
    void setQDataWidgetMapper_Receivers_Callback(QDataWidgetMapper_Receivers_Callback cb) { qdatawidgetmapper_receivers_callback = cb; }
    void setQDataWidgetMapper_IsSignalConnected_Callback(QDataWidgetMapper_IsSignalConnected_Callback cb) { qdatawidgetmapper_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDataWidgetMapper_Metacall_IsBase(bool value) const { qdatawidgetmapper_metacall_isbase = value; }
    void setQDataWidgetMapper_SetCurrentIndex_IsBase(bool value) const { qdatawidgetmapper_setcurrentindex_isbase = value; }
    void setQDataWidgetMapper_Event_IsBase(bool value) const { qdatawidgetmapper_event_isbase = value; }
    void setQDataWidgetMapper_EventFilter_IsBase(bool value) const { qdatawidgetmapper_eventfilter_isbase = value; }
    void setQDataWidgetMapper_TimerEvent_IsBase(bool value) const { qdatawidgetmapper_timerevent_isbase = value; }
    void setQDataWidgetMapper_ChildEvent_IsBase(bool value) const { qdatawidgetmapper_childevent_isbase = value; }
    void setQDataWidgetMapper_CustomEvent_IsBase(bool value) const { qdatawidgetmapper_customevent_isbase = value; }
    void setQDataWidgetMapper_ConnectNotify_IsBase(bool value) const { qdatawidgetmapper_connectnotify_isbase = value; }
    void setQDataWidgetMapper_DisconnectNotify_IsBase(bool value) const { qdatawidgetmapper_disconnectnotify_isbase = value; }
    void setQDataWidgetMapper_Sender_IsBase(bool value) const { qdatawidgetmapper_sender_isbase = value; }
    void setQDataWidgetMapper_SenderSignalIndex_IsBase(bool value) const { qdatawidgetmapper_sendersignalindex_isbase = value; }
    void setQDataWidgetMapper_Receivers_IsBase(bool value) const { qdatawidgetmapper_receivers_isbase = value; }
    void setQDataWidgetMapper_IsSignalConnected_IsBase(bool value) const { qdatawidgetmapper_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatawidgetmapper_metacall_isbase) {
            qdatawidgetmapper_metacall_isbase = false;
            return QDataWidgetMapper::qt_metacall(param1, param2, param3);
        } else if (qdatawidgetmapper_metacall_callback != nullptr) {
            return qdatawidgetmapper_metacall_callback(this, param1, param2, param3);
        } else {
            return QDataWidgetMapper::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(int index) override {
        if (qdatawidgetmapper_setcurrentindex_isbase) {
            qdatawidgetmapper_setcurrentindex_isbase = false;
            QDataWidgetMapper::setCurrentIndex(index);
        } else if (qdatawidgetmapper_setcurrentindex_callback != nullptr) {
            qdatawidgetmapper_setcurrentindex_callback(this, index);
        } else {
            QDataWidgetMapper::setCurrentIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatawidgetmapper_event_isbase) {
            qdatawidgetmapper_event_isbase = false;
            return QDataWidgetMapper::event(event);
        } else if (qdatawidgetmapper_event_callback != nullptr) {
            return qdatawidgetmapper_event_callback(this, event);
        } else {
            return QDataWidgetMapper::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatawidgetmapper_eventfilter_isbase) {
            qdatawidgetmapper_eventfilter_isbase = false;
            return QDataWidgetMapper::eventFilter(watched, event);
        } else if (qdatawidgetmapper_eventfilter_callback != nullptr) {
            return qdatawidgetmapper_eventfilter_callback(this, watched, event);
        } else {
            return QDataWidgetMapper::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatawidgetmapper_timerevent_isbase) {
            qdatawidgetmapper_timerevent_isbase = false;
            QDataWidgetMapper::timerEvent(event);
        } else if (qdatawidgetmapper_timerevent_callback != nullptr) {
            qdatawidgetmapper_timerevent_callback(this, event);
        } else {
            QDataWidgetMapper::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatawidgetmapper_childevent_isbase) {
            qdatawidgetmapper_childevent_isbase = false;
            QDataWidgetMapper::childEvent(event);
        } else if (qdatawidgetmapper_childevent_callback != nullptr) {
            qdatawidgetmapper_childevent_callback(this, event);
        } else {
            QDataWidgetMapper::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatawidgetmapper_customevent_isbase) {
            qdatawidgetmapper_customevent_isbase = false;
            QDataWidgetMapper::customEvent(event);
        } else if (qdatawidgetmapper_customevent_callback != nullptr) {
            qdatawidgetmapper_customevent_callback(this, event);
        } else {
            QDataWidgetMapper::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatawidgetmapper_connectnotify_isbase) {
            qdatawidgetmapper_connectnotify_isbase = false;
            QDataWidgetMapper::connectNotify(signal);
        } else if (qdatawidgetmapper_connectnotify_callback != nullptr) {
            qdatawidgetmapper_connectnotify_callback(this, signal);
        } else {
            QDataWidgetMapper::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatawidgetmapper_disconnectnotify_isbase) {
            qdatawidgetmapper_disconnectnotify_isbase = false;
            QDataWidgetMapper::disconnectNotify(signal);
        } else if (qdatawidgetmapper_disconnectnotify_callback != nullptr) {
            qdatawidgetmapper_disconnectnotify_callback(this, signal);
        } else {
            QDataWidgetMapper::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdatawidgetmapper_sender_isbase) {
            qdatawidgetmapper_sender_isbase = false;
            return QDataWidgetMapper::sender();
        } else if (qdatawidgetmapper_sender_callback != nullptr) {
            return qdatawidgetmapper_sender_callback();
        } else {
            return QDataWidgetMapper::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdatawidgetmapper_sendersignalindex_isbase) {
            qdatawidgetmapper_sendersignalindex_isbase = false;
            return QDataWidgetMapper::senderSignalIndex();
        } else if (qdatawidgetmapper_sendersignalindex_callback != nullptr) {
            return qdatawidgetmapper_sendersignalindex_callback();
        } else {
            return QDataWidgetMapper::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdatawidgetmapper_receivers_isbase) {
            qdatawidgetmapper_receivers_isbase = false;
            return QDataWidgetMapper::receivers(signal);
        } else if (qdatawidgetmapper_receivers_callback != nullptr) {
            return qdatawidgetmapper_receivers_callback(this, signal);
        } else {
            return QDataWidgetMapper::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdatawidgetmapper_issignalconnected_isbase) {
            qdatawidgetmapper_issignalconnected_isbase = false;
            return QDataWidgetMapper::isSignalConnected(signal);
        } else if (qdatawidgetmapper_issignalconnected_callback != nullptr) {
            return qdatawidgetmapper_issignalconnected_callback(this, signal);
        } else {
            return QDataWidgetMapper::isSignalConnected(signal);
        }
    }
};

#endif

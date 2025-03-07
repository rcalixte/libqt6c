#pragma once
#ifndef SRCC_LIBVIRTUALQGENERICPLUGIN_H
#define SRCC_LIBVIRTUALQGENERICPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGenericPlugin so that we can call protected methods
class VirtualQGenericPlugin : public QGenericPlugin {

  public:
    // Virtual class public types (including callbacks)
    using QGenericPlugin_Metacall_Callback = int (*)(QGenericPlugin*, QMetaObject::Call, int, void**);
    using QGenericPlugin_Create_Callback = QObject* (*)(QGenericPlugin*, const QString&, const QString&);
    using QGenericPlugin_Event_Callback = bool (*)(QGenericPlugin*, QEvent*);
    using QGenericPlugin_EventFilter_Callback = bool (*)(QGenericPlugin*, QObject*, QEvent*);
    using QGenericPlugin_TimerEvent_Callback = void (*)(QGenericPlugin*, QTimerEvent*);
    using QGenericPlugin_ChildEvent_Callback = void (*)(QGenericPlugin*, QChildEvent*);
    using QGenericPlugin_CustomEvent_Callback = void (*)(QGenericPlugin*, QEvent*);
    using QGenericPlugin_ConnectNotify_Callback = void (*)(QGenericPlugin*, const QMetaMethod&);
    using QGenericPlugin_DisconnectNotify_Callback = void (*)(QGenericPlugin*, const QMetaMethod&);
    using QGenericPlugin_Sender_Callback = QObject* (*)();
    using QGenericPlugin_SenderSignalIndex_Callback = int (*)();
    using QGenericPlugin_Receivers_Callback = int (*)(const QGenericPlugin*, const char*);
    using QGenericPlugin_IsSignalConnected_Callback = bool (*)(const QGenericPlugin*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGenericPlugin_Metacall_Callback qgenericplugin_metacall_callback = nullptr;
    QGenericPlugin_Create_Callback qgenericplugin_create_callback = nullptr;
    QGenericPlugin_Event_Callback qgenericplugin_event_callback = nullptr;
    QGenericPlugin_EventFilter_Callback qgenericplugin_eventfilter_callback = nullptr;
    QGenericPlugin_TimerEvent_Callback qgenericplugin_timerevent_callback = nullptr;
    QGenericPlugin_ChildEvent_Callback qgenericplugin_childevent_callback = nullptr;
    QGenericPlugin_CustomEvent_Callback qgenericplugin_customevent_callback = nullptr;
    QGenericPlugin_ConnectNotify_Callback qgenericplugin_connectnotify_callback = nullptr;
    QGenericPlugin_DisconnectNotify_Callback qgenericplugin_disconnectnotify_callback = nullptr;
    QGenericPlugin_Sender_Callback qgenericplugin_sender_callback = nullptr;
    QGenericPlugin_SenderSignalIndex_Callback qgenericplugin_sendersignalindex_callback = nullptr;
    QGenericPlugin_Receivers_Callback qgenericplugin_receivers_callback = nullptr;
    QGenericPlugin_IsSignalConnected_Callback qgenericplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgenericplugin_metacall_isbase = false;
    mutable bool qgenericplugin_create_isbase = false;
    mutable bool qgenericplugin_event_isbase = false;
    mutable bool qgenericplugin_eventfilter_isbase = false;
    mutable bool qgenericplugin_timerevent_isbase = false;
    mutable bool qgenericplugin_childevent_isbase = false;
    mutable bool qgenericplugin_customevent_isbase = false;
    mutable bool qgenericplugin_connectnotify_isbase = false;
    mutable bool qgenericplugin_disconnectnotify_isbase = false;
    mutable bool qgenericplugin_sender_isbase = false;
    mutable bool qgenericplugin_sendersignalindex_isbase = false;
    mutable bool qgenericplugin_receivers_isbase = false;
    mutable bool qgenericplugin_issignalconnected_isbase = false;

  public:
    VirtualQGenericPlugin() : QGenericPlugin(){};
    VirtualQGenericPlugin(QObject* parent) : QGenericPlugin(parent){};

    ~VirtualQGenericPlugin() {
        qgenericplugin_metacall_callback = nullptr;
        qgenericplugin_create_callback = nullptr;
        qgenericplugin_event_callback = nullptr;
        qgenericplugin_eventfilter_callback = nullptr;
        qgenericplugin_timerevent_callback = nullptr;
        qgenericplugin_childevent_callback = nullptr;
        qgenericplugin_customevent_callback = nullptr;
        qgenericplugin_connectnotify_callback = nullptr;
        qgenericplugin_disconnectnotify_callback = nullptr;
        qgenericplugin_sender_callback = nullptr;
        qgenericplugin_sendersignalindex_callback = nullptr;
        qgenericplugin_receivers_callback = nullptr;
        qgenericplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGenericPlugin_Metacall_Callback(QGenericPlugin_Metacall_Callback cb) { qgenericplugin_metacall_callback = cb; }
    void setQGenericPlugin_Create_Callback(QGenericPlugin_Create_Callback cb) { qgenericplugin_create_callback = cb; }
    void setQGenericPlugin_Event_Callback(QGenericPlugin_Event_Callback cb) { qgenericplugin_event_callback = cb; }
    void setQGenericPlugin_EventFilter_Callback(QGenericPlugin_EventFilter_Callback cb) { qgenericplugin_eventfilter_callback = cb; }
    void setQGenericPlugin_TimerEvent_Callback(QGenericPlugin_TimerEvent_Callback cb) { qgenericplugin_timerevent_callback = cb; }
    void setQGenericPlugin_ChildEvent_Callback(QGenericPlugin_ChildEvent_Callback cb) { qgenericplugin_childevent_callback = cb; }
    void setQGenericPlugin_CustomEvent_Callback(QGenericPlugin_CustomEvent_Callback cb) { qgenericplugin_customevent_callback = cb; }
    void setQGenericPlugin_ConnectNotify_Callback(QGenericPlugin_ConnectNotify_Callback cb) { qgenericplugin_connectnotify_callback = cb; }
    void setQGenericPlugin_DisconnectNotify_Callback(QGenericPlugin_DisconnectNotify_Callback cb) { qgenericplugin_disconnectnotify_callback = cb; }
    void setQGenericPlugin_Sender_Callback(QGenericPlugin_Sender_Callback cb) { qgenericplugin_sender_callback = cb; }
    void setQGenericPlugin_SenderSignalIndex_Callback(QGenericPlugin_SenderSignalIndex_Callback cb) { qgenericplugin_sendersignalindex_callback = cb; }
    void setQGenericPlugin_Receivers_Callback(QGenericPlugin_Receivers_Callback cb) { qgenericplugin_receivers_callback = cb; }
    void setQGenericPlugin_IsSignalConnected_Callback(QGenericPlugin_IsSignalConnected_Callback cb) { qgenericplugin_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGenericPlugin_Metacall_IsBase(bool value) const { qgenericplugin_metacall_isbase = value; }
    void setQGenericPlugin_Create_IsBase(bool value) const { qgenericplugin_create_isbase = value; }
    void setQGenericPlugin_Event_IsBase(bool value) const { qgenericplugin_event_isbase = value; }
    void setQGenericPlugin_EventFilter_IsBase(bool value) const { qgenericplugin_eventfilter_isbase = value; }
    void setQGenericPlugin_TimerEvent_IsBase(bool value) const { qgenericplugin_timerevent_isbase = value; }
    void setQGenericPlugin_ChildEvent_IsBase(bool value) const { qgenericplugin_childevent_isbase = value; }
    void setQGenericPlugin_CustomEvent_IsBase(bool value) const { qgenericplugin_customevent_isbase = value; }
    void setQGenericPlugin_ConnectNotify_IsBase(bool value) const { qgenericplugin_connectnotify_isbase = value; }
    void setQGenericPlugin_DisconnectNotify_IsBase(bool value) const { qgenericplugin_disconnectnotify_isbase = value; }
    void setQGenericPlugin_Sender_IsBase(bool value) const { qgenericplugin_sender_isbase = value; }
    void setQGenericPlugin_SenderSignalIndex_IsBase(bool value) const { qgenericplugin_sendersignalindex_isbase = value; }
    void setQGenericPlugin_Receivers_IsBase(bool value) const { qgenericplugin_receivers_isbase = value; }
    void setQGenericPlugin_IsSignalConnected_IsBase(bool value) const { qgenericplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgenericplugin_metacall_isbase) {
            qgenericplugin_metacall_isbase = false;
            return QGenericPlugin::qt_metacall(param1, param2, param3);
        } else if (qgenericplugin_metacall_callback != nullptr) {
            return qgenericplugin_metacall_callback(this, param1, param2, param3);
        } else {
            return QGenericPlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* create(const QString& name, const QString& spec) override {
        return qgenericplugin_create_callback(this, name, spec);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgenericplugin_event_isbase) {
            qgenericplugin_event_isbase = false;
            return QGenericPlugin::event(event);
        } else if (qgenericplugin_event_callback != nullptr) {
            return qgenericplugin_event_callback(this, event);
        } else {
            return QGenericPlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgenericplugin_eventfilter_isbase) {
            qgenericplugin_eventfilter_isbase = false;
            return QGenericPlugin::eventFilter(watched, event);
        } else if (qgenericplugin_eventfilter_callback != nullptr) {
            return qgenericplugin_eventfilter_callback(this, watched, event);
        } else {
            return QGenericPlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgenericplugin_timerevent_isbase) {
            qgenericplugin_timerevent_isbase = false;
            QGenericPlugin::timerEvent(event);
        } else if (qgenericplugin_timerevent_callback != nullptr) {
            qgenericplugin_timerevent_callback(this, event);
        } else {
            QGenericPlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgenericplugin_childevent_isbase) {
            qgenericplugin_childevent_isbase = false;
            QGenericPlugin::childEvent(event);
        } else if (qgenericplugin_childevent_callback != nullptr) {
            qgenericplugin_childevent_callback(this, event);
        } else {
            QGenericPlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgenericplugin_customevent_isbase) {
            qgenericplugin_customevent_isbase = false;
            QGenericPlugin::customEvent(event);
        } else if (qgenericplugin_customevent_callback != nullptr) {
            qgenericplugin_customevent_callback(this, event);
        } else {
            QGenericPlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgenericplugin_connectnotify_isbase) {
            qgenericplugin_connectnotify_isbase = false;
            QGenericPlugin::connectNotify(signal);
        } else if (qgenericplugin_connectnotify_callback != nullptr) {
            qgenericplugin_connectnotify_callback(this, signal);
        } else {
            QGenericPlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgenericplugin_disconnectnotify_isbase) {
            qgenericplugin_disconnectnotify_isbase = false;
            QGenericPlugin::disconnectNotify(signal);
        } else if (qgenericplugin_disconnectnotify_callback != nullptr) {
            qgenericplugin_disconnectnotify_callback(this, signal);
        } else {
            QGenericPlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgenericplugin_sender_isbase) {
            qgenericplugin_sender_isbase = false;
            return QGenericPlugin::sender();
        } else if (qgenericplugin_sender_callback != nullptr) {
            return qgenericplugin_sender_callback();
        } else {
            return QGenericPlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgenericplugin_sendersignalindex_isbase) {
            qgenericplugin_sendersignalindex_isbase = false;
            return QGenericPlugin::senderSignalIndex();
        } else if (qgenericplugin_sendersignalindex_callback != nullptr) {
            return qgenericplugin_sendersignalindex_callback();
        } else {
            return QGenericPlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgenericplugin_receivers_isbase) {
            qgenericplugin_receivers_isbase = false;
            return QGenericPlugin::receivers(signal);
        } else if (qgenericplugin_receivers_callback != nullptr) {
            return qgenericplugin_receivers_callback(this, signal);
        } else {
            return QGenericPlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgenericplugin_issignalconnected_isbase) {
            qgenericplugin_issignalconnected_isbase = false;
            return QGenericPlugin::isSignalConnected(signal);
        } else if (qgenericplugin_issignalconnected_callback != nullptr) {
            return qgenericplugin_issignalconnected_callback(this, signal);
        } else {
            return QGenericPlugin::isSignalConnected(signal);
        }
    }
};

#endif

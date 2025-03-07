#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLEBRIDGE_H
#define SRCC_LIBVIRTUALQACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleBridgePlugin so that we can call protected methods
class VirtualQAccessibleBridgePlugin : public QAccessibleBridgePlugin {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleBridgePlugin_Metacall_Callback = int (*)(QAccessibleBridgePlugin*, QMetaObject::Call, int, void**);
    using QAccessibleBridgePlugin_Create_Callback = QAccessibleBridge* (*)(QAccessibleBridgePlugin*, const QString&);
    using QAccessibleBridgePlugin_Event_Callback = bool (*)(QAccessibleBridgePlugin*, QEvent*);
    using QAccessibleBridgePlugin_EventFilter_Callback = bool (*)(QAccessibleBridgePlugin*, QObject*, QEvent*);
    using QAccessibleBridgePlugin_TimerEvent_Callback = void (*)(QAccessibleBridgePlugin*, QTimerEvent*);
    using QAccessibleBridgePlugin_ChildEvent_Callback = void (*)(QAccessibleBridgePlugin*, QChildEvent*);
    using QAccessibleBridgePlugin_CustomEvent_Callback = void (*)(QAccessibleBridgePlugin*, QEvent*);
    using QAccessibleBridgePlugin_ConnectNotify_Callback = void (*)(QAccessibleBridgePlugin*, const QMetaMethod&);
    using QAccessibleBridgePlugin_DisconnectNotify_Callback = void (*)(QAccessibleBridgePlugin*, const QMetaMethod&);
    using QAccessibleBridgePlugin_Sender_Callback = QObject* (*)();
    using QAccessibleBridgePlugin_SenderSignalIndex_Callback = int (*)();
    using QAccessibleBridgePlugin_Receivers_Callback = int (*)(const QAccessibleBridgePlugin*, const char*);
    using QAccessibleBridgePlugin_IsSignalConnected_Callback = bool (*)(const QAccessibleBridgePlugin*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAccessibleBridgePlugin_Metacall_Callback qaccessiblebridgeplugin_metacall_callback = nullptr;
    QAccessibleBridgePlugin_Create_Callback qaccessiblebridgeplugin_create_callback = nullptr;
    QAccessibleBridgePlugin_Event_Callback qaccessiblebridgeplugin_event_callback = nullptr;
    QAccessibleBridgePlugin_EventFilter_Callback qaccessiblebridgeplugin_eventfilter_callback = nullptr;
    QAccessibleBridgePlugin_TimerEvent_Callback qaccessiblebridgeplugin_timerevent_callback = nullptr;
    QAccessibleBridgePlugin_ChildEvent_Callback qaccessiblebridgeplugin_childevent_callback = nullptr;
    QAccessibleBridgePlugin_CustomEvent_Callback qaccessiblebridgeplugin_customevent_callback = nullptr;
    QAccessibleBridgePlugin_ConnectNotify_Callback qaccessiblebridgeplugin_connectnotify_callback = nullptr;
    QAccessibleBridgePlugin_DisconnectNotify_Callback qaccessiblebridgeplugin_disconnectnotify_callback = nullptr;
    QAccessibleBridgePlugin_Sender_Callback qaccessiblebridgeplugin_sender_callback = nullptr;
    QAccessibleBridgePlugin_SenderSignalIndex_Callback qaccessiblebridgeplugin_sendersignalindex_callback = nullptr;
    QAccessibleBridgePlugin_Receivers_Callback qaccessiblebridgeplugin_receivers_callback = nullptr;
    QAccessibleBridgePlugin_IsSignalConnected_Callback qaccessiblebridgeplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaccessiblebridgeplugin_metacall_isbase = false;
    mutable bool qaccessiblebridgeplugin_create_isbase = false;
    mutable bool qaccessiblebridgeplugin_event_isbase = false;
    mutable bool qaccessiblebridgeplugin_eventfilter_isbase = false;
    mutable bool qaccessiblebridgeplugin_timerevent_isbase = false;
    mutable bool qaccessiblebridgeplugin_childevent_isbase = false;
    mutable bool qaccessiblebridgeplugin_customevent_isbase = false;
    mutable bool qaccessiblebridgeplugin_connectnotify_isbase = false;
    mutable bool qaccessiblebridgeplugin_disconnectnotify_isbase = false;
    mutable bool qaccessiblebridgeplugin_sender_isbase = false;
    mutable bool qaccessiblebridgeplugin_sendersignalindex_isbase = false;
    mutable bool qaccessiblebridgeplugin_receivers_isbase = false;
    mutable bool qaccessiblebridgeplugin_issignalconnected_isbase = false;

  public:
    VirtualQAccessibleBridgePlugin() : QAccessibleBridgePlugin(){};
    VirtualQAccessibleBridgePlugin(QObject* parent) : QAccessibleBridgePlugin(parent){};

    ~VirtualQAccessibleBridgePlugin() {
        qaccessiblebridgeplugin_metacall_callback = nullptr;
        qaccessiblebridgeplugin_create_callback = nullptr;
        qaccessiblebridgeplugin_event_callback = nullptr;
        qaccessiblebridgeplugin_eventfilter_callback = nullptr;
        qaccessiblebridgeplugin_timerevent_callback = nullptr;
        qaccessiblebridgeplugin_childevent_callback = nullptr;
        qaccessiblebridgeplugin_customevent_callback = nullptr;
        qaccessiblebridgeplugin_connectnotify_callback = nullptr;
        qaccessiblebridgeplugin_disconnectnotify_callback = nullptr;
        qaccessiblebridgeplugin_sender_callback = nullptr;
        qaccessiblebridgeplugin_sendersignalindex_callback = nullptr;
        qaccessiblebridgeplugin_receivers_callback = nullptr;
        qaccessiblebridgeplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleBridgePlugin_Metacall_Callback(QAccessibleBridgePlugin_Metacall_Callback cb) { qaccessiblebridgeplugin_metacall_callback = cb; }
    void setQAccessibleBridgePlugin_Create_Callback(QAccessibleBridgePlugin_Create_Callback cb) { qaccessiblebridgeplugin_create_callback = cb; }
    void setQAccessibleBridgePlugin_Event_Callback(QAccessibleBridgePlugin_Event_Callback cb) { qaccessiblebridgeplugin_event_callback = cb; }
    void setQAccessibleBridgePlugin_EventFilter_Callback(QAccessibleBridgePlugin_EventFilter_Callback cb) { qaccessiblebridgeplugin_eventfilter_callback = cb; }
    void setQAccessibleBridgePlugin_TimerEvent_Callback(QAccessibleBridgePlugin_TimerEvent_Callback cb) { qaccessiblebridgeplugin_timerevent_callback = cb; }
    void setQAccessibleBridgePlugin_ChildEvent_Callback(QAccessibleBridgePlugin_ChildEvent_Callback cb) { qaccessiblebridgeplugin_childevent_callback = cb; }
    void setQAccessibleBridgePlugin_CustomEvent_Callback(QAccessibleBridgePlugin_CustomEvent_Callback cb) { qaccessiblebridgeplugin_customevent_callback = cb; }
    void setQAccessibleBridgePlugin_ConnectNotify_Callback(QAccessibleBridgePlugin_ConnectNotify_Callback cb) { qaccessiblebridgeplugin_connectnotify_callback = cb; }
    void setQAccessibleBridgePlugin_DisconnectNotify_Callback(QAccessibleBridgePlugin_DisconnectNotify_Callback cb) { qaccessiblebridgeplugin_disconnectnotify_callback = cb; }
    void setQAccessibleBridgePlugin_Sender_Callback(QAccessibleBridgePlugin_Sender_Callback cb) { qaccessiblebridgeplugin_sender_callback = cb; }
    void setQAccessibleBridgePlugin_SenderSignalIndex_Callback(QAccessibleBridgePlugin_SenderSignalIndex_Callback cb) { qaccessiblebridgeplugin_sendersignalindex_callback = cb; }
    void setQAccessibleBridgePlugin_Receivers_Callback(QAccessibleBridgePlugin_Receivers_Callback cb) { qaccessiblebridgeplugin_receivers_callback = cb; }
    void setQAccessibleBridgePlugin_IsSignalConnected_Callback(QAccessibleBridgePlugin_IsSignalConnected_Callback cb) { qaccessiblebridgeplugin_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAccessibleBridgePlugin_Metacall_IsBase(bool value) const { qaccessiblebridgeplugin_metacall_isbase = value; }
    void setQAccessibleBridgePlugin_Create_IsBase(bool value) const { qaccessiblebridgeplugin_create_isbase = value; }
    void setQAccessibleBridgePlugin_Event_IsBase(bool value) const { qaccessiblebridgeplugin_event_isbase = value; }
    void setQAccessibleBridgePlugin_EventFilter_IsBase(bool value) const { qaccessiblebridgeplugin_eventfilter_isbase = value; }
    void setQAccessibleBridgePlugin_TimerEvent_IsBase(bool value) const { qaccessiblebridgeplugin_timerevent_isbase = value; }
    void setQAccessibleBridgePlugin_ChildEvent_IsBase(bool value) const { qaccessiblebridgeplugin_childevent_isbase = value; }
    void setQAccessibleBridgePlugin_CustomEvent_IsBase(bool value) const { qaccessiblebridgeplugin_customevent_isbase = value; }
    void setQAccessibleBridgePlugin_ConnectNotify_IsBase(bool value) const { qaccessiblebridgeplugin_connectnotify_isbase = value; }
    void setQAccessibleBridgePlugin_DisconnectNotify_IsBase(bool value) const { qaccessiblebridgeplugin_disconnectnotify_isbase = value; }
    void setQAccessibleBridgePlugin_Sender_IsBase(bool value) const { qaccessiblebridgeplugin_sender_isbase = value; }
    void setQAccessibleBridgePlugin_SenderSignalIndex_IsBase(bool value) const { qaccessiblebridgeplugin_sendersignalindex_isbase = value; }
    void setQAccessibleBridgePlugin_Receivers_IsBase(bool value) const { qaccessiblebridgeplugin_receivers_isbase = value; }
    void setQAccessibleBridgePlugin_IsSignalConnected_IsBase(bool value) const { qaccessiblebridgeplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaccessiblebridgeplugin_metacall_isbase) {
            qaccessiblebridgeplugin_metacall_isbase = false;
            return QAccessibleBridgePlugin::qt_metacall(param1, param2, param3);
        } else if (qaccessiblebridgeplugin_metacall_callback != nullptr) {
            return qaccessiblebridgeplugin_metacall_callback(this, param1, param2, param3);
        } else {
            return QAccessibleBridgePlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleBridge* create(const QString& key) override {
        return qaccessiblebridgeplugin_create_callback(this, key);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaccessiblebridgeplugin_event_isbase) {
            qaccessiblebridgeplugin_event_isbase = false;
            return QAccessibleBridgePlugin::event(event);
        } else if (qaccessiblebridgeplugin_event_callback != nullptr) {
            return qaccessiblebridgeplugin_event_callback(this, event);
        } else {
            return QAccessibleBridgePlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaccessiblebridgeplugin_eventfilter_isbase) {
            qaccessiblebridgeplugin_eventfilter_isbase = false;
            return QAccessibleBridgePlugin::eventFilter(watched, event);
        } else if (qaccessiblebridgeplugin_eventfilter_callback != nullptr) {
            return qaccessiblebridgeplugin_eventfilter_callback(this, watched, event);
        } else {
            return QAccessibleBridgePlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaccessiblebridgeplugin_timerevent_isbase) {
            qaccessiblebridgeplugin_timerevent_isbase = false;
            QAccessibleBridgePlugin::timerEvent(event);
        } else if (qaccessiblebridgeplugin_timerevent_callback != nullptr) {
            qaccessiblebridgeplugin_timerevent_callback(this, event);
        } else {
            QAccessibleBridgePlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaccessiblebridgeplugin_childevent_isbase) {
            qaccessiblebridgeplugin_childevent_isbase = false;
            QAccessibleBridgePlugin::childEvent(event);
        } else if (qaccessiblebridgeplugin_childevent_callback != nullptr) {
            qaccessiblebridgeplugin_childevent_callback(this, event);
        } else {
            QAccessibleBridgePlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaccessiblebridgeplugin_customevent_isbase) {
            qaccessiblebridgeplugin_customevent_isbase = false;
            QAccessibleBridgePlugin::customEvent(event);
        } else if (qaccessiblebridgeplugin_customevent_callback != nullptr) {
            qaccessiblebridgeplugin_customevent_callback(this, event);
        } else {
            QAccessibleBridgePlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaccessiblebridgeplugin_connectnotify_isbase) {
            qaccessiblebridgeplugin_connectnotify_isbase = false;
            QAccessibleBridgePlugin::connectNotify(signal);
        } else if (qaccessiblebridgeplugin_connectnotify_callback != nullptr) {
            qaccessiblebridgeplugin_connectnotify_callback(this, signal);
        } else {
            QAccessibleBridgePlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaccessiblebridgeplugin_disconnectnotify_isbase) {
            qaccessiblebridgeplugin_disconnectnotify_isbase = false;
            QAccessibleBridgePlugin::disconnectNotify(signal);
        } else if (qaccessiblebridgeplugin_disconnectnotify_callback != nullptr) {
            qaccessiblebridgeplugin_disconnectnotify_callback(this, signal);
        } else {
            QAccessibleBridgePlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaccessiblebridgeplugin_sender_isbase) {
            qaccessiblebridgeplugin_sender_isbase = false;
            return QAccessibleBridgePlugin::sender();
        } else if (qaccessiblebridgeplugin_sender_callback != nullptr) {
            return qaccessiblebridgeplugin_sender_callback();
        } else {
            return QAccessibleBridgePlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaccessiblebridgeplugin_sendersignalindex_isbase) {
            qaccessiblebridgeplugin_sendersignalindex_isbase = false;
            return QAccessibleBridgePlugin::senderSignalIndex();
        } else if (qaccessiblebridgeplugin_sendersignalindex_callback != nullptr) {
            return qaccessiblebridgeplugin_sendersignalindex_callback();
        } else {
            return QAccessibleBridgePlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaccessiblebridgeplugin_receivers_isbase) {
            qaccessiblebridgeplugin_receivers_isbase = false;
            return QAccessibleBridgePlugin::receivers(signal);
        } else if (qaccessiblebridgeplugin_receivers_callback != nullptr) {
            return qaccessiblebridgeplugin_receivers_callback(this, signal);
        } else {
            return QAccessibleBridgePlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaccessiblebridgeplugin_issignalconnected_isbase) {
            qaccessiblebridgeplugin_issignalconnected_isbase = false;
            return QAccessibleBridgePlugin::isSignalConnected(signal);
        } else if (qaccessiblebridgeplugin_issignalconnected_callback != nullptr) {
            return qaccessiblebridgeplugin_issignalconnected_callback(this, signal);
        } else {
            return QAccessibleBridgePlugin::isSignalConnected(signal);
        }
    }
};

#endif

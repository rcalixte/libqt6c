#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLEPLUGIN_H
#define SRCC_LIBVIRTUALQACCESSIBLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessiblePlugin so that we can call protected methods
class VirtualQAccessiblePlugin : public QAccessiblePlugin {

  public:
    // Virtual class public types (including callbacks)
    using QAccessiblePlugin_Metacall_Callback = int (*)(QAccessiblePlugin*, QMetaObject::Call, int, void**);
    using QAccessiblePlugin_Create_Callback = QAccessibleInterface* (*)(QAccessiblePlugin*, const QString&, QObject*);
    using QAccessiblePlugin_Event_Callback = bool (*)(QAccessiblePlugin*, QEvent*);
    using QAccessiblePlugin_EventFilter_Callback = bool (*)(QAccessiblePlugin*, QObject*, QEvent*);
    using QAccessiblePlugin_TimerEvent_Callback = void (*)(QAccessiblePlugin*, QTimerEvent*);
    using QAccessiblePlugin_ChildEvent_Callback = void (*)(QAccessiblePlugin*, QChildEvent*);
    using QAccessiblePlugin_CustomEvent_Callback = void (*)(QAccessiblePlugin*, QEvent*);
    using QAccessiblePlugin_ConnectNotify_Callback = void (*)(QAccessiblePlugin*, const QMetaMethod&);
    using QAccessiblePlugin_DisconnectNotify_Callback = void (*)(QAccessiblePlugin*, const QMetaMethod&);
    using QAccessiblePlugin_Sender_Callback = QObject* (*)();
    using QAccessiblePlugin_SenderSignalIndex_Callback = int (*)();
    using QAccessiblePlugin_Receivers_Callback = int (*)(const QAccessiblePlugin*, const char*);
    using QAccessiblePlugin_IsSignalConnected_Callback = bool (*)(const QAccessiblePlugin*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAccessiblePlugin_Metacall_Callback qaccessibleplugin_metacall_callback = nullptr;
    QAccessiblePlugin_Create_Callback qaccessibleplugin_create_callback = nullptr;
    QAccessiblePlugin_Event_Callback qaccessibleplugin_event_callback = nullptr;
    QAccessiblePlugin_EventFilter_Callback qaccessibleplugin_eventfilter_callback = nullptr;
    QAccessiblePlugin_TimerEvent_Callback qaccessibleplugin_timerevent_callback = nullptr;
    QAccessiblePlugin_ChildEvent_Callback qaccessibleplugin_childevent_callback = nullptr;
    QAccessiblePlugin_CustomEvent_Callback qaccessibleplugin_customevent_callback = nullptr;
    QAccessiblePlugin_ConnectNotify_Callback qaccessibleplugin_connectnotify_callback = nullptr;
    QAccessiblePlugin_DisconnectNotify_Callback qaccessibleplugin_disconnectnotify_callback = nullptr;
    QAccessiblePlugin_Sender_Callback qaccessibleplugin_sender_callback = nullptr;
    QAccessiblePlugin_SenderSignalIndex_Callback qaccessibleplugin_sendersignalindex_callback = nullptr;
    QAccessiblePlugin_Receivers_Callback qaccessibleplugin_receivers_callback = nullptr;
    QAccessiblePlugin_IsSignalConnected_Callback qaccessibleplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibleplugin_metacall_isbase = false;
    mutable bool qaccessibleplugin_create_isbase = false;
    mutable bool qaccessibleplugin_event_isbase = false;
    mutable bool qaccessibleplugin_eventfilter_isbase = false;
    mutable bool qaccessibleplugin_timerevent_isbase = false;
    mutable bool qaccessibleplugin_childevent_isbase = false;
    mutable bool qaccessibleplugin_customevent_isbase = false;
    mutable bool qaccessibleplugin_connectnotify_isbase = false;
    mutable bool qaccessibleplugin_disconnectnotify_isbase = false;
    mutable bool qaccessibleplugin_sender_isbase = false;
    mutable bool qaccessibleplugin_sendersignalindex_isbase = false;
    mutable bool qaccessibleplugin_receivers_isbase = false;
    mutable bool qaccessibleplugin_issignalconnected_isbase = false;

  public:
    VirtualQAccessiblePlugin() : QAccessiblePlugin(){};
    VirtualQAccessiblePlugin(QObject* parent) : QAccessiblePlugin(parent){};

    ~VirtualQAccessiblePlugin() {
        qaccessibleplugin_metacall_callback = nullptr;
        qaccessibleplugin_create_callback = nullptr;
        qaccessibleplugin_event_callback = nullptr;
        qaccessibleplugin_eventfilter_callback = nullptr;
        qaccessibleplugin_timerevent_callback = nullptr;
        qaccessibleplugin_childevent_callback = nullptr;
        qaccessibleplugin_customevent_callback = nullptr;
        qaccessibleplugin_connectnotify_callback = nullptr;
        qaccessibleplugin_disconnectnotify_callback = nullptr;
        qaccessibleplugin_sender_callback = nullptr;
        qaccessibleplugin_sendersignalindex_callback = nullptr;
        qaccessibleplugin_receivers_callback = nullptr;
        qaccessibleplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAccessiblePlugin_Metacall_Callback(QAccessiblePlugin_Metacall_Callback cb) { qaccessibleplugin_metacall_callback = cb; }
    void setQAccessiblePlugin_Create_Callback(QAccessiblePlugin_Create_Callback cb) { qaccessibleplugin_create_callback = cb; }
    void setQAccessiblePlugin_Event_Callback(QAccessiblePlugin_Event_Callback cb) { qaccessibleplugin_event_callback = cb; }
    void setQAccessiblePlugin_EventFilter_Callback(QAccessiblePlugin_EventFilter_Callback cb) { qaccessibleplugin_eventfilter_callback = cb; }
    void setQAccessiblePlugin_TimerEvent_Callback(QAccessiblePlugin_TimerEvent_Callback cb) { qaccessibleplugin_timerevent_callback = cb; }
    void setQAccessiblePlugin_ChildEvent_Callback(QAccessiblePlugin_ChildEvent_Callback cb) { qaccessibleplugin_childevent_callback = cb; }
    void setQAccessiblePlugin_CustomEvent_Callback(QAccessiblePlugin_CustomEvent_Callback cb) { qaccessibleplugin_customevent_callback = cb; }
    void setQAccessiblePlugin_ConnectNotify_Callback(QAccessiblePlugin_ConnectNotify_Callback cb) { qaccessibleplugin_connectnotify_callback = cb; }
    void setQAccessiblePlugin_DisconnectNotify_Callback(QAccessiblePlugin_DisconnectNotify_Callback cb) { qaccessibleplugin_disconnectnotify_callback = cb; }
    void setQAccessiblePlugin_Sender_Callback(QAccessiblePlugin_Sender_Callback cb) { qaccessibleplugin_sender_callback = cb; }
    void setQAccessiblePlugin_SenderSignalIndex_Callback(QAccessiblePlugin_SenderSignalIndex_Callback cb) { qaccessibleplugin_sendersignalindex_callback = cb; }
    void setQAccessiblePlugin_Receivers_Callback(QAccessiblePlugin_Receivers_Callback cb) { qaccessibleplugin_receivers_callback = cb; }
    void setQAccessiblePlugin_IsSignalConnected_Callback(QAccessiblePlugin_IsSignalConnected_Callback cb) { qaccessibleplugin_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAccessiblePlugin_Metacall_IsBase(bool value) const { qaccessibleplugin_metacall_isbase = value; }
    void setQAccessiblePlugin_Create_IsBase(bool value) const { qaccessibleplugin_create_isbase = value; }
    void setQAccessiblePlugin_Event_IsBase(bool value) const { qaccessibleplugin_event_isbase = value; }
    void setQAccessiblePlugin_EventFilter_IsBase(bool value) const { qaccessibleplugin_eventfilter_isbase = value; }
    void setQAccessiblePlugin_TimerEvent_IsBase(bool value) const { qaccessibleplugin_timerevent_isbase = value; }
    void setQAccessiblePlugin_ChildEvent_IsBase(bool value) const { qaccessibleplugin_childevent_isbase = value; }
    void setQAccessiblePlugin_CustomEvent_IsBase(bool value) const { qaccessibleplugin_customevent_isbase = value; }
    void setQAccessiblePlugin_ConnectNotify_IsBase(bool value) const { qaccessibleplugin_connectnotify_isbase = value; }
    void setQAccessiblePlugin_DisconnectNotify_IsBase(bool value) const { qaccessibleplugin_disconnectnotify_isbase = value; }
    void setQAccessiblePlugin_Sender_IsBase(bool value) const { qaccessibleplugin_sender_isbase = value; }
    void setQAccessiblePlugin_SenderSignalIndex_IsBase(bool value) const { qaccessibleplugin_sendersignalindex_isbase = value; }
    void setQAccessiblePlugin_Receivers_IsBase(bool value) const { qaccessibleplugin_receivers_isbase = value; }
    void setQAccessiblePlugin_IsSignalConnected_IsBase(bool value) const { qaccessibleplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qaccessibleplugin_metacall_isbase) {
            qaccessibleplugin_metacall_isbase = false;
            return QAccessiblePlugin::qt_metacall(param1, param2, param3);
        } else if (qaccessibleplugin_metacall_callback != nullptr) {
            return qaccessibleplugin_metacall_callback(this, param1, param2, param3);
        } else {
            return QAccessiblePlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* create(const QString& key, QObject* object) override {
        return qaccessibleplugin_create_callback(this, key, object);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qaccessibleplugin_event_isbase) {
            qaccessibleplugin_event_isbase = false;
            return QAccessiblePlugin::event(event);
        } else if (qaccessibleplugin_event_callback != nullptr) {
            return qaccessibleplugin_event_callback(this, event);
        } else {
            return QAccessiblePlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qaccessibleplugin_eventfilter_isbase) {
            qaccessibleplugin_eventfilter_isbase = false;
            return QAccessiblePlugin::eventFilter(watched, event);
        } else if (qaccessibleplugin_eventfilter_callback != nullptr) {
            return qaccessibleplugin_eventfilter_callback(this, watched, event);
        } else {
            return QAccessiblePlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qaccessibleplugin_timerevent_isbase) {
            qaccessibleplugin_timerevent_isbase = false;
            QAccessiblePlugin::timerEvent(event);
        } else if (qaccessibleplugin_timerevent_callback != nullptr) {
            qaccessibleplugin_timerevent_callback(this, event);
        } else {
            QAccessiblePlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qaccessibleplugin_childevent_isbase) {
            qaccessibleplugin_childevent_isbase = false;
            QAccessiblePlugin::childEvent(event);
        } else if (qaccessibleplugin_childevent_callback != nullptr) {
            qaccessibleplugin_childevent_callback(this, event);
        } else {
            QAccessiblePlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qaccessibleplugin_customevent_isbase) {
            qaccessibleplugin_customevent_isbase = false;
            QAccessiblePlugin::customEvent(event);
        } else if (qaccessibleplugin_customevent_callback != nullptr) {
            qaccessibleplugin_customevent_callback(this, event);
        } else {
            QAccessiblePlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qaccessibleplugin_connectnotify_isbase) {
            qaccessibleplugin_connectnotify_isbase = false;
            QAccessiblePlugin::connectNotify(signal);
        } else if (qaccessibleplugin_connectnotify_callback != nullptr) {
            qaccessibleplugin_connectnotify_callback(this, signal);
        } else {
            QAccessiblePlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qaccessibleplugin_disconnectnotify_isbase) {
            qaccessibleplugin_disconnectnotify_isbase = false;
            QAccessiblePlugin::disconnectNotify(signal);
        } else if (qaccessibleplugin_disconnectnotify_callback != nullptr) {
            qaccessibleplugin_disconnectnotify_callback(this, signal);
        } else {
            QAccessiblePlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qaccessibleplugin_sender_isbase) {
            qaccessibleplugin_sender_isbase = false;
            return QAccessiblePlugin::sender();
        } else if (qaccessibleplugin_sender_callback != nullptr) {
            return qaccessibleplugin_sender_callback();
        } else {
            return QAccessiblePlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qaccessibleplugin_sendersignalindex_isbase) {
            qaccessibleplugin_sendersignalindex_isbase = false;
            return QAccessiblePlugin::senderSignalIndex();
        } else if (qaccessibleplugin_sendersignalindex_callback != nullptr) {
            return qaccessibleplugin_sendersignalindex_callback();
        } else {
            return QAccessiblePlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qaccessibleplugin_receivers_isbase) {
            qaccessibleplugin_receivers_isbase = false;
            return QAccessiblePlugin::receivers(signal);
        } else if (qaccessibleplugin_receivers_callback != nullptr) {
            return qaccessibleplugin_receivers_callback(this, signal);
        } else {
            return QAccessiblePlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qaccessibleplugin_issignalconnected_isbase) {
            qaccessibleplugin_issignalconnected_isbase = false;
            return QAccessiblePlugin::isSignalConnected(signal);
        } else if (qaccessibleplugin_issignalconnected_callback != nullptr) {
            return qaccessibleplugin_issignalconnected_callback(this, signal);
        } else {
            return QAccessiblePlugin::isSignalConnected(signal);
        }
    }
};

#endif

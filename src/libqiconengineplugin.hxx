#pragma once
#ifndef SRCC_LIBVIRTUALQICONENGINEPLUGIN_H
#define SRCC_LIBVIRTUALQICONENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIconEnginePlugin so that we can call protected methods
class VirtualQIconEnginePlugin : public QIconEnginePlugin {

  public:
    // Virtual class public types (including callbacks)
    using QIconEnginePlugin_Metacall_Callback = int (*)(QIconEnginePlugin*, QMetaObject::Call, int, void**);
    using QIconEnginePlugin_Create_Callback = QIconEngine* (*)(QIconEnginePlugin*, const QString&);
    using QIconEnginePlugin_Event_Callback = bool (*)(QIconEnginePlugin*, QEvent*);
    using QIconEnginePlugin_EventFilter_Callback = bool (*)(QIconEnginePlugin*, QObject*, QEvent*);
    using QIconEnginePlugin_TimerEvent_Callback = void (*)(QIconEnginePlugin*, QTimerEvent*);
    using QIconEnginePlugin_ChildEvent_Callback = void (*)(QIconEnginePlugin*, QChildEvent*);
    using QIconEnginePlugin_CustomEvent_Callback = void (*)(QIconEnginePlugin*, QEvent*);
    using QIconEnginePlugin_ConnectNotify_Callback = void (*)(QIconEnginePlugin*, const QMetaMethod&);
    using QIconEnginePlugin_DisconnectNotify_Callback = void (*)(QIconEnginePlugin*, const QMetaMethod&);
    using QIconEnginePlugin_Sender_Callback = QObject* (*)();
    using QIconEnginePlugin_SenderSignalIndex_Callback = int (*)();
    using QIconEnginePlugin_Receivers_Callback = int (*)(const QIconEnginePlugin*, const char*);
    using QIconEnginePlugin_IsSignalConnected_Callback = bool (*)(const QIconEnginePlugin*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QIconEnginePlugin_Metacall_Callback qiconengineplugin_metacall_callback = nullptr;
    QIconEnginePlugin_Create_Callback qiconengineplugin_create_callback = nullptr;
    QIconEnginePlugin_Event_Callback qiconengineplugin_event_callback = nullptr;
    QIconEnginePlugin_EventFilter_Callback qiconengineplugin_eventfilter_callback = nullptr;
    QIconEnginePlugin_TimerEvent_Callback qiconengineplugin_timerevent_callback = nullptr;
    QIconEnginePlugin_ChildEvent_Callback qiconengineplugin_childevent_callback = nullptr;
    QIconEnginePlugin_CustomEvent_Callback qiconengineplugin_customevent_callback = nullptr;
    QIconEnginePlugin_ConnectNotify_Callback qiconengineplugin_connectnotify_callback = nullptr;
    QIconEnginePlugin_DisconnectNotify_Callback qiconengineplugin_disconnectnotify_callback = nullptr;
    QIconEnginePlugin_Sender_Callback qiconengineplugin_sender_callback = nullptr;
    QIconEnginePlugin_SenderSignalIndex_Callback qiconengineplugin_sendersignalindex_callback = nullptr;
    QIconEnginePlugin_Receivers_Callback qiconengineplugin_receivers_callback = nullptr;
    QIconEnginePlugin_IsSignalConnected_Callback qiconengineplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qiconengineplugin_metacall_isbase = false;
    mutable bool qiconengineplugin_create_isbase = false;
    mutable bool qiconengineplugin_event_isbase = false;
    mutable bool qiconengineplugin_eventfilter_isbase = false;
    mutable bool qiconengineplugin_timerevent_isbase = false;
    mutable bool qiconengineplugin_childevent_isbase = false;
    mutable bool qiconengineplugin_customevent_isbase = false;
    mutable bool qiconengineplugin_connectnotify_isbase = false;
    mutable bool qiconengineplugin_disconnectnotify_isbase = false;
    mutable bool qiconengineplugin_sender_isbase = false;
    mutable bool qiconengineplugin_sendersignalindex_isbase = false;
    mutable bool qiconengineplugin_receivers_isbase = false;
    mutable bool qiconengineplugin_issignalconnected_isbase = false;

  public:
    VirtualQIconEnginePlugin() : QIconEnginePlugin(){};
    VirtualQIconEnginePlugin(QObject* parent) : QIconEnginePlugin(parent){};

    ~VirtualQIconEnginePlugin() {
        qiconengineplugin_metacall_callback = nullptr;
        qiconengineplugin_create_callback = nullptr;
        qiconengineplugin_event_callback = nullptr;
        qiconengineplugin_eventfilter_callback = nullptr;
        qiconengineplugin_timerevent_callback = nullptr;
        qiconengineplugin_childevent_callback = nullptr;
        qiconengineplugin_customevent_callback = nullptr;
        qiconengineplugin_connectnotify_callback = nullptr;
        qiconengineplugin_disconnectnotify_callback = nullptr;
        qiconengineplugin_sender_callback = nullptr;
        qiconengineplugin_sendersignalindex_callback = nullptr;
        qiconengineplugin_receivers_callback = nullptr;
        qiconengineplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQIconEnginePlugin_Metacall_Callback(QIconEnginePlugin_Metacall_Callback cb) { qiconengineplugin_metacall_callback = cb; }
    void setQIconEnginePlugin_Create_Callback(QIconEnginePlugin_Create_Callback cb) { qiconengineplugin_create_callback = cb; }
    void setQIconEnginePlugin_Event_Callback(QIconEnginePlugin_Event_Callback cb) { qiconengineplugin_event_callback = cb; }
    void setQIconEnginePlugin_EventFilter_Callback(QIconEnginePlugin_EventFilter_Callback cb) { qiconengineplugin_eventfilter_callback = cb; }
    void setQIconEnginePlugin_TimerEvent_Callback(QIconEnginePlugin_TimerEvent_Callback cb) { qiconengineplugin_timerevent_callback = cb; }
    void setQIconEnginePlugin_ChildEvent_Callback(QIconEnginePlugin_ChildEvent_Callback cb) { qiconengineplugin_childevent_callback = cb; }
    void setQIconEnginePlugin_CustomEvent_Callback(QIconEnginePlugin_CustomEvent_Callback cb) { qiconengineplugin_customevent_callback = cb; }
    void setQIconEnginePlugin_ConnectNotify_Callback(QIconEnginePlugin_ConnectNotify_Callback cb) { qiconengineplugin_connectnotify_callback = cb; }
    void setQIconEnginePlugin_DisconnectNotify_Callback(QIconEnginePlugin_DisconnectNotify_Callback cb) { qiconengineplugin_disconnectnotify_callback = cb; }
    void setQIconEnginePlugin_Sender_Callback(QIconEnginePlugin_Sender_Callback cb) { qiconengineplugin_sender_callback = cb; }
    void setQIconEnginePlugin_SenderSignalIndex_Callback(QIconEnginePlugin_SenderSignalIndex_Callback cb) { qiconengineplugin_sendersignalindex_callback = cb; }
    void setQIconEnginePlugin_Receivers_Callback(QIconEnginePlugin_Receivers_Callback cb) { qiconengineplugin_receivers_callback = cb; }
    void setQIconEnginePlugin_IsSignalConnected_Callback(QIconEnginePlugin_IsSignalConnected_Callback cb) { qiconengineplugin_issignalconnected_callback = cb; }

    // Base flag setters
    void setQIconEnginePlugin_Metacall_IsBase(bool value) const { qiconengineplugin_metacall_isbase = value; }
    void setQIconEnginePlugin_Create_IsBase(bool value) const { qiconengineplugin_create_isbase = value; }
    void setQIconEnginePlugin_Event_IsBase(bool value) const { qiconengineplugin_event_isbase = value; }
    void setQIconEnginePlugin_EventFilter_IsBase(bool value) const { qiconengineplugin_eventfilter_isbase = value; }
    void setQIconEnginePlugin_TimerEvent_IsBase(bool value) const { qiconengineplugin_timerevent_isbase = value; }
    void setQIconEnginePlugin_ChildEvent_IsBase(bool value) const { qiconengineplugin_childevent_isbase = value; }
    void setQIconEnginePlugin_CustomEvent_IsBase(bool value) const { qiconengineplugin_customevent_isbase = value; }
    void setQIconEnginePlugin_ConnectNotify_IsBase(bool value) const { qiconengineplugin_connectnotify_isbase = value; }
    void setQIconEnginePlugin_DisconnectNotify_IsBase(bool value) const { qiconengineplugin_disconnectnotify_isbase = value; }
    void setQIconEnginePlugin_Sender_IsBase(bool value) const { qiconengineplugin_sender_isbase = value; }
    void setQIconEnginePlugin_SenderSignalIndex_IsBase(bool value) const { qiconengineplugin_sendersignalindex_isbase = value; }
    void setQIconEnginePlugin_Receivers_IsBase(bool value) const { qiconengineplugin_receivers_isbase = value; }
    void setQIconEnginePlugin_IsSignalConnected_IsBase(bool value) const { qiconengineplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qiconengineplugin_metacall_isbase) {
            qiconengineplugin_metacall_isbase = false;
            return QIconEnginePlugin::qt_metacall(param1, param2, param3);
        } else if (qiconengineplugin_metacall_callback != nullptr) {
            return qiconengineplugin_metacall_callback(this, param1, param2, param3);
        } else {
            return QIconEnginePlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIconEngine* create(const QString& filename) override {
        return qiconengineplugin_create_callback(this, filename);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qiconengineplugin_event_isbase) {
            qiconengineplugin_event_isbase = false;
            return QIconEnginePlugin::event(event);
        } else if (qiconengineplugin_event_callback != nullptr) {
            return qiconengineplugin_event_callback(this, event);
        } else {
            return QIconEnginePlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qiconengineplugin_eventfilter_isbase) {
            qiconengineplugin_eventfilter_isbase = false;
            return QIconEnginePlugin::eventFilter(watched, event);
        } else if (qiconengineplugin_eventfilter_callback != nullptr) {
            return qiconengineplugin_eventfilter_callback(this, watched, event);
        } else {
            return QIconEnginePlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qiconengineplugin_timerevent_isbase) {
            qiconengineplugin_timerevent_isbase = false;
            QIconEnginePlugin::timerEvent(event);
        } else if (qiconengineplugin_timerevent_callback != nullptr) {
            qiconengineplugin_timerevent_callback(this, event);
        } else {
            QIconEnginePlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qiconengineplugin_childevent_isbase) {
            qiconengineplugin_childevent_isbase = false;
            QIconEnginePlugin::childEvent(event);
        } else if (qiconengineplugin_childevent_callback != nullptr) {
            qiconengineplugin_childevent_callback(this, event);
        } else {
            QIconEnginePlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qiconengineplugin_customevent_isbase) {
            qiconengineplugin_customevent_isbase = false;
            QIconEnginePlugin::customEvent(event);
        } else if (qiconengineplugin_customevent_callback != nullptr) {
            qiconengineplugin_customevent_callback(this, event);
        } else {
            QIconEnginePlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qiconengineplugin_connectnotify_isbase) {
            qiconengineplugin_connectnotify_isbase = false;
            QIconEnginePlugin::connectNotify(signal);
        } else if (qiconengineplugin_connectnotify_callback != nullptr) {
            qiconengineplugin_connectnotify_callback(this, signal);
        } else {
            QIconEnginePlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qiconengineplugin_disconnectnotify_isbase) {
            qiconengineplugin_disconnectnotify_isbase = false;
            QIconEnginePlugin::disconnectNotify(signal);
        } else if (qiconengineplugin_disconnectnotify_callback != nullptr) {
            qiconengineplugin_disconnectnotify_callback(this, signal);
        } else {
            QIconEnginePlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qiconengineplugin_sender_isbase) {
            qiconengineplugin_sender_isbase = false;
            return QIconEnginePlugin::sender();
        } else if (qiconengineplugin_sender_callback != nullptr) {
            return qiconengineplugin_sender_callback();
        } else {
            return QIconEnginePlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qiconengineplugin_sendersignalindex_isbase) {
            qiconengineplugin_sendersignalindex_isbase = false;
            return QIconEnginePlugin::senderSignalIndex();
        } else if (qiconengineplugin_sendersignalindex_callback != nullptr) {
            return qiconengineplugin_sendersignalindex_callback();
        } else {
            return QIconEnginePlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qiconengineplugin_receivers_isbase) {
            qiconengineplugin_receivers_isbase = false;
            return QIconEnginePlugin::receivers(signal);
        } else if (qiconengineplugin_receivers_callback != nullptr) {
            return qiconengineplugin_receivers_callback(this, signal);
        } else {
            return QIconEnginePlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qiconengineplugin_issignalconnected_isbase) {
            qiconengineplugin_issignalconnected_isbase = false;
            return QIconEnginePlugin::isSignalConnected(signal);
        } else if (qiconengineplugin_issignalconnected_callback != nullptr) {
            return qiconengineplugin_issignalconnected_callback(this, signal);
        } else {
            return QIconEnginePlugin::isSignalConnected(signal);
        }
    }
};

#endif

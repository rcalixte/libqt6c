#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQLOCALSERVER_H
#define SRC_NETWORKC_LIBVIRTUALQLOCALSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLocalServer so that we can call protected methods
class VirtualQLocalServer : public QLocalServer {

  public:
    // Virtual class public types (including callbacks)
    using QLocalServer_Metacall_Callback = int (*)(QLocalServer*, QMetaObject::Call, int, void**);
    using QLocalServer_HasPendingConnections_Callback = bool (*)();
    using QLocalServer_NextPendingConnection_Callback = QLocalSocket* (*)();
    using QLocalServer_IncomingConnection_Callback = void (*)(QLocalServer*, quintptr);
    using QLocalServer_Event_Callback = bool (*)(QLocalServer*, QEvent*);
    using QLocalServer_EventFilter_Callback = bool (*)(QLocalServer*, QObject*, QEvent*);
    using QLocalServer_TimerEvent_Callback = void (*)(QLocalServer*, QTimerEvent*);
    using QLocalServer_ChildEvent_Callback = void (*)(QLocalServer*, QChildEvent*);
    using QLocalServer_CustomEvent_Callback = void (*)(QLocalServer*, QEvent*);
    using QLocalServer_ConnectNotify_Callback = void (*)(QLocalServer*, const QMetaMethod&);
    using QLocalServer_DisconnectNotify_Callback = void (*)(QLocalServer*, const QMetaMethod&);
    using QLocalServer_Sender_Callback = QObject* (*)();
    using QLocalServer_SenderSignalIndex_Callback = int (*)();
    using QLocalServer_Receivers_Callback = int (*)(const QLocalServer*, const char*);
    using QLocalServer_IsSignalConnected_Callback = bool (*)(const QLocalServer*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QLocalServer_Metacall_Callback qlocalserver_metacall_callback = nullptr;
    QLocalServer_HasPendingConnections_Callback qlocalserver_haspendingconnections_callback = nullptr;
    QLocalServer_NextPendingConnection_Callback qlocalserver_nextpendingconnection_callback = nullptr;
    QLocalServer_IncomingConnection_Callback qlocalserver_incomingconnection_callback = nullptr;
    QLocalServer_Event_Callback qlocalserver_event_callback = nullptr;
    QLocalServer_EventFilter_Callback qlocalserver_eventfilter_callback = nullptr;
    QLocalServer_TimerEvent_Callback qlocalserver_timerevent_callback = nullptr;
    QLocalServer_ChildEvent_Callback qlocalserver_childevent_callback = nullptr;
    QLocalServer_CustomEvent_Callback qlocalserver_customevent_callback = nullptr;
    QLocalServer_ConnectNotify_Callback qlocalserver_connectnotify_callback = nullptr;
    QLocalServer_DisconnectNotify_Callback qlocalserver_disconnectnotify_callback = nullptr;
    QLocalServer_Sender_Callback qlocalserver_sender_callback = nullptr;
    QLocalServer_SenderSignalIndex_Callback qlocalserver_sendersignalindex_callback = nullptr;
    QLocalServer_Receivers_Callback qlocalserver_receivers_callback = nullptr;
    QLocalServer_IsSignalConnected_Callback qlocalserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlocalserver_metacall_isbase = false;
    mutable bool qlocalserver_haspendingconnections_isbase = false;
    mutable bool qlocalserver_nextpendingconnection_isbase = false;
    mutable bool qlocalserver_incomingconnection_isbase = false;
    mutable bool qlocalserver_event_isbase = false;
    mutable bool qlocalserver_eventfilter_isbase = false;
    mutable bool qlocalserver_timerevent_isbase = false;
    mutable bool qlocalserver_childevent_isbase = false;
    mutable bool qlocalserver_customevent_isbase = false;
    mutable bool qlocalserver_connectnotify_isbase = false;
    mutable bool qlocalserver_disconnectnotify_isbase = false;
    mutable bool qlocalserver_sender_isbase = false;
    mutable bool qlocalserver_sendersignalindex_isbase = false;
    mutable bool qlocalserver_receivers_isbase = false;
    mutable bool qlocalserver_issignalconnected_isbase = false;

  public:
    VirtualQLocalServer() : QLocalServer(){};
    VirtualQLocalServer(QObject* parent) : QLocalServer(parent){};

    ~VirtualQLocalServer() {
        qlocalserver_metacall_callback = nullptr;
        qlocalserver_haspendingconnections_callback = nullptr;
        qlocalserver_nextpendingconnection_callback = nullptr;
        qlocalserver_incomingconnection_callback = nullptr;
        qlocalserver_event_callback = nullptr;
        qlocalserver_eventfilter_callback = nullptr;
        qlocalserver_timerevent_callback = nullptr;
        qlocalserver_childevent_callback = nullptr;
        qlocalserver_customevent_callback = nullptr;
        qlocalserver_connectnotify_callback = nullptr;
        qlocalserver_disconnectnotify_callback = nullptr;
        qlocalserver_sender_callback = nullptr;
        qlocalserver_sendersignalindex_callback = nullptr;
        qlocalserver_receivers_callback = nullptr;
        qlocalserver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQLocalServer_Metacall_Callback(QLocalServer_Metacall_Callback cb) { qlocalserver_metacall_callback = cb; }
    void setQLocalServer_HasPendingConnections_Callback(QLocalServer_HasPendingConnections_Callback cb) { qlocalserver_haspendingconnections_callback = cb; }
    void setQLocalServer_NextPendingConnection_Callback(QLocalServer_NextPendingConnection_Callback cb) { qlocalserver_nextpendingconnection_callback = cb; }
    void setQLocalServer_IncomingConnection_Callback(QLocalServer_IncomingConnection_Callback cb) { qlocalserver_incomingconnection_callback = cb; }
    void setQLocalServer_Event_Callback(QLocalServer_Event_Callback cb) { qlocalserver_event_callback = cb; }
    void setQLocalServer_EventFilter_Callback(QLocalServer_EventFilter_Callback cb) { qlocalserver_eventfilter_callback = cb; }
    void setQLocalServer_TimerEvent_Callback(QLocalServer_TimerEvent_Callback cb) { qlocalserver_timerevent_callback = cb; }
    void setQLocalServer_ChildEvent_Callback(QLocalServer_ChildEvent_Callback cb) { qlocalserver_childevent_callback = cb; }
    void setQLocalServer_CustomEvent_Callback(QLocalServer_CustomEvent_Callback cb) { qlocalserver_customevent_callback = cb; }
    void setQLocalServer_ConnectNotify_Callback(QLocalServer_ConnectNotify_Callback cb) { qlocalserver_connectnotify_callback = cb; }
    void setQLocalServer_DisconnectNotify_Callback(QLocalServer_DisconnectNotify_Callback cb) { qlocalserver_disconnectnotify_callback = cb; }
    void setQLocalServer_Sender_Callback(QLocalServer_Sender_Callback cb) { qlocalserver_sender_callback = cb; }
    void setQLocalServer_SenderSignalIndex_Callback(QLocalServer_SenderSignalIndex_Callback cb) { qlocalserver_sendersignalindex_callback = cb; }
    void setQLocalServer_Receivers_Callback(QLocalServer_Receivers_Callback cb) { qlocalserver_receivers_callback = cb; }
    void setQLocalServer_IsSignalConnected_Callback(QLocalServer_IsSignalConnected_Callback cb) { qlocalserver_issignalconnected_callback = cb; }

    // Base flag setters
    void setQLocalServer_Metacall_IsBase(bool value) const { qlocalserver_metacall_isbase = value; }
    void setQLocalServer_HasPendingConnections_IsBase(bool value) const { qlocalserver_haspendingconnections_isbase = value; }
    void setQLocalServer_NextPendingConnection_IsBase(bool value) const { qlocalserver_nextpendingconnection_isbase = value; }
    void setQLocalServer_IncomingConnection_IsBase(bool value) const { qlocalserver_incomingconnection_isbase = value; }
    void setQLocalServer_Event_IsBase(bool value) const { qlocalserver_event_isbase = value; }
    void setQLocalServer_EventFilter_IsBase(bool value) const { qlocalserver_eventfilter_isbase = value; }
    void setQLocalServer_TimerEvent_IsBase(bool value) const { qlocalserver_timerevent_isbase = value; }
    void setQLocalServer_ChildEvent_IsBase(bool value) const { qlocalserver_childevent_isbase = value; }
    void setQLocalServer_CustomEvent_IsBase(bool value) const { qlocalserver_customevent_isbase = value; }
    void setQLocalServer_ConnectNotify_IsBase(bool value) const { qlocalserver_connectnotify_isbase = value; }
    void setQLocalServer_DisconnectNotify_IsBase(bool value) const { qlocalserver_disconnectnotify_isbase = value; }
    void setQLocalServer_Sender_IsBase(bool value) const { qlocalserver_sender_isbase = value; }
    void setQLocalServer_SenderSignalIndex_IsBase(bool value) const { qlocalserver_sendersignalindex_isbase = value; }
    void setQLocalServer_Receivers_IsBase(bool value) const { qlocalserver_receivers_isbase = value; }
    void setQLocalServer_IsSignalConnected_IsBase(bool value) const { qlocalserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlocalserver_metacall_isbase) {
            qlocalserver_metacall_isbase = false;
            return QLocalServer::qt_metacall(param1, param2, param3);
        } else if (qlocalserver_metacall_callback != nullptr) {
            return qlocalserver_metacall_callback(this, param1, param2, param3);
        } else {
            return QLocalServer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qlocalserver_haspendingconnections_isbase) {
            qlocalserver_haspendingconnections_isbase = false;
            return QLocalServer::hasPendingConnections();
        } else if (qlocalserver_haspendingconnections_callback != nullptr) {
            return qlocalserver_haspendingconnections_callback();
        } else {
            return QLocalServer::hasPendingConnections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLocalSocket* nextPendingConnection() override {
        if (qlocalserver_nextpendingconnection_isbase) {
            qlocalserver_nextpendingconnection_isbase = false;
            return QLocalServer::nextPendingConnection();
        } else if (qlocalserver_nextpendingconnection_callback != nullptr) {
            return qlocalserver_nextpendingconnection_callback();
        } else {
            return QLocalServer::nextPendingConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(quintptr socketDescriptor) override {
        if (qlocalserver_incomingconnection_isbase) {
            qlocalserver_incomingconnection_isbase = false;
            QLocalServer::incomingConnection(socketDescriptor);
        } else if (qlocalserver_incomingconnection_callback != nullptr) {
            qlocalserver_incomingconnection_callback(this, socketDescriptor);
        } else {
            QLocalServer::incomingConnection(socketDescriptor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlocalserver_event_isbase) {
            qlocalserver_event_isbase = false;
            return QLocalServer::event(event);
        } else if (qlocalserver_event_callback != nullptr) {
            return qlocalserver_event_callback(this, event);
        } else {
            return QLocalServer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlocalserver_eventfilter_isbase) {
            qlocalserver_eventfilter_isbase = false;
            return QLocalServer::eventFilter(watched, event);
        } else if (qlocalserver_eventfilter_callback != nullptr) {
            return qlocalserver_eventfilter_callback(this, watched, event);
        } else {
            return QLocalServer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlocalserver_timerevent_isbase) {
            qlocalserver_timerevent_isbase = false;
            QLocalServer::timerEvent(event);
        } else if (qlocalserver_timerevent_callback != nullptr) {
            qlocalserver_timerevent_callback(this, event);
        } else {
            QLocalServer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlocalserver_childevent_isbase) {
            qlocalserver_childevent_isbase = false;
            QLocalServer::childEvent(event);
        } else if (qlocalserver_childevent_callback != nullptr) {
            qlocalserver_childevent_callback(this, event);
        } else {
            QLocalServer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlocalserver_customevent_isbase) {
            qlocalserver_customevent_isbase = false;
            QLocalServer::customEvent(event);
        } else if (qlocalserver_customevent_callback != nullptr) {
            qlocalserver_customevent_callback(this, event);
        } else {
            QLocalServer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlocalserver_connectnotify_isbase) {
            qlocalserver_connectnotify_isbase = false;
            QLocalServer::connectNotify(signal);
        } else if (qlocalserver_connectnotify_callback != nullptr) {
            qlocalserver_connectnotify_callback(this, signal);
        } else {
            QLocalServer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlocalserver_disconnectnotify_isbase) {
            qlocalserver_disconnectnotify_isbase = false;
            QLocalServer::disconnectNotify(signal);
        } else if (qlocalserver_disconnectnotify_callback != nullptr) {
            qlocalserver_disconnectnotify_callback(this, signal);
        } else {
            QLocalServer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlocalserver_sender_isbase) {
            qlocalserver_sender_isbase = false;
            return QLocalServer::sender();
        } else if (qlocalserver_sender_callback != nullptr) {
            return qlocalserver_sender_callback();
        } else {
            return QLocalServer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlocalserver_sendersignalindex_isbase) {
            qlocalserver_sendersignalindex_isbase = false;
            return QLocalServer::senderSignalIndex();
        } else if (qlocalserver_sendersignalindex_callback != nullptr) {
            return qlocalserver_sendersignalindex_callback();
        } else {
            return QLocalServer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlocalserver_receivers_isbase) {
            qlocalserver_receivers_isbase = false;
            return QLocalServer::receivers(signal);
        } else if (qlocalserver_receivers_callback != nullptr) {
            return qlocalserver_receivers_callback(this, signal);
        } else {
            return QLocalServer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlocalserver_issignalconnected_isbase) {
            qlocalserver_issignalconnected_isbase = false;
            return QLocalServer::isSignalConnected(signal);
        } else if (qlocalserver_issignalconnected_callback != nullptr) {
            return qlocalserver_issignalconnected_callback(this, signal);
        } else {
            return QLocalServer::isSignalConnected(signal);
        }
    }
};

#endif

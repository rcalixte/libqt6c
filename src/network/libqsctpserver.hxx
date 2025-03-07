#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQSCTPSERVER_H
#define SRC_NETWORKC_LIBVIRTUALQSCTPSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSctpServer so that we can call protected methods
class VirtualQSctpServer : public QSctpServer {

  public:
    // Virtual class public types (including callbacks)
    using QSctpServer_Metacall_Callback = int (*)(QSctpServer*, QMetaObject::Call, int, void**);
    using QSctpServer_IncomingConnection_Callback = void (*)(QSctpServer*, qintptr);
    using QSctpServer_HasPendingConnections_Callback = bool (*)();
    using QSctpServer_NextPendingConnection_Callback = QTcpSocket* (*)();
    using QSctpServer_Event_Callback = bool (*)(QSctpServer*, QEvent*);
    using QSctpServer_EventFilter_Callback = bool (*)(QSctpServer*, QObject*, QEvent*);
    using QSctpServer_TimerEvent_Callback = void (*)(QSctpServer*, QTimerEvent*);
    using QSctpServer_ChildEvent_Callback = void (*)(QSctpServer*, QChildEvent*);
    using QSctpServer_CustomEvent_Callback = void (*)(QSctpServer*, QEvent*);
    using QSctpServer_ConnectNotify_Callback = void (*)(QSctpServer*, const QMetaMethod&);
    using QSctpServer_DisconnectNotify_Callback = void (*)(QSctpServer*, const QMetaMethod&);
    using QSctpServer_AddPendingConnection_Callback = void (*)(QSctpServer*, QTcpSocket*);
    using QSctpServer_Sender_Callback = QObject* (*)();
    using QSctpServer_SenderSignalIndex_Callback = int (*)();
    using QSctpServer_Receivers_Callback = int (*)(const QSctpServer*, const char*);
    using QSctpServer_IsSignalConnected_Callback = bool (*)(const QSctpServer*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSctpServer_Metacall_Callback qsctpserver_metacall_callback = nullptr;
    QSctpServer_IncomingConnection_Callback qsctpserver_incomingconnection_callback = nullptr;
    QSctpServer_HasPendingConnections_Callback qsctpserver_haspendingconnections_callback = nullptr;
    QSctpServer_NextPendingConnection_Callback qsctpserver_nextpendingconnection_callback = nullptr;
    QSctpServer_Event_Callback qsctpserver_event_callback = nullptr;
    QSctpServer_EventFilter_Callback qsctpserver_eventfilter_callback = nullptr;
    QSctpServer_TimerEvent_Callback qsctpserver_timerevent_callback = nullptr;
    QSctpServer_ChildEvent_Callback qsctpserver_childevent_callback = nullptr;
    QSctpServer_CustomEvent_Callback qsctpserver_customevent_callback = nullptr;
    QSctpServer_ConnectNotify_Callback qsctpserver_connectnotify_callback = nullptr;
    QSctpServer_DisconnectNotify_Callback qsctpserver_disconnectnotify_callback = nullptr;
    QSctpServer_AddPendingConnection_Callback qsctpserver_addpendingconnection_callback = nullptr;
    QSctpServer_Sender_Callback qsctpserver_sender_callback = nullptr;
    QSctpServer_SenderSignalIndex_Callback qsctpserver_sendersignalindex_callback = nullptr;
    QSctpServer_Receivers_Callback qsctpserver_receivers_callback = nullptr;
    QSctpServer_IsSignalConnected_Callback qsctpserver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsctpserver_metacall_isbase = false;
    mutable bool qsctpserver_incomingconnection_isbase = false;
    mutable bool qsctpserver_haspendingconnections_isbase = false;
    mutable bool qsctpserver_nextpendingconnection_isbase = false;
    mutable bool qsctpserver_event_isbase = false;
    mutable bool qsctpserver_eventfilter_isbase = false;
    mutable bool qsctpserver_timerevent_isbase = false;
    mutable bool qsctpserver_childevent_isbase = false;
    mutable bool qsctpserver_customevent_isbase = false;
    mutable bool qsctpserver_connectnotify_isbase = false;
    mutable bool qsctpserver_disconnectnotify_isbase = false;
    mutable bool qsctpserver_addpendingconnection_isbase = false;
    mutable bool qsctpserver_sender_isbase = false;
    mutable bool qsctpserver_sendersignalindex_isbase = false;
    mutable bool qsctpserver_receivers_isbase = false;
    mutable bool qsctpserver_issignalconnected_isbase = false;

  public:
    VirtualQSctpServer() : QSctpServer(){};
    VirtualQSctpServer(QObject* parent) : QSctpServer(parent){};

    ~VirtualQSctpServer() {
        qsctpserver_metacall_callback = nullptr;
        qsctpserver_incomingconnection_callback = nullptr;
        qsctpserver_haspendingconnections_callback = nullptr;
        qsctpserver_nextpendingconnection_callback = nullptr;
        qsctpserver_event_callback = nullptr;
        qsctpserver_eventfilter_callback = nullptr;
        qsctpserver_timerevent_callback = nullptr;
        qsctpserver_childevent_callback = nullptr;
        qsctpserver_customevent_callback = nullptr;
        qsctpserver_connectnotify_callback = nullptr;
        qsctpserver_disconnectnotify_callback = nullptr;
        qsctpserver_addpendingconnection_callback = nullptr;
        qsctpserver_sender_callback = nullptr;
        qsctpserver_sendersignalindex_callback = nullptr;
        qsctpserver_receivers_callback = nullptr;
        qsctpserver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSctpServer_Metacall_Callback(QSctpServer_Metacall_Callback cb) { qsctpserver_metacall_callback = cb; }
    void setQSctpServer_IncomingConnection_Callback(QSctpServer_IncomingConnection_Callback cb) { qsctpserver_incomingconnection_callback = cb; }
    void setQSctpServer_HasPendingConnections_Callback(QSctpServer_HasPendingConnections_Callback cb) { qsctpserver_haspendingconnections_callback = cb; }
    void setQSctpServer_NextPendingConnection_Callback(QSctpServer_NextPendingConnection_Callback cb) { qsctpserver_nextpendingconnection_callback = cb; }
    void setQSctpServer_Event_Callback(QSctpServer_Event_Callback cb) { qsctpserver_event_callback = cb; }
    void setQSctpServer_EventFilter_Callback(QSctpServer_EventFilter_Callback cb) { qsctpserver_eventfilter_callback = cb; }
    void setQSctpServer_TimerEvent_Callback(QSctpServer_TimerEvent_Callback cb) { qsctpserver_timerevent_callback = cb; }
    void setQSctpServer_ChildEvent_Callback(QSctpServer_ChildEvent_Callback cb) { qsctpserver_childevent_callback = cb; }
    void setQSctpServer_CustomEvent_Callback(QSctpServer_CustomEvent_Callback cb) { qsctpserver_customevent_callback = cb; }
    void setQSctpServer_ConnectNotify_Callback(QSctpServer_ConnectNotify_Callback cb) { qsctpserver_connectnotify_callback = cb; }
    void setQSctpServer_DisconnectNotify_Callback(QSctpServer_DisconnectNotify_Callback cb) { qsctpserver_disconnectnotify_callback = cb; }
    void setQSctpServer_AddPendingConnection_Callback(QSctpServer_AddPendingConnection_Callback cb) { qsctpserver_addpendingconnection_callback = cb; }
    void setQSctpServer_Sender_Callback(QSctpServer_Sender_Callback cb) { qsctpserver_sender_callback = cb; }
    void setQSctpServer_SenderSignalIndex_Callback(QSctpServer_SenderSignalIndex_Callback cb) { qsctpserver_sendersignalindex_callback = cb; }
    void setQSctpServer_Receivers_Callback(QSctpServer_Receivers_Callback cb) { qsctpserver_receivers_callback = cb; }
    void setQSctpServer_IsSignalConnected_Callback(QSctpServer_IsSignalConnected_Callback cb) { qsctpserver_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSctpServer_Metacall_IsBase(bool value) const { qsctpserver_metacall_isbase = value; }
    void setQSctpServer_IncomingConnection_IsBase(bool value) const { qsctpserver_incomingconnection_isbase = value; }
    void setQSctpServer_HasPendingConnections_IsBase(bool value) const { qsctpserver_haspendingconnections_isbase = value; }
    void setQSctpServer_NextPendingConnection_IsBase(bool value) const { qsctpserver_nextpendingconnection_isbase = value; }
    void setQSctpServer_Event_IsBase(bool value) const { qsctpserver_event_isbase = value; }
    void setQSctpServer_EventFilter_IsBase(bool value) const { qsctpserver_eventfilter_isbase = value; }
    void setQSctpServer_TimerEvent_IsBase(bool value) const { qsctpserver_timerevent_isbase = value; }
    void setQSctpServer_ChildEvent_IsBase(bool value) const { qsctpserver_childevent_isbase = value; }
    void setQSctpServer_CustomEvent_IsBase(bool value) const { qsctpserver_customevent_isbase = value; }
    void setQSctpServer_ConnectNotify_IsBase(bool value) const { qsctpserver_connectnotify_isbase = value; }
    void setQSctpServer_DisconnectNotify_IsBase(bool value) const { qsctpserver_disconnectnotify_isbase = value; }
    void setQSctpServer_AddPendingConnection_IsBase(bool value) const { qsctpserver_addpendingconnection_isbase = value; }
    void setQSctpServer_Sender_IsBase(bool value) const { qsctpserver_sender_isbase = value; }
    void setQSctpServer_SenderSignalIndex_IsBase(bool value) const { qsctpserver_sendersignalindex_isbase = value; }
    void setQSctpServer_Receivers_IsBase(bool value) const { qsctpserver_receivers_isbase = value; }
    void setQSctpServer_IsSignalConnected_IsBase(bool value) const { qsctpserver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsctpserver_metacall_isbase) {
            qsctpserver_metacall_isbase = false;
            return QSctpServer::qt_metacall(param1, param2, param3);
        } else if (qsctpserver_metacall_callback != nullptr) {
            return qsctpserver_metacall_callback(this, param1, param2, param3);
        } else {
            return QSctpServer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void incomingConnection(qintptr handle) override {
        if (qsctpserver_incomingconnection_isbase) {
            qsctpserver_incomingconnection_isbase = false;
            QSctpServer::incomingConnection(handle);
        } else if (qsctpserver_incomingconnection_callback != nullptr) {
            qsctpserver_incomingconnection_callback(this, handle);
        } else {
            QSctpServer::incomingConnection(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasPendingConnections() const override {
        if (qsctpserver_haspendingconnections_isbase) {
            qsctpserver_haspendingconnections_isbase = false;
            return QSctpServer::hasPendingConnections();
        } else if (qsctpserver_haspendingconnections_callback != nullptr) {
            return qsctpserver_haspendingconnections_callback();
        } else {
            return QSctpServer::hasPendingConnections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QTcpSocket* nextPendingConnection() override {
        if (qsctpserver_nextpendingconnection_isbase) {
            qsctpserver_nextpendingconnection_isbase = false;
            return QSctpServer::nextPendingConnection();
        } else if (qsctpserver_nextpendingconnection_callback != nullptr) {
            return qsctpserver_nextpendingconnection_callback();
        } else {
            return QSctpServer::nextPendingConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsctpserver_event_isbase) {
            qsctpserver_event_isbase = false;
            return QSctpServer::event(event);
        } else if (qsctpserver_event_callback != nullptr) {
            return qsctpserver_event_callback(this, event);
        } else {
            return QSctpServer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsctpserver_eventfilter_isbase) {
            qsctpserver_eventfilter_isbase = false;
            return QSctpServer::eventFilter(watched, event);
        } else if (qsctpserver_eventfilter_callback != nullptr) {
            return qsctpserver_eventfilter_callback(this, watched, event);
        } else {
            return QSctpServer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsctpserver_timerevent_isbase) {
            qsctpserver_timerevent_isbase = false;
            QSctpServer::timerEvent(event);
        } else if (qsctpserver_timerevent_callback != nullptr) {
            qsctpserver_timerevent_callback(this, event);
        } else {
            QSctpServer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsctpserver_childevent_isbase) {
            qsctpserver_childevent_isbase = false;
            QSctpServer::childEvent(event);
        } else if (qsctpserver_childevent_callback != nullptr) {
            qsctpserver_childevent_callback(this, event);
        } else {
            QSctpServer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsctpserver_customevent_isbase) {
            qsctpserver_customevent_isbase = false;
            QSctpServer::customEvent(event);
        } else if (qsctpserver_customevent_callback != nullptr) {
            qsctpserver_customevent_callback(this, event);
        } else {
            QSctpServer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsctpserver_connectnotify_isbase) {
            qsctpserver_connectnotify_isbase = false;
            QSctpServer::connectNotify(signal);
        } else if (qsctpserver_connectnotify_callback != nullptr) {
            qsctpserver_connectnotify_callback(this, signal);
        } else {
            QSctpServer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsctpserver_disconnectnotify_isbase) {
            qsctpserver_disconnectnotify_isbase = false;
            QSctpServer::disconnectNotify(signal);
        } else if (qsctpserver_disconnectnotify_callback != nullptr) {
            qsctpserver_disconnectnotify_callback(this, signal);
        } else {
            QSctpServer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addPendingConnection(QTcpSocket* socket) {
        if (qsctpserver_addpendingconnection_isbase) {
            qsctpserver_addpendingconnection_isbase = false;
            QSctpServer::addPendingConnection(socket);
        } else if (qsctpserver_addpendingconnection_callback != nullptr) {
            qsctpserver_addpendingconnection_callback(this, socket);
        } else {
            QSctpServer::addPendingConnection(socket);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsctpserver_sender_isbase) {
            qsctpserver_sender_isbase = false;
            return QSctpServer::sender();
        } else if (qsctpserver_sender_callback != nullptr) {
            return qsctpserver_sender_callback();
        } else {
            return QSctpServer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsctpserver_sendersignalindex_isbase) {
            qsctpserver_sendersignalindex_isbase = false;
            return QSctpServer::senderSignalIndex();
        } else if (qsctpserver_sendersignalindex_callback != nullptr) {
            return qsctpserver_sendersignalindex_callback();
        } else {
            return QSctpServer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsctpserver_receivers_isbase) {
            qsctpserver_receivers_isbase = false;
            return QSctpServer::receivers(signal);
        } else if (qsctpserver_receivers_callback != nullptr) {
            return qsctpserver_receivers_callback(this, signal);
        } else {
            return QSctpServer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsctpserver_issignalconnected_isbase) {
            qsctpserver_issignalconnected_isbase = false;
            return QSctpServer::isSignalConnected(signal);
        } else if (qsctpserver_issignalconnected_callback != nullptr) {
            return qsctpserver_issignalconnected_callback(this, signal);
        } else {
            return QSctpServer::isSignalConnected(signal);
        }
    }
};

#endif

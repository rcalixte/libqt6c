#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQNETWORKACCESSMANAGER_H
#define SRC_NETWORKC_LIBVIRTUALQNETWORKACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkAccessManager so that we can call protected methods
class VirtualQNetworkAccessManager : public QNetworkAccessManager {

  public:
    // Virtual class public types (including callbacks)
    using QNetworkAccessManager_Metacall_Callback = int (*)(QNetworkAccessManager*, QMetaObject::Call, int, void**);
    using QNetworkAccessManager_SupportedSchemes_Callback = QStringList (*)();
    using QNetworkAccessManager_CreateRequest_Callback = QNetworkReply* (*)(QNetworkAccessManager*, QNetworkAccessManager::Operation, const QNetworkRequest&, QIODevice*);
    using QNetworkAccessManager_Event_Callback = bool (*)(QNetworkAccessManager*, QEvent*);
    using QNetworkAccessManager_EventFilter_Callback = bool (*)(QNetworkAccessManager*, QObject*, QEvent*);
    using QNetworkAccessManager_TimerEvent_Callback = void (*)(QNetworkAccessManager*, QTimerEvent*);
    using QNetworkAccessManager_ChildEvent_Callback = void (*)(QNetworkAccessManager*, QChildEvent*);
    using QNetworkAccessManager_CustomEvent_Callback = void (*)(QNetworkAccessManager*, QEvent*);
    using QNetworkAccessManager_ConnectNotify_Callback = void (*)(QNetworkAccessManager*, const QMetaMethod&);
    using QNetworkAccessManager_DisconnectNotify_Callback = void (*)(QNetworkAccessManager*, const QMetaMethod&);
    using QNetworkAccessManager_SupportedSchemesImplementation_Callback = QStringList (*)();
    using QNetworkAccessManager_Sender_Callback = QObject* (*)();
    using QNetworkAccessManager_SenderSignalIndex_Callback = int (*)();
    using QNetworkAccessManager_Receivers_Callback = int (*)(const QNetworkAccessManager*, const char*);
    using QNetworkAccessManager_IsSignalConnected_Callback = bool (*)(const QNetworkAccessManager*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QNetworkAccessManager_Metacall_Callback qnetworkaccessmanager_metacall_callback = nullptr;
    QNetworkAccessManager_SupportedSchemes_Callback qnetworkaccessmanager_supportedschemes_callback = nullptr;
    QNetworkAccessManager_CreateRequest_Callback qnetworkaccessmanager_createrequest_callback = nullptr;
    QNetworkAccessManager_Event_Callback qnetworkaccessmanager_event_callback = nullptr;
    QNetworkAccessManager_EventFilter_Callback qnetworkaccessmanager_eventfilter_callback = nullptr;
    QNetworkAccessManager_TimerEvent_Callback qnetworkaccessmanager_timerevent_callback = nullptr;
    QNetworkAccessManager_ChildEvent_Callback qnetworkaccessmanager_childevent_callback = nullptr;
    QNetworkAccessManager_CustomEvent_Callback qnetworkaccessmanager_customevent_callback = nullptr;
    QNetworkAccessManager_ConnectNotify_Callback qnetworkaccessmanager_connectnotify_callback = nullptr;
    QNetworkAccessManager_DisconnectNotify_Callback qnetworkaccessmanager_disconnectnotify_callback = nullptr;
    QNetworkAccessManager_SupportedSchemesImplementation_Callback qnetworkaccessmanager_supportedschemesimplementation_callback = nullptr;
    QNetworkAccessManager_Sender_Callback qnetworkaccessmanager_sender_callback = nullptr;
    QNetworkAccessManager_SenderSignalIndex_Callback qnetworkaccessmanager_sendersignalindex_callback = nullptr;
    QNetworkAccessManager_Receivers_Callback qnetworkaccessmanager_receivers_callback = nullptr;
    QNetworkAccessManager_IsSignalConnected_Callback qnetworkaccessmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qnetworkaccessmanager_metacall_isbase = false;
    mutable bool qnetworkaccessmanager_supportedschemes_isbase = false;
    mutable bool qnetworkaccessmanager_createrequest_isbase = false;
    mutable bool qnetworkaccessmanager_event_isbase = false;
    mutable bool qnetworkaccessmanager_eventfilter_isbase = false;
    mutable bool qnetworkaccessmanager_timerevent_isbase = false;
    mutable bool qnetworkaccessmanager_childevent_isbase = false;
    mutable bool qnetworkaccessmanager_customevent_isbase = false;
    mutable bool qnetworkaccessmanager_connectnotify_isbase = false;
    mutable bool qnetworkaccessmanager_disconnectnotify_isbase = false;
    mutable bool qnetworkaccessmanager_supportedschemesimplementation_isbase = false;
    mutable bool qnetworkaccessmanager_sender_isbase = false;
    mutable bool qnetworkaccessmanager_sendersignalindex_isbase = false;
    mutable bool qnetworkaccessmanager_receivers_isbase = false;
    mutable bool qnetworkaccessmanager_issignalconnected_isbase = false;

  public:
    VirtualQNetworkAccessManager() : QNetworkAccessManager(){};
    VirtualQNetworkAccessManager(QObject* parent) : QNetworkAccessManager(parent){};

    ~VirtualQNetworkAccessManager() {
        qnetworkaccessmanager_metacall_callback = nullptr;
        qnetworkaccessmanager_supportedschemes_callback = nullptr;
        qnetworkaccessmanager_createrequest_callback = nullptr;
        qnetworkaccessmanager_event_callback = nullptr;
        qnetworkaccessmanager_eventfilter_callback = nullptr;
        qnetworkaccessmanager_timerevent_callback = nullptr;
        qnetworkaccessmanager_childevent_callback = nullptr;
        qnetworkaccessmanager_customevent_callback = nullptr;
        qnetworkaccessmanager_connectnotify_callback = nullptr;
        qnetworkaccessmanager_disconnectnotify_callback = nullptr;
        qnetworkaccessmanager_supportedschemesimplementation_callback = nullptr;
        qnetworkaccessmanager_sender_callback = nullptr;
        qnetworkaccessmanager_sendersignalindex_callback = nullptr;
        qnetworkaccessmanager_receivers_callback = nullptr;
        qnetworkaccessmanager_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQNetworkAccessManager_Metacall_Callback(QNetworkAccessManager_Metacall_Callback cb) { qnetworkaccessmanager_metacall_callback = cb; }
    void setQNetworkAccessManager_SupportedSchemes_Callback(QNetworkAccessManager_SupportedSchemes_Callback cb) { qnetworkaccessmanager_supportedschemes_callback = cb; }
    void setQNetworkAccessManager_CreateRequest_Callback(QNetworkAccessManager_CreateRequest_Callback cb) { qnetworkaccessmanager_createrequest_callback = cb; }
    void setQNetworkAccessManager_Event_Callback(QNetworkAccessManager_Event_Callback cb) { qnetworkaccessmanager_event_callback = cb; }
    void setQNetworkAccessManager_EventFilter_Callback(QNetworkAccessManager_EventFilter_Callback cb) { qnetworkaccessmanager_eventfilter_callback = cb; }
    void setQNetworkAccessManager_TimerEvent_Callback(QNetworkAccessManager_TimerEvent_Callback cb) { qnetworkaccessmanager_timerevent_callback = cb; }
    void setQNetworkAccessManager_ChildEvent_Callback(QNetworkAccessManager_ChildEvent_Callback cb) { qnetworkaccessmanager_childevent_callback = cb; }
    void setQNetworkAccessManager_CustomEvent_Callback(QNetworkAccessManager_CustomEvent_Callback cb) { qnetworkaccessmanager_customevent_callback = cb; }
    void setQNetworkAccessManager_ConnectNotify_Callback(QNetworkAccessManager_ConnectNotify_Callback cb) { qnetworkaccessmanager_connectnotify_callback = cb; }
    void setQNetworkAccessManager_DisconnectNotify_Callback(QNetworkAccessManager_DisconnectNotify_Callback cb) { qnetworkaccessmanager_disconnectnotify_callback = cb; }
    void setQNetworkAccessManager_SupportedSchemesImplementation_Callback(QNetworkAccessManager_SupportedSchemesImplementation_Callback cb) { qnetworkaccessmanager_supportedschemesimplementation_callback = cb; }
    void setQNetworkAccessManager_Sender_Callback(QNetworkAccessManager_Sender_Callback cb) { qnetworkaccessmanager_sender_callback = cb; }
    void setQNetworkAccessManager_SenderSignalIndex_Callback(QNetworkAccessManager_SenderSignalIndex_Callback cb) { qnetworkaccessmanager_sendersignalindex_callback = cb; }
    void setQNetworkAccessManager_Receivers_Callback(QNetworkAccessManager_Receivers_Callback cb) { qnetworkaccessmanager_receivers_callback = cb; }
    void setQNetworkAccessManager_IsSignalConnected_Callback(QNetworkAccessManager_IsSignalConnected_Callback cb) { qnetworkaccessmanager_issignalconnected_callback = cb; }

    // Base flag setters
    void setQNetworkAccessManager_Metacall_IsBase(bool value) const { qnetworkaccessmanager_metacall_isbase = value; }
    void setQNetworkAccessManager_SupportedSchemes_IsBase(bool value) const { qnetworkaccessmanager_supportedschemes_isbase = value; }
    void setQNetworkAccessManager_CreateRequest_IsBase(bool value) const { qnetworkaccessmanager_createrequest_isbase = value; }
    void setQNetworkAccessManager_Event_IsBase(bool value) const { qnetworkaccessmanager_event_isbase = value; }
    void setQNetworkAccessManager_EventFilter_IsBase(bool value) const { qnetworkaccessmanager_eventfilter_isbase = value; }
    void setQNetworkAccessManager_TimerEvent_IsBase(bool value) const { qnetworkaccessmanager_timerevent_isbase = value; }
    void setQNetworkAccessManager_ChildEvent_IsBase(bool value) const { qnetworkaccessmanager_childevent_isbase = value; }
    void setQNetworkAccessManager_CustomEvent_IsBase(bool value) const { qnetworkaccessmanager_customevent_isbase = value; }
    void setQNetworkAccessManager_ConnectNotify_IsBase(bool value) const { qnetworkaccessmanager_connectnotify_isbase = value; }
    void setQNetworkAccessManager_DisconnectNotify_IsBase(bool value) const { qnetworkaccessmanager_disconnectnotify_isbase = value; }
    void setQNetworkAccessManager_SupportedSchemesImplementation_IsBase(bool value) const { qnetworkaccessmanager_supportedschemesimplementation_isbase = value; }
    void setQNetworkAccessManager_Sender_IsBase(bool value) const { qnetworkaccessmanager_sender_isbase = value; }
    void setQNetworkAccessManager_SenderSignalIndex_IsBase(bool value) const { qnetworkaccessmanager_sendersignalindex_isbase = value; }
    void setQNetworkAccessManager_Receivers_IsBase(bool value) const { qnetworkaccessmanager_receivers_isbase = value; }
    void setQNetworkAccessManager_IsSignalConnected_IsBase(bool value) const { qnetworkaccessmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnetworkaccessmanager_metacall_isbase) {
            qnetworkaccessmanager_metacall_isbase = false;
            return QNetworkAccessManager::qt_metacall(param1, param2, param3);
        } else if (qnetworkaccessmanager_metacall_callback != nullptr) {
            return qnetworkaccessmanager_metacall_callback(this, param1, param2, param3);
        } else {
            return QNetworkAccessManager::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList supportedSchemes() const override {
        if (qnetworkaccessmanager_supportedschemes_isbase) {
            qnetworkaccessmanager_supportedschemes_isbase = false;
            return QNetworkAccessManager::supportedSchemes();
        } else if (qnetworkaccessmanager_supportedschemes_callback != nullptr) {
            return qnetworkaccessmanager_supportedschemes_callback();
        } else {
            return QNetworkAccessManager::supportedSchemes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QNetworkReply* createRequest(QNetworkAccessManager::Operation op, const QNetworkRequest& request, QIODevice* outgoingData) override {
        if (qnetworkaccessmanager_createrequest_isbase) {
            qnetworkaccessmanager_createrequest_isbase = false;
            return QNetworkAccessManager::createRequest(op, request, outgoingData);
        } else if (qnetworkaccessmanager_createrequest_callback != nullptr) {
            return qnetworkaccessmanager_createrequest_callback(this, op, request, outgoingData);
        } else {
            return QNetworkAccessManager::createRequest(op, request, outgoingData);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnetworkaccessmanager_event_isbase) {
            qnetworkaccessmanager_event_isbase = false;
            return QNetworkAccessManager::event(event);
        } else if (qnetworkaccessmanager_event_callback != nullptr) {
            return qnetworkaccessmanager_event_callback(this, event);
        } else {
            return QNetworkAccessManager::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnetworkaccessmanager_eventfilter_isbase) {
            qnetworkaccessmanager_eventfilter_isbase = false;
            return QNetworkAccessManager::eventFilter(watched, event);
        } else if (qnetworkaccessmanager_eventfilter_callback != nullptr) {
            return qnetworkaccessmanager_eventfilter_callback(this, watched, event);
        } else {
            return QNetworkAccessManager::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnetworkaccessmanager_timerevent_isbase) {
            qnetworkaccessmanager_timerevent_isbase = false;
            QNetworkAccessManager::timerEvent(event);
        } else if (qnetworkaccessmanager_timerevent_callback != nullptr) {
            qnetworkaccessmanager_timerevent_callback(this, event);
        } else {
            QNetworkAccessManager::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnetworkaccessmanager_childevent_isbase) {
            qnetworkaccessmanager_childevent_isbase = false;
            QNetworkAccessManager::childEvent(event);
        } else if (qnetworkaccessmanager_childevent_callback != nullptr) {
            qnetworkaccessmanager_childevent_callback(this, event);
        } else {
            QNetworkAccessManager::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnetworkaccessmanager_customevent_isbase) {
            qnetworkaccessmanager_customevent_isbase = false;
            QNetworkAccessManager::customEvent(event);
        } else if (qnetworkaccessmanager_customevent_callback != nullptr) {
            qnetworkaccessmanager_customevent_callback(this, event);
        } else {
            QNetworkAccessManager::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnetworkaccessmanager_connectnotify_isbase) {
            qnetworkaccessmanager_connectnotify_isbase = false;
            QNetworkAccessManager::connectNotify(signal);
        } else if (qnetworkaccessmanager_connectnotify_callback != nullptr) {
            qnetworkaccessmanager_connectnotify_callback(this, signal);
        } else {
            QNetworkAccessManager::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnetworkaccessmanager_disconnectnotify_isbase) {
            qnetworkaccessmanager_disconnectnotify_isbase = false;
            QNetworkAccessManager::disconnectNotify(signal);
        } else if (qnetworkaccessmanager_disconnectnotify_callback != nullptr) {
            qnetworkaccessmanager_disconnectnotify_callback(this, signal);
        } else {
            QNetworkAccessManager::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QStringList supportedSchemesImplementation() const {
        if (qnetworkaccessmanager_supportedschemesimplementation_isbase) {
            qnetworkaccessmanager_supportedschemesimplementation_isbase = false;
            return QNetworkAccessManager::supportedSchemesImplementation();
        } else if (qnetworkaccessmanager_supportedschemesimplementation_callback != nullptr) {
            return qnetworkaccessmanager_supportedschemesimplementation_callback();
        } else {
            return QNetworkAccessManager::supportedSchemesImplementation();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qnetworkaccessmanager_sender_isbase) {
            qnetworkaccessmanager_sender_isbase = false;
            return QNetworkAccessManager::sender();
        } else if (qnetworkaccessmanager_sender_callback != nullptr) {
            return qnetworkaccessmanager_sender_callback();
        } else {
            return QNetworkAccessManager::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qnetworkaccessmanager_sendersignalindex_isbase) {
            qnetworkaccessmanager_sendersignalindex_isbase = false;
            return QNetworkAccessManager::senderSignalIndex();
        } else if (qnetworkaccessmanager_sendersignalindex_callback != nullptr) {
            return qnetworkaccessmanager_sendersignalindex_callback();
        } else {
            return QNetworkAccessManager::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qnetworkaccessmanager_receivers_isbase) {
            qnetworkaccessmanager_receivers_isbase = false;
            return QNetworkAccessManager::receivers(signal);
        } else if (qnetworkaccessmanager_receivers_callback != nullptr) {
            return qnetworkaccessmanager_receivers_callback(this, signal);
        } else {
            return QNetworkAccessManager::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qnetworkaccessmanager_issignalconnected_isbase) {
            qnetworkaccessmanager_issignalconnected_isbase = false;
            return QNetworkAccessManager::isSignalConnected(signal);
        } else if (qnetworkaccessmanager_issignalconnected_callback != nullptr) {
            return qnetworkaccessmanager_issignalconnected_callback(this, signal);
        } else {
            return QNetworkAccessManager::isSignalConnected(signal);
        }
    }
};

#endif

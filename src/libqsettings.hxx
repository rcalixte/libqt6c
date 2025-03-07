#pragma once
#ifndef SRCC_LIBVIRTUALQSETTINGS_H
#define SRCC_LIBVIRTUALQSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSettings so that we can call protected methods
class VirtualQSettings : public QSettings {

  public:
    // Virtual class public types (including callbacks)
    using QSettings_Metacall_Callback = int (*)(QSettings*, QMetaObject::Call, int, void**);
    using QSettings_Event_Callback = bool (*)(QSettings*, QEvent*);
    using QSettings_EventFilter_Callback = bool (*)(QSettings*, QObject*, QEvent*);
    using QSettings_TimerEvent_Callback = void (*)(QSettings*, QTimerEvent*);
    using QSettings_ChildEvent_Callback = void (*)(QSettings*, QChildEvent*);
    using QSettings_CustomEvent_Callback = void (*)(QSettings*, QEvent*);
    using QSettings_ConnectNotify_Callback = void (*)(QSettings*, const QMetaMethod&);
    using QSettings_DisconnectNotify_Callback = void (*)(QSettings*, const QMetaMethod&);
    using QSettings_Sender_Callback = QObject* (*)();
    using QSettings_SenderSignalIndex_Callback = int (*)();
    using QSettings_Receivers_Callback = int (*)(const QSettings*, const char*);
    using QSettings_IsSignalConnected_Callback = bool (*)(const QSettings*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSettings_Metacall_Callback qsettings_metacall_callback = nullptr;
    QSettings_Event_Callback qsettings_event_callback = nullptr;
    QSettings_EventFilter_Callback qsettings_eventfilter_callback = nullptr;
    QSettings_TimerEvent_Callback qsettings_timerevent_callback = nullptr;
    QSettings_ChildEvent_Callback qsettings_childevent_callback = nullptr;
    QSettings_CustomEvent_Callback qsettings_customevent_callback = nullptr;
    QSettings_ConnectNotify_Callback qsettings_connectnotify_callback = nullptr;
    QSettings_DisconnectNotify_Callback qsettings_disconnectnotify_callback = nullptr;
    QSettings_Sender_Callback qsettings_sender_callback = nullptr;
    QSettings_SenderSignalIndex_Callback qsettings_sendersignalindex_callback = nullptr;
    QSettings_Receivers_Callback qsettings_receivers_callback = nullptr;
    QSettings_IsSignalConnected_Callback qsettings_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsettings_metacall_isbase = false;
    mutable bool qsettings_event_isbase = false;
    mutable bool qsettings_eventfilter_isbase = false;
    mutable bool qsettings_timerevent_isbase = false;
    mutable bool qsettings_childevent_isbase = false;
    mutable bool qsettings_customevent_isbase = false;
    mutable bool qsettings_connectnotify_isbase = false;
    mutable bool qsettings_disconnectnotify_isbase = false;
    mutable bool qsettings_sender_isbase = false;
    mutable bool qsettings_sendersignalindex_isbase = false;
    mutable bool qsettings_receivers_isbase = false;
    mutable bool qsettings_issignalconnected_isbase = false;

  public:
    VirtualQSettings(const QString& organization) : QSettings(organization){};
    VirtualQSettings(QSettings::Scope scope, const QString& organization) : QSettings(scope, organization){};
    VirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization) : QSettings(format, scope, organization){};
    VirtualQSettings(const QString& fileName, QSettings::Format format) : QSettings(fileName, format){};
    VirtualQSettings() : QSettings(){};
    VirtualQSettings(QSettings::Scope scope) : QSettings(scope){};
    VirtualQSettings(const QString& organization, const QString& application) : QSettings(organization, application){};
    VirtualQSettings(const QString& organization, const QString& application, QObject* parent) : QSettings(organization, application, parent){};
    VirtualQSettings(QSettings::Scope scope, const QString& organization, const QString& application) : QSettings(scope, organization, application){};
    VirtualQSettings(QSettings::Scope scope, const QString& organization, const QString& application, QObject* parent) : QSettings(scope, organization, application, parent){};
    VirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization, const QString& application) : QSettings(format, scope, organization, application){};
    VirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization, const QString& application, QObject* parent) : QSettings(format, scope, organization, application, parent){};
    VirtualQSettings(const QString& fileName, QSettings::Format format, QObject* parent) : QSettings(fileName, format, parent){};
    VirtualQSettings(QObject* parent) : QSettings(parent){};
    VirtualQSettings(QSettings::Scope scope, QObject* parent) : QSettings(scope, parent){};

    ~VirtualQSettings() {
        qsettings_metacall_callback = nullptr;
        qsettings_event_callback = nullptr;
        qsettings_eventfilter_callback = nullptr;
        qsettings_timerevent_callback = nullptr;
        qsettings_childevent_callback = nullptr;
        qsettings_customevent_callback = nullptr;
        qsettings_connectnotify_callback = nullptr;
        qsettings_disconnectnotify_callback = nullptr;
        qsettings_sender_callback = nullptr;
        qsettings_sendersignalindex_callback = nullptr;
        qsettings_receivers_callback = nullptr;
        qsettings_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSettings_Metacall_Callback(QSettings_Metacall_Callback cb) { qsettings_metacall_callback = cb; }
    void setQSettings_Event_Callback(QSettings_Event_Callback cb) { qsettings_event_callback = cb; }
    void setQSettings_EventFilter_Callback(QSettings_EventFilter_Callback cb) { qsettings_eventfilter_callback = cb; }
    void setQSettings_TimerEvent_Callback(QSettings_TimerEvent_Callback cb) { qsettings_timerevent_callback = cb; }
    void setQSettings_ChildEvent_Callback(QSettings_ChildEvent_Callback cb) { qsettings_childevent_callback = cb; }
    void setQSettings_CustomEvent_Callback(QSettings_CustomEvent_Callback cb) { qsettings_customevent_callback = cb; }
    void setQSettings_ConnectNotify_Callback(QSettings_ConnectNotify_Callback cb) { qsettings_connectnotify_callback = cb; }
    void setQSettings_DisconnectNotify_Callback(QSettings_DisconnectNotify_Callback cb) { qsettings_disconnectnotify_callback = cb; }
    void setQSettings_Sender_Callback(QSettings_Sender_Callback cb) { qsettings_sender_callback = cb; }
    void setQSettings_SenderSignalIndex_Callback(QSettings_SenderSignalIndex_Callback cb) { qsettings_sendersignalindex_callback = cb; }
    void setQSettings_Receivers_Callback(QSettings_Receivers_Callback cb) { qsettings_receivers_callback = cb; }
    void setQSettings_IsSignalConnected_Callback(QSettings_IsSignalConnected_Callback cb) { qsettings_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSettings_Metacall_IsBase(bool value) const { qsettings_metacall_isbase = value; }
    void setQSettings_Event_IsBase(bool value) const { qsettings_event_isbase = value; }
    void setQSettings_EventFilter_IsBase(bool value) const { qsettings_eventfilter_isbase = value; }
    void setQSettings_TimerEvent_IsBase(bool value) const { qsettings_timerevent_isbase = value; }
    void setQSettings_ChildEvent_IsBase(bool value) const { qsettings_childevent_isbase = value; }
    void setQSettings_CustomEvent_IsBase(bool value) const { qsettings_customevent_isbase = value; }
    void setQSettings_ConnectNotify_IsBase(bool value) const { qsettings_connectnotify_isbase = value; }
    void setQSettings_DisconnectNotify_IsBase(bool value) const { qsettings_disconnectnotify_isbase = value; }
    void setQSettings_Sender_IsBase(bool value) const { qsettings_sender_isbase = value; }
    void setQSettings_SenderSignalIndex_IsBase(bool value) const { qsettings_sendersignalindex_isbase = value; }
    void setQSettings_Receivers_IsBase(bool value) const { qsettings_receivers_isbase = value; }
    void setQSettings_IsSignalConnected_IsBase(bool value) const { qsettings_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsettings_metacall_isbase) {
            qsettings_metacall_isbase = false;
            return QSettings::qt_metacall(param1, param2, param3);
        } else if (qsettings_metacall_callback != nullptr) {
            return qsettings_metacall_callback(this, param1, param2, param3);
        } else {
            return QSettings::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsettings_event_isbase) {
            qsettings_event_isbase = false;
            return QSettings::event(event);
        } else if (qsettings_event_callback != nullptr) {
            return qsettings_event_callback(this, event);
        } else {
            return QSettings::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsettings_eventfilter_isbase) {
            qsettings_eventfilter_isbase = false;
            return QSettings::eventFilter(watched, event);
        } else if (qsettings_eventfilter_callback != nullptr) {
            return qsettings_eventfilter_callback(this, watched, event);
        } else {
            return QSettings::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsettings_timerevent_isbase) {
            qsettings_timerevent_isbase = false;
            QSettings::timerEvent(event);
        } else if (qsettings_timerevent_callback != nullptr) {
            qsettings_timerevent_callback(this, event);
        } else {
            QSettings::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsettings_childevent_isbase) {
            qsettings_childevent_isbase = false;
            QSettings::childEvent(event);
        } else if (qsettings_childevent_callback != nullptr) {
            qsettings_childevent_callback(this, event);
        } else {
            QSettings::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsettings_customevent_isbase) {
            qsettings_customevent_isbase = false;
            QSettings::customEvent(event);
        } else if (qsettings_customevent_callback != nullptr) {
            qsettings_customevent_callback(this, event);
        } else {
            QSettings::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsettings_connectnotify_isbase) {
            qsettings_connectnotify_isbase = false;
            QSettings::connectNotify(signal);
        } else if (qsettings_connectnotify_callback != nullptr) {
            qsettings_connectnotify_callback(this, signal);
        } else {
            QSettings::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsettings_disconnectnotify_isbase) {
            qsettings_disconnectnotify_isbase = false;
            QSettings::disconnectNotify(signal);
        } else if (qsettings_disconnectnotify_callback != nullptr) {
            qsettings_disconnectnotify_callback(this, signal);
        } else {
            QSettings::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsettings_sender_isbase) {
            qsettings_sender_isbase = false;
            return QSettings::sender();
        } else if (qsettings_sender_callback != nullptr) {
            return qsettings_sender_callback();
        } else {
            return QSettings::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsettings_sendersignalindex_isbase) {
            qsettings_sendersignalindex_isbase = false;
            return QSettings::senderSignalIndex();
        } else if (qsettings_sendersignalindex_callback != nullptr) {
            return qsettings_sendersignalindex_callback();
        } else {
            return QSettings::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsettings_receivers_isbase) {
            qsettings_receivers_isbase = false;
            return QSettings::receivers(signal);
        } else if (qsettings_receivers_callback != nullptr) {
            return qsettings_receivers_callback(this, signal);
        } else {
            return QSettings::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsettings_issignalconnected_isbase) {
            qsettings_issignalconnected_isbase = false;
            return QSettings::isSignalConnected(signal);
        } else if (qsettings_issignalconnected_callback != nullptr) {
            return qsettings_issignalconnected_callback(this, signal);
        } else {
            return QSettings::isSignalConnected(signal);
        }
    }
};

#endif

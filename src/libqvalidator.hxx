#pragma once
#ifndef SRCC_LIBVIRTUALQVALIDATOR_H
#define SRCC_LIBVIRTUALQVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QValidator so that we can call protected methods
class VirtualQValidator : public QValidator {

  public:
    // Virtual class public types (including callbacks)
    using QValidator_Metacall_Callback = int (*)(QValidator*, QMetaObject::Call, int, void**);
    using QValidator_Validate_Callback = QValidator::State (*)(const QValidator*, QString&, int&);
    using QValidator_Fixup_Callback = void (*)(const QValidator*, QString&);
    using QValidator_Event_Callback = bool (*)(QValidator*, QEvent*);
    using QValidator_EventFilter_Callback = bool (*)(QValidator*, QObject*, QEvent*);
    using QValidator_TimerEvent_Callback = void (*)(QValidator*, QTimerEvent*);
    using QValidator_ChildEvent_Callback = void (*)(QValidator*, QChildEvent*);
    using QValidator_CustomEvent_Callback = void (*)(QValidator*, QEvent*);
    using QValidator_ConnectNotify_Callback = void (*)(QValidator*, const QMetaMethod&);
    using QValidator_DisconnectNotify_Callback = void (*)(QValidator*, const QMetaMethod&);
    using QValidator_Sender_Callback = QObject* (*)();
    using QValidator_SenderSignalIndex_Callback = int (*)();
    using QValidator_Receivers_Callback = int (*)(const QValidator*, const char*);
    using QValidator_IsSignalConnected_Callback = bool (*)(const QValidator*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QValidator_Metacall_Callback qvalidator_metacall_callback = nullptr;
    QValidator_Validate_Callback qvalidator_validate_callback = nullptr;
    QValidator_Fixup_Callback qvalidator_fixup_callback = nullptr;
    QValidator_Event_Callback qvalidator_event_callback = nullptr;
    QValidator_EventFilter_Callback qvalidator_eventfilter_callback = nullptr;
    QValidator_TimerEvent_Callback qvalidator_timerevent_callback = nullptr;
    QValidator_ChildEvent_Callback qvalidator_childevent_callback = nullptr;
    QValidator_CustomEvent_Callback qvalidator_customevent_callback = nullptr;
    QValidator_ConnectNotify_Callback qvalidator_connectnotify_callback = nullptr;
    QValidator_DisconnectNotify_Callback qvalidator_disconnectnotify_callback = nullptr;
    QValidator_Sender_Callback qvalidator_sender_callback = nullptr;
    QValidator_SenderSignalIndex_Callback qvalidator_sendersignalindex_callback = nullptr;
    QValidator_Receivers_Callback qvalidator_receivers_callback = nullptr;
    QValidator_IsSignalConnected_Callback qvalidator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvalidator_metacall_isbase = false;
    mutable bool qvalidator_validate_isbase = false;
    mutable bool qvalidator_fixup_isbase = false;
    mutable bool qvalidator_event_isbase = false;
    mutable bool qvalidator_eventfilter_isbase = false;
    mutable bool qvalidator_timerevent_isbase = false;
    mutable bool qvalidator_childevent_isbase = false;
    mutable bool qvalidator_customevent_isbase = false;
    mutable bool qvalidator_connectnotify_isbase = false;
    mutable bool qvalidator_disconnectnotify_isbase = false;
    mutable bool qvalidator_sender_isbase = false;
    mutable bool qvalidator_sendersignalindex_isbase = false;
    mutable bool qvalidator_receivers_isbase = false;
    mutable bool qvalidator_issignalconnected_isbase = false;

  public:
    VirtualQValidator() : QValidator(){};
    VirtualQValidator(QObject* parent) : QValidator(parent){};

    ~VirtualQValidator() {
        qvalidator_metacall_callback = nullptr;
        qvalidator_validate_callback = nullptr;
        qvalidator_fixup_callback = nullptr;
        qvalidator_event_callback = nullptr;
        qvalidator_eventfilter_callback = nullptr;
        qvalidator_timerevent_callback = nullptr;
        qvalidator_childevent_callback = nullptr;
        qvalidator_customevent_callback = nullptr;
        qvalidator_connectnotify_callback = nullptr;
        qvalidator_disconnectnotify_callback = nullptr;
        qvalidator_sender_callback = nullptr;
        qvalidator_sendersignalindex_callback = nullptr;
        qvalidator_receivers_callback = nullptr;
        qvalidator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQValidator_Metacall_Callback(QValidator_Metacall_Callback cb) { qvalidator_metacall_callback = cb; }
    void setQValidator_Validate_Callback(QValidator_Validate_Callback cb) { qvalidator_validate_callback = cb; }
    void setQValidator_Fixup_Callback(QValidator_Fixup_Callback cb) { qvalidator_fixup_callback = cb; }
    void setQValidator_Event_Callback(QValidator_Event_Callback cb) { qvalidator_event_callback = cb; }
    void setQValidator_EventFilter_Callback(QValidator_EventFilter_Callback cb) { qvalidator_eventfilter_callback = cb; }
    void setQValidator_TimerEvent_Callback(QValidator_TimerEvent_Callback cb) { qvalidator_timerevent_callback = cb; }
    void setQValidator_ChildEvent_Callback(QValidator_ChildEvent_Callback cb) { qvalidator_childevent_callback = cb; }
    void setQValidator_CustomEvent_Callback(QValidator_CustomEvent_Callback cb) { qvalidator_customevent_callback = cb; }
    void setQValidator_ConnectNotify_Callback(QValidator_ConnectNotify_Callback cb) { qvalidator_connectnotify_callback = cb; }
    void setQValidator_DisconnectNotify_Callback(QValidator_DisconnectNotify_Callback cb) { qvalidator_disconnectnotify_callback = cb; }
    void setQValidator_Sender_Callback(QValidator_Sender_Callback cb) { qvalidator_sender_callback = cb; }
    void setQValidator_SenderSignalIndex_Callback(QValidator_SenderSignalIndex_Callback cb) { qvalidator_sendersignalindex_callback = cb; }
    void setQValidator_Receivers_Callback(QValidator_Receivers_Callback cb) { qvalidator_receivers_callback = cb; }
    void setQValidator_IsSignalConnected_Callback(QValidator_IsSignalConnected_Callback cb) { qvalidator_issignalconnected_callback = cb; }

    // Base flag setters
    void setQValidator_Metacall_IsBase(bool value) const { qvalidator_metacall_isbase = value; }
    void setQValidator_Validate_IsBase(bool value) const { qvalidator_validate_isbase = value; }
    void setQValidator_Fixup_IsBase(bool value) const { qvalidator_fixup_isbase = value; }
    void setQValidator_Event_IsBase(bool value) const { qvalidator_event_isbase = value; }
    void setQValidator_EventFilter_IsBase(bool value) const { qvalidator_eventfilter_isbase = value; }
    void setQValidator_TimerEvent_IsBase(bool value) const { qvalidator_timerevent_isbase = value; }
    void setQValidator_ChildEvent_IsBase(bool value) const { qvalidator_childevent_isbase = value; }
    void setQValidator_CustomEvent_IsBase(bool value) const { qvalidator_customevent_isbase = value; }
    void setQValidator_ConnectNotify_IsBase(bool value) const { qvalidator_connectnotify_isbase = value; }
    void setQValidator_DisconnectNotify_IsBase(bool value) const { qvalidator_disconnectnotify_isbase = value; }
    void setQValidator_Sender_IsBase(bool value) const { qvalidator_sender_isbase = value; }
    void setQValidator_SenderSignalIndex_IsBase(bool value) const { qvalidator_sendersignalindex_isbase = value; }
    void setQValidator_Receivers_IsBase(bool value) const { qvalidator_receivers_isbase = value; }
    void setQValidator_IsSignalConnected_IsBase(bool value) const { qvalidator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvalidator_metacall_isbase) {
            qvalidator_metacall_isbase = false;
            return QValidator::qt_metacall(param1, param2, param3);
        } else if (qvalidator_metacall_callback != nullptr) {
            return qvalidator_metacall_callback(this, param1, param2, param3);
        } else {
            return QValidator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& param1, int& param2) const override {
        return qvalidator_validate_callback(this, param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& param1) const override {
        if (qvalidator_fixup_isbase) {
            qvalidator_fixup_isbase = false;
            QValidator::fixup(param1);
        } else if (qvalidator_fixup_callback != nullptr) {
            qvalidator_fixup_callback(this, param1);
        } else {
            QValidator::fixup(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvalidator_event_isbase) {
            qvalidator_event_isbase = false;
            return QValidator::event(event);
        } else if (qvalidator_event_callback != nullptr) {
            return qvalidator_event_callback(this, event);
        } else {
            return QValidator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvalidator_eventfilter_isbase) {
            qvalidator_eventfilter_isbase = false;
            return QValidator::eventFilter(watched, event);
        } else if (qvalidator_eventfilter_callback != nullptr) {
            return qvalidator_eventfilter_callback(this, watched, event);
        } else {
            return QValidator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvalidator_timerevent_isbase) {
            qvalidator_timerevent_isbase = false;
            QValidator::timerEvent(event);
        } else if (qvalidator_timerevent_callback != nullptr) {
            qvalidator_timerevent_callback(this, event);
        } else {
            QValidator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvalidator_childevent_isbase) {
            qvalidator_childevent_isbase = false;
            QValidator::childEvent(event);
        } else if (qvalidator_childevent_callback != nullptr) {
            qvalidator_childevent_callback(this, event);
        } else {
            QValidator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvalidator_customevent_isbase) {
            qvalidator_customevent_isbase = false;
            QValidator::customEvent(event);
        } else if (qvalidator_customevent_callback != nullptr) {
            qvalidator_customevent_callback(this, event);
        } else {
            QValidator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvalidator_connectnotify_isbase) {
            qvalidator_connectnotify_isbase = false;
            QValidator::connectNotify(signal);
        } else if (qvalidator_connectnotify_callback != nullptr) {
            qvalidator_connectnotify_callback(this, signal);
        } else {
            QValidator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvalidator_disconnectnotify_isbase) {
            qvalidator_disconnectnotify_isbase = false;
            QValidator::disconnectNotify(signal);
        } else if (qvalidator_disconnectnotify_callback != nullptr) {
            qvalidator_disconnectnotify_callback(this, signal);
        } else {
            QValidator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvalidator_sender_isbase) {
            qvalidator_sender_isbase = false;
            return QValidator::sender();
        } else if (qvalidator_sender_callback != nullptr) {
            return qvalidator_sender_callback();
        } else {
            return QValidator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvalidator_sendersignalindex_isbase) {
            qvalidator_sendersignalindex_isbase = false;
            return QValidator::senderSignalIndex();
        } else if (qvalidator_sendersignalindex_callback != nullptr) {
            return qvalidator_sendersignalindex_callback();
        } else {
            return QValidator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvalidator_receivers_isbase) {
            qvalidator_receivers_isbase = false;
            return QValidator::receivers(signal);
        } else if (qvalidator_receivers_callback != nullptr) {
            return qvalidator_receivers_callback(this, signal);
        } else {
            return QValidator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvalidator_issignalconnected_isbase) {
            qvalidator_issignalconnected_isbase = false;
            return QValidator::isSignalConnected(signal);
        } else if (qvalidator_issignalconnected_callback != nullptr) {
            return qvalidator_issignalconnected_callback(this, signal);
        } else {
            return QValidator::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QIntValidator so that we can call protected methods
class VirtualQIntValidator : public QIntValidator {

  public:
    // Virtual class public types (including callbacks)
    using QIntValidator_Metacall_Callback = int (*)(QIntValidator*, QMetaObject::Call, int, void**);
    using QIntValidator_Validate_Callback = QValidator::State (*)(const QIntValidator*, QString&, int&);
    using QIntValidator_Fixup_Callback = void (*)(const QIntValidator*, QString&);
    using QIntValidator_Event_Callback = bool (*)(QIntValidator*, QEvent*);
    using QIntValidator_EventFilter_Callback = bool (*)(QIntValidator*, QObject*, QEvent*);
    using QIntValidator_TimerEvent_Callback = void (*)(QIntValidator*, QTimerEvent*);
    using QIntValidator_ChildEvent_Callback = void (*)(QIntValidator*, QChildEvent*);
    using QIntValidator_CustomEvent_Callback = void (*)(QIntValidator*, QEvent*);
    using QIntValidator_ConnectNotify_Callback = void (*)(QIntValidator*, const QMetaMethod&);
    using QIntValidator_DisconnectNotify_Callback = void (*)(QIntValidator*, const QMetaMethod&);
    using QIntValidator_Sender_Callback = QObject* (*)();
    using QIntValidator_SenderSignalIndex_Callback = int (*)();
    using QIntValidator_Receivers_Callback = int (*)(const QIntValidator*, const char*);
    using QIntValidator_IsSignalConnected_Callback = bool (*)(const QIntValidator*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QIntValidator_Metacall_Callback qintvalidator_metacall_callback = nullptr;
    QIntValidator_Validate_Callback qintvalidator_validate_callback = nullptr;
    QIntValidator_Fixup_Callback qintvalidator_fixup_callback = nullptr;
    QIntValidator_Event_Callback qintvalidator_event_callback = nullptr;
    QIntValidator_EventFilter_Callback qintvalidator_eventfilter_callback = nullptr;
    QIntValidator_TimerEvent_Callback qintvalidator_timerevent_callback = nullptr;
    QIntValidator_ChildEvent_Callback qintvalidator_childevent_callback = nullptr;
    QIntValidator_CustomEvent_Callback qintvalidator_customevent_callback = nullptr;
    QIntValidator_ConnectNotify_Callback qintvalidator_connectnotify_callback = nullptr;
    QIntValidator_DisconnectNotify_Callback qintvalidator_disconnectnotify_callback = nullptr;
    QIntValidator_Sender_Callback qintvalidator_sender_callback = nullptr;
    QIntValidator_SenderSignalIndex_Callback qintvalidator_sendersignalindex_callback = nullptr;
    QIntValidator_Receivers_Callback qintvalidator_receivers_callback = nullptr;
    QIntValidator_IsSignalConnected_Callback qintvalidator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qintvalidator_metacall_isbase = false;
    mutable bool qintvalidator_validate_isbase = false;
    mutable bool qintvalidator_fixup_isbase = false;
    mutable bool qintvalidator_event_isbase = false;
    mutable bool qintvalidator_eventfilter_isbase = false;
    mutable bool qintvalidator_timerevent_isbase = false;
    mutable bool qintvalidator_childevent_isbase = false;
    mutable bool qintvalidator_customevent_isbase = false;
    mutable bool qintvalidator_connectnotify_isbase = false;
    mutable bool qintvalidator_disconnectnotify_isbase = false;
    mutable bool qintvalidator_sender_isbase = false;
    mutable bool qintvalidator_sendersignalindex_isbase = false;
    mutable bool qintvalidator_receivers_isbase = false;
    mutable bool qintvalidator_issignalconnected_isbase = false;

  public:
    VirtualQIntValidator() : QIntValidator(){};
    VirtualQIntValidator(int bottom, int top) : QIntValidator(bottom, top){};
    VirtualQIntValidator(QObject* parent) : QIntValidator(parent){};
    VirtualQIntValidator(int bottom, int top, QObject* parent) : QIntValidator(bottom, top, parent){};

    ~VirtualQIntValidator() {
        qintvalidator_metacall_callback = nullptr;
        qintvalidator_validate_callback = nullptr;
        qintvalidator_fixup_callback = nullptr;
        qintvalidator_event_callback = nullptr;
        qintvalidator_eventfilter_callback = nullptr;
        qintvalidator_timerevent_callback = nullptr;
        qintvalidator_childevent_callback = nullptr;
        qintvalidator_customevent_callback = nullptr;
        qintvalidator_connectnotify_callback = nullptr;
        qintvalidator_disconnectnotify_callback = nullptr;
        qintvalidator_sender_callback = nullptr;
        qintvalidator_sendersignalindex_callback = nullptr;
        qintvalidator_receivers_callback = nullptr;
        qintvalidator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQIntValidator_Metacall_Callback(QIntValidator_Metacall_Callback cb) { qintvalidator_metacall_callback = cb; }
    void setQIntValidator_Validate_Callback(QIntValidator_Validate_Callback cb) { qintvalidator_validate_callback = cb; }
    void setQIntValidator_Fixup_Callback(QIntValidator_Fixup_Callback cb) { qintvalidator_fixup_callback = cb; }
    void setQIntValidator_Event_Callback(QIntValidator_Event_Callback cb) { qintvalidator_event_callback = cb; }
    void setQIntValidator_EventFilter_Callback(QIntValidator_EventFilter_Callback cb) { qintvalidator_eventfilter_callback = cb; }
    void setQIntValidator_TimerEvent_Callback(QIntValidator_TimerEvent_Callback cb) { qintvalidator_timerevent_callback = cb; }
    void setQIntValidator_ChildEvent_Callback(QIntValidator_ChildEvent_Callback cb) { qintvalidator_childevent_callback = cb; }
    void setQIntValidator_CustomEvent_Callback(QIntValidator_CustomEvent_Callback cb) { qintvalidator_customevent_callback = cb; }
    void setQIntValidator_ConnectNotify_Callback(QIntValidator_ConnectNotify_Callback cb) { qintvalidator_connectnotify_callback = cb; }
    void setQIntValidator_DisconnectNotify_Callback(QIntValidator_DisconnectNotify_Callback cb) { qintvalidator_disconnectnotify_callback = cb; }
    void setQIntValidator_Sender_Callback(QIntValidator_Sender_Callback cb) { qintvalidator_sender_callback = cb; }
    void setQIntValidator_SenderSignalIndex_Callback(QIntValidator_SenderSignalIndex_Callback cb) { qintvalidator_sendersignalindex_callback = cb; }
    void setQIntValidator_Receivers_Callback(QIntValidator_Receivers_Callback cb) { qintvalidator_receivers_callback = cb; }
    void setQIntValidator_IsSignalConnected_Callback(QIntValidator_IsSignalConnected_Callback cb) { qintvalidator_issignalconnected_callback = cb; }

    // Base flag setters
    void setQIntValidator_Metacall_IsBase(bool value) const { qintvalidator_metacall_isbase = value; }
    void setQIntValidator_Validate_IsBase(bool value) const { qintvalidator_validate_isbase = value; }
    void setQIntValidator_Fixup_IsBase(bool value) const { qintvalidator_fixup_isbase = value; }
    void setQIntValidator_Event_IsBase(bool value) const { qintvalidator_event_isbase = value; }
    void setQIntValidator_EventFilter_IsBase(bool value) const { qintvalidator_eventfilter_isbase = value; }
    void setQIntValidator_TimerEvent_IsBase(bool value) const { qintvalidator_timerevent_isbase = value; }
    void setQIntValidator_ChildEvent_IsBase(bool value) const { qintvalidator_childevent_isbase = value; }
    void setQIntValidator_CustomEvent_IsBase(bool value) const { qintvalidator_customevent_isbase = value; }
    void setQIntValidator_ConnectNotify_IsBase(bool value) const { qintvalidator_connectnotify_isbase = value; }
    void setQIntValidator_DisconnectNotify_IsBase(bool value) const { qintvalidator_disconnectnotify_isbase = value; }
    void setQIntValidator_Sender_IsBase(bool value) const { qintvalidator_sender_isbase = value; }
    void setQIntValidator_SenderSignalIndex_IsBase(bool value) const { qintvalidator_sendersignalindex_isbase = value; }
    void setQIntValidator_Receivers_IsBase(bool value) const { qintvalidator_receivers_isbase = value; }
    void setQIntValidator_IsSignalConnected_IsBase(bool value) const { qintvalidator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qintvalidator_metacall_isbase) {
            qintvalidator_metacall_isbase = false;
            return QIntValidator::qt_metacall(param1, param2, param3);
        } else if (qintvalidator_metacall_callback != nullptr) {
            return qintvalidator_metacall_callback(this, param1, param2, param3);
        } else {
            return QIntValidator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& param1, int& param2) const override {
        if (qintvalidator_validate_isbase) {
            qintvalidator_validate_isbase = false;
            return QIntValidator::validate(param1, param2);
        } else if (qintvalidator_validate_callback != nullptr) {
            return qintvalidator_validate_callback(this, param1, param2);
        } else {
            return QIntValidator::validate(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qintvalidator_fixup_isbase) {
            qintvalidator_fixup_isbase = false;
            QIntValidator::fixup(input);
        } else if (qintvalidator_fixup_callback != nullptr) {
            qintvalidator_fixup_callback(this, input);
        } else {
            QIntValidator::fixup(input);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qintvalidator_event_isbase) {
            qintvalidator_event_isbase = false;
            return QIntValidator::event(event);
        } else if (qintvalidator_event_callback != nullptr) {
            return qintvalidator_event_callback(this, event);
        } else {
            return QIntValidator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qintvalidator_eventfilter_isbase) {
            qintvalidator_eventfilter_isbase = false;
            return QIntValidator::eventFilter(watched, event);
        } else if (qintvalidator_eventfilter_callback != nullptr) {
            return qintvalidator_eventfilter_callback(this, watched, event);
        } else {
            return QIntValidator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qintvalidator_timerevent_isbase) {
            qintvalidator_timerevent_isbase = false;
            QIntValidator::timerEvent(event);
        } else if (qintvalidator_timerevent_callback != nullptr) {
            qintvalidator_timerevent_callback(this, event);
        } else {
            QIntValidator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qintvalidator_childevent_isbase) {
            qintvalidator_childevent_isbase = false;
            QIntValidator::childEvent(event);
        } else if (qintvalidator_childevent_callback != nullptr) {
            qintvalidator_childevent_callback(this, event);
        } else {
            QIntValidator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qintvalidator_customevent_isbase) {
            qintvalidator_customevent_isbase = false;
            QIntValidator::customEvent(event);
        } else if (qintvalidator_customevent_callback != nullptr) {
            qintvalidator_customevent_callback(this, event);
        } else {
            QIntValidator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qintvalidator_connectnotify_isbase) {
            qintvalidator_connectnotify_isbase = false;
            QIntValidator::connectNotify(signal);
        } else if (qintvalidator_connectnotify_callback != nullptr) {
            qintvalidator_connectnotify_callback(this, signal);
        } else {
            QIntValidator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qintvalidator_disconnectnotify_isbase) {
            qintvalidator_disconnectnotify_isbase = false;
            QIntValidator::disconnectNotify(signal);
        } else if (qintvalidator_disconnectnotify_callback != nullptr) {
            qintvalidator_disconnectnotify_callback(this, signal);
        } else {
            QIntValidator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qintvalidator_sender_isbase) {
            qintvalidator_sender_isbase = false;
            return QIntValidator::sender();
        } else if (qintvalidator_sender_callback != nullptr) {
            return qintvalidator_sender_callback();
        } else {
            return QIntValidator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qintvalidator_sendersignalindex_isbase) {
            qintvalidator_sendersignalindex_isbase = false;
            return QIntValidator::senderSignalIndex();
        } else if (qintvalidator_sendersignalindex_callback != nullptr) {
            return qintvalidator_sendersignalindex_callback();
        } else {
            return QIntValidator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qintvalidator_receivers_isbase) {
            qintvalidator_receivers_isbase = false;
            return QIntValidator::receivers(signal);
        } else if (qintvalidator_receivers_callback != nullptr) {
            return qintvalidator_receivers_callback(this, signal);
        } else {
            return QIntValidator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qintvalidator_issignalconnected_isbase) {
            qintvalidator_issignalconnected_isbase = false;
            return QIntValidator::isSignalConnected(signal);
        } else if (qintvalidator_issignalconnected_callback != nullptr) {
            return qintvalidator_issignalconnected_callback(this, signal);
        } else {
            return QIntValidator::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QDoubleValidator so that we can call protected methods
class VirtualQDoubleValidator : public QDoubleValidator {

  public:
    // Virtual class public types (including callbacks)
    using QDoubleValidator_Metacall_Callback = int (*)(QDoubleValidator*, QMetaObject::Call, int, void**);
    using QDoubleValidator_Validate_Callback = QValidator::State (*)(const QDoubleValidator*, QString&, int&);
    using QDoubleValidator_Fixup_Callback = void (*)(const QDoubleValidator*, QString&);
    using QDoubleValidator_Event_Callback = bool (*)(QDoubleValidator*, QEvent*);
    using QDoubleValidator_EventFilter_Callback = bool (*)(QDoubleValidator*, QObject*, QEvent*);
    using QDoubleValidator_TimerEvent_Callback = void (*)(QDoubleValidator*, QTimerEvent*);
    using QDoubleValidator_ChildEvent_Callback = void (*)(QDoubleValidator*, QChildEvent*);
    using QDoubleValidator_CustomEvent_Callback = void (*)(QDoubleValidator*, QEvent*);
    using QDoubleValidator_ConnectNotify_Callback = void (*)(QDoubleValidator*, const QMetaMethod&);
    using QDoubleValidator_DisconnectNotify_Callback = void (*)(QDoubleValidator*, const QMetaMethod&);
    using QDoubleValidator_Sender_Callback = QObject* (*)();
    using QDoubleValidator_SenderSignalIndex_Callback = int (*)();
    using QDoubleValidator_Receivers_Callback = int (*)(const QDoubleValidator*, const char*);
    using QDoubleValidator_IsSignalConnected_Callback = bool (*)(const QDoubleValidator*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDoubleValidator_Metacall_Callback qdoublevalidator_metacall_callback = nullptr;
    QDoubleValidator_Validate_Callback qdoublevalidator_validate_callback = nullptr;
    QDoubleValidator_Fixup_Callback qdoublevalidator_fixup_callback = nullptr;
    QDoubleValidator_Event_Callback qdoublevalidator_event_callback = nullptr;
    QDoubleValidator_EventFilter_Callback qdoublevalidator_eventfilter_callback = nullptr;
    QDoubleValidator_TimerEvent_Callback qdoublevalidator_timerevent_callback = nullptr;
    QDoubleValidator_ChildEvent_Callback qdoublevalidator_childevent_callback = nullptr;
    QDoubleValidator_CustomEvent_Callback qdoublevalidator_customevent_callback = nullptr;
    QDoubleValidator_ConnectNotify_Callback qdoublevalidator_connectnotify_callback = nullptr;
    QDoubleValidator_DisconnectNotify_Callback qdoublevalidator_disconnectnotify_callback = nullptr;
    QDoubleValidator_Sender_Callback qdoublevalidator_sender_callback = nullptr;
    QDoubleValidator_SenderSignalIndex_Callback qdoublevalidator_sendersignalindex_callback = nullptr;
    QDoubleValidator_Receivers_Callback qdoublevalidator_receivers_callback = nullptr;
    QDoubleValidator_IsSignalConnected_Callback qdoublevalidator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdoublevalidator_metacall_isbase = false;
    mutable bool qdoublevalidator_validate_isbase = false;
    mutable bool qdoublevalidator_fixup_isbase = false;
    mutable bool qdoublevalidator_event_isbase = false;
    mutable bool qdoublevalidator_eventfilter_isbase = false;
    mutable bool qdoublevalidator_timerevent_isbase = false;
    mutable bool qdoublevalidator_childevent_isbase = false;
    mutable bool qdoublevalidator_customevent_isbase = false;
    mutable bool qdoublevalidator_connectnotify_isbase = false;
    mutable bool qdoublevalidator_disconnectnotify_isbase = false;
    mutable bool qdoublevalidator_sender_isbase = false;
    mutable bool qdoublevalidator_sendersignalindex_isbase = false;
    mutable bool qdoublevalidator_receivers_isbase = false;
    mutable bool qdoublevalidator_issignalconnected_isbase = false;

  public:
    VirtualQDoubleValidator() : QDoubleValidator(){};
    VirtualQDoubleValidator(double bottom, double top, int decimals) : QDoubleValidator(bottom, top, decimals){};
    VirtualQDoubleValidator(QObject* parent) : QDoubleValidator(parent){};
    VirtualQDoubleValidator(double bottom, double top, int decimals, QObject* parent) : QDoubleValidator(bottom, top, decimals, parent){};

    ~VirtualQDoubleValidator() {
        qdoublevalidator_metacall_callback = nullptr;
        qdoublevalidator_validate_callback = nullptr;
        qdoublevalidator_fixup_callback = nullptr;
        qdoublevalidator_event_callback = nullptr;
        qdoublevalidator_eventfilter_callback = nullptr;
        qdoublevalidator_timerevent_callback = nullptr;
        qdoublevalidator_childevent_callback = nullptr;
        qdoublevalidator_customevent_callback = nullptr;
        qdoublevalidator_connectnotify_callback = nullptr;
        qdoublevalidator_disconnectnotify_callback = nullptr;
        qdoublevalidator_sender_callback = nullptr;
        qdoublevalidator_sendersignalindex_callback = nullptr;
        qdoublevalidator_receivers_callback = nullptr;
        qdoublevalidator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDoubleValidator_Metacall_Callback(QDoubleValidator_Metacall_Callback cb) { qdoublevalidator_metacall_callback = cb; }
    void setQDoubleValidator_Validate_Callback(QDoubleValidator_Validate_Callback cb) { qdoublevalidator_validate_callback = cb; }
    void setQDoubleValidator_Fixup_Callback(QDoubleValidator_Fixup_Callback cb) { qdoublevalidator_fixup_callback = cb; }
    void setQDoubleValidator_Event_Callback(QDoubleValidator_Event_Callback cb) { qdoublevalidator_event_callback = cb; }
    void setQDoubleValidator_EventFilter_Callback(QDoubleValidator_EventFilter_Callback cb) { qdoublevalidator_eventfilter_callback = cb; }
    void setQDoubleValidator_TimerEvent_Callback(QDoubleValidator_TimerEvent_Callback cb) { qdoublevalidator_timerevent_callback = cb; }
    void setQDoubleValidator_ChildEvent_Callback(QDoubleValidator_ChildEvent_Callback cb) { qdoublevalidator_childevent_callback = cb; }
    void setQDoubleValidator_CustomEvent_Callback(QDoubleValidator_CustomEvent_Callback cb) { qdoublevalidator_customevent_callback = cb; }
    void setQDoubleValidator_ConnectNotify_Callback(QDoubleValidator_ConnectNotify_Callback cb) { qdoublevalidator_connectnotify_callback = cb; }
    void setQDoubleValidator_DisconnectNotify_Callback(QDoubleValidator_DisconnectNotify_Callback cb) { qdoublevalidator_disconnectnotify_callback = cb; }
    void setQDoubleValidator_Sender_Callback(QDoubleValidator_Sender_Callback cb) { qdoublevalidator_sender_callback = cb; }
    void setQDoubleValidator_SenderSignalIndex_Callback(QDoubleValidator_SenderSignalIndex_Callback cb) { qdoublevalidator_sendersignalindex_callback = cb; }
    void setQDoubleValidator_Receivers_Callback(QDoubleValidator_Receivers_Callback cb) { qdoublevalidator_receivers_callback = cb; }
    void setQDoubleValidator_IsSignalConnected_Callback(QDoubleValidator_IsSignalConnected_Callback cb) { qdoublevalidator_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDoubleValidator_Metacall_IsBase(bool value) const { qdoublevalidator_metacall_isbase = value; }
    void setQDoubleValidator_Validate_IsBase(bool value) const { qdoublevalidator_validate_isbase = value; }
    void setQDoubleValidator_Fixup_IsBase(bool value) const { qdoublevalidator_fixup_isbase = value; }
    void setQDoubleValidator_Event_IsBase(bool value) const { qdoublevalidator_event_isbase = value; }
    void setQDoubleValidator_EventFilter_IsBase(bool value) const { qdoublevalidator_eventfilter_isbase = value; }
    void setQDoubleValidator_TimerEvent_IsBase(bool value) const { qdoublevalidator_timerevent_isbase = value; }
    void setQDoubleValidator_ChildEvent_IsBase(bool value) const { qdoublevalidator_childevent_isbase = value; }
    void setQDoubleValidator_CustomEvent_IsBase(bool value) const { qdoublevalidator_customevent_isbase = value; }
    void setQDoubleValidator_ConnectNotify_IsBase(bool value) const { qdoublevalidator_connectnotify_isbase = value; }
    void setQDoubleValidator_DisconnectNotify_IsBase(bool value) const { qdoublevalidator_disconnectnotify_isbase = value; }
    void setQDoubleValidator_Sender_IsBase(bool value) const { qdoublevalidator_sender_isbase = value; }
    void setQDoubleValidator_SenderSignalIndex_IsBase(bool value) const { qdoublevalidator_sendersignalindex_isbase = value; }
    void setQDoubleValidator_Receivers_IsBase(bool value) const { qdoublevalidator_receivers_isbase = value; }
    void setQDoubleValidator_IsSignalConnected_IsBase(bool value) const { qdoublevalidator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdoublevalidator_metacall_isbase) {
            qdoublevalidator_metacall_isbase = false;
            return QDoubleValidator::qt_metacall(param1, param2, param3);
        } else if (qdoublevalidator_metacall_callback != nullptr) {
            return qdoublevalidator_metacall_callback(this, param1, param2, param3);
        } else {
            return QDoubleValidator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& param1, int& param2) const override {
        if (qdoublevalidator_validate_isbase) {
            qdoublevalidator_validate_isbase = false;
            return QDoubleValidator::validate(param1, param2);
        } else if (qdoublevalidator_validate_callback != nullptr) {
            return qdoublevalidator_validate_callback(this, param1, param2);
        } else {
            return QDoubleValidator::validate(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qdoublevalidator_fixup_isbase) {
            qdoublevalidator_fixup_isbase = false;
            QDoubleValidator::fixup(input);
        } else if (qdoublevalidator_fixup_callback != nullptr) {
            qdoublevalidator_fixup_callback(this, input);
        } else {
            QDoubleValidator::fixup(input);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdoublevalidator_event_isbase) {
            qdoublevalidator_event_isbase = false;
            return QDoubleValidator::event(event);
        } else if (qdoublevalidator_event_callback != nullptr) {
            return qdoublevalidator_event_callback(this, event);
        } else {
            return QDoubleValidator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdoublevalidator_eventfilter_isbase) {
            qdoublevalidator_eventfilter_isbase = false;
            return QDoubleValidator::eventFilter(watched, event);
        } else if (qdoublevalidator_eventfilter_callback != nullptr) {
            return qdoublevalidator_eventfilter_callback(this, watched, event);
        } else {
            return QDoubleValidator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdoublevalidator_timerevent_isbase) {
            qdoublevalidator_timerevent_isbase = false;
            QDoubleValidator::timerEvent(event);
        } else if (qdoublevalidator_timerevent_callback != nullptr) {
            qdoublevalidator_timerevent_callback(this, event);
        } else {
            QDoubleValidator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdoublevalidator_childevent_isbase) {
            qdoublevalidator_childevent_isbase = false;
            QDoubleValidator::childEvent(event);
        } else if (qdoublevalidator_childevent_callback != nullptr) {
            qdoublevalidator_childevent_callback(this, event);
        } else {
            QDoubleValidator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdoublevalidator_customevent_isbase) {
            qdoublevalidator_customevent_isbase = false;
            QDoubleValidator::customEvent(event);
        } else if (qdoublevalidator_customevent_callback != nullptr) {
            qdoublevalidator_customevent_callback(this, event);
        } else {
            QDoubleValidator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdoublevalidator_connectnotify_isbase) {
            qdoublevalidator_connectnotify_isbase = false;
            QDoubleValidator::connectNotify(signal);
        } else if (qdoublevalidator_connectnotify_callback != nullptr) {
            qdoublevalidator_connectnotify_callback(this, signal);
        } else {
            QDoubleValidator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdoublevalidator_disconnectnotify_isbase) {
            qdoublevalidator_disconnectnotify_isbase = false;
            QDoubleValidator::disconnectNotify(signal);
        } else if (qdoublevalidator_disconnectnotify_callback != nullptr) {
            qdoublevalidator_disconnectnotify_callback(this, signal);
        } else {
            QDoubleValidator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdoublevalidator_sender_isbase) {
            qdoublevalidator_sender_isbase = false;
            return QDoubleValidator::sender();
        } else if (qdoublevalidator_sender_callback != nullptr) {
            return qdoublevalidator_sender_callback();
        } else {
            return QDoubleValidator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdoublevalidator_sendersignalindex_isbase) {
            qdoublevalidator_sendersignalindex_isbase = false;
            return QDoubleValidator::senderSignalIndex();
        } else if (qdoublevalidator_sendersignalindex_callback != nullptr) {
            return qdoublevalidator_sendersignalindex_callback();
        } else {
            return QDoubleValidator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdoublevalidator_receivers_isbase) {
            qdoublevalidator_receivers_isbase = false;
            return QDoubleValidator::receivers(signal);
        } else if (qdoublevalidator_receivers_callback != nullptr) {
            return qdoublevalidator_receivers_callback(this, signal);
        } else {
            return QDoubleValidator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdoublevalidator_issignalconnected_isbase) {
            qdoublevalidator_issignalconnected_isbase = false;
            return QDoubleValidator::isSignalConnected(signal);
        } else if (qdoublevalidator_issignalconnected_callback != nullptr) {
            return qdoublevalidator_issignalconnected_callback(this, signal);
        } else {
            return QDoubleValidator::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QRegularExpressionValidator so that we can call protected methods
class VirtualQRegularExpressionValidator : public QRegularExpressionValidator {

  public:
    // Virtual class public types (including callbacks)
    using QRegularExpressionValidator_Metacall_Callback = int (*)(QRegularExpressionValidator*, QMetaObject::Call, int, void**);
    using QRegularExpressionValidator_Validate_Callback = QValidator::State (*)(const QRegularExpressionValidator*, QString&, int&);
    using QRegularExpressionValidator_Fixup_Callback = void (*)(const QRegularExpressionValidator*, QString&);
    using QRegularExpressionValidator_Event_Callback = bool (*)(QRegularExpressionValidator*, QEvent*);
    using QRegularExpressionValidator_EventFilter_Callback = bool (*)(QRegularExpressionValidator*, QObject*, QEvent*);
    using QRegularExpressionValidator_TimerEvent_Callback = void (*)(QRegularExpressionValidator*, QTimerEvent*);
    using QRegularExpressionValidator_ChildEvent_Callback = void (*)(QRegularExpressionValidator*, QChildEvent*);
    using QRegularExpressionValidator_CustomEvent_Callback = void (*)(QRegularExpressionValidator*, QEvent*);
    using QRegularExpressionValidator_ConnectNotify_Callback = void (*)(QRegularExpressionValidator*, const QMetaMethod&);
    using QRegularExpressionValidator_DisconnectNotify_Callback = void (*)(QRegularExpressionValidator*, const QMetaMethod&);
    using QRegularExpressionValidator_Sender_Callback = QObject* (*)();
    using QRegularExpressionValidator_SenderSignalIndex_Callback = int (*)();
    using QRegularExpressionValidator_Receivers_Callback = int (*)(const QRegularExpressionValidator*, const char*);
    using QRegularExpressionValidator_IsSignalConnected_Callback = bool (*)(const QRegularExpressionValidator*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QRegularExpressionValidator_Metacall_Callback qregularexpressionvalidator_metacall_callback = nullptr;
    QRegularExpressionValidator_Validate_Callback qregularexpressionvalidator_validate_callback = nullptr;
    QRegularExpressionValidator_Fixup_Callback qregularexpressionvalidator_fixup_callback = nullptr;
    QRegularExpressionValidator_Event_Callback qregularexpressionvalidator_event_callback = nullptr;
    QRegularExpressionValidator_EventFilter_Callback qregularexpressionvalidator_eventfilter_callback = nullptr;
    QRegularExpressionValidator_TimerEvent_Callback qregularexpressionvalidator_timerevent_callback = nullptr;
    QRegularExpressionValidator_ChildEvent_Callback qregularexpressionvalidator_childevent_callback = nullptr;
    QRegularExpressionValidator_CustomEvent_Callback qregularexpressionvalidator_customevent_callback = nullptr;
    QRegularExpressionValidator_ConnectNotify_Callback qregularexpressionvalidator_connectnotify_callback = nullptr;
    QRegularExpressionValidator_DisconnectNotify_Callback qregularexpressionvalidator_disconnectnotify_callback = nullptr;
    QRegularExpressionValidator_Sender_Callback qregularexpressionvalidator_sender_callback = nullptr;
    QRegularExpressionValidator_SenderSignalIndex_Callback qregularexpressionvalidator_sendersignalindex_callback = nullptr;
    QRegularExpressionValidator_Receivers_Callback qregularexpressionvalidator_receivers_callback = nullptr;
    QRegularExpressionValidator_IsSignalConnected_Callback qregularexpressionvalidator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qregularexpressionvalidator_metacall_isbase = false;
    mutable bool qregularexpressionvalidator_validate_isbase = false;
    mutable bool qregularexpressionvalidator_fixup_isbase = false;
    mutable bool qregularexpressionvalidator_event_isbase = false;
    mutable bool qregularexpressionvalidator_eventfilter_isbase = false;
    mutable bool qregularexpressionvalidator_timerevent_isbase = false;
    mutable bool qregularexpressionvalidator_childevent_isbase = false;
    mutable bool qregularexpressionvalidator_customevent_isbase = false;
    mutable bool qregularexpressionvalidator_connectnotify_isbase = false;
    mutable bool qregularexpressionvalidator_disconnectnotify_isbase = false;
    mutable bool qregularexpressionvalidator_sender_isbase = false;
    mutable bool qregularexpressionvalidator_sendersignalindex_isbase = false;
    mutable bool qregularexpressionvalidator_receivers_isbase = false;
    mutable bool qregularexpressionvalidator_issignalconnected_isbase = false;

  public:
    VirtualQRegularExpressionValidator() : QRegularExpressionValidator(){};
    VirtualQRegularExpressionValidator(const QRegularExpression& re) : QRegularExpressionValidator(re){};
    VirtualQRegularExpressionValidator(QObject* parent) : QRegularExpressionValidator(parent){};
    VirtualQRegularExpressionValidator(const QRegularExpression& re, QObject* parent) : QRegularExpressionValidator(re, parent){};

    ~VirtualQRegularExpressionValidator() {
        qregularexpressionvalidator_metacall_callback = nullptr;
        qregularexpressionvalidator_validate_callback = nullptr;
        qregularexpressionvalidator_fixup_callback = nullptr;
        qregularexpressionvalidator_event_callback = nullptr;
        qregularexpressionvalidator_eventfilter_callback = nullptr;
        qregularexpressionvalidator_timerevent_callback = nullptr;
        qregularexpressionvalidator_childevent_callback = nullptr;
        qregularexpressionvalidator_customevent_callback = nullptr;
        qregularexpressionvalidator_connectnotify_callback = nullptr;
        qregularexpressionvalidator_disconnectnotify_callback = nullptr;
        qregularexpressionvalidator_sender_callback = nullptr;
        qregularexpressionvalidator_sendersignalindex_callback = nullptr;
        qregularexpressionvalidator_receivers_callback = nullptr;
        qregularexpressionvalidator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQRegularExpressionValidator_Metacall_Callback(QRegularExpressionValidator_Metacall_Callback cb) { qregularexpressionvalidator_metacall_callback = cb; }
    void setQRegularExpressionValidator_Validate_Callback(QRegularExpressionValidator_Validate_Callback cb) { qregularexpressionvalidator_validate_callback = cb; }
    void setQRegularExpressionValidator_Fixup_Callback(QRegularExpressionValidator_Fixup_Callback cb) { qregularexpressionvalidator_fixup_callback = cb; }
    void setQRegularExpressionValidator_Event_Callback(QRegularExpressionValidator_Event_Callback cb) { qregularexpressionvalidator_event_callback = cb; }
    void setQRegularExpressionValidator_EventFilter_Callback(QRegularExpressionValidator_EventFilter_Callback cb) { qregularexpressionvalidator_eventfilter_callback = cb; }
    void setQRegularExpressionValidator_TimerEvent_Callback(QRegularExpressionValidator_TimerEvent_Callback cb) { qregularexpressionvalidator_timerevent_callback = cb; }
    void setQRegularExpressionValidator_ChildEvent_Callback(QRegularExpressionValidator_ChildEvent_Callback cb) { qregularexpressionvalidator_childevent_callback = cb; }
    void setQRegularExpressionValidator_CustomEvent_Callback(QRegularExpressionValidator_CustomEvent_Callback cb) { qregularexpressionvalidator_customevent_callback = cb; }
    void setQRegularExpressionValidator_ConnectNotify_Callback(QRegularExpressionValidator_ConnectNotify_Callback cb) { qregularexpressionvalidator_connectnotify_callback = cb; }
    void setQRegularExpressionValidator_DisconnectNotify_Callback(QRegularExpressionValidator_DisconnectNotify_Callback cb) { qregularexpressionvalidator_disconnectnotify_callback = cb; }
    void setQRegularExpressionValidator_Sender_Callback(QRegularExpressionValidator_Sender_Callback cb) { qregularexpressionvalidator_sender_callback = cb; }
    void setQRegularExpressionValidator_SenderSignalIndex_Callback(QRegularExpressionValidator_SenderSignalIndex_Callback cb) { qregularexpressionvalidator_sendersignalindex_callback = cb; }
    void setQRegularExpressionValidator_Receivers_Callback(QRegularExpressionValidator_Receivers_Callback cb) { qregularexpressionvalidator_receivers_callback = cb; }
    void setQRegularExpressionValidator_IsSignalConnected_Callback(QRegularExpressionValidator_IsSignalConnected_Callback cb) { qregularexpressionvalidator_issignalconnected_callback = cb; }

    // Base flag setters
    void setQRegularExpressionValidator_Metacall_IsBase(bool value) const { qregularexpressionvalidator_metacall_isbase = value; }
    void setQRegularExpressionValidator_Validate_IsBase(bool value) const { qregularexpressionvalidator_validate_isbase = value; }
    void setQRegularExpressionValidator_Fixup_IsBase(bool value) const { qregularexpressionvalidator_fixup_isbase = value; }
    void setQRegularExpressionValidator_Event_IsBase(bool value) const { qregularexpressionvalidator_event_isbase = value; }
    void setQRegularExpressionValidator_EventFilter_IsBase(bool value) const { qregularexpressionvalidator_eventfilter_isbase = value; }
    void setQRegularExpressionValidator_TimerEvent_IsBase(bool value) const { qregularexpressionvalidator_timerevent_isbase = value; }
    void setQRegularExpressionValidator_ChildEvent_IsBase(bool value) const { qregularexpressionvalidator_childevent_isbase = value; }
    void setQRegularExpressionValidator_CustomEvent_IsBase(bool value) const { qregularexpressionvalidator_customevent_isbase = value; }
    void setQRegularExpressionValidator_ConnectNotify_IsBase(bool value) const { qregularexpressionvalidator_connectnotify_isbase = value; }
    void setQRegularExpressionValidator_DisconnectNotify_IsBase(bool value) const { qregularexpressionvalidator_disconnectnotify_isbase = value; }
    void setQRegularExpressionValidator_Sender_IsBase(bool value) const { qregularexpressionvalidator_sender_isbase = value; }
    void setQRegularExpressionValidator_SenderSignalIndex_IsBase(bool value) const { qregularexpressionvalidator_sendersignalindex_isbase = value; }
    void setQRegularExpressionValidator_Receivers_IsBase(bool value) const { qregularexpressionvalidator_receivers_isbase = value; }
    void setQRegularExpressionValidator_IsSignalConnected_IsBase(bool value) const { qregularexpressionvalidator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qregularexpressionvalidator_metacall_isbase) {
            qregularexpressionvalidator_metacall_isbase = false;
            return QRegularExpressionValidator::qt_metacall(param1, param2, param3);
        } else if (qregularexpressionvalidator_metacall_callback != nullptr) {
            return qregularexpressionvalidator_metacall_callback(this, param1, param2, param3);
        } else {
            return QRegularExpressionValidator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qregularexpressionvalidator_validate_isbase) {
            qregularexpressionvalidator_validate_isbase = false;
            return QRegularExpressionValidator::validate(input, pos);
        } else if (qregularexpressionvalidator_validate_callback != nullptr) {
            return qregularexpressionvalidator_validate_callback(this, input, pos);
        } else {
            return QRegularExpressionValidator::validate(input, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& param1) const override {
        if (qregularexpressionvalidator_fixup_isbase) {
            qregularexpressionvalidator_fixup_isbase = false;
            QRegularExpressionValidator::fixup(param1);
        } else if (qregularexpressionvalidator_fixup_callback != nullptr) {
            qregularexpressionvalidator_fixup_callback(this, param1);
        } else {
            QRegularExpressionValidator::fixup(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qregularexpressionvalidator_event_isbase) {
            qregularexpressionvalidator_event_isbase = false;
            return QRegularExpressionValidator::event(event);
        } else if (qregularexpressionvalidator_event_callback != nullptr) {
            return qregularexpressionvalidator_event_callback(this, event);
        } else {
            return QRegularExpressionValidator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qregularexpressionvalidator_eventfilter_isbase) {
            qregularexpressionvalidator_eventfilter_isbase = false;
            return QRegularExpressionValidator::eventFilter(watched, event);
        } else if (qregularexpressionvalidator_eventfilter_callback != nullptr) {
            return qregularexpressionvalidator_eventfilter_callback(this, watched, event);
        } else {
            return QRegularExpressionValidator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qregularexpressionvalidator_timerevent_isbase) {
            qregularexpressionvalidator_timerevent_isbase = false;
            QRegularExpressionValidator::timerEvent(event);
        } else if (qregularexpressionvalidator_timerevent_callback != nullptr) {
            qregularexpressionvalidator_timerevent_callback(this, event);
        } else {
            QRegularExpressionValidator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qregularexpressionvalidator_childevent_isbase) {
            qregularexpressionvalidator_childevent_isbase = false;
            QRegularExpressionValidator::childEvent(event);
        } else if (qregularexpressionvalidator_childevent_callback != nullptr) {
            qregularexpressionvalidator_childevent_callback(this, event);
        } else {
            QRegularExpressionValidator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qregularexpressionvalidator_customevent_isbase) {
            qregularexpressionvalidator_customevent_isbase = false;
            QRegularExpressionValidator::customEvent(event);
        } else if (qregularexpressionvalidator_customevent_callback != nullptr) {
            qregularexpressionvalidator_customevent_callback(this, event);
        } else {
            QRegularExpressionValidator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qregularexpressionvalidator_connectnotify_isbase) {
            qregularexpressionvalidator_connectnotify_isbase = false;
            QRegularExpressionValidator::connectNotify(signal);
        } else if (qregularexpressionvalidator_connectnotify_callback != nullptr) {
            qregularexpressionvalidator_connectnotify_callback(this, signal);
        } else {
            QRegularExpressionValidator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qregularexpressionvalidator_disconnectnotify_isbase) {
            qregularexpressionvalidator_disconnectnotify_isbase = false;
            QRegularExpressionValidator::disconnectNotify(signal);
        } else if (qregularexpressionvalidator_disconnectnotify_callback != nullptr) {
            qregularexpressionvalidator_disconnectnotify_callback(this, signal);
        } else {
            QRegularExpressionValidator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qregularexpressionvalidator_sender_isbase) {
            qregularexpressionvalidator_sender_isbase = false;
            return QRegularExpressionValidator::sender();
        } else if (qregularexpressionvalidator_sender_callback != nullptr) {
            return qregularexpressionvalidator_sender_callback();
        } else {
            return QRegularExpressionValidator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qregularexpressionvalidator_sendersignalindex_isbase) {
            qregularexpressionvalidator_sendersignalindex_isbase = false;
            return QRegularExpressionValidator::senderSignalIndex();
        } else if (qregularexpressionvalidator_sendersignalindex_callback != nullptr) {
            return qregularexpressionvalidator_sendersignalindex_callback();
        } else {
            return QRegularExpressionValidator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qregularexpressionvalidator_receivers_isbase) {
            qregularexpressionvalidator_receivers_isbase = false;
            return QRegularExpressionValidator::receivers(signal);
        } else if (qregularexpressionvalidator_receivers_callback != nullptr) {
            return qregularexpressionvalidator_receivers_callback(this, signal);
        } else {
            return QRegularExpressionValidator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qregularexpressionvalidator_issignalconnected_isbase) {
            qregularexpressionvalidator_issignalconnected_isbase = false;
            return QRegularExpressionValidator::isSignalConnected(signal);
        } else if (qregularexpressionvalidator_issignalconnected_callback != nullptr) {
            return qregularexpressionvalidator_issignalconnected_callback(this, signal);
        } else {
            return QRegularExpressionValidator::isSignalConnected(signal);
        }
    }
};

#endif

#pragma once
#ifndef SRCC_LIBVIRTUALQTRANSLATOR_H
#define SRCC_LIBVIRTUALQTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTranslator so that we can call protected methods
class VirtualQTranslator : public QTranslator {

  public:
    // Virtual class public types (including callbacks)
    using QTranslator_Metacall_Callback = int (*)(QTranslator*, QMetaObject::Call, int, void**);
    using QTranslator_Translate_Callback = QString (*)(const QTranslator*, const char*, const char*, const char*, int);
    using QTranslator_IsEmpty_Callback = bool (*)();
    using QTranslator_Event_Callback = bool (*)(QTranslator*, QEvent*);
    using QTranslator_EventFilter_Callback = bool (*)(QTranslator*, QObject*, QEvent*);
    using QTranslator_TimerEvent_Callback = void (*)(QTranslator*, QTimerEvent*);
    using QTranslator_ChildEvent_Callback = void (*)(QTranslator*, QChildEvent*);
    using QTranslator_CustomEvent_Callback = void (*)(QTranslator*, QEvent*);
    using QTranslator_ConnectNotify_Callback = void (*)(QTranslator*, const QMetaMethod&);
    using QTranslator_DisconnectNotify_Callback = void (*)(QTranslator*, const QMetaMethod&);
    using QTranslator_Sender_Callback = QObject* (*)();
    using QTranslator_SenderSignalIndex_Callback = int (*)();
    using QTranslator_Receivers_Callback = int (*)(const QTranslator*, const char*);
    using QTranslator_IsSignalConnected_Callback = bool (*)(const QTranslator*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTranslator_Metacall_Callback qtranslator_metacall_callback = nullptr;
    QTranslator_Translate_Callback qtranslator_translate_callback = nullptr;
    QTranslator_IsEmpty_Callback qtranslator_isempty_callback = nullptr;
    QTranslator_Event_Callback qtranslator_event_callback = nullptr;
    QTranslator_EventFilter_Callback qtranslator_eventfilter_callback = nullptr;
    QTranslator_TimerEvent_Callback qtranslator_timerevent_callback = nullptr;
    QTranslator_ChildEvent_Callback qtranslator_childevent_callback = nullptr;
    QTranslator_CustomEvent_Callback qtranslator_customevent_callback = nullptr;
    QTranslator_ConnectNotify_Callback qtranslator_connectnotify_callback = nullptr;
    QTranslator_DisconnectNotify_Callback qtranslator_disconnectnotify_callback = nullptr;
    QTranslator_Sender_Callback qtranslator_sender_callback = nullptr;
    QTranslator_SenderSignalIndex_Callback qtranslator_sendersignalindex_callback = nullptr;
    QTranslator_Receivers_Callback qtranslator_receivers_callback = nullptr;
    QTranslator_IsSignalConnected_Callback qtranslator_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtranslator_metacall_isbase = false;
    mutable bool qtranslator_translate_isbase = false;
    mutable bool qtranslator_isempty_isbase = false;
    mutable bool qtranslator_event_isbase = false;
    mutable bool qtranslator_eventfilter_isbase = false;
    mutable bool qtranslator_timerevent_isbase = false;
    mutable bool qtranslator_childevent_isbase = false;
    mutable bool qtranslator_customevent_isbase = false;
    mutable bool qtranslator_connectnotify_isbase = false;
    mutable bool qtranslator_disconnectnotify_isbase = false;
    mutable bool qtranslator_sender_isbase = false;
    mutable bool qtranslator_sendersignalindex_isbase = false;
    mutable bool qtranslator_receivers_isbase = false;
    mutable bool qtranslator_issignalconnected_isbase = false;

  public:
    VirtualQTranslator() : QTranslator(){};
    VirtualQTranslator(QObject* parent) : QTranslator(parent){};

    ~VirtualQTranslator() {
        qtranslator_metacall_callback = nullptr;
        qtranslator_translate_callback = nullptr;
        qtranslator_isempty_callback = nullptr;
        qtranslator_event_callback = nullptr;
        qtranslator_eventfilter_callback = nullptr;
        qtranslator_timerevent_callback = nullptr;
        qtranslator_childevent_callback = nullptr;
        qtranslator_customevent_callback = nullptr;
        qtranslator_connectnotify_callback = nullptr;
        qtranslator_disconnectnotify_callback = nullptr;
        qtranslator_sender_callback = nullptr;
        qtranslator_sendersignalindex_callback = nullptr;
        qtranslator_receivers_callback = nullptr;
        qtranslator_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTranslator_Metacall_Callback(QTranslator_Metacall_Callback cb) { qtranslator_metacall_callback = cb; }
    void setQTranslator_Translate_Callback(QTranslator_Translate_Callback cb) { qtranslator_translate_callback = cb; }
    void setQTranslator_IsEmpty_Callback(QTranslator_IsEmpty_Callback cb) { qtranslator_isempty_callback = cb; }
    void setQTranslator_Event_Callback(QTranslator_Event_Callback cb) { qtranslator_event_callback = cb; }
    void setQTranslator_EventFilter_Callback(QTranslator_EventFilter_Callback cb) { qtranslator_eventfilter_callback = cb; }
    void setQTranslator_TimerEvent_Callback(QTranslator_TimerEvent_Callback cb) { qtranslator_timerevent_callback = cb; }
    void setQTranslator_ChildEvent_Callback(QTranslator_ChildEvent_Callback cb) { qtranslator_childevent_callback = cb; }
    void setQTranslator_CustomEvent_Callback(QTranslator_CustomEvent_Callback cb) { qtranslator_customevent_callback = cb; }
    void setQTranslator_ConnectNotify_Callback(QTranslator_ConnectNotify_Callback cb) { qtranslator_connectnotify_callback = cb; }
    void setQTranslator_DisconnectNotify_Callback(QTranslator_DisconnectNotify_Callback cb) { qtranslator_disconnectnotify_callback = cb; }
    void setQTranslator_Sender_Callback(QTranslator_Sender_Callback cb) { qtranslator_sender_callback = cb; }
    void setQTranslator_SenderSignalIndex_Callback(QTranslator_SenderSignalIndex_Callback cb) { qtranslator_sendersignalindex_callback = cb; }
    void setQTranslator_Receivers_Callback(QTranslator_Receivers_Callback cb) { qtranslator_receivers_callback = cb; }
    void setQTranslator_IsSignalConnected_Callback(QTranslator_IsSignalConnected_Callback cb) { qtranslator_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTranslator_Metacall_IsBase(bool value) const { qtranslator_metacall_isbase = value; }
    void setQTranslator_Translate_IsBase(bool value) const { qtranslator_translate_isbase = value; }
    void setQTranslator_IsEmpty_IsBase(bool value) const { qtranslator_isempty_isbase = value; }
    void setQTranslator_Event_IsBase(bool value) const { qtranslator_event_isbase = value; }
    void setQTranslator_EventFilter_IsBase(bool value) const { qtranslator_eventfilter_isbase = value; }
    void setQTranslator_TimerEvent_IsBase(bool value) const { qtranslator_timerevent_isbase = value; }
    void setQTranslator_ChildEvent_IsBase(bool value) const { qtranslator_childevent_isbase = value; }
    void setQTranslator_CustomEvent_IsBase(bool value) const { qtranslator_customevent_isbase = value; }
    void setQTranslator_ConnectNotify_IsBase(bool value) const { qtranslator_connectnotify_isbase = value; }
    void setQTranslator_DisconnectNotify_IsBase(bool value) const { qtranslator_disconnectnotify_isbase = value; }
    void setQTranslator_Sender_IsBase(bool value) const { qtranslator_sender_isbase = value; }
    void setQTranslator_SenderSignalIndex_IsBase(bool value) const { qtranslator_sendersignalindex_isbase = value; }
    void setQTranslator_Receivers_IsBase(bool value) const { qtranslator_receivers_isbase = value; }
    void setQTranslator_IsSignalConnected_IsBase(bool value) const { qtranslator_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtranslator_metacall_isbase) {
            qtranslator_metacall_isbase = false;
            return QTranslator::qt_metacall(param1, param2, param3);
        } else if (qtranslator_metacall_callback != nullptr) {
            return qtranslator_metacall_callback(this, param1, param2, param3);
        } else {
            return QTranslator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString translate(const char* context, const char* sourceText, const char* disambiguation, int n) const override {
        if (qtranslator_translate_isbase) {
            qtranslator_translate_isbase = false;
            return QTranslator::translate(context, sourceText, disambiguation, n);
        } else if (qtranslator_translate_callback != nullptr) {
            return qtranslator_translate_callback(this, context, sourceText, disambiguation, n);
        } else {
            return QTranslator::translate(context, sourceText, disambiguation, n);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qtranslator_isempty_isbase) {
            qtranslator_isempty_isbase = false;
            return QTranslator::isEmpty();
        } else if (qtranslator_isempty_callback != nullptr) {
            return qtranslator_isempty_callback();
        } else {
            return QTranslator::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtranslator_event_isbase) {
            qtranslator_event_isbase = false;
            return QTranslator::event(event);
        } else if (qtranslator_event_callback != nullptr) {
            return qtranslator_event_callback(this, event);
        } else {
            return QTranslator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtranslator_eventfilter_isbase) {
            qtranslator_eventfilter_isbase = false;
            return QTranslator::eventFilter(watched, event);
        } else if (qtranslator_eventfilter_callback != nullptr) {
            return qtranslator_eventfilter_callback(this, watched, event);
        } else {
            return QTranslator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtranslator_timerevent_isbase) {
            qtranslator_timerevent_isbase = false;
            QTranslator::timerEvent(event);
        } else if (qtranslator_timerevent_callback != nullptr) {
            qtranslator_timerevent_callback(this, event);
        } else {
            QTranslator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtranslator_childevent_isbase) {
            qtranslator_childevent_isbase = false;
            QTranslator::childEvent(event);
        } else if (qtranslator_childevent_callback != nullptr) {
            qtranslator_childevent_callback(this, event);
        } else {
            QTranslator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtranslator_customevent_isbase) {
            qtranslator_customevent_isbase = false;
            QTranslator::customEvent(event);
        } else if (qtranslator_customevent_callback != nullptr) {
            qtranslator_customevent_callback(this, event);
        } else {
            QTranslator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtranslator_connectnotify_isbase) {
            qtranslator_connectnotify_isbase = false;
            QTranslator::connectNotify(signal);
        } else if (qtranslator_connectnotify_callback != nullptr) {
            qtranslator_connectnotify_callback(this, signal);
        } else {
            QTranslator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtranslator_disconnectnotify_isbase) {
            qtranslator_disconnectnotify_isbase = false;
            QTranslator::disconnectNotify(signal);
        } else if (qtranslator_disconnectnotify_callback != nullptr) {
            qtranslator_disconnectnotify_callback(this, signal);
        } else {
            QTranslator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtranslator_sender_isbase) {
            qtranslator_sender_isbase = false;
            return QTranslator::sender();
        } else if (qtranslator_sender_callback != nullptr) {
            return qtranslator_sender_callback();
        } else {
            return QTranslator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtranslator_sendersignalindex_isbase) {
            qtranslator_sendersignalindex_isbase = false;
            return QTranslator::senderSignalIndex();
        } else if (qtranslator_sendersignalindex_callback != nullptr) {
            return qtranslator_sendersignalindex_callback();
        } else {
            return QTranslator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtranslator_receivers_isbase) {
            qtranslator_receivers_isbase = false;
            return QTranslator::receivers(signal);
        } else if (qtranslator_receivers_callback != nullptr) {
            return qtranslator_receivers_callback(this, signal);
        } else {
            return QTranslator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtranslator_issignalconnected_isbase) {
            qtranslator_issignalconnected_isbase = false;
            return QTranslator::isSignalConnected(signal);
        } else if (qtranslator_issignalconnected_callback != nullptr) {
            return qtranslator_issignalconnected_callback(this, signal);
        } else {
            return QTranslator::isSignalConnected(signal);
        }
    }
};

#endif

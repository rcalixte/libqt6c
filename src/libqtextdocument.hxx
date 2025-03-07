#pragma once
#ifndef SRCC_LIBVIRTUALQTEXTDOCUMENT_H
#define SRCC_LIBVIRTUALQTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextDocument so that we can call protected methods
class VirtualQTextDocument : public QTextDocument {

  public:
    // Virtual class public types (including callbacks)
    using QTextDocument_Metacall_Callback = int (*)(QTextDocument*, QMetaObject::Call, int, void**);
    using QTextDocument_Clear_Callback = void (*)();
    using QTextDocument_CreateObject_Callback = QTextObject* (*)(QTextDocument*, const QTextFormat&);
    using QTextDocument_LoadResource_Callback = QVariant (*)(QTextDocument*, int, const QUrl&);
    using QTextDocument_Event_Callback = bool (*)(QTextDocument*, QEvent*);
    using QTextDocument_EventFilter_Callback = bool (*)(QTextDocument*, QObject*, QEvent*);
    using QTextDocument_TimerEvent_Callback = void (*)(QTextDocument*, QTimerEvent*);
    using QTextDocument_ChildEvent_Callback = void (*)(QTextDocument*, QChildEvent*);
    using QTextDocument_CustomEvent_Callback = void (*)(QTextDocument*, QEvent*);
    using QTextDocument_ConnectNotify_Callback = void (*)(QTextDocument*, const QMetaMethod&);
    using QTextDocument_DisconnectNotify_Callback = void (*)(QTextDocument*, const QMetaMethod&);
    using QTextDocument_Sender_Callback = QObject* (*)();
    using QTextDocument_SenderSignalIndex_Callback = int (*)();
    using QTextDocument_Receivers_Callback = int (*)(const QTextDocument*, const char*);
    using QTextDocument_IsSignalConnected_Callback = bool (*)(const QTextDocument*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTextDocument_Metacall_Callback qtextdocument_metacall_callback = nullptr;
    QTextDocument_Clear_Callback qtextdocument_clear_callback = nullptr;
    QTextDocument_CreateObject_Callback qtextdocument_createobject_callback = nullptr;
    QTextDocument_LoadResource_Callback qtextdocument_loadresource_callback = nullptr;
    QTextDocument_Event_Callback qtextdocument_event_callback = nullptr;
    QTextDocument_EventFilter_Callback qtextdocument_eventfilter_callback = nullptr;
    QTextDocument_TimerEvent_Callback qtextdocument_timerevent_callback = nullptr;
    QTextDocument_ChildEvent_Callback qtextdocument_childevent_callback = nullptr;
    QTextDocument_CustomEvent_Callback qtextdocument_customevent_callback = nullptr;
    QTextDocument_ConnectNotify_Callback qtextdocument_connectnotify_callback = nullptr;
    QTextDocument_DisconnectNotify_Callback qtextdocument_disconnectnotify_callback = nullptr;
    QTextDocument_Sender_Callback qtextdocument_sender_callback = nullptr;
    QTextDocument_SenderSignalIndex_Callback qtextdocument_sendersignalindex_callback = nullptr;
    QTextDocument_Receivers_Callback qtextdocument_receivers_callback = nullptr;
    QTextDocument_IsSignalConnected_Callback qtextdocument_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtextdocument_metacall_isbase = false;
    mutable bool qtextdocument_clear_isbase = false;
    mutable bool qtextdocument_createobject_isbase = false;
    mutable bool qtextdocument_loadresource_isbase = false;
    mutable bool qtextdocument_event_isbase = false;
    mutable bool qtextdocument_eventfilter_isbase = false;
    mutable bool qtextdocument_timerevent_isbase = false;
    mutable bool qtextdocument_childevent_isbase = false;
    mutable bool qtextdocument_customevent_isbase = false;
    mutable bool qtextdocument_connectnotify_isbase = false;
    mutable bool qtextdocument_disconnectnotify_isbase = false;
    mutable bool qtextdocument_sender_isbase = false;
    mutable bool qtextdocument_sendersignalindex_isbase = false;
    mutable bool qtextdocument_receivers_isbase = false;
    mutable bool qtextdocument_issignalconnected_isbase = false;

  public:
    VirtualQTextDocument() : QTextDocument(){};
    VirtualQTextDocument(const QString& text) : QTextDocument(text){};
    VirtualQTextDocument(QObject* parent) : QTextDocument(parent){};
    VirtualQTextDocument(const QString& text, QObject* parent) : QTextDocument(text, parent){};

    ~VirtualQTextDocument() {
        qtextdocument_metacall_callback = nullptr;
        qtextdocument_clear_callback = nullptr;
        qtextdocument_createobject_callback = nullptr;
        qtextdocument_loadresource_callback = nullptr;
        qtextdocument_event_callback = nullptr;
        qtextdocument_eventfilter_callback = nullptr;
        qtextdocument_timerevent_callback = nullptr;
        qtextdocument_childevent_callback = nullptr;
        qtextdocument_customevent_callback = nullptr;
        qtextdocument_connectnotify_callback = nullptr;
        qtextdocument_disconnectnotify_callback = nullptr;
        qtextdocument_sender_callback = nullptr;
        qtextdocument_sendersignalindex_callback = nullptr;
        qtextdocument_receivers_callback = nullptr;
        qtextdocument_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTextDocument_Metacall_Callback(QTextDocument_Metacall_Callback cb) { qtextdocument_metacall_callback = cb; }
    void setQTextDocument_Clear_Callback(QTextDocument_Clear_Callback cb) { qtextdocument_clear_callback = cb; }
    void setQTextDocument_CreateObject_Callback(QTextDocument_CreateObject_Callback cb) { qtextdocument_createobject_callback = cb; }
    void setQTextDocument_LoadResource_Callback(QTextDocument_LoadResource_Callback cb) { qtextdocument_loadresource_callback = cb; }
    void setQTextDocument_Event_Callback(QTextDocument_Event_Callback cb) { qtextdocument_event_callback = cb; }
    void setQTextDocument_EventFilter_Callback(QTextDocument_EventFilter_Callback cb) { qtextdocument_eventfilter_callback = cb; }
    void setQTextDocument_TimerEvent_Callback(QTextDocument_TimerEvent_Callback cb) { qtextdocument_timerevent_callback = cb; }
    void setQTextDocument_ChildEvent_Callback(QTextDocument_ChildEvent_Callback cb) { qtextdocument_childevent_callback = cb; }
    void setQTextDocument_CustomEvent_Callback(QTextDocument_CustomEvent_Callback cb) { qtextdocument_customevent_callback = cb; }
    void setQTextDocument_ConnectNotify_Callback(QTextDocument_ConnectNotify_Callback cb) { qtextdocument_connectnotify_callback = cb; }
    void setQTextDocument_DisconnectNotify_Callback(QTextDocument_DisconnectNotify_Callback cb) { qtextdocument_disconnectnotify_callback = cb; }
    void setQTextDocument_Sender_Callback(QTextDocument_Sender_Callback cb) { qtextdocument_sender_callback = cb; }
    void setQTextDocument_SenderSignalIndex_Callback(QTextDocument_SenderSignalIndex_Callback cb) { qtextdocument_sendersignalindex_callback = cb; }
    void setQTextDocument_Receivers_Callback(QTextDocument_Receivers_Callback cb) { qtextdocument_receivers_callback = cb; }
    void setQTextDocument_IsSignalConnected_Callback(QTextDocument_IsSignalConnected_Callback cb) { qtextdocument_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTextDocument_Metacall_IsBase(bool value) const { qtextdocument_metacall_isbase = value; }
    void setQTextDocument_Clear_IsBase(bool value) const { qtextdocument_clear_isbase = value; }
    void setQTextDocument_CreateObject_IsBase(bool value) const { qtextdocument_createobject_isbase = value; }
    void setQTextDocument_LoadResource_IsBase(bool value) const { qtextdocument_loadresource_isbase = value; }
    void setQTextDocument_Event_IsBase(bool value) const { qtextdocument_event_isbase = value; }
    void setQTextDocument_EventFilter_IsBase(bool value) const { qtextdocument_eventfilter_isbase = value; }
    void setQTextDocument_TimerEvent_IsBase(bool value) const { qtextdocument_timerevent_isbase = value; }
    void setQTextDocument_ChildEvent_IsBase(bool value) const { qtextdocument_childevent_isbase = value; }
    void setQTextDocument_CustomEvent_IsBase(bool value) const { qtextdocument_customevent_isbase = value; }
    void setQTextDocument_ConnectNotify_IsBase(bool value) const { qtextdocument_connectnotify_isbase = value; }
    void setQTextDocument_DisconnectNotify_IsBase(bool value) const { qtextdocument_disconnectnotify_isbase = value; }
    void setQTextDocument_Sender_IsBase(bool value) const { qtextdocument_sender_isbase = value; }
    void setQTextDocument_SenderSignalIndex_IsBase(bool value) const { qtextdocument_sendersignalindex_isbase = value; }
    void setQTextDocument_Receivers_IsBase(bool value) const { qtextdocument_receivers_isbase = value; }
    void setQTextDocument_IsSignalConnected_IsBase(bool value) const { qtextdocument_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextdocument_metacall_isbase) {
            qtextdocument_metacall_isbase = false;
            return QTextDocument::qt_metacall(param1, param2, param3);
        } else if (qtextdocument_metacall_callback != nullptr) {
            return qtextdocument_metacall_callback(this, param1, param2, param3);
        } else {
            return QTextDocument::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qtextdocument_clear_isbase) {
            qtextdocument_clear_isbase = false;
            QTextDocument::clear();
        } else if (qtextdocument_clear_callback != nullptr) {
            qtextdocument_clear_callback();
        } else {
            QTextDocument::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QTextObject* createObject(const QTextFormat& f) override {
        if (qtextdocument_createobject_isbase) {
            qtextdocument_createobject_isbase = false;
            return QTextDocument::createObject(f);
        } else if (qtextdocument_createobject_callback != nullptr) {
            return qtextdocument_createobject_callback(this, f);
        } else {
            return QTextDocument::createObject(f);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qtextdocument_loadresource_isbase) {
            qtextdocument_loadresource_isbase = false;
            return QTextDocument::loadResource(typeVal, name);
        } else if (qtextdocument_loadresource_callback != nullptr) {
            return qtextdocument_loadresource_callback(this, typeVal, name);
        } else {
            return QTextDocument::loadResource(typeVal, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtextdocument_event_isbase) {
            qtextdocument_event_isbase = false;
            return QTextDocument::event(event);
        } else if (qtextdocument_event_callback != nullptr) {
            return qtextdocument_event_callback(this, event);
        } else {
            return QTextDocument::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtextdocument_eventfilter_isbase) {
            qtextdocument_eventfilter_isbase = false;
            return QTextDocument::eventFilter(watched, event);
        } else if (qtextdocument_eventfilter_callback != nullptr) {
            return qtextdocument_eventfilter_callback(this, watched, event);
        } else {
            return QTextDocument::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtextdocument_timerevent_isbase) {
            qtextdocument_timerevent_isbase = false;
            QTextDocument::timerEvent(event);
        } else if (qtextdocument_timerevent_callback != nullptr) {
            qtextdocument_timerevent_callback(this, event);
        } else {
            QTextDocument::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextdocument_childevent_isbase) {
            qtextdocument_childevent_isbase = false;
            QTextDocument::childEvent(event);
        } else if (qtextdocument_childevent_callback != nullptr) {
            qtextdocument_childevent_callback(this, event);
        } else {
            QTextDocument::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextdocument_customevent_isbase) {
            qtextdocument_customevent_isbase = false;
            QTextDocument::customEvent(event);
        } else if (qtextdocument_customevent_callback != nullptr) {
            qtextdocument_customevent_callback(this, event);
        } else {
            QTextDocument::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextdocument_connectnotify_isbase) {
            qtextdocument_connectnotify_isbase = false;
            QTextDocument::connectNotify(signal);
        } else if (qtextdocument_connectnotify_callback != nullptr) {
            qtextdocument_connectnotify_callback(this, signal);
        } else {
            QTextDocument::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextdocument_disconnectnotify_isbase) {
            qtextdocument_disconnectnotify_isbase = false;
            QTextDocument::disconnectNotify(signal);
        } else if (qtextdocument_disconnectnotify_callback != nullptr) {
            qtextdocument_disconnectnotify_callback(this, signal);
        } else {
            QTextDocument::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtextdocument_sender_isbase) {
            qtextdocument_sender_isbase = false;
            return QTextDocument::sender();
        } else if (qtextdocument_sender_callback != nullptr) {
            return qtextdocument_sender_callback();
        } else {
            return QTextDocument::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtextdocument_sendersignalindex_isbase) {
            qtextdocument_sendersignalindex_isbase = false;
            return QTextDocument::senderSignalIndex();
        } else if (qtextdocument_sendersignalindex_callback != nullptr) {
            return qtextdocument_sendersignalindex_callback();
        } else {
            return QTextDocument::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtextdocument_receivers_isbase) {
            qtextdocument_receivers_isbase = false;
            return QTextDocument::receivers(signal);
        } else if (qtextdocument_receivers_callback != nullptr) {
            return qtextdocument_receivers_callback(this, signal);
        } else {
            return QTextDocument::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtextdocument_issignalconnected_isbase) {
            qtextdocument_issignalconnected_isbase = false;
            return QTextDocument::isSignalConnected(signal);
        } else if (qtextdocument_issignalconnected_callback != nullptr) {
            return qtextdocument_issignalconnected_callback(this, signal);
        } else {
            return QTextDocument::isSignalConnected(signal);
        }
    }
};

#endif

#pragma once
#ifndef SRCC_LIBVIRTUALQOFFSCREENSURFACE_H
#define SRCC_LIBVIRTUALQOFFSCREENSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QOffscreenSurface so that we can call protected methods
class VirtualQOffscreenSurface : public QOffscreenSurface {

  public:
    // Virtual class public types (including callbacks)
    using QOffscreenSurface_Metacall_Callback = int (*)(QOffscreenSurface*, QMetaObject::Call, int, void**);
    using QOffscreenSurface_SurfaceType_Callback = QSurface::SurfaceType (*)();
    using QOffscreenSurface_Format_Callback = QSurfaceFormat (*)();
    using QOffscreenSurface_Size_Callback = QSize (*)();
    using QOffscreenSurface_Event_Callback = bool (*)(QOffscreenSurface*, QEvent*);
    using QOffscreenSurface_EventFilter_Callback = bool (*)(QOffscreenSurface*, QObject*, QEvent*);
    using QOffscreenSurface_TimerEvent_Callback = void (*)(QOffscreenSurface*, QTimerEvent*);
    using QOffscreenSurface_ChildEvent_Callback = void (*)(QOffscreenSurface*, QChildEvent*);
    using QOffscreenSurface_CustomEvent_Callback = void (*)(QOffscreenSurface*, QEvent*);
    using QOffscreenSurface_ConnectNotify_Callback = void (*)(QOffscreenSurface*, const QMetaMethod&);
    using QOffscreenSurface_DisconnectNotify_Callback = void (*)(QOffscreenSurface*, const QMetaMethod&);
    using QOffscreenSurface_ResolveInterface_Callback = void* (*)(const QOffscreenSurface*, const char*, int);
    using QOffscreenSurface_Sender_Callback = QObject* (*)();
    using QOffscreenSurface_SenderSignalIndex_Callback = int (*)();
    using QOffscreenSurface_Receivers_Callback = int (*)(const QOffscreenSurface*, const char*);
    using QOffscreenSurface_IsSignalConnected_Callback = bool (*)(const QOffscreenSurface*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QOffscreenSurface_Metacall_Callback qoffscreensurface_metacall_callback = nullptr;
    QOffscreenSurface_SurfaceType_Callback qoffscreensurface_surfacetype_callback = nullptr;
    QOffscreenSurface_Format_Callback qoffscreensurface_format_callback = nullptr;
    QOffscreenSurface_Size_Callback qoffscreensurface_size_callback = nullptr;
    QOffscreenSurface_Event_Callback qoffscreensurface_event_callback = nullptr;
    QOffscreenSurface_EventFilter_Callback qoffscreensurface_eventfilter_callback = nullptr;
    QOffscreenSurface_TimerEvent_Callback qoffscreensurface_timerevent_callback = nullptr;
    QOffscreenSurface_ChildEvent_Callback qoffscreensurface_childevent_callback = nullptr;
    QOffscreenSurface_CustomEvent_Callback qoffscreensurface_customevent_callback = nullptr;
    QOffscreenSurface_ConnectNotify_Callback qoffscreensurface_connectnotify_callback = nullptr;
    QOffscreenSurface_DisconnectNotify_Callback qoffscreensurface_disconnectnotify_callback = nullptr;
    QOffscreenSurface_ResolveInterface_Callback qoffscreensurface_resolveinterface_callback = nullptr;
    QOffscreenSurface_Sender_Callback qoffscreensurface_sender_callback = nullptr;
    QOffscreenSurface_SenderSignalIndex_Callback qoffscreensurface_sendersignalindex_callback = nullptr;
    QOffscreenSurface_Receivers_Callback qoffscreensurface_receivers_callback = nullptr;
    QOffscreenSurface_IsSignalConnected_Callback qoffscreensurface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qoffscreensurface_metacall_isbase = false;
    mutable bool qoffscreensurface_surfacetype_isbase = false;
    mutable bool qoffscreensurface_format_isbase = false;
    mutable bool qoffscreensurface_size_isbase = false;
    mutable bool qoffscreensurface_event_isbase = false;
    mutable bool qoffscreensurface_eventfilter_isbase = false;
    mutable bool qoffscreensurface_timerevent_isbase = false;
    mutable bool qoffscreensurface_childevent_isbase = false;
    mutable bool qoffscreensurface_customevent_isbase = false;
    mutable bool qoffscreensurface_connectnotify_isbase = false;
    mutable bool qoffscreensurface_disconnectnotify_isbase = false;
    mutable bool qoffscreensurface_resolveinterface_isbase = false;
    mutable bool qoffscreensurface_sender_isbase = false;
    mutable bool qoffscreensurface_sendersignalindex_isbase = false;
    mutable bool qoffscreensurface_receivers_isbase = false;
    mutable bool qoffscreensurface_issignalconnected_isbase = false;

  public:
    VirtualQOffscreenSurface() : QOffscreenSurface(){};
    VirtualQOffscreenSurface(QScreen* screen) : QOffscreenSurface(screen){};
    VirtualQOffscreenSurface(QScreen* screen, QObject* parent) : QOffscreenSurface(screen, parent){};

    ~VirtualQOffscreenSurface() {
        qoffscreensurface_metacall_callback = nullptr;
        qoffscreensurface_surfacetype_callback = nullptr;
        qoffscreensurface_format_callback = nullptr;
        qoffscreensurface_size_callback = nullptr;
        qoffscreensurface_event_callback = nullptr;
        qoffscreensurface_eventfilter_callback = nullptr;
        qoffscreensurface_timerevent_callback = nullptr;
        qoffscreensurface_childevent_callback = nullptr;
        qoffscreensurface_customevent_callback = nullptr;
        qoffscreensurface_connectnotify_callback = nullptr;
        qoffscreensurface_disconnectnotify_callback = nullptr;
        qoffscreensurface_resolveinterface_callback = nullptr;
        qoffscreensurface_sender_callback = nullptr;
        qoffscreensurface_sendersignalindex_callback = nullptr;
        qoffscreensurface_receivers_callback = nullptr;
        qoffscreensurface_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQOffscreenSurface_Metacall_Callback(QOffscreenSurface_Metacall_Callback cb) { qoffscreensurface_metacall_callback = cb; }
    void setQOffscreenSurface_SurfaceType_Callback(QOffscreenSurface_SurfaceType_Callback cb) { qoffscreensurface_surfacetype_callback = cb; }
    void setQOffscreenSurface_Format_Callback(QOffscreenSurface_Format_Callback cb) { qoffscreensurface_format_callback = cb; }
    void setQOffscreenSurface_Size_Callback(QOffscreenSurface_Size_Callback cb) { qoffscreensurface_size_callback = cb; }
    void setQOffscreenSurface_Event_Callback(QOffscreenSurface_Event_Callback cb) { qoffscreensurface_event_callback = cb; }
    void setQOffscreenSurface_EventFilter_Callback(QOffscreenSurface_EventFilter_Callback cb) { qoffscreensurface_eventfilter_callback = cb; }
    void setQOffscreenSurface_TimerEvent_Callback(QOffscreenSurface_TimerEvent_Callback cb) { qoffscreensurface_timerevent_callback = cb; }
    void setQOffscreenSurface_ChildEvent_Callback(QOffscreenSurface_ChildEvent_Callback cb) { qoffscreensurface_childevent_callback = cb; }
    void setQOffscreenSurface_CustomEvent_Callback(QOffscreenSurface_CustomEvent_Callback cb) { qoffscreensurface_customevent_callback = cb; }
    void setQOffscreenSurface_ConnectNotify_Callback(QOffscreenSurface_ConnectNotify_Callback cb) { qoffscreensurface_connectnotify_callback = cb; }
    void setQOffscreenSurface_DisconnectNotify_Callback(QOffscreenSurface_DisconnectNotify_Callback cb) { qoffscreensurface_disconnectnotify_callback = cb; }
    void setQOffscreenSurface_ResolveInterface_Callback(QOffscreenSurface_ResolveInterface_Callback cb) { qoffscreensurface_resolveinterface_callback = cb; }
    void setQOffscreenSurface_Sender_Callback(QOffscreenSurface_Sender_Callback cb) { qoffscreensurface_sender_callback = cb; }
    void setQOffscreenSurface_SenderSignalIndex_Callback(QOffscreenSurface_SenderSignalIndex_Callback cb) { qoffscreensurface_sendersignalindex_callback = cb; }
    void setQOffscreenSurface_Receivers_Callback(QOffscreenSurface_Receivers_Callback cb) { qoffscreensurface_receivers_callback = cb; }
    void setQOffscreenSurface_IsSignalConnected_Callback(QOffscreenSurface_IsSignalConnected_Callback cb) { qoffscreensurface_issignalconnected_callback = cb; }

    // Base flag setters
    void setQOffscreenSurface_Metacall_IsBase(bool value) const { qoffscreensurface_metacall_isbase = value; }
    void setQOffscreenSurface_SurfaceType_IsBase(bool value) const { qoffscreensurface_surfacetype_isbase = value; }
    void setQOffscreenSurface_Format_IsBase(bool value) const { qoffscreensurface_format_isbase = value; }
    void setQOffscreenSurface_Size_IsBase(bool value) const { qoffscreensurface_size_isbase = value; }
    void setQOffscreenSurface_Event_IsBase(bool value) const { qoffscreensurface_event_isbase = value; }
    void setQOffscreenSurface_EventFilter_IsBase(bool value) const { qoffscreensurface_eventfilter_isbase = value; }
    void setQOffscreenSurface_TimerEvent_IsBase(bool value) const { qoffscreensurface_timerevent_isbase = value; }
    void setQOffscreenSurface_ChildEvent_IsBase(bool value) const { qoffscreensurface_childevent_isbase = value; }
    void setQOffscreenSurface_CustomEvent_IsBase(bool value) const { qoffscreensurface_customevent_isbase = value; }
    void setQOffscreenSurface_ConnectNotify_IsBase(bool value) const { qoffscreensurface_connectnotify_isbase = value; }
    void setQOffscreenSurface_DisconnectNotify_IsBase(bool value) const { qoffscreensurface_disconnectnotify_isbase = value; }
    void setQOffscreenSurface_ResolveInterface_IsBase(bool value) const { qoffscreensurface_resolveinterface_isbase = value; }
    void setQOffscreenSurface_Sender_IsBase(bool value) const { qoffscreensurface_sender_isbase = value; }
    void setQOffscreenSurface_SenderSignalIndex_IsBase(bool value) const { qoffscreensurface_sendersignalindex_isbase = value; }
    void setQOffscreenSurface_Receivers_IsBase(bool value) const { qoffscreensurface_receivers_isbase = value; }
    void setQOffscreenSurface_IsSignalConnected_IsBase(bool value) const { qoffscreensurface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qoffscreensurface_metacall_isbase) {
            qoffscreensurface_metacall_isbase = false;
            return QOffscreenSurface::qt_metacall(param1, param2, param3);
        } else if (qoffscreensurface_metacall_callback != nullptr) {
            return qoffscreensurface_metacall_callback(this, param1, param2, param3);
        } else {
            return QOffscreenSurface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurface::SurfaceType surfaceType() const override {
        if (qoffscreensurface_surfacetype_isbase) {
            qoffscreensurface_surfacetype_isbase = false;
            return QOffscreenSurface::surfaceType();
        } else if (qoffscreensurface_surfacetype_callback != nullptr) {
            return qoffscreensurface_surfacetype_callback();
        } else {
            return QOffscreenSurface::surfaceType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSurfaceFormat format() const override {
        if (qoffscreensurface_format_isbase) {
            qoffscreensurface_format_isbase = false;
            return QOffscreenSurface::format();
        } else if (qoffscreensurface_format_callback != nullptr) {
            return qoffscreensurface_format_callback();
        } else {
            return QOffscreenSurface::format();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize size() const override {
        if (qoffscreensurface_size_isbase) {
            qoffscreensurface_size_isbase = false;
            return QOffscreenSurface::size();
        } else if (qoffscreensurface_size_callback != nullptr) {
            return qoffscreensurface_size_callback();
        } else {
            return QOffscreenSurface::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qoffscreensurface_event_isbase) {
            qoffscreensurface_event_isbase = false;
            return QOffscreenSurface::event(event);
        } else if (qoffscreensurface_event_callback != nullptr) {
            return qoffscreensurface_event_callback(this, event);
        } else {
            return QOffscreenSurface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qoffscreensurface_eventfilter_isbase) {
            qoffscreensurface_eventfilter_isbase = false;
            return QOffscreenSurface::eventFilter(watched, event);
        } else if (qoffscreensurface_eventfilter_callback != nullptr) {
            return qoffscreensurface_eventfilter_callback(this, watched, event);
        } else {
            return QOffscreenSurface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qoffscreensurface_timerevent_isbase) {
            qoffscreensurface_timerevent_isbase = false;
            QOffscreenSurface::timerEvent(event);
        } else if (qoffscreensurface_timerevent_callback != nullptr) {
            qoffscreensurface_timerevent_callback(this, event);
        } else {
            QOffscreenSurface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qoffscreensurface_childevent_isbase) {
            qoffscreensurface_childevent_isbase = false;
            QOffscreenSurface::childEvent(event);
        } else if (qoffscreensurface_childevent_callback != nullptr) {
            qoffscreensurface_childevent_callback(this, event);
        } else {
            QOffscreenSurface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qoffscreensurface_customevent_isbase) {
            qoffscreensurface_customevent_isbase = false;
            QOffscreenSurface::customEvent(event);
        } else if (qoffscreensurface_customevent_callback != nullptr) {
            qoffscreensurface_customevent_callback(this, event);
        } else {
            QOffscreenSurface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qoffscreensurface_connectnotify_isbase) {
            qoffscreensurface_connectnotify_isbase = false;
            QOffscreenSurface::connectNotify(signal);
        } else if (qoffscreensurface_connectnotify_callback != nullptr) {
            qoffscreensurface_connectnotify_callback(this, signal);
        } else {
            QOffscreenSurface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qoffscreensurface_disconnectnotify_isbase) {
            qoffscreensurface_disconnectnotify_isbase = false;
            QOffscreenSurface::disconnectNotify(signal);
        } else if (qoffscreensurface_disconnectnotify_callback != nullptr) {
            qoffscreensurface_disconnectnotify_callback(this, signal);
        } else {
            QOffscreenSurface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qoffscreensurface_resolveinterface_isbase) {
            qoffscreensurface_resolveinterface_isbase = false;
            return QOffscreenSurface::resolveInterface(name, revision);
        } else if (qoffscreensurface_resolveinterface_callback != nullptr) {
            return qoffscreensurface_resolveinterface_callback(this, name, revision);
        } else {
            return QOffscreenSurface::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qoffscreensurface_sender_isbase) {
            qoffscreensurface_sender_isbase = false;
            return QOffscreenSurface::sender();
        } else if (qoffscreensurface_sender_callback != nullptr) {
            return qoffscreensurface_sender_callback();
        } else {
            return QOffscreenSurface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qoffscreensurface_sendersignalindex_isbase) {
            qoffscreensurface_sendersignalindex_isbase = false;
            return QOffscreenSurface::senderSignalIndex();
        } else if (qoffscreensurface_sendersignalindex_callback != nullptr) {
            return qoffscreensurface_sendersignalindex_callback();
        } else {
            return QOffscreenSurface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qoffscreensurface_receivers_isbase) {
            qoffscreensurface_receivers_isbase = false;
            return QOffscreenSurface::receivers(signal);
        } else if (qoffscreensurface_receivers_callback != nullptr) {
            return qoffscreensurface_receivers_callback(this, signal);
        } else {
            return QOffscreenSurface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qoffscreensurface_issignalconnected_isbase) {
            qoffscreensurface_issignalconnected_isbase = false;
            return QOffscreenSurface::isSignalConnected(signal);
        } else if (qoffscreensurface_issignalconnected_callback != nullptr) {
            return qoffscreensurface_issignalconnected_callback(this, signal);
        } else {
            return QOffscreenSurface::isSignalConnected(signal);
        }
    }
};

#endif

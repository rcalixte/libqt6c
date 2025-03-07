#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQCAMERA_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQCAMERA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QCamera so that we can call protected methods
class VirtualQCamera : public QCamera {

  public:
    // Virtual class public types (including callbacks)
    using QCamera_Metacall_Callback = int (*)(QCamera*, QMetaObject::Call, int, void**);
    using QCamera_Event_Callback = bool (*)(QCamera*, QEvent*);
    using QCamera_EventFilter_Callback = bool (*)(QCamera*, QObject*, QEvent*);
    using QCamera_TimerEvent_Callback = void (*)(QCamera*, QTimerEvent*);
    using QCamera_ChildEvent_Callback = void (*)(QCamera*, QChildEvent*);
    using QCamera_CustomEvent_Callback = void (*)(QCamera*, QEvent*);
    using QCamera_ConnectNotify_Callback = void (*)(QCamera*, const QMetaMethod&);
    using QCamera_DisconnectNotify_Callback = void (*)(QCamera*, const QMetaMethod&);
    using QCamera_Sender_Callback = QObject* (*)();
    using QCamera_SenderSignalIndex_Callback = int (*)();
    using QCamera_Receivers_Callback = int (*)(const QCamera*, const char*);
    using QCamera_IsSignalConnected_Callback = bool (*)(const QCamera*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QCamera_Metacall_Callback qcamera_metacall_callback = nullptr;
    QCamera_Event_Callback qcamera_event_callback = nullptr;
    QCamera_EventFilter_Callback qcamera_eventfilter_callback = nullptr;
    QCamera_TimerEvent_Callback qcamera_timerevent_callback = nullptr;
    QCamera_ChildEvent_Callback qcamera_childevent_callback = nullptr;
    QCamera_CustomEvent_Callback qcamera_customevent_callback = nullptr;
    QCamera_ConnectNotify_Callback qcamera_connectnotify_callback = nullptr;
    QCamera_DisconnectNotify_Callback qcamera_disconnectnotify_callback = nullptr;
    QCamera_Sender_Callback qcamera_sender_callback = nullptr;
    QCamera_SenderSignalIndex_Callback qcamera_sendersignalindex_callback = nullptr;
    QCamera_Receivers_Callback qcamera_receivers_callback = nullptr;
    QCamera_IsSignalConnected_Callback qcamera_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcamera_metacall_isbase = false;
    mutable bool qcamera_event_isbase = false;
    mutable bool qcamera_eventfilter_isbase = false;
    mutable bool qcamera_timerevent_isbase = false;
    mutable bool qcamera_childevent_isbase = false;
    mutable bool qcamera_customevent_isbase = false;
    mutable bool qcamera_connectnotify_isbase = false;
    mutable bool qcamera_disconnectnotify_isbase = false;
    mutable bool qcamera_sender_isbase = false;
    mutable bool qcamera_sendersignalindex_isbase = false;
    mutable bool qcamera_receivers_isbase = false;
    mutable bool qcamera_issignalconnected_isbase = false;

  public:
    VirtualQCamera() : QCamera(){};
    VirtualQCamera(const QCameraDevice& cameraDevice) : QCamera(cameraDevice){};
    VirtualQCamera(QCameraDevice::Position position) : QCamera(position){};
    VirtualQCamera(QObject* parent) : QCamera(parent){};
    VirtualQCamera(const QCameraDevice& cameraDevice, QObject* parent) : QCamera(cameraDevice, parent){};
    VirtualQCamera(QCameraDevice::Position position, QObject* parent) : QCamera(position, parent){};

    ~VirtualQCamera() {
        qcamera_metacall_callback = nullptr;
        qcamera_event_callback = nullptr;
        qcamera_eventfilter_callback = nullptr;
        qcamera_timerevent_callback = nullptr;
        qcamera_childevent_callback = nullptr;
        qcamera_customevent_callback = nullptr;
        qcamera_connectnotify_callback = nullptr;
        qcamera_disconnectnotify_callback = nullptr;
        qcamera_sender_callback = nullptr;
        qcamera_sendersignalindex_callback = nullptr;
        qcamera_receivers_callback = nullptr;
        qcamera_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQCamera_Metacall_Callback(QCamera_Metacall_Callback cb) { qcamera_metacall_callback = cb; }
    void setQCamera_Event_Callback(QCamera_Event_Callback cb) { qcamera_event_callback = cb; }
    void setQCamera_EventFilter_Callback(QCamera_EventFilter_Callback cb) { qcamera_eventfilter_callback = cb; }
    void setQCamera_TimerEvent_Callback(QCamera_TimerEvent_Callback cb) { qcamera_timerevent_callback = cb; }
    void setQCamera_ChildEvent_Callback(QCamera_ChildEvent_Callback cb) { qcamera_childevent_callback = cb; }
    void setQCamera_CustomEvent_Callback(QCamera_CustomEvent_Callback cb) { qcamera_customevent_callback = cb; }
    void setQCamera_ConnectNotify_Callback(QCamera_ConnectNotify_Callback cb) { qcamera_connectnotify_callback = cb; }
    void setQCamera_DisconnectNotify_Callback(QCamera_DisconnectNotify_Callback cb) { qcamera_disconnectnotify_callback = cb; }
    void setQCamera_Sender_Callback(QCamera_Sender_Callback cb) { qcamera_sender_callback = cb; }
    void setQCamera_SenderSignalIndex_Callback(QCamera_SenderSignalIndex_Callback cb) { qcamera_sendersignalindex_callback = cb; }
    void setQCamera_Receivers_Callback(QCamera_Receivers_Callback cb) { qcamera_receivers_callback = cb; }
    void setQCamera_IsSignalConnected_Callback(QCamera_IsSignalConnected_Callback cb) { qcamera_issignalconnected_callback = cb; }

    // Base flag setters
    void setQCamera_Metacall_IsBase(bool value) const { qcamera_metacall_isbase = value; }
    void setQCamera_Event_IsBase(bool value) const { qcamera_event_isbase = value; }
    void setQCamera_EventFilter_IsBase(bool value) const { qcamera_eventfilter_isbase = value; }
    void setQCamera_TimerEvent_IsBase(bool value) const { qcamera_timerevent_isbase = value; }
    void setQCamera_ChildEvent_IsBase(bool value) const { qcamera_childevent_isbase = value; }
    void setQCamera_CustomEvent_IsBase(bool value) const { qcamera_customevent_isbase = value; }
    void setQCamera_ConnectNotify_IsBase(bool value) const { qcamera_connectnotify_isbase = value; }
    void setQCamera_DisconnectNotify_IsBase(bool value) const { qcamera_disconnectnotify_isbase = value; }
    void setQCamera_Sender_IsBase(bool value) const { qcamera_sender_isbase = value; }
    void setQCamera_SenderSignalIndex_IsBase(bool value) const { qcamera_sendersignalindex_isbase = value; }
    void setQCamera_Receivers_IsBase(bool value) const { qcamera_receivers_isbase = value; }
    void setQCamera_IsSignalConnected_IsBase(bool value) const { qcamera_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcamera_metacall_isbase) {
            qcamera_metacall_isbase = false;
            return QCamera::qt_metacall(param1, param2, param3);
        } else if (qcamera_metacall_callback != nullptr) {
            return qcamera_metacall_callback(this, param1, param2, param3);
        } else {
            return QCamera::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcamera_event_isbase) {
            qcamera_event_isbase = false;
            return QCamera::event(event);
        } else if (qcamera_event_callback != nullptr) {
            return qcamera_event_callback(this, event);
        } else {
            return QCamera::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcamera_eventfilter_isbase) {
            qcamera_eventfilter_isbase = false;
            return QCamera::eventFilter(watched, event);
        } else if (qcamera_eventfilter_callback != nullptr) {
            return qcamera_eventfilter_callback(this, watched, event);
        } else {
            return QCamera::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcamera_timerevent_isbase) {
            qcamera_timerevent_isbase = false;
            QCamera::timerEvent(event);
        } else if (qcamera_timerevent_callback != nullptr) {
            qcamera_timerevent_callback(this, event);
        } else {
            QCamera::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcamera_childevent_isbase) {
            qcamera_childevent_isbase = false;
            QCamera::childEvent(event);
        } else if (qcamera_childevent_callback != nullptr) {
            qcamera_childevent_callback(this, event);
        } else {
            QCamera::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcamera_customevent_isbase) {
            qcamera_customevent_isbase = false;
            QCamera::customEvent(event);
        } else if (qcamera_customevent_callback != nullptr) {
            qcamera_customevent_callback(this, event);
        } else {
            QCamera::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcamera_connectnotify_isbase) {
            qcamera_connectnotify_isbase = false;
            QCamera::connectNotify(signal);
        } else if (qcamera_connectnotify_callback != nullptr) {
            qcamera_connectnotify_callback(this, signal);
        } else {
            QCamera::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcamera_disconnectnotify_isbase) {
            qcamera_disconnectnotify_isbase = false;
            QCamera::disconnectNotify(signal);
        } else if (qcamera_disconnectnotify_callback != nullptr) {
            qcamera_disconnectnotify_callback(this, signal);
        } else {
            QCamera::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcamera_sender_isbase) {
            qcamera_sender_isbase = false;
            return QCamera::sender();
        } else if (qcamera_sender_callback != nullptr) {
            return qcamera_sender_callback();
        } else {
            return QCamera::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcamera_sendersignalindex_isbase) {
            qcamera_sendersignalindex_isbase = false;
            return QCamera::senderSignalIndex();
        } else if (qcamera_sendersignalindex_callback != nullptr) {
            return qcamera_sendersignalindex_callback();
        } else {
            return QCamera::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcamera_receivers_isbase) {
            qcamera_receivers_isbase = false;
            return QCamera::receivers(signal);
        } else if (qcamera_receivers_callback != nullptr) {
            return qcamera_receivers_callback(this, signal);
        } else {
            return QCamera::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcamera_issignalconnected_isbase) {
            qcamera_issignalconnected_isbase = false;
            return QCamera::isSignalConnected(signal);
        } else if (qcamera_issignalconnected_callback != nullptr) {
            return qcamera_issignalconnected_callback(this, signal);
        } else {
            return QCamera::isSignalConnected(signal);
        }
    }
};

#endif

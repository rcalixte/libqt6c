#pragma once
#ifndef SRC_SVGC_LIBVIRTUALQSVGRENDERER_H
#define SRC_SVGC_LIBVIRTUALQSVGRENDERER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSvgRenderer so that we can call protected methods
class VirtualQSvgRenderer : public QSvgRenderer {

  public:
    // Virtual class public types (including callbacks)
    using QSvgRenderer_Metacall_Callback = int (*)(QSvgRenderer*, QMetaObject::Call, int, void**);
    using QSvgRenderer_Event_Callback = bool (*)(QSvgRenderer*, QEvent*);
    using QSvgRenderer_EventFilter_Callback = bool (*)(QSvgRenderer*, QObject*, QEvent*);
    using QSvgRenderer_TimerEvent_Callback = void (*)(QSvgRenderer*, QTimerEvent*);
    using QSvgRenderer_ChildEvent_Callback = void (*)(QSvgRenderer*, QChildEvent*);
    using QSvgRenderer_CustomEvent_Callback = void (*)(QSvgRenderer*, QEvent*);
    using QSvgRenderer_ConnectNotify_Callback = void (*)(QSvgRenderer*, const QMetaMethod&);
    using QSvgRenderer_DisconnectNotify_Callback = void (*)(QSvgRenderer*, const QMetaMethod&);
    using QSvgRenderer_Sender_Callback = QObject* (*)();
    using QSvgRenderer_SenderSignalIndex_Callback = int (*)();
    using QSvgRenderer_Receivers_Callback = int (*)(const QSvgRenderer*, const char*);
    using QSvgRenderer_IsSignalConnected_Callback = bool (*)(const QSvgRenderer*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSvgRenderer_Metacall_Callback qsvgrenderer_metacall_callback = nullptr;
    QSvgRenderer_Event_Callback qsvgrenderer_event_callback = nullptr;
    QSvgRenderer_EventFilter_Callback qsvgrenderer_eventfilter_callback = nullptr;
    QSvgRenderer_TimerEvent_Callback qsvgrenderer_timerevent_callback = nullptr;
    QSvgRenderer_ChildEvent_Callback qsvgrenderer_childevent_callback = nullptr;
    QSvgRenderer_CustomEvent_Callback qsvgrenderer_customevent_callback = nullptr;
    QSvgRenderer_ConnectNotify_Callback qsvgrenderer_connectnotify_callback = nullptr;
    QSvgRenderer_DisconnectNotify_Callback qsvgrenderer_disconnectnotify_callback = nullptr;
    QSvgRenderer_Sender_Callback qsvgrenderer_sender_callback = nullptr;
    QSvgRenderer_SenderSignalIndex_Callback qsvgrenderer_sendersignalindex_callback = nullptr;
    QSvgRenderer_Receivers_Callback qsvgrenderer_receivers_callback = nullptr;
    QSvgRenderer_IsSignalConnected_Callback qsvgrenderer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsvgrenderer_metacall_isbase = false;
    mutable bool qsvgrenderer_event_isbase = false;
    mutable bool qsvgrenderer_eventfilter_isbase = false;
    mutable bool qsvgrenderer_timerevent_isbase = false;
    mutable bool qsvgrenderer_childevent_isbase = false;
    mutable bool qsvgrenderer_customevent_isbase = false;
    mutable bool qsvgrenderer_connectnotify_isbase = false;
    mutable bool qsvgrenderer_disconnectnotify_isbase = false;
    mutable bool qsvgrenderer_sender_isbase = false;
    mutable bool qsvgrenderer_sendersignalindex_isbase = false;
    mutable bool qsvgrenderer_receivers_isbase = false;
    mutable bool qsvgrenderer_issignalconnected_isbase = false;

  public:
    VirtualQSvgRenderer() : QSvgRenderer(){};
    VirtualQSvgRenderer(const QString& filename) : QSvgRenderer(filename){};
    VirtualQSvgRenderer(const QByteArray& contents) : QSvgRenderer(contents){};
    VirtualQSvgRenderer(QXmlStreamReader* contents) : QSvgRenderer(contents){};
    VirtualQSvgRenderer(QObject* parent) : QSvgRenderer(parent){};
    VirtualQSvgRenderer(const QString& filename, QObject* parent) : QSvgRenderer(filename, parent){};
    VirtualQSvgRenderer(const QByteArray& contents, QObject* parent) : QSvgRenderer(contents, parent){};
    VirtualQSvgRenderer(QXmlStreamReader* contents, QObject* parent) : QSvgRenderer(contents, parent){};

    ~VirtualQSvgRenderer() {
        qsvgrenderer_metacall_callback = nullptr;
        qsvgrenderer_event_callback = nullptr;
        qsvgrenderer_eventfilter_callback = nullptr;
        qsvgrenderer_timerevent_callback = nullptr;
        qsvgrenderer_childevent_callback = nullptr;
        qsvgrenderer_customevent_callback = nullptr;
        qsvgrenderer_connectnotify_callback = nullptr;
        qsvgrenderer_disconnectnotify_callback = nullptr;
        qsvgrenderer_sender_callback = nullptr;
        qsvgrenderer_sendersignalindex_callback = nullptr;
        qsvgrenderer_receivers_callback = nullptr;
        qsvgrenderer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSvgRenderer_Metacall_Callback(QSvgRenderer_Metacall_Callback cb) { qsvgrenderer_metacall_callback = cb; }
    void setQSvgRenderer_Event_Callback(QSvgRenderer_Event_Callback cb) { qsvgrenderer_event_callback = cb; }
    void setQSvgRenderer_EventFilter_Callback(QSvgRenderer_EventFilter_Callback cb) { qsvgrenderer_eventfilter_callback = cb; }
    void setQSvgRenderer_TimerEvent_Callback(QSvgRenderer_TimerEvent_Callback cb) { qsvgrenderer_timerevent_callback = cb; }
    void setQSvgRenderer_ChildEvent_Callback(QSvgRenderer_ChildEvent_Callback cb) { qsvgrenderer_childevent_callback = cb; }
    void setQSvgRenderer_CustomEvent_Callback(QSvgRenderer_CustomEvent_Callback cb) { qsvgrenderer_customevent_callback = cb; }
    void setQSvgRenderer_ConnectNotify_Callback(QSvgRenderer_ConnectNotify_Callback cb) { qsvgrenderer_connectnotify_callback = cb; }
    void setQSvgRenderer_DisconnectNotify_Callback(QSvgRenderer_DisconnectNotify_Callback cb) { qsvgrenderer_disconnectnotify_callback = cb; }
    void setQSvgRenderer_Sender_Callback(QSvgRenderer_Sender_Callback cb) { qsvgrenderer_sender_callback = cb; }
    void setQSvgRenderer_SenderSignalIndex_Callback(QSvgRenderer_SenderSignalIndex_Callback cb) { qsvgrenderer_sendersignalindex_callback = cb; }
    void setQSvgRenderer_Receivers_Callback(QSvgRenderer_Receivers_Callback cb) { qsvgrenderer_receivers_callback = cb; }
    void setQSvgRenderer_IsSignalConnected_Callback(QSvgRenderer_IsSignalConnected_Callback cb) { qsvgrenderer_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSvgRenderer_Metacall_IsBase(bool value) const { qsvgrenderer_metacall_isbase = value; }
    void setQSvgRenderer_Event_IsBase(bool value) const { qsvgrenderer_event_isbase = value; }
    void setQSvgRenderer_EventFilter_IsBase(bool value) const { qsvgrenderer_eventfilter_isbase = value; }
    void setQSvgRenderer_TimerEvent_IsBase(bool value) const { qsvgrenderer_timerevent_isbase = value; }
    void setQSvgRenderer_ChildEvent_IsBase(bool value) const { qsvgrenderer_childevent_isbase = value; }
    void setQSvgRenderer_CustomEvent_IsBase(bool value) const { qsvgrenderer_customevent_isbase = value; }
    void setQSvgRenderer_ConnectNotify_IsBase(bool value) const { qsvgrenderer_connectnotify_isbase = value; }
    void setQSvgRenderer_DisconnectNotify_IsBase(bool value) const { qsvgrenderer_disconnectnotify_isbase = value; }
    void setQSvgRenderer_Sender_IsBase(bool value) const { qsvgrenderer_sender_isbase = value; }
    void setQSvgRenderer_SenderSignalIndex_IsBase(bool value) const { qsvgrenderer_sendersignalindex_isbase = value; }
    void setQSvgRenderer_Receivers_IsBase(bool value) const { qsvgrenderer_receivers_isbase = value; }
    void setQSvgRenderer_IsSignalConnected_IsBase(bool value) const { qsvgrenderer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsvgrenderer_metacall_isbase) {
            qsvgrenderer_metacall_isbase = false;
            return QSvgRenderer::qt_metacall(param1, param2, param3);
        } else if (qsvgrenderer_metacall_callback != nullptr) {
            return qsvgrenderer_metacall_callback(this, param1, param2, param3);
        } else {
            return QSvgRenderer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsvgrenderer_event_isbase) {
            qsvgrenderer_event_isbase = false;
            return QSvgRenderer::event(event);
        } else if (qsvgrenderer_event_callback != nullptr) {
            return qsvgrenderer_event_callback(this, event);
        } else {
            return QSvgRenderer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsvgrenderer_eventfilter_isbase) {
            qsvgrenderer_eventfilter_isbase = false;
            return QSvgRenderer::eventFilter(watched, event);
        } else if (qsvgrenderer_eventfilter_callback != nullptr) {
            return qsvgrenderer_eventfilter_callback(this, watched, event);
        } else {
            return QSvgRenderer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsvgrenderer_timerevent_isbase) {
            qsvgrenderer_timerevent_isbase = false;
            QSvgRenderer::timerEvent(event);
        } else if (qsvgrenderer_timerevent_callback != nullptr) {
            qsvgrenderer_timerevent_callback(this, event);
        } else {
            QSvgRenderer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsvgrenderer_childevent_isbase) {
            qsvgrenderer_childevent_isbase = false;
            QSvgRenderer::childEvent(event);
        } else if (qsvgrenderer_childevent_callback != nullptr) {
            qsvgrenderer_childevent_callback(this, event);
        } else {
            QSvgRenderer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsvgrenderer_customevent_isbase) {
            qsvgrenderer_customevent_isbase = false;
            QSvgRenderer::customEvent(event);
        } else if (qsvgrenderer_customevent_callback != nullptr) {
            qsvgrenderer_customevent_callback(this, event);
        } else {
            QSvgRenderer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsvgrenderer_connectnotify_isbase) {
            qsvgrenderer_connectnotify_isbase = false;
            QSvgRenderer::connectNotify(signal);
        } else if (qsvgrenderer_connectnotify_callback != nullptr) {
            qsvgrenderer_connectnotify_callback(this, signal);
        } else {
            QSvgRenderer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsvgrenderer_disconnectnotify_isbase) {
            qsvgrenderer_disconnectnotify_isbase = false;
            QSvgRenderer::disconnectNotify(signal);
        } else if (qsvgrenderer_disconnectnotify_callback != nullptr) {
            qsvgrenderer_disconnectnotify_callback(this, signal);
        } else {
            QSvgRenderer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsvgrenderer_sender_isbase) {
            qsvgrenderer_sender_isbase = false;
            return QSvgRenderer::sender();
        } else if (qsvgrenderer_sender_callback != nullptr) {
            return qsvgrenderer_sender_callback();
        } else {
            return QSvgRenderer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsvgrenderer_sendersignalindex_isbase) {
            qsvgrenderer_sendersignalindex_isbase = false;
            return QSvgRenderer::senderSignalIndex();
        } else if (qsvgrenderer_sendersignalindex_callback != nullptr) {
            return qsvgrenderer_sendersignalindex_callback();
        } else {
            return QSvgRenderer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsvgrenderer_receivers_isbase) {
            qsvgrenderer_receivers_isbase = false;
            return QSvgRenderer::receivers(signal);
        } else if (qsvgrenderer_receivers_callback != nullptr) {
            return qsvgrenderer_receivers_callback(this, signal);
        } else {
            return QSvgRenderer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsvgrenderer_issignalconnected_isbase) {
            qsvgrenderer_issignalconnected_isbase = false;
            return QSvgRenderer::isSignalConnected(signal);
        } else if (qsvgrenderer_issignalconnected_callback != nullptr) {
            return qsvgrenderer_issignalconnected_callback(this, signal);
        } else {
            return QSvgRenderer::isSignalConnected(signal);
        }
    }
};

#endif

#pragma once
#ifndef SRCC_LIBVIRTUALQWIDGETACTION_H
#define SRCC_LIBVIRTUALQWIDGETACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QWidgetAction so that we can call protected methods
class VirtualQWidgetAction : public QWidgetAction {

  public:
    // Virtual class public types (including callbacks)
    using QWidgetAction_Metacall_Callback = int (*)(QWidgetAction*, QMetaObject::Call, int, void**);
    using QWidgetAction_Event_Callback = bool (*)(QWidgetAction*, QEvent*);
    using QWidgetAction_EventFilter_Callback = bool (*)(QWidgetAction*, QObject*, QEvent*);
    using QWidgetAction_CreateWidget_Callback = QWidget* (*)(QWidgetAction*, QWidget*);
    using QWidgetAction_DeleteWidget_Callback = void (*)(QWidgetAction*, QWidget*);
    using QWidgetAction_TimerEvent_Callback = void (*)(QWidgetAction*, QTimerEvent*);
    using QWidgetAction_ChildEvent_Callback = void (*)(QWidgetAction*, QChildEvent*);
    using QWidgetAction_CustomEvent_Callback = void (*)(QWidgetAction*, QEvent*);
    using QWidgetAction_ConnectNotify_Callback = void (*)(QWidgetAction*, const QMetaMethod&);
    using QWidgetAction_DisconnectNotify_Callback = void (*)(QWidgetAction*, const QMetaMethod&);
    using QWidgetAction_CreatedWidgets_Callback = QList<QWidget*> (*)();
    using QWidgetAction_Sender_Callback = QObject* (*)();
    using QWidgetAction_SenderSignalIndex_Callback = int (*)();
    using QWidgetAction_Receivers_Callback = int (*)(const QWidgetAction*, const char*);
    using QWidgetAction_IsSignalConnected_Callback = bool (*)(const QWidgetAction*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QWidgetAction_Metacall_Callback qwidgetaction_metacall_callback = nullptr;
    QWidgetAction_Event_Callback qwidgetaction_event_callback = nullptr;
    QWidgetAction_EventFilter_Callback qwidgetaction_eventfilter_callback = nullptr;
    QWidgetAction_CreateWidget_Callback qwidgetaction_createwidget_callback = nullptr;
    QWidgetAction_DeleteWidget_Callback qwidgetaction_deletewidget_callback = nullptr;
    QWidgetAction_TimerEvent_Callback qwidgetaction_timerevent_callback = nullptr;
    QWidgetAction_ChildEvent_Callback qwidgetaction_childevent_callback = nullptr;
    QWidgetAction_CustomEvent_Callback qwidgetaction_customevent_callback = nullptr;
    QWidgetAction_ConnectNotify_Callback qwidgetaction_connectnotify_callback = nullptr;
    QWidgetAction_DisconnectNotify_Callback qwidgetaction_disconnectnotify_callback = nullptr;
    QWidgetAction_CreatedWidgets_Callback qwidgetaction_createdwidgets_callback = nullptr;
    QWidgetAction_Sender_Callback qwidgetaction_sender_callback = nullptr;
    QWidgetAction_SenderSignalIndex_Callback qwidgetaction_sendersignalindex_callback = nullptr;
    QWidgetAction_Receivers_Callback qwidgetaction_receivers_callback = nullptr;
    QWidgetAction_IsSignalConnected_Callback qwidgetaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwidgetaction_metacall_isbase = false;
    mutable bool qwidgetaction_event_isbase = false;
    mutable bool qwidgetaction_eventfilter_isbase = false;
    mutable bool qwidgetaction_createwidget_isbase = false;
    mutable bool qwidgetaction_deletewidget_isbase = false;
    mutable bool qwidgetaction_timerevent_isbase = false;
    mutable bool qwidgetaction_childevent_isbase = false;
    mutable bool qwidgetaction_customevent_isbase = false;
    mutable bool qwidgetaction_connectnotify_isbase = false;
    mutable bool qwidgetaction_disconnectnotify_isbase = false;
    mutable bool qwidgetaction_createdwidgets_isbase = false;
    mutable bool qwidgetaction_sender_isbase = false;
    mutable bool qwidgetaction_sendersignalindex_isbase = false;
    mutable bool qwidgetaction_receivers_isbase = false;
    mutable bool qwidgetaction_issignalconnected_isbase = false;

  public:
    VirtualQWidgetAction(QObject* parent) : QWidgetAction(parent){};

    ~VirtualQWidgetAction() {
        qwidgetaction_metacall_callback = nullptr;
        qwidgetaction_event_callback = nullptr;
        qwidgetaction_eventfilter_callback = nullptr;
        qwidgetaction_createwidget_callback = nullptr;
        qwidgetaction_deletewidget_callback = nullptr;
        qwidgetaction_timerevent_callback = nullptr;
        qwidgetaction_childevent_callback = nullptr;
        qwidgetaction_customevent_callback = nullptr;
        qwidgetaction_connectnotify_callback = nullptr;
        qwidgetaction_disconnectnotify_callback = nullptr;
        qwidgetaction_createdwidgets_callback = nullptr;
        qwidgetaction_sender_callback = nullptr;
        qwidgetaction_sendersignalindex_callback = nullptr;
        qwidgetaction_receivers_callback = nullptr;
        qwidgetaction_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQWidgetAction_Metacall_Callback(QWidgetAction_Metacall_Callback cb) { qwidgetaction_metacall_callback = cb; }
    void setQWidgetAction_Event_Callback(QWidgetAction_Event_Callback cb) { qwidgetaction_event_callback = cb; }
    void setQWidgetAction_EventFilter_Callback(QWidgetAction_EventFilter_Callback cb) { qwidgetaction_eventfilter_callback = cb; }
    void setQWidgetAction_CreateWidget_Callback(QWidgetAction_CreateWidget_Callback cb) { qwidgetaction_createwidget_callback = cb; }
    void setQWidgetAction_DeleteWidget_Callback(QWidgetAction_DeleteWidget_Callback cb) { qwidgetaction_deletewidget_callback = cb; }
    void setQWidgetAction_TimerEvent_Callback(QWidgetAction_TimerEvent_Callback cb) { qwidgetaction_timerevent_callback = cb; }
    void setQWidgetAction_ChildEvent_Callback(QWidgetAction_ChildEvent_Callback cb) { qwidgetaction_childevent_callback = cb; }
    void setQWidgetAction_CustomEvent_Callback(QWidgetAction_CustomEvent_Callback cb) { qwidgetaction_customevent_callback = cb; }
    void setQWidgetAction_ConnectNotify_Callback(QWidgetAction_ConnectNotify_Callback cb) { qwidgetaction_connectnotify_callback = cb; }
    void setQWidgetAction_DisconnectNotify_Callback(QWidgetAction_DisconnectNotify_Callback cb) { qwidgetaction_disconnectnotify_callback = cb; }
    void setQWidgetAction_CreatedWidgets_Callback(QWidgetAction_CreatedWidgets_Callback cb) { qwidgetaction_createdwidgets_callback = cb; }
    void setQWidgetAction_Sender_Callback(QWidgetAction_Sender_Callback cb) { qwidgetaction_sender_callback = cb; }
    void setQWidgetAction_SenderSignalIndex_Callback(QWidgetAction_SenderSignalIndex_Callback cb) { qwidgetaction_sendersignalindex_callback = cb; }
    void setQWidgetAction_Receivers_Callback(QWidgetAction_Receivers_Callback cb) { qwidgetaction_receivers_callback = cb; }
    void setQWidgetAction_IsSignalConnected_Callback(QWidgetAction_IsSignalConnected_Callback cb) { qwidgetaction_issignalconnected_callback = cb; }

    // Base flag setters
    void setQWidgetAction_Metacall_IsBase(bool value) const { qwidgetaction_metacall_isbase = value; }
    void setQWidgetAction_Event_IsBase(bool value) const { qwidgetaction_event_isbase = value; }
    void setQWidgetAction_EventFilter_IsBase(bool value) const { qwidgetaction_eventfilter_isbase = value; }
    void setQWidgetAction_CreateWidget_IsBase(bool value) const { qwidgetaction_createwidget_isbase = value; }
    void setQWidgetAction_DeleteWidget_IsBase(bool value) const { qwidgetaction_deletewidget_isbase = value; }
    void setQWidgetAction_TimerEvent_IsBase(bool value) const { qwidgetaction_timerevent_isbase = value; }
    void setQWidgetAction_ChildEvent_IsBase(bool value) const { qwidgetaction_childevent_isbase = value; }
    void setQWidgetAction_CustomEvent_IsBase(bool value) const { qwidgetaction_customevent_isbase = value; }
    void setQWidgetAction_ConnectNotify_IsBase(bool value) const { qwidgetaction_connectnotify_isbase = value; }
    void setQWidgetAction_DisconnectNotify_IsBase(bool value) const { qwidgetaction_disconnectnotify_isbase = value; }
    void setQWidgetAction_CreatedWidgets_IsBase(bool value) const { qwidgetaction_createdwidgets_isbase = value; }
    void setQWidgetAction_Sender_IsBase(bool value) const { qwidgetaction_sender_isbase = value; }
    void setQWidgetAction_SenderSignalIndex_IsBase(bool value) const { qwidgetaction_sendersignalindex_isbase = value; }
    void setQWidgetAction_Receivers_IsBase(bool value) const { qwidgetaction_receivers_isbase = value; }
    void setQWidgetAction_IsSignalConnected_IsBase(bool value) const { qwidgetaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwidgetaction_metacall_isbase) {
            qwidgetaction_metacall_isbase = false;
            return QWidgetAction::qt_metacall(param1, param2, param3);
        } else if (qwidgetaction_metacall_callback != nullptr) {
            return qwidgetaction_metacall_callback(this, param1, param2, param3);
        } else {
            return QWidgetAction::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwidgetaction_event_isbase) {
            qwidgetaction_event_isbase = false;
            return QWidgetAction::event(param1);
        } else if (qwidgetaction_event_callback != nullptr) {
            return qwidgetaction_event_callback(this, param1);
        } else {
            return QWidgetAction::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qwidgetaction_eventfilter_isbase) {
            qwidgetaction_eventfilter_isbase = false;
            return QWidgetAction::eventFilter(param1, param2);
        } else if (qwidgetaction_eventfilter_callback != nullptr) {
            return qwidgetaction_eventfilter_callback(this, param1, param2);
        } else {
            return QWidgetAction::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (qwidgetaction_createwidget_isbase) {
            qwidgetaction_createwidget_isbase = false;
            return QWidgetAction::createWidget(parent);
        } else if (qwidgetaction_createwidget_callback != nullptr) {
            return qwidgetaction_createwidget_callback(this, parent);
        } else {
            return QWidgetAction::createWidget(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (qwidgetaction_deletewidget_isbase) {
            qwidgetaction_deletewidget_isbase = false;
            QWidgetAction::deleteWidget(widget);
        } else if (qwidgetaction_deletewidget_callback != nullptr) {
            qwidgetaction_deletewidget_callback(this, widget);
        } else {
            QWidgetAction::deleteWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwidgetaction_timerevent_isbase) {
            qwidgetaction_timerevent_isbase = false;
            QWidgetAction::timerEvent(event);
        } else if (qwidgetaction_timerevent_callback != nullptr) {
            qwidgetaction_timerevent_callback(this, event);
        } else {
            QWidgetAction::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwidgetaction_childevent_isbase) {
            qwidgetaction_childevent_isbase = false;
            QWidgetAction::childEvent(event);
        } else if (qwidgetaction_childevent_callback != nullptr) {
            qwidgetaction_childevent_callback(this, event);
        } else {
            QWidgetAction::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwidgetaction_customevent_isbase) {
            qwidgetaction_customevent_isbase = false;
            QWidgetAction::customEvent(event);
        } else if (qwidgetaction_customevent_callback != nullptr) {
            qwidgetaction_customevent_callback(this, event);
        } else {
            QWidgetAction::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwidgetaction_connectnotify_isbase) {
            qwidgetaction_connectnotify_isbase = false;
            QWidgetAction::connectNotify(signal);
        } else if (qwidgetaction_connectnotify_callback != nullptr) {
            qwidgetaction_connectnotify_callback(this, signal);
        } else {
            QWidgetAction::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwidgetaction_disconnectnotify_isbase) {
            qwidgetaction_disconnectnotify_isbase = false;
            QWidgetAction::disconnectNotify(signal);
        } else if (qwidgetaction_disconnectnotify_callback != nullptr) {
            qwidgetaction_disconnectnotify_callback(this, signal);
        } else {
            QWidgetAction::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (qwidgetaction_createdwidgets_isbase) {
            qwidgetaction_createdwidgets_isbase = false;
            return QWidgetAction::createdWidgets();
        } else if (qwidgetaction_createdwidgets_callback != nullptr) {
            return qwidgetaction_createdwidgets_callback();
        } else {
            return QWidgetAction::createdWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwidgetaction_sender_isbase) {
            qwidgetaction_sender_isbase = false;
            return QWidgetAction::sender();
        } else if (qwidgetaction_sender_callback != nullptr) {
            return qwidgetaction_sender_callback();
        } else {
            return QWidgetAction::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwidgetaction_sendersignalindex_isbase) {
            qwidgetaction_sendersignalindex_isbase = false;
            return QWidgetAction::senderSignalIndex();
        } else if (qwidgetaction_sendersignalindex_callback != nullptr) {
            return qwidgetaction_sendersignalindex_callback();
        } else {
            return QWidgetAction::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwidgetaction_receivers_isbase) {
            qwidgetaction_receivers_isbase = false;
            return QWidgetAction::receivers(signal);
        } else if (qwidgetaction_receivers_callback != nullptr) {
            return qwidgetaction_receivers_callback(this, signal);
        } else {
            return QWidgetAction::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwidgetaction_issignalconnected_isbase) {
            qwidgetaction_issignalconnected_isbase = false;
            return QWidgetAction::isSignalConnected(signal);
        } else if (qwidgetaction_issignalconnected_callback != nullptr) {
            return qwidgetaction_issignalconnected_callback(this, signal);
        } else {
            return QWidgetAction::isSignalConnected(signal);
        }
    }
};

#endif

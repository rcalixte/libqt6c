#pragma once
#ifndef SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEPAGE_H
#define SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEPAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEnginePage so that we can call protected methods
class VirtualQWebEnginePage : public QWebEnginePage {

  public:
    // Virtual class public types (including callbacks)
    using QWebEnginePage_Metacall_Callback = int (*)(QWebEnginePage*, QMetaObject::Call, int, void**);
    using QWebEnginePage_TriggerAction_Callback = void (*)(QWebEnginePage*, QWebEnginePage::WebAction, bool);
    using QWebEnginePage_Event_Callback = bool (*)(QWebEnginePage*, QEvent*);
    using QWebEnginePage_CreateWindow_Callback = QWebEnginePage* (*)(QWebEnginePage*, QWebEnginePage::WebWindowType);
    using QWebEnginePage_ChooseFiles_Callback = QStringList (*)(QWebEnginePage*, QWebEnginePage::FileSelectionMode, const QStringList&, const QStringList&);
    using QWebEnginePage_JavaScriptAlert_Callback = void (*)(QWebEnginePage*, const QUrl&, const QString&);
    using QWebEnginePage_JavaScriptConfirm_Callback = bool (*)(QWebEnginePage*, const QUrl&, const QString&);
    using QWebEnginePage_JavaScriptConsoleMessage_Callback = void (*)(QWebEnginePage*, QWebEnginePage::JavaScriptConsoleMessageLevel, const QString&, int, const QString&);
    using QWebEnginePage_AcceptNavigationRequest_Callback = bool (*)(QWebEnginePage*, const QUrl&, QWebEnginePage::NavigationType, bool);
    using QWebEnginePage_EventFilter_Callback = bool (*)(QWebEnginePage*, QObject*, QEvent*);
    using QWebEnginePage_TimerEvent_Callback = void (*)(QWebEnginePage*, QTimerEvent*);
    using QWebEnginePage_ChildEvent_Callback = void (*)(QWebEnginePage*, QChildEvent*);
    using QWebEnginePage_CustomEvent_Callback = void (*)(QWebEnginePage*, QEvent*);
    using QWebEnginePage_ConnectNotify_Callback = void (*)(QWebEnginePage*, const QMetaMethod&);
    using QWebEnginePage_DisconnectNotify_Callback = void (*)(QWebEnginePage*, const QMetaMethod&);
    using QWebEnginePage_Sender_Callback = QObject* (*)();
    using QWebEnginePage_SenderSignalIndex_Callback = int (*)();
    using QWebEnginePage_Receivers_Callback = int (*)(const QWebEnginePage*, const char*);
    using QWebEnginePage_IsSignalConnected_Callback = bool (*)(const QWebEnginePage*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QWebEnginePage_Metacall_Callback qwebenginepage_metacall_callback = nullptr;
    QWebEnginePage_TriggerAction_Callback qwebenginepage_triggeraction_callback = nullptr;
    QWebEnginePage_Event_Callback qwebenginepage_event_callback = nullptr;
    QWebEnginePage_CreateWindow_Callback qwebenginepage_createwindow_callback = nullptr;
    QWebEnginePage_ChooseFiles_Callback qwebenginepage_choosefiles_callback = nullptr;
    QWebEnginePage_JavaScriptAlert_Callback qwebenginepage_javascriptalert_callback = nullptr;
    QWebEnginePage_JavaScriptConfirm_Callback qwebenginepage_javascriptconfirm_callback = nullptr;
    QWebEnginePage_JavaScriptConsoleMessage_Callback qwebenginepage_javascriptconsolemessage_callback = nullptr;
    QWebEnginePage_AcceptNavigationRequest_Callback qwebenginepage_acceptnavigationrequest_callback = nullptr;
    QWebEnginePage_EventFilter_Callback qwebenginepage_eventfilter_callback = nullptr;
    QWebEnginePage_TimerEvent_Callback qwebenginepage_timerevent_callback = nullptr;
    QWebEnginePage_ChildEvent_Callback qwebenginepage_childevent_callback = nullptr;
    QWebEnginePage_CustomEvent_Callback qwebenginepage_customevent_callback = nullptr;
    QWebEnginePage_ConnectNotify_Callback qwebenginepage_connectnotify_callback = nullptr;
    QWebEnginePage_DisconnectNotify_Callback qwebenginepage_disconnectnotify_callback = nullptr;
    QWebEnginePage_Sender_Callback qwebenginepage_sender_callback = nullptr;
    QWebEnginePage_SenderSignalIndex_Callback qwebenginepage_sendersignalindex_callback = nullptr;
    QWebEnginePage_Receivers_Callback qwebenginepage_receivers_callback = nullptr;
    QWebEnginePage_IsSignalConnected_Callback qwebenginepage_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebenginepage_metacall_isbase = false;
    mutable bool qwebenginepage_triggeraction_isbase = false;
    mutable bool qwebenginepage_event_isbase = false;
    mutable bool qwebenginepage_createwindow_isbase = false;
    mutable bool qwebenginepage_choosefiles_isbase = false;
    mutable bool qwebenginepage_javascriptalert_isbase = false;
    mutable bool qwebenginepage_javascriptconfirm_isbase = false;
    mutable bool qwebenginepage_javascriptconsolemessage_isbase = false;
    mutable bool qwebenginepage_acceptnavigationrequest_isbase = false;
    mutable bool qwebenginepage_eventfilter_isbase = false;
    mutable bool qwebenginepage_timerevent_isbase = false;
    mutable bool qwebenginepage_childevent_isbase = false;
    mutable bool qwebenginepage_customevent_isbase = false;
    mutable bool qwebenginepage_connectnotify_isbase = false;
    mutable bool qwebenginepage_disconnectnotify_isbase = false;
    mutable bool qwebenginepage_sender_isbase = false;
    mutable bool qwebenginepage_sendersignalindex_isbase = false;
    mutable bool qwebenginepage_receivers_isbase = false;
    mutable bool qwebenginepage_issignalconnected_isbase = false;

  public:
    VirtualQWebEnginePage() : QWebEnginePage(){};
    VirtualQWebEnginePage(QWebEngineProfile* profile) : QWebEnginePage(profile){};
    VirtualQWebEnginePage(QObject* parent) : QWebEnginePage(parent){};
    VirtualQWebEnginePage(QWebEngineProfile* profile, QObject* parent) : QWebEnginePage(profile, parent){};

    ~VirtualQWebEnginePage() {
        qwebenginepage_metacall_callback = nullptr;
        qwebenginepage_triggeraction_callback = nullptr;
        qwebenginepage_event_callback = nullptr;
        qwebenginepage_createwindow_callback = nullptr;
        qwebenginepage_choosefiles_callback = nullptr;
        qwebenginepage_javascriptalert_callback = nullptr;
        qwebenginepage_javascriptconfirm_callback = nullptr;
        qwebenginepage_javascriptconsolemessage_callback = nullptr;
        qwebenginepage_acceptnavigationrequest_callback = nullptr;
        qwebenginepage_eventfilter_callback = nullptr;
        qwebenginepage_timerevent_callback = nullptr;
        qwebenginepage_childevent_callback = nullptr;
        qwebenginepage_customevent_callback = nullptr;
        qwebenginepage_connectnotify_callback = nullptr;
        qwebenginepage_disconnectnotify_callback = nullptr;
        qwebenginepage_sender_callback = nullptr;
        qwebenginepage_sendersignalindex_callback = nullptr;
        qwebenginepage_receivers_callback = nullptr;
        qwebenginepage_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQWebEnginePage_Metacall_Callback(QWebEnginePage_Metacall_Callback cb) { qwebenginepage_metacall_callback = cb; }
    void setQWebEnginePage_TriggerAction_Callback(QWebEnginePage_TriggerAction_Callback cb) { qwebenginepage_triggeraction_callback = cb; }
    void setQWebEnginePage_Event_Callback(QWebEnginePage_Event_Callback cb) { qwebenginepage_event_callback = cb; }
    void setQWebEnginePage_CreateWindow_Callback(QWebEnginePage_CreateWindow_Callback cb) { qwebenginepage_createwindow_callback = cb; }
    void setQWebEnginePage_ChooseFiles_Callback(QWebEnginePage_ChooseFiles_Callback cb) { qwebenginepage_choosefiles_callback = cb; }
    void setQWebEnginePage_JavaScriptAlert_Callback(QWebEnginePage_JavaScriptAlert_Callback cb) { qwebenginepage_javascriptalert_callback = cb; }
    void setQWebEnginePage_JavaScriptConfirm_Callback(QWebEnginePage_JavaScriptConfirm_Callback cb) { qwebenginepage_javascriptconfirm_callback = cb; }
    void setQWebEnginePage_JavaScriptConsoleMessage_Callback(QWebEnginePage_JavaScriptConsoleMessage_Callback cb) { qwebenginepage_javascriptconsolemessage_callback = cb; }
    void setQWebEnginePage_AcceptNavigationRequest_Callback(QWebEnginePage_AcceptNavigationRequest_Callback cb) { qwebenginepage_acceptnavigationrequest_callback = cb; }
    void setQWebEnginePage_EventFilter_Callback(QWebEnginePage_EventFilter_Callback cb) { qwebenginepage_eventfilter_callback = cb; }
    void setQWebEnginePage_TimerEvent_Callback(QWebEnginePage_TimerEvent_Callback cb) { qwebenginepage_timerevent_callback = cb; }
    void setQWebEnginePage_ChildEvent_Callback(QWebEnginePage_ChildEvent_Callback cb) { qwebenginepage_childevent_callback = cb; }
    void setQWebEnginePage_CustomEvent_Callback(QWebEnginePage_CustomEvent_Callback cb) { qwebenginepage_customevent_callback = cb; }
    void setQWebEnginePage_ConnectNotify_Callback(QWebEnginePage_ConnectNotify_Callback cb) { qwebenginepage_connectnotify_callback = cb; }
    void setQWebEnginePage_DisconnectNotify_Callback(QWebEnginePage_DisconnectNotify_Callback cb) { qwebenginepage_disconnectnotify_callback = cb; }
    void setQWebEnginePage_Sender_Callback(QWebEnginePage_Sender_Callback cb) { qwebenginepage_sender_callback = cb; }
    void setQWebEnginePage_SenderSignalIndex_Callback(QWebEnginePage_SenderSignalIndex_Callback cb) { qwebenginepage_sendersignalindex_callback = cb; }
    void setQWebEnginePage_Receivers_Callback(QWebEnginePage_Receivers_Callback cb) { qwebenginepage_receivers_callback = cb; }
    void setQWebEnginePage_IsSignalConnected_Callback(QWebEnginePage_IsSignalConnected_Callback cb) { qwebenginepage_issignalconnected_callback = cb; }

    // Base flag setters
    void setQWebEnginePage_Metacall_IsBase(bool value) const { qwebenginepage_metacall_isbase = value; }
    void setQWebEnginePage_TriggerAction_IsBase(bool value) const { qwebenginepage_triggeraction_isbase = value; }
    void setQWebEnginePage_Event_IsBase(bool value) const { qwebenginepage_event_isbase = value; }
    void setQWebEnginePage_CreateWindow_IsBase(bool value) const { qwebenginepage_createwindow_isbase = value; }
    void setQWebEnginePage_ChooseFiles_IsBase(bool value) const { qwebenginepage_choosefiles_isbase = value; }
    void setQWebEnginePage_JavaScriptAlert_IsBase(bool value) const { qwebenginepage_javascriptalert_isbase = value; }
    void setQWebEnginePage_JavaScriptConfirm_IsBase(bool value) const { qwebenginepage_javascriptconfirm_isbase = value; }
    void setQWebEnginePage_JavaScriptConsoleMessage_IsBase(bool value) const { qwebenginepage_javascriptconsolemessage_isbase = value; }
    void setQWebEnginePage_AcceptNavigationRequest_IsBase(bool value) const { qwebenginepage_acceptnavigationrequest_isbase = value; }
    void setQWebEnginePage_EventFilter_IsBase(bool value) const { qwebenginepage_eventfilter_isbase = value; }
    void setQWebEnginePage_TimerEvent_IsBase(bool value) const { qwebenginepage_timerevent_isbase = value; }
    void setQWebEnginePage_ChildEvent_IsBase(bool value) const { qwebenginepage_childevent_isbase = value; }
    void setQWebEnginePage_CustomEvent_IsBase(bool value) const { qwebenginepage_customevent_isbase = value; }
    void setQWebEnginePage_ConnectNotify_IsBase(bool value) const { qwebenginepage_connectnotify_isbase = value; }
    void setQWebEnginePage_DisconnectNotify_IsBase(bool value) const { qwebenginepage_disconnectnotify_isbase = value; }
    void setQWebEnginePage_Sender_IsBase(bool value) const { qwebenginepage_sender_isbase = value; }
    void setQWebEnginePage_SenderSignalIndex_IsBase(bool value) const { qwebenginepage_sendersignalindex_isbase = value; }
    void setQWebEnginePage_Receivers_IsBase(bool value) const { qwebenginepage_receivers_isbase = value; }
    void setQWebEnginePage_IsSignalConnected_IsBase(bool value) const { qwebenginepage_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebenginepage_metacall_isbase) {
            qwebenginepage_metacall_isbase = false;
            return QWebEnginePage::qt_metacall(param1, param2, param3);
        } else if (qwebenginepage_metacall_callback != nullptr) {
            return qwebenginepage_metacall_callback(this, param1, param2, param3);
        } else {
            return QWebEnginePage::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void triggerAction(QWebEnginePage::WebAction action, bool checked) override {
        if (qwebenginepage_triggeraction_isbase) {
            qwebenginepage_triggeraction_isbase = false;
            QWebEnginePage::triggerAction(action, checked);
        } else if (qwebenginepage_triggeraction_callback != nullptr) {
            qwebenginepage_triggeraction_callback(this, action, checked);
        } else {
            QWebEnginePage::triggerAction(action, checked);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwebenginepage_event_isbase) {
            qwebenginepage_event_isbase = false;
            return QWebEnginePage::event(param1);
        } else if (qwebenginepage_event_callback != nullptr) {
            return qwebenginepage_event_callback(this, param1);
        } else {
            return QWebEnginePage::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWebEnginePage* createWindow(QWebEnginePage::WebWindowType typeVal) override {
        if (qwebenginepage_createwindow_isbase) {
            qwebenginepage_createwindow_isbase = false;
            return QWebEnginePage::createWindow(typeVal);
        } else if (qwebenginepage_createwindow_callback != nullptr) {
            return qwebenginepage_createwindow_callback(this, typeVal);
        } else {
            return QWebEnginePage::createWindow(typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList chooseFiles(QWebEnginePage::FileSelectionMode mode, const QStringList& oldFiles, const QStringList& acceptedMimeTypes) override {
        if (qwebenginepage_choosefiles_isbase) {
            qwebenginepage_choosefiles_isbase = false;
            return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes);
        } else if (qwebenginepage_choosefiles_callback != nullptr) {
            return qwebenginepage_choosefiles_callback(this, mode, oldFiles, acceptedMimeTypes);
        } else {
            return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void javaScriptAlert(const QUrl& securityOrigin, const QString& msg) override {
        if (qwebenginepage_javascriptalert_isbase) {
            qwebenginepage_javascriptalert_isbase = false;
            QWebEnginePage::javaScriptAlert(securityOrigin, msg);
        } else if (qwebenginepage_javascriptalert_callback != nullptr) {
            qwebenginepage_javascriptalert_callback(this, securityOrigin, msg);
        } else {
            QWebEnginePage::javaScriptAlert(securityOrigin, msg);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool javaScriptConfirm(const QUrl& securityOrigin, const QString& msg) override {
        if (qwebenginepage_javascriptconfirm_isbase) {
            qwebenginepage_javascriptconfirm_isbase = false;
            return QWebEnginePage::javaScriptConfirm(securityOrigin, msg);
        } else if (qwebenginepage_javascriptconfirm_callback != nullptr) {
            return qwebenginepage_javascriptconfirm_callback(this, securityOrigin, msg);
        } else {
            return QWebEnginePage::javaScriptConfirm(securityOrigin, msg);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString& message, int lineNumber, const QString& sourceID) override {
        if (qwebenginepage_javascriptconsolemessage_isbase) {
            qwebenginepage_javascriptconsolemessage_isbase = false;
            QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID);
        } else if (qwebenginepage_javascriptconsolemessage_callback != nullptr) {
            qwebenginepage_javascriptconsolemessage_callback(this, level, message, lineNumber, sourceID);
        } else {
            QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool acceptNavigationRequest(const QUrl& url, QWebEnginePage::NavigationType typeVal, bool isMainFrame) override {
        if (qwebenginepage_acceptnavigationrequest_isbase) {
            qwebenginepage_acceptnavigationrequest_isbase = false;
            return QWebEnginePage::acceptNavigationRequest(url, typeVal, isMainFrame);
        } else if (qwebenginepage_acceptnavigationrequest_callback != nullptr) {
            return qwebenginepage_acceptnavigationrequest_callback(this, url, typeVal, isMainFrame);
        } else {
            return QWebEnginePage::acceptNavigationRequest(url, typeVal, isMainFrame);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebenginepage_eventfilter_isbase) {
            qwebenginepage_eventfilter_isbase = false;
            return QWebEnginePage::eventFilter(watched, event);
        } else if (qwebenginepage_eventfilter_callback != nullptr) {
            return qwebenginepage_eventfilter_callback(this, watched, event);
        } else {
            return QWebEnginePage::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebenginepage_timerevent_isbase) {
            qwebenginepage_timerevent_isbase = false;
            QWebEnginePage::timerEvent(event);
        } else if (qwebenginepage_timerevent_callback != nullptr) {
            qwebenginepage_timerevent_callback(this, event);
        } else {
            QWebEnginePage::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebenginepage_childevent_isbase) {
            qwebenginepage_childevent_isbase = false;
            QWebEnginePage::childEvent(event);
        } else if (qwebenginepage_childevent_callback != nullptr) {
            qwebenginepage_childevent_callback(this, event);
        } else {
            QWebEnginePage::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebenginepage_customevent_isbase) {
            qwebenginepage_customevent_isbase = false;
            QWebEnginePage::customEvent(event);
        } else if (qwebenginepage_customevent_callback != nullptr) {
            qwebenginepage_customevent_callback(this, event);
        } else {
            QWebEnginePage::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebenginepage_connectnotify_isbase) {
            qwebenginepage_connectnotify_isbase = false;
            QWebEnginePage::connectNotify(signal);
        } else if (qwebenginepage_connectnotify_callback != nullptr) {
            qwebenginepage_connectnotify_callback(this, signal);
        } else {
            QWebEnginePage::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebenginepage_disconnectnotify_isbase) {
            qwebenginepage_disconnectnotify_isbase = false;
            QWebEnginePage::disconnectNotify(signal);
        } else if (qwebenginepage_disconnectnotify_callback != nullptr) {
            qwebenginepage_disconnectnotify_callback(this, signal);
        } else {
            QWebEnginePage::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebenginepage_sender_isbase) {
            qwebenginepage_sender_isbase = false;
            return QWebEnginePage::sender();
        } else if (qwebenginepage_sender_callback != nullptr) {
            return qwebenginepage_sender_callback();
        } else {
            return QWebEnginePage::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebenginepage_sendersignalindex_isbase) {
            qwebenginepage_sendersignalindex_isbase = false;
            return QWebEnginePage::senderSignalIndex();
        } else if (qwebenginepage_sendersignalindex_callback != nullptr) {
            return qwebenginepage_sendersignalindex_callback();
        } else {
            return QWebEnginePage::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebenginepage_receivers_isbase) {
            qwebenginepage_receivers_isbase = false;
            return QWebEnginePage::receivers(signal);
        } else if (qwebenginepage_receivers_callback != nullptr) {
            return qwebenginepage_receivers_callback(this, signal);
        } else {
            return QWebEnginePage::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebenginepage_issignalconnected_isbase) {
            qwebenginepage_issignalconnected_isbase = false;
            return QWebEnginePage::isSignalConnected(signal);
        } else if (qwebenginepage_issignalconnected_callback != nullptr) {
            return qwebenginepage_issignalconnected_callback(this, signal);
        } else {
            return QWebEnginePage::isSignalConnected(signal);
        }
    }
};

#endif

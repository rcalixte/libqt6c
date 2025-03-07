#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciAPIs so that we can call protected methods
class VirtualQsciAPIs : public QsciAPIs {

  public:
    // Virtual class public types (including callbacks)
    using QsciAPIs_Metacall_Callback = int (*)(QsciAPIs*, QMetaObject::Call, int, void**);
    using QsciAPIs_UpdateAutoCompletionList_Callback = void (*)(QsciAPIs*, const QStringList&, QStringList&);
    using QsciAPIs_AutoCompletionSelected_Callback = void (*)(QsciAPIs*, const QString&);
    using QsciAPIs_CallTips_Callback = QStringList (*)(QsciAPIs*, const QStringList&, int, QsciScintilla::CallTipsStyle, QList<int>&);
    using QsciAPIs_Event_Callback = bool (*)(QsciAPIs*, QEvent*);
    using QsciAPIs_EventFilter_Callback = bool (*)(QsciAPIs*, QObject*, QEvent*);
    using QsciAPIs_TimerEvent_Callback = void (*)(QsciAPIs*, QTimerEvent*);
    using QsciAPIs_ChildEvent_Callback = void (*)(QsciAPIs*, QChildEvent*);
    using QsciAPIs_CustomEvent_Callback = void (*)(QsciAPIs*, QEvent*);
    using QsciAPIs_ConnectNotify_Callback = void (*)(QsciAPIs*, const QMetaMethod&);
    using QsciAPIs_DisconnectNotify_Callback = void (*)(QsciAPIs*, const QMetaMethod&);
    using QsciAPIs_Sender_Callback = QObject* (*)();
    using QsciAPIs_SenderSignalIndex_Callback = int (*)();
    using QsciAPIs_Receivers_Callback = int (*)(const QsciAPIs*, const char*);
    using QsciAPIs_IsSignalConnected_Callback = bool (*)(const QsciAPIs*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciAPIs_Metacall_Callback qsciapis_metacall_callback = nullptr;
    QsciAPIs_UpdateAutoCompletionList_Callback qsciapis_updateautocompletionlist_callback = nullptr;
    QsciAPIs_AutoCompletionSelected_Callback qsciapis_autocompletionselected_callback = nullptr;
    QsciAPIs_CallTips_Callback qsciapis_calltips_callback = nullptr;
    QsciAPIs_Event_Callback qsciapis_event_callback = nullptr;
    QsciAPIs_EventFilter_Callback qsciapis_eventfilter_callback = nullptr;
    QsciAPIs_TimerEvent_Callback qsciapis_timerevent_callback = nullptr;
    QsciAPIs_ChildEvent_Callback qsciapis_childevent_callback = nullptr;
    QsciAPIs_CustomEvent_Callback qsciapis_customevent_callback = nullptr;
    QsciAPIs_ConnectNotify_Callback qsciapis_connectnotify_callback = nullptr;
    QsciAPIs_DisconnectNotify_Callback qsciapis_disconnectnotify_callback = nullptr;
    QsciAPIs_Sender_Callback qsciapis_sender_callback = nullptr;
    QsciAPIs_SenderSignalIndex_Callback qsciapis_sendersignalindex_callback = nullptr;
    QsciAPIs_Receivers_Callback qsciapis_receivers_callback = nullptr;
    QsciAPIs_IsSignalConnected_Callback qsciapis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsciapis_metacall_isbase = false;
    mutable bool qsciapis_updateautocompletionlist_isbase = false;
    mutable bool qsciapis_autocompletionselected_isbase = false;
    mutable bool qsciapis_calltips_isbase = false;
    mutable bool qsciapis_event_isbase = false;
    mutable bool qsciapis_eventfilter_isbase = false;
    mutable bool qsciapis_timerevent_isbase = false;
    mutable bool qsciapis_childevent_isbase = false;
    mutable bool qsciapis_customevent_isbase = false;
    mutable bool qsciapis_connectnotify_isbase = false;
    mutable bool qsciapis_disconnectnotify_isbase = false;
    mutable bool qsciapis_sender_isbase = false;
    mutable bool qsciapis_sendersignalindex_isbase = false;
    mutable bool qsciapis_receivers_isbase = false;
    mutable bool qsciapis_issignalconnected_isbase = false;

  public:
    VirtualQsciAPIs(QsciLexer* lexer) : QsciAPIs(lexer){};

    ~VirtualQsciAPIs() {
        qsciapis_metacall_callback = nullptr;
        qsciapis_updateautocompletionlist_callback = nullptr;
        qsciapis_autocompletionselected_callback = nullptr;
        qsciapis_calltips_callback = nullptr;
        qsciapis_event_callback = nullptr;
        qsciapis_eventfilter_callback = nullptr;
        qsciapis_timerevent_callback = nullptr;
        qsciapis_childevent_callback = nullptr;
        qsciapis_customevent_callback = nullptr;
        qsciapis_connectnotify_callback = nullptr;
        qsciapis_disconnectnotify_callback = nullptr;
        qsciapis_sender_callback = nullptr;
        qsciapis_sendersignalindex_callback = nullptr;
        qsciapis_receivers_callback = nullptr;
        qsciapis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciAPIs_Metacall_Callback(QsciAPIs_Metacall_Callback cb) { qsciapis_metacall_callback = cb; }
    void setQsciAPIs_UpdateAutoCompletionList_Callback(QsciAPIs_UpdateAutoCompletionList_Callback cb) { qsciapis_updateautocompletionlist_callback = cb; }
    void setQsciAPIs_AutoCompletionSelected_Callback(QsciAPIs_AutoCompletionSelected_Callback cb) { qsciapis_autocompletionselected_callback = cb; }
    void setQsciAPIs_CallTips_Callback(QsciAPIs_CallTips_Callback cb) { qsciapis_calltips_callback = cb; }
    void setQsciAPIs_Event_Callback(QsciAPIs_Event_Callback cb) { qsciapis_event_callback = cb; }
    void setQsciAPIs_EventFilter_Callback(QsciAPIs_EventFilter_Callback cb) { qsciapis_eventfilter_callback = cb; }
    void setQsciAPIs_TimerEvent_Callback(QsciAPIs_TimerEvent_Callback cb) { qsciapis_timerevent_callback = cb; }
    void setQsciAPIs_ChildEvent_Callback(QsciAPIs_ChildEvent_Callback cb) { qsciapis_childevent_callback = cb; }
    void setQsciAPIs_CustomEvent_Callback(QsciAPIs_CustomEvent_Callback cb) { qsciapis_customevent_callback = cb; }
    void setQsciAPIs_ConnectNotify_Callback(QsciAPIs_ConnectNotify_Callback cb) { qsciapis_connectnotify_callback = cb; }
    void setQsciAPIs_DisconnectNotify_Callback(QsciAPIs_DisconnectNotify_Callback cb) { qsciapis_disconnectnotify_callback = cb; }
    void setQsciAPIs_Sender_Callback(QsciAPIs_Sender_Callback cb) { qsciapis_sender_callback = cb; }
    void setQsciAPIs_SenderSignalIndex_Callback(QsciAPIs_SenderSignalIndex_Callback cb) { qsciapis_sendersignalindex_callback = cb; }
    void setQsciAPIs_Receivers_Callback(QsciAPIs_Receivers_Callback cb) { qsciapis_receivers_callback = cb; }
    void setQsciAPIs_IsSignalConnected_Callback(QsciAPIs_IsSignalConnected_Callback cb) { qsciapis_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciAPIs_Metacall_IsBase(bool value) const { qsciapis_metacall_isbase = value; }
    void setQsciAPIs_UpdateAutoCompletionList_IsBase(bool value) const { qsciapis_updateautocompletionlist_isbase = value; }
    void setQsciAPIs_AutoCompletionSelected_IsBase(bool value) const { qsciapis_autocompletionselected_isbase = value; }
    void setQsciAPIs_CallTips_IsBase(bool value) const { qsciapis_calltips_isbase = value; }
    void setQsciAPIs_Event_IsBase(bool value) const { qsciapis_event_isbase = value; }
    void setQsciAPIs_EventFilter_IsBase(bool value) const { qsciapis_eventfilter_isbase = value; }
    void setQsciAPIs_TimerEvent_IsBase(bool value) const { qsciapis_timerevent_isbase = value; }
    void setQsciAPIs_ChildEvent_IsBase(bool value) const { qsciapis_childevent_isbase = value; }
    void setQsciAPIs_CustomEvent_IsBase(bool value) const { qsciapis_customevent_isbase = value; }
    void setQsciAPIs_ConnectNotify_IsBase(bool value) const { qsciapis_connectnotify_isbase = value; }
    void setQsciAPIs_DisconnectNotify_IsBase(bool value) const { qsciapis_disconnectnotify_isbase = value; }
    void setQsciAPIs_Sender_IsBase(bool value) const { qsciapis_sender_isbase = value; }
    void setQsciAPIs_SenderSignalIndex_IsBase(bool value) const { qsciapis_sendersignalindex_isbase = value; }
    void setQsciAPIs_Receivers_IsBase(bool value) const { qsciapis_receivers_isbase = value; }
    void setQsciAPIs_IsSignalConnected_IsBase(bool value) const { qsciapis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciapis_metacall_isbase) {
            qsciapis_metacall_isbase = false;
            return QsciAPIs::qt_metacall(param1, param2, param3);
        } else if (qsciapis_metacall_callback != nullptr) {
            return qsciapis_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciAPIs::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateAutoCompletionList(const QStringList& context, QStringList& list) override {
        if (qsciapis_updateautocompletionlist_isbase) {
            qsciapis_updateautocompletionlist_isbase = false;
            QsciAPIs::updateAutoCompletionList(context, list);
        } else if (qsciapis_updateautocompletionlist_callback != nullptr) {
            qsciapis_updateautocompletionlist_callback(this, context, list);
        } else {
            QsciAPIs::updateAutoCompletionList(context, list);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompletionSelected(const QString& sel) override {
        if (qsciapis_autocompletionselected_isbase) {
            qsciapis_autocompletionselected_isbase = false;
            QsciAPIs::autoCompletionSelected(sel);
        } else if (qsciapis_autocompletionselected_callback != nullptr) {
            qsciapis_autocompletionselected_callback(this, sel);
        } else {
            QsciAPIs::autoCompletionSelected(sel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList callTips(const QStringList& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
        if (qsciapis_calltips_isbase) {
            qsciapis_calltips_isbase = false;
            return QsciAPIs::callTips(context, commas, style, shifts);
        } else if (qsciapis_calltips_callback != nullptr) {
            return qsciapis_calltips_callback(this, context, commas, style, shifts);
        } else {
            return QsciAPIs::callTips(context, commas, style, shifts);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsciapis_event_isbase) {
            qsciapis_event_isbase = false;
            return QsciAPIs::event(e);
        } else if (qsciapis_event_callback != nullptr) {
            return qsciapis_event_callback(this, e);
        } else {
            return QsciAPIs::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsciapis_eventfilter_isbase) {
            qsciapis_eventfilter_isbase = false;
            return QsciAPIs::eventFilter(watched, event);
        } else if (qsciapis_eventfilter_callback != nullptr) {
            return qsciapis_eventfilter_callback(this, watched, event);
        } else {
            return QsciAPIs::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciapis_timerevent_isbase) {
            qsciapis_timerevent_isbase = false;
            QsciAPIs::timerEvent(event);
        } else if (qsciapis_timerevent_callback != nullptr) {
            qsciapis_timerevent_callback(this, event);
        } else {
            QsciAPIs::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciapis_childevent_isbase) {
            qsciapis_childevent_isbase = false;
            QsciAPIs::childEvent(event);
        } else if (qsciapis_childevent_callback != nullptr) {
            qsciapis_childevent_callback(this, event);
        } else {
            QsciAPIs::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciapis_customevent_isbase) {
            qsciapis_customevent_isbase = false;
            QsciAPIs::customEvent(event);
        } else if (qsciapis_customevent_callback != nullptr) {
            qsciapis_customevent_callback(this, event);
        } else {
            QsciAPIs::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciapis_connectnotify_isbase) {
            qsciapis_connectnotify_isbase = false;
            QsciAPIs::connectNotify(signal);
        } else if (qsciapis_connectnotify_callback != nullptr) {
            qsciapis_connectnotify_callback(this, signal);
        } else {
            QsciAPIs::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciapis_disconnectnotify_isbase) {
            qsciapis_disconnectnotify_isbase = false;
            QsciAPIs::disconnectNotify(signal);
        } else if (qsciapis_disconnectnotify_callback != nullptr) {
            qsciapis_disconnectnotify_callback(this, signal);
        } else {
            QsciAPIs::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsciapis_sender_isbase) {
            qsciapis_sender_isbase = false;
            return QsciAPIs::sender();
        } else if (qsciapis_sender_callback != nullptr) {
            return qsciapis_sender_callback();
        } else {
            return QsciAPIs::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsciapis_sendersignalindex_isbase) {
            qsciapis_sendersignalindex_isbase = false;
            return QsciAPIs::senderSignalIndex();
        } else if (qsciapis_sendersignalindex_callback != nullptr) {
            return qsciapis_sendersignalindex_callback();
        } else {
            return QsciAPIs::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsciapis_receivers_isbase) {
            qsciapis_receivers_isbase = false;
            return QsciAPIs::receivers(signal);
        } else if (qsciapis_receivers_callback != nullptr) {
            return qsciapis_receivers_callback(this, signal);
        } else {
            return QsciAPIs::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsciapis_issignalconnected_isbase) {
            qsciapis_issignalconnected_isbase = false;
            return QsciAPIs::isSignalConnected(signal);
        } else if (qsciapis_issignalconnected_callback != nullptr) {
            return qsciapis_issignalconnected_callback(this, signal);
        } else {
            return QsciAPIs::isSignalConnected(signal);
        }
    }
};

#endif

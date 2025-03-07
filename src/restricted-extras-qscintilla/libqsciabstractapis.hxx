#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIABSTRACTAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIABSTRACTAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciAbstractAPIs so that we can call protected methods
class VirtualQsciAbstractAPIs : public QsciAbstractAPIs {

  public:
    // Virtual class public types (including callbacks)
    using QsciAbstractAPIs_Metacall_Callback = int (*)(QsciAbstractAPIs*, QMetaObject::Call, int, void**);
    using QsciAbstractAPIs_UpdateAutoCompletionList_Callback = void (*)(QsciAbstractAPIs*, const QStringList&, QStringList&);
    using QsciAbstractAPIs_AutoCompletionSelected_Callback = void (*)(QsciAbstractAPIs*, const QString&);
    using QsciAbstractAPIs_CallTips_Callback = QStringList (*)(QsciAbstractAPIs*, const QStringList&, int, QsciScintilla::CallTipsStyle, QList<int>&);
    using QsciAbstractAPIs_Event_Callback = bool (*)(QsciAbstractAPIs*, QEvent*);
    using QsciAbstractAPIs_EventFilter_Callback = bool (*)(QsciAbstractAPIs*, QObject*, QEvent*);
    using QsciAbstractAPIs_TimerEvent_Callback = void (*)(QsciAbstractAPIs*, QTimerEvent*);
    using QsciAbstractAPIs_ChildEvent_Callback = void (*)(QsciAbstractAPIs*, QChildEvent*);
    using QsciAbstractAPIs_CustomEvent_Callback = void (*)(QsciAbstractAPIs*, QEvent*);
    using QsciAbstractAPIs_ConnectNotify_Callback = void (*)(QsciAbstractAPIs*, const QMetaMethod&);
    using QsciAbstractAPIs_DisconnectNotify_Callback = void (*)(QsciAbstractAPIs*, const QMetaMethod&);
    using QsciAbstractAPIs_Sender_Callback = QObject* (*)();
    using QsciAbstractAPIs_SenderSignalIndex_Callback = int (*)();
    using QsciAbstractAPIs_Receivers_Callback = int (*)(const QsciAbstractAPIs*, const char*);
    using QsciAbstractAPIs_IsSignalConnected_Callback = bool (*)(const QsciAbstractAPIs*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciAbstractAPIs_Metacall_Callback qsciabstractapis_metacall_callback = nullptr;
    QsciAbstractAPIs_UpdateAutoCompletionList_Callback qsciabstractapis_updateautocompletionlist_callback = nullptr;
    QsciAbstractAPIs_AutoCompletionSelected_Callback qsciabstractapis_autocompletionselected_callback = nullptr;
    QsciAbstractAPIs_CallTips_Callback qsciabstractapis_calltips_callback = nullptr;
    QsciAbstractAPIs_Event_Callback qsciabstractapis_event_callback = nullptr;
    QsciAbstractAPIs_EventFilter_Callback qsciabstractapis_eventfilter_callback = nullptr;
    QsciAbstractAPIs_TimerEvent_Callback qsciabstractapis_timerevent_callback = nullptr;
    QsciAbstractAPIs_ChildEvent_Callback qsciabstractapis_childevent_callback = nullptr;
    QsciAbstractAPIs_CustomEvent_Callback qsciabstractapis_customevent_callback = nullptr;
    QsciAbstractAPIs_ConnectNotify_Callback qsciabstractapis_connectnotify_callback = nullptr;
    QsciAbstractAPIs_DisconnectNotify_Callback qsciabstractapis_disconnectnotify_callback = nullptr;
    QsciAbstractAPIs_Sender_Callback qsciabstractapis_sender_callback = nullptr;
    QsciAbstractAPIs_SenderSignalIndex_Callback qsciabstractapis_sendersignalindex_callback = nullptr;
    QsciAbstractAPIs_Receivers_Callback qsciabstractapis_receivers_callback = nullptr;
    QsciAbstractAPIs_IsSignalConnected_Callback qsciabstractapis_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsciabstractapis_metacall_isbase = false;
    mutable bool qsciabstractapis_updateautocompletionlist_isbase = false;
    mutable bool qsciabstractapis_autocompletionselected_isbase = false;
    mutable bool qsciabstractapis_calltips_isbase = false;
    mutable bool qsciabstractapis_event_isbase = false;
    mutable bool qsciabstractapis_eventfilter_isbase = false;
    mutable bool qsciabstractapis_timerevent_isbase = false;
    mutable bool qsciabstractapis_childevent_isbase = false;
    mutable bool qsciabstractapis_customevent_isbase = false;
    mutable bool qsciabstractapis_connectnotify_isbase = false;
    mutable bool qsciabstractapis_disconnectnotify_isbase = false;
    mutable bool qsciabstractapis_sender_isbase = false;
    mutable bool qsciabstractapis_sendersignalindex_isbase = false;
    mutable bool qsciabstractapis_receivers_isbase = false;
    mutable bool qsciabstractapis_issignalconnected_isbase = false;

  public:
    VirtualQsciAbstractAPIs(QsciLexer* lexer) : QsciAbstractAPIs(lexer){};

    ~VirtualQsciAbstractAPIs() {
        qsciabstractapis_metacall_callback = nullptr;
        qsciabstractapis_updateautocompletionlist_callback = nullptr;
        qsciabstractapis_autocompletionselected_callback = nullptr;
        qsciabstractapis_calltips_callback = nullptr;
        qsciabstractapis_event_callback = nullptr;
        qsciabstractapis_eventfilter_callback = nullptr;
        qsciabstractapis_timerevent_callback = nullptr;
        qsciabstractapis_childevent_callback = nullptr;
        qsciabstractapis_customevent_callback = nullptr;
        qsciabstractapis_connectnotify_callback = nullptr;
        qsciabstractapis_disconnectnotify_callback = nullptr;
        qsciabstractapis_sender_callback = nullptr;
        qsciabstractapis_sendersignalindex_callback = nullptr;
        qsciabstractapis_receivers_callback = nullptr;
        qsciabstractapis_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciAbstractAPIs_Metacall_Callback(QsciAbstractAPIs_Metacall_Callback cb) { qsciabstractapis_metacall_callback = cb; }
    void setQsciAbstractAPIs_UpdateAutoCompletionList_Callback(QsciAbstractAPIs_UpdateAutoCompletionList_Callback cb) { qsciabstractapis_updateautocompletionlist_callback = cb; }
    void setQsciAbstractAPIs_AutoCompletionSelected_Callback(QsciAbstractAPIs_AutoCompletionSelected_Callback cb) { qsciabstractapis_autocompletionselected_callback = cb; }
    void setQsciAbstractAPIs_CallTips_Callback(QsciAbstractAPIs_CallTips_Callback cb) { qsciabstractapis_calltips_callback = cb; }
    void setQsciAbstractAPIs_Event_Callback(QsciAbstractAPIs_Event_Callback cb) { qsciabstractapis_event_callback = cb; }
    void setQsciAbstractAPIs_EventFilter_Callback(QsciAbstractAPIs_EventFilter_Callback cb) { qsciabstractapis_eventfilter_callback = cb; }
    void setQsciAbstractAPIs_TimerEvent_Callback(QsciAbstractAPIs_TimerEvent_Callback cb) { qsciabstractapis_timerevent_callback = cb; }
    void setQsciAbstractAPIs_ChildEvent_Callback(QsciAbstractAPIs_ChildEvent_Callback cb) { qsciabstractapis_childevent_callback = cb; }
    void setQsciAbstractAPIs_CustomEvent_Callback(QsciAbstractAPIs_CustomEvent_Callback cb) { qsciabstractapis_customevent_callback = cb; }
    void setQsciAbstractAPIs_ConnectNotify_Callback(QsciAbstractAPIs_ConnectNotify_Callback cb) { qsciabstractapis_connectnotify_callback = cb; }
    void setQsciAbstractAPIs_DisconnectNotify_Callback(QsciAbstractAPIs_DisconnectNotify_Callback cb) { qsciabstractapis_disconnectnotify_callback = cb; }
    void setQsciAbstractAPIs_Sender_Callback(QsciAbstractAPIs_Sender_Callback cb) { qsciabstractapis_sender_callback = cb; }
    void setQsciAbstractAPIs_SenderSignalIndex_Callback(QsciAbstractAPIs_SenderSignalIndex_Callback cb) { qsciabstractapis_sendersignalindex_callback = cb; }
    void setQsciAbstractAPIs_Receivers_Callback(QsciAbstractAPIs_Receivers_Callback cb) { qsciabstractapis_receivers_callback = cb; }
    void setQsciAbstractAPIs_IsSignalConnected_Callback(QsciAbstractAPIs_IsSignalConnected_Callback cb) { qsciabstractapis_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciAbstractAPIs_Metacall_IsBase(bool value) const { qsciabstractapis_metacall_isbase = value; }
    void setQsciAbstractAPIs_UpdateAutoCompletionList_IsBase(bool value) const { qsciabstractapis_updateautocompletionlist_isbase = value; }
    void setQsciAbstractAPIs_AutoCompletionSelected_IsBase(bool value) const { qsciabstractapis_autocompletionselected_isbase = value; }
    void setQsciAbstractAPIs_CallTips_IsBase(bool value) const { qsciabstractapis_calltips_isbase = value; }
    void setQsciAbstractAPIs_Event_IsBase(bool value) const { qsciabstractapis_event_isbase = value; }
    void setQsciAbstractAPIs_EventFilter_IsBase(bool value) const { qsciabstractapis_eventfilter_isbase = value; }
    void setQsciAbstractAPIs_TimerEvent_IsBase(bool value) const { qsciabstractapis_timerevent_isbase = value; }
    void setQsciAbstractAPIs_ChildEvent_IsBase(bool value) const { qsciabstractapis_childevent_isbase = value; }
    void setQsciAbstractAPIs_CustomEvent_IsBase(bool value) const { qsciabstractapis_customevent_isbase = value; }
    void setQsciAbstractAPIs_ConnectNotify_IsBase(bool value) const { qsciabstractapis_connectnotify_isbase = value; }
    void setQsciAbstractAPIs_DisconnectNotify_IsBase(bool value) const { qsciabstractapis_disconnectnotify_isbase = value; }
    void setQsciAbstractAPIs_Sender_IsBase(bool value) const { qsciabstractapis_sender_isbase = value; }
    void setQsciAbstractAPIs_SenderSignalIndex_IsBase(bool value) const { qsciabstractapis_sendersignalindex_isbase = value; }
    void setQsciAbstractAPIs_Receivers_IsBase(bool value) const { qsciabstractapis_receivers_isbase = value; }
    void setQsciAbstractAPIs_IsSignalConnected_IsBase(bool value) const { qsciabstractapis_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciabstractapis_metacall_isbase) {
            qsciabstractapis_metacall_isbase = false;
            return QsciAbstractAPIs::qt_metacall(param1, param2, param3);
        } else if (qsciabstractapis_metacall_callback != nullptr) {
            return qsciabstractapis_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciAbstractAPIs::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateAutoCompletionList(const QStringList& context, QStringList& list) override {
        qsciabstractapis_updateautocompletionlist_callback(this, context, list);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompletionSelected(const QString& selection) override {
        if (qsciabstractapis_autocompletionselected_isbase) {
            qsciabstractapis_autocompletionselected_isbase = false;
            QsciAbstractAPIs::autoCompletionSelected(selection);
        } else if (qsciabstractapis_autocompletionselected_callback != nullptr) {
            qsciabstractapis_autocompletionselected_callback(this, selection);
        } else {
            QsciAbstractAPIs::autoCompletionSelected(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList callTips(const QStringList& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
        return qsciabstractapis_calltips_callback(this, context, commas, style, shifts);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsciabstractapis_event_isbase) {
            qsciabstractapis_event_isbase = false;
            return QsciAbstractAPIs::event(event);
        } else if (qsciabstractapis_event_callback != nullptr) {
            return qsciabstractapis_event_callback(this, event);
        } else {
            return QsciAbstractAPIs::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsciabstractapis_eventfilter_isbase) {
            qsciabstractapis_eventfilter_isbase = false;
            return QsciAbstractAPIs::eventFilter(watched, event);
        } else if (qsciabstractapis_eventfilter_callback != nullptr) {
            return qsciabstractapis_eventfilter_callback(this, watched, event);
        } else {
            return QsciAbstractAPIs::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciabstractapis_timerevent_isbase) {
            qsciabstractapis_timerevent_isbase = false;
            QsciAbstractAPIs::timerEvent(event);
        } else if (qsciabstractapis_timerevent_callback != nullptr) {
            qsciabstractapis_timerevent_callback(this, event);
        } else {
            QsciAbstractAPIs::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciabstractapis_childevent_isbase) {
            qsciabstractapis_childevent_isbase = false;
            QsciAbstractAPIs::childEvent(event);
        } else if (qsciabstractapis_childevent_callback != nullptr) {
            qsciabstractapis_childevent_callback(this, event);
        } else {
            QsciAbstractAPIs::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciabstractapis_customevent_isbase) {
            qsciabstractapis_customevent_isbase = false;
            QsciAbstractAPIs::customEvent(event);
        } else if (qsciabstractapis_customevent_callback != nullptr) {
            qsciabstractapis_customevent_callback(this, event);
        } else {
            QsciAbstractAPIs::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciabstractapis_connectnotify_isbase) {
            qsciabstractapis_connectnotify_isbase = false;
            QsciAbstractAPIs::connectNotify(signal);
        } else if (qsciabstractapis_connectnotify_callback != nullptr) {
            qsciabstractapis_connectnotify_callback(this, signal);
        } else {
            QsciAbstractAPIs::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciabstractapis_disconnectnotify_isbase) {
            qsciabstractapis_disconnectnotify_isbase = false;
            QsciAbstractAPIs::disconnectNotify(signal);
        } else if (qsciabstractapis_disconnectnotify_callback != nullptr) {
            qsciabstractapis_disconnectnotify_callback(this, signal);
        } else {
            QsciAbstractAPIs::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsciabstractapis_sender_isbase) {
            qsciabstractapis_sender_isbase = false;
            return QsciAbstractAPIs::sender();
        } else if (qsciabstractapis_sender_callback != nullptr) {
            return qsciabstractapis_sender_callback();
        } else {
            return QsciAbstractAPIs::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsciabstractapis_sendersignalindex_isbase) {
            qsciabstractapis_sendersignalindex_isbase = false;
            return QsciAbstractAPIs::senderSignalIndex();
        } else if (qsciabstractapis_sendersignalindex_callback != nullptr) {
            return qsciabstractapis_sendersignalindex_callback();
        } else {
            return QsciAbstractAPIs::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsciabstractapis_receivers_isbase) {
            qsciabstractapis_receivers_isbase = false;
            return QsciAbstractAPIs::receivers(signal);
        } else if (qsciabstractapis_receivers_callback != nullptr) {
            return qsciabstractapis_receivers_callback(this, signal);
        } else {
            return QsciAbstractAPIs::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsciabstractapis_issignalconnected_isbase) {
            qsciabstractapis_issignalconnected_isbase = false;
            return QsciAbstractAPIs::isSignalConnected(signal);
        } else if (qsciabstractapis_issignalconnected_callback != nullptr) {
            return qsciabstractapis_issignalconnected_callback(this, signal);
        } else {
            return QsciAbstractAPIs::isSignalConnected(signal);
        }
    }
};

#endif

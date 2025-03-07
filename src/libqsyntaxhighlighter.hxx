#pragma once
#ifndef SRCC_LIBVIRTUALQSYNTAXHIGHLIGHTER_H
#define SRCC_LIBVIRTUALQSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSyntaxHighlighter so that we can call protected methods
class VirtualQSyntaxHighlighter : public QSyntaxHighlighter {

  public:
    // Virtual class public types (including callbacks)
    using QSyntaxHighlighter_Metacall_Callback = int (*)(QSyntaxHighlighter*, QMetaObject::Call, int, void**);
    using QSyntaxHighlighter_HighlightBlock_Callback = void (*)(QSyntaxHighlighter*, const QString&);
    using QSyntaxHighlighter_Event_Callback = bool (*)(QSyntaxHighlighter*, QEvent*);
    using QSyntaxHighlighter_EventFilter_Callback = bool (*)(QSyntaxHighlighter*, QObject*, QEvent*);
    using QSyntaxHighlighter_TimerEvent_Callback = void (*)(QSyntaxHighlighter*, QTimerEvent*);
    using QSyntaxHighlighter_ChildEvent_Callback = void (*)(QSyntaxHighlighter*, QChildEvent*);
    using QSyntaxHighlighter_CustomEvent_Callback = void (*)(QSyntaxHighlighter*, QEvent*);
    using QSyntaxHighlighter_ConnectNotify_Callback = void (*)(QSyntaxHighlighter*, const QMetaMethod&);
    using QSyntaxHighlighter_DisconnectNotify_Callback = void (*)(QSyntaxHighlighter*, const QMetaMethod&);
    using QSyntaxHighlighter_SetFormat_Callback = void (*)(QSyntaxHighlighter*, int, int, const QTextCharFormat&);
    using QSyntaxHighlighter_SetFormat2_Callback = void (*)(QSyntaxHighlighter*, int, int, const QColor&);
    using QSyntaxHighlighter_SetFormat3_Callback = void (*)(QSyntaxHighlighter*, int, int, const QFont&);
    using QSyntaxHighlighter_Format_Callback = QTextCharFormat (*)(const QSyntaxHighlighter*, int);
    using QSyntaxHighlighter_PreviousBlockState_Callback = int (*)();
    using QSyntaxHighlighter_CurrentBlockState_Callback = int (*)();
    using QSyntaxHighlighter_SetCurrentBlockState_Callback = void (*)(QSyntaxHighlighter*, int);
    using QSyntaxHighlighter_SetCurrentBlockUserData_Callback = void (*)(QSyntaxHighlighter*, QTextBlockUserData*);
    using QSyntaxHighlighter_CurrentBlockUserData_Callback = QTextBlockUserData* (*)();
    using QSyntaxHighlighter_CurrentBlock_Callback = QTextBlock (*)();
    using QSyntaxHighlighter_Sender_Callback = QObject* (*)();
    using QSyntaxHighlighter_SenderSignalIndex_Callback = int (*)();
    using QSyntaxHighlighter_Receivers_Callback = int (*)(const QSyntaxHighlighter*, const char*);
    using QSyntaxHighlighter_IsSignalConnected_Callback = bool (*)(const QSyntaxHighlighter*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSyntaxHighlighter_Metacall_Callback qsyntaxhighlighter_metacall_callback = nullptr;
    QSyntaxHighlighter_HighlightBlock_Callback qsyntaxhighlighter_highlightblock_callback = nullptr;
    QSyntaxHighlighter_Event_Callback qsyntaxhighlighter_event_callback = nullptr;
    QSyntaxHighlighter_EventFilter_Callback qsyntaxhighlighter_eventfilter_callback = nullptr;
    QSyntaxHighlighter_TimerEvent_Callback qsyntaxhighlighter_timerevent_callback = nullptr;
    QSyntaxHighlighter_ChildEvent_Callback qsyntaxhighlighter_childevent_callback = nullptr;
    QSyntaxHighlighter_CustomEvent_Callback qsyntaxhighlighter_customevent_callback = nullptr;
    QSyntaxHighlighter_ConnectNotify_Callback qsyntaxhighlighter_connectnotify_callback = nullptr;
    QSyntaxHighlighter_DisconnectNotify_Callback qsyntaxhighlighter_disconnectnotify_callback = nullptr;
    QSyntaxHighlighter_SetFormat_Callback qsyntaxhighlighter_setformat_callback = nullptr;
    QSyntaxHighlighter_SetFormat2_Callback qsyntaxhighlighter_setformat2_callback = nullptr;
    QSyntaxHighlighter_SetFormat3_Callback qsyntaxhighlighter_setformat3_callback = nullptr;
    QSyntaxHighlighter_Format_Callback qsyntaxhighlighter_format_callback = nullptr;
    QSyntaxHighlighter_PreviousBlockState_Callback qsyntaxhighlighter_previousblockstate_callback = nullptr;
    QSyntaxHighlighter_CurrentBlockState_Callback qsyntaxhighlighter_currentblockstate_callback = nullptr;
    QSyntaxHighlighter_SetCurrentBlockState_Callback qsyntaxhighlighter_setcurrentblockstate_callback = nullptr;
    QSyntaxHighlighter_SetCurrentBlockUserData_Callback qsyntaxhighlighter_setcurrentblockuserdata_callback = nullptr;
    QSyntaxHighlighter_CurrentBlockUserData_Callback qsyntaxhighlighter_currentblockuserdata_callback = nullptr;
    QSyntaxHighlighter_CurrentBlock_Callback qsyntaxhighlighter_currentblock_callback = nullptr;
    QSyntaxHighlighter_Sender_Callback qsyntaxhighlighter_sender_callback = nullptr;
    QSyntaxHighlighter_SenderSignalIndex_Callback qsyntaxhighlighter_sendersignalindex_callback = nullptr;
    QSyntaxHighlighter_Receivers_Callback qsyntaxhighlighter_receivers_callback = nullptr;
    QSyntaxHighlighter_IsSignalConnected_Callback qsyntaxhighlighter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsyntaxhighlighter_metacall_isbase = false;
    mutable bool qsyntaxhighlighter_highlightblock_isbase = false;
    mutable bool qsyntaxhighlighter_event_isbase = false;
    mutable bool qsyntaxhighlighter_eventfilter_isbase = false;
    mutable bool qsyntaxhighlighter_timerevent_isbase = false;
    mutable bool qsyntaxhighlighter_childevent_isbase = false;
    mutable bool qsyntaxhighlighter_customevent_isbase = false;
    mutable bool qsyntaxhighlighter_connectnotify_isbase = false;
    mutable bool qsyntaxhighlighter_disconnectnotify_isbase = false;
    mutable bool qsyntaxhighlighter_setformat_isbase = false;
    mutable bool qsyntaxhighlighter_setformat2_isbase = false;
    mutable bool qsyntaxhighlighter_setformat3_isbase = false;
    mutable bool qsyntaxhighlighter_format_isbase = false;
    mutable bool qsyntaxhighlighter_previousblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_currentblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_setcurrentblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_setcurrentblockuserdata_isbase = false;
    mutable bool qsyntaxhighlighter_currentblockuserdata_isbase = false;
    mutable bool qsyntaxhighlighter_currentblock_isbase = false;
    mutable bool qsyntaxhighlighter_sender_isbase = false;
    mutable bool qsyntaxhighlighter_sendersignalindex_isbase = false;
    mutable bool qsyntaxhighlighter_receivers_isbase = false;
    mutable bool qsyntaxhighlighter_issignalconnected_isbase = false;

  public:
    VirtualQSyntaxHighlighter(QObject* parent) : QSyntaxHighlighter(parent){};
    VirtualQSyntaxHighlighter(QTextDocument* parent) : QSyntaxHighlighter(parent){};

    ~VirtualQSyntaxHighlighter() {
        qsyntaxhighlighter_metacall_callback = nullptr;
        qsyntaxhighlighter_highlightblock_callback = nullptr;
        qsyntaxhighlighter_event_callback = nullptr;
        qsyntaxhighlighter_eventfilter_callback = nullptr;
        qsyntaxhighlighter_timerevent_callback = nullptr;
        qsyntaxhighlighter_childevent_callback = nullptr;
        qsyntaxhighlighter_customevent_callback = nullptr;
        qsyntaxhighlighter_connectnotify_callback = nullptr;
        qsyntaxhighlighter_disconnectnotify_callback = nullptr;
        qsyntaxhighlighter_setformat_callback = nullptr;
        qsyntaxhighlighter_setformat2_callback = nullptr;
        qsyntaxhighlighter_setformat3_callback = nullptr;
        qsyntaxhighlighter_format_callback = nullptr;
        qsyntaxhighlighter_previousblockstate_callback = nullptr;
        qsyntaxhighlighter_currentblockstate_callback = nullptr;
        qsyntaxhighlighter_setcurrentblockstate_callback = nullptr;
        qsyntaxhighlighter_setcurrentblockuserdata_callback = nullptr;
        qsyntaxhighlighter_currentblockuserdata_callback = nullptr;
        qsyntaxhighlighter_currentblock_callback = nullptr;
        qsyntaxhighlighter_sender_callback = nullptr;
        qsyntaxhighlighter_sendersignalindex_callback = nullptr;
        qsyntaxhighlighter_receivers_callback = nullptr;
        qsyntaxhighlighter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSyntaxHighlighter_Metacall_Callback(QSyntaxHighlighter_Metacall_Callback cb) { qsyntaxhighlighter_metacall_callback = cb; }
    void setQSyntaxHighlighter_HighlightBlock_Callback(QSyntaxHighlighter_HighlightBlock_Callback cb) { qsyntaxhighlighter_highlightblock_callback = cb; }
    void setQSyntaxHighlighter_Event_Callback(QSyntaxHighlighter_Event_Callback cb) { qsyntaxhighlighter_event_callback = cb; }
    void setQSyntaxHighlighter_EventFilter_Callback(QSyntaxHighlighter_EventFilter_Callback cb) { qsyntaxhighlighter_eventfilter_callback = cb; }
    void setQSyntaxHighlighter_TimerEvent_Callback(QSyntaxHighlighter_TimerEvent_Callback cb) { qsyntaxhighlighter_timerevent_callback = cb; }
    void setQSyntaxHighlighter_ChildEvent_Callback(QSyntaxHighlighter_ChildEvent_Callback cb) { qsyntaxhighlighter_childevent_callback = cb; }
    void setQSyntaxHighlighter_CustomEvent_Callback(QSyntaxHighlighter_CustomEvent_Callback cb) { qsyntaxhighlighter_customevent_callback = cb; }
    void setQSyntaxHighlighter_ConnectNotify_Callback(QSyntaxHighlighter_ConnectNotify_Callback cb) { qsyntaxhighlighter_connectnotify_callback = cb; }
    void setQSyntaxHighlighter_DisconnectNotify_Callback(QSyntaxHighlighter_DisconnectNotify_Callback cb) { qsyntaxhighlighter_disconnectnotify_callback = cb; }
    void setQSyntaxHighlighter_SetFormat_Callback(QSyntaxHighlighter_SetFormat_Callback cb) { qsyntaxhighlighter_setformat_callback = cb; }
    void setQSyntaxHighlighter_SetFormat2_Callback(QSyntaxHighlighter_SetFormat2_Callback cb) { qsyntaxhighlighter_setformat2_callback = cb; }
    void setQSyntaxHighlighter_SetFormat3_Callback(QSyntaxHighlighter_SetFormat3_Callback cb) { qsyntaxhighlighter_setformat3_callback = cb; }
    void setQSyntaxHighlighter_Format_Callback(QSyntaxHighlighter_Format_Callback cb) { qsyntaxhighlighter_format_callback = cb; }
    void setQSyntaxHighlighter_PreviousBlockState_Callback(QSyntaxHighlighter_PreviousBlockState_Callback cb) { qsyntaxhighlighter_previousblockstate_callback = cb; }
    void setQSyntaxHighlighter_CurrentBlockState_Callback(QSyntaxHighlighter_CurrentBlockState_Callback cb) { qsyntaxhighlighter_currentblockstate_callback = cb; }
    void setQSyntaxHighlighter_SetCurrentBlockState_Callback(QSyntaxHighlighter_SetCurrentBlockState_Callback cb) { qsyntaxhighlighter_setcurrentblockstate_callback = cb; }
    void setQSyntaxHighlighter_SetCurrentBlockUserData_Callback(QSyntaxHighlighter_SetCurrentBlockUserData_Callback cb) { qsyntaxhighlighter_setcurrentblockuserdata_callback = cb; }
    void setQSyntaxHighlighter_CurrentBlockUserData_Callback(QSyntaxHighlighter_CurrentBlockUserData_Callback cb) { qsyntaxhighlighter_currentblockuserdata_callback = cb; }
    void setQSyntaxHighlighter_CurrentBlock_Callback(QSyntaxHighlighter_CurrentBlock_Callback cb) { qsyntaxhighlighter_currentblock_callback = cb; }
    void setQSyntaxHighlighter_Sender_Callback(QSyntaxHighlighter_Sender_Callback cb) { qsyntaxhighlighter_sender_callback = cb; }
    void setQSyntaxHighlighter_SenderSignalIndex_Callback(QSyntaxHighlighter_SenderSignalIndex_Callback cb) { qsyntaxhighlighter_sendersignalindex_callback = cb; }
    void setQSyntaxHighlighter_Receivers_Callback(QSyntaxHighlighter_Receivers_Callback cb) { qsyntaxhighlighter_receivers_callback = cb; }
    void setQSyntaxHighlighter_IsSignalConnected_Callback(QSyntaxHighlighter_IsSignalConnected_Callback cb) { qsyntaxhighlighter_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSyntaxHighlighter_Metacall_IsBase(bool value) const { qsyntaxhighlighter_metacall_isbase = value; }
    void setQSyntaxHighlighter_HighlightBlock_IsBase(bool value) const { qsyntaxhighlighter_highlightblock_isbase = value; }
    void setQSyntaxHighlighter_Event_IsBase(bool value) const { qsyntaxhighlighter_event_isbase = value; }
    void setQSyntaxHighlighter_EventFilter_IsBase(bool value) const { qsyntaxhighlighter_eventfilter_isbase = value; }
    void setQSyntaxHighlighter_TimerEvent_IsBase(bool value) const { qsyntaxhighlighter_timerevent_isbase = value; }
    void setQSyntaxHighlighter_ChildEvent_IsBase(bool value) const { qsyntaxhighlighter_childevent_isbase = value; }
    void setQSyntaxHighlighter_CustomEvent_IsBase(bool value) const { qsyntaxhighlighter_customevent_isbase = value; }
    void setQSyntaxHighlighter_ConnectNotify_IsBase(bool value) const { qsyntaxhighlighter_connectnotify_isbase = value; }
    void setQSyntaxHighlighter_DisconnectNotify_IsBase(bool value) const { qsyntaxhighlighter_disconnectnotify_isbase = value; }
    void setQSyntaxHighlighter_SetFormat_IsBase(bool value) const { qsyntaxhighlighter_setformat_isbase = value; }
    void setQSyntaxHighlighter_SetFormat2_IsBase(bool value) const { qsyntaxhighlighter_setformat2_isbase = value; }
    void setQSyntaxHighlighter_SetFormat3_IsBase(bool value) const { qsyntaxhighlighter_setformat3_isbase = value; }
    void setQSyntaxHighlighter_Format_IsBase(bool value) const { qsyntaxhighlighter_format_isbase = value; }
    void setQSyntaxHighlighter_PreviousBlockState_IsBase(bool value) const { qsyntaxhighlighter_previousblockstate_isbase = value; }
    void setQSyntaxHighlighter_CurrentBlockState_IsBase(bool value) const { qsyntaxhighlighter_currentblockstate_isbase = value; }
    void setQSyntaxHighlighter_SetCurrentBlockState_IsBase(bool value) const { qsyntaxhighlighter_setcurrentblockstate_isbase = value; }
    void setQSyntaxHighlighter_SetCurrentBlockUserData_IsBase(bool value) const { qsyntaxhighlighter_setcurrentblockuserdata_isbase = value; }
    void setQSyntaxHighlighter_CurrentBlockUserData_IsBase(bool value) const { qsyntaxhighlighter_currentblockuserdata_isbase = value; }
    void setQSyntaxHighlighter_CurrentBlock_IsBase(bool value) const { qsyntaxhighlighter_currentblock_isbase = value; }
    void setQSyntaxHighlighter_Sender_IsBase(bool value) const { qsyntaxhighlighter_sender_isbase = value; }
    void setQSyntaxHighlighter_SenderSignalIndex_IsBase(bool value) const { qsyntaxhighlighter_sendersignalindex_isbase = value; }
    void setQSyntaxHighlighter_Receivers_IsBase(bool value) const { qsyntaxhighlighter_receivers_isbase = value; }
    void setQSyntaxHighlighter_IsSignalConnected_IsBase(bool value) const { qsyntaxhighlighter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsyntaxhighlighter_metacall_isbase) {
            qsyntaxhighlighter_metacall_isbase = false;
            return QSyntaxHighlighter::qt_metacall(param1, param2, param3);
        } else if (qsyntaxhighlighter_metacall_callback != nullptr) {
            return qsyntaxhighlighter_metacall_callback(this, param1, param2, param3);
        } else {
            return QSyntaxHighlighter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        qsyntaxhighlighter_highlightblock_callback(this, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsyntaxhighlighter_event_isbase) {
            qsyntaxhighlighter_event_isbase = false;
            return QSyntaxHighlighter::event(event);
        } else if (qsyntaxhighlighter_event_callback != nullptr) {
            return qsyntaxhighlighter_event_callback(this, event);
        } else {
            return QSyntaxHighlighter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsyntaxhighlighter_eventfilter_isbase) {
            qsyntaxhighlighter_eventfilter_isbase = false;
            return QSyntaxHighlighter::eventFilter(watched, event);
        } else if (qsyntaxhighlighter_eventfilter_callback != nullptr) {
            return qsyntaxhighlighter_eventfilter_callback(this, watched, event);
        } else {
            return QSyntaxHighlighter::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsyntaxhighlighter_timerevent_isbase) {
            qsyntaxhighlighter_timerevent_isbase = false;
            QSyntaxHighlighter::timerEvent(event);
        } else if (qsyntaxhighlighter_timerevent_callback != nullptr) {
            qsyntaxhighlighter_timerevent_callback(this, event);
        } else {
            QSyntaxHighlighter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsyntaxhighlighter_childevent_isbase) {
            qsyntaxhighlighter_childevent_isbase = false;
            QSyntaxHighlighter::childEvent(event);
        } else if (qsyntaxhighlighter_childevent_callback != nullptr) {
            qsyntaxhighlighter_childevent_callback(this, event);
        } else {
            QSyntaxHighlighter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsyntaxhighlighter_customevent_isbase) {
            qsyntaxhighlighter_customevent_isbase = false;
            QSyntaxHighlighter::customEvent(event);
        } else if (qsyntaxhighlighter_customevent_callback != nullptr) {
            qsyntaxhighlighter_customevent_callback(this, event);
        } else {
            QSyntaxHighlighter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsyntaxhighlighter_connectnotify_isbase) {
            qsyntaxhighlighter_connectnotify_isbase = false;
            QSyntaxHighlighter::connectNotify(signal);
        } else if (qsyntaxhighlighter_connectnotify_callback != nullptr) {
            qsyntaxhighlighter_connectnotify_callback(this, signal);
        } else {
            QSyntaxHighlighter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsyntaxhighlighter_disconnectnotify_isbase) {
            qsyntaxhighlighter_disconnectnotify_isbase = false;
            QSyntaxHighlighter::disconnectNotify(signal);
        } else if (qsyntaxhighlighter_disconnectnotify_callback != nullptr) {
            qsyntaxhighlighter_disconnectnotify_callback(this, signal);
        } else {
            QSyntaxHighlighter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QTextCharFormat& format) {
        if (qsyntaxhighlighter_setformat_isbase) {
            qsyntaxhighlighter_setformat_isbase = false;
            QSyntaxHighlighter::setFormat(start, count, format);
        } else if (qsyntaxhighlighter_setformat_callback != nullptr) {
            qsyntaxhighlighter_setformat_callback(this, start, count, format);
        } else {
            QSyntaxHighlighter::setFormat(start, count, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QColor& color) {
        if (qsyntaxhighlighter_setformat2_isbase) {
            qsyntaxhighlighter_setformat2_isbase = false;
            QSyntaxHighlighter::setFormat(start, count, color);
        } else if (qsyntaxhighlighter_setformat2_callback != nullptr) {
            qsyntaxhighlighter_setformat2_callback(this, start, count, color);
        } else {
            QSyntaxHighlighter::setFormat(start, count, color);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QFont& font) {
        if (qsyntaxhighlighter_setformat3_isbase) {
            qsyntaxhighlighter_setformat3_isbase = false;
            QSyntaxHighlighter::setFormat(start, count, font);
        } else if (qsyntaxhighlighter_setformat3_callback != nullptr) {
            qsyntaxhighlighter_setformat3_callback(this, start, count, font);
        } else {
            QSyntaxHighlighter::setFormat(start, count, font);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextCharFormat format(int pos) const {
        if (qsyntaxhighlighter_format_isbase) {
            qsyntaxhighlighter_format_isbase = false;
            return QSyntaxHighlighter::format(pos);
        } else if (qsyntaxhighlighter_format_callback != nullptr) {
            return qsyntaxhighlighter_format_callback(this, pos);
        } else {
            return QSyntaxHighlighter::format(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    int previousBlockState() const {
        if (qsyntaxhighlighter_previousblockstate_isbase) {
            qsyntaxhighlighter_previousblockstate_isbase = false;
            return QSyntaxHighlighter::previousBlockState();
        } else if (qsyntaxhighlighter_previousblockstate_callback != nullptr) {
            return qsyntaxhighlighter_previousblockstate_callback();
        } else {
            return QSyntaxHighlighter::previousBlockState();
        }
    }

    // Virtual method for C ABI access and custom callback
    int currentBlockState() const {
        if (qsyntaxhighlighter_currentblockstate_isbase) {
            qsyntaxhighlighter_currentblockstate_isbase = false;
            return QSyntaxHighlighter::currentBlockState();
        } else if (qsyntaxhighlighter_currentblockstate_callback != nullptr) {
            return qsyntaxhighlighter_currentblockstate_callback();
        } else {
            return QSyntaxHighlighter::currentBlockState();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockState(int newState) {
        if (qsyntaxhighlighter_setcurrentblockstate_isbase) {
            qsyntaxhighlighter_setcurrentblockstate_isbase = false;
            QSyntaxHighlighter::setCurrentBlockState(newState);
        } else if (qsyntaxhighlighter_setcurrentblockstate_callback != nullptr) {
            qsyntaxhighlighter_setcurrentblockstate_callback(this, newState);
        } else {
            QSyntaxHighlighter::setCurrentBlockState(newState);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockUserData(QTextBlockUserData* data) {
        if (qsyntaxhighlighter_setcurrentblockuserdata_isbase) {
            qsyntaxhighlighter_setcurrentblockuserdata_isbase = false;
            QSyntaxHighlighter::setCurrentBlockUserData(data);
        } else if (qsyntaxhighlighter_setcurrentblockuserdata_callback != nullptr) {
            qsyntaxhighlighter_setcurrentblockuserdata_callback(this, data);
        } else {
            QSyntaxHighlighter::setCurrentBlockUserData(data);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextBlockUserData* currentBlockUserData() const {
        if (qsyntaxhighlighter_currentblockuserdata_isbase) {
            qsyntaxhighlighter_currentblockuserdata_isbase = false;
            return QSyntaxHighlighter::currentBlockUserData();
        } else if (qsyntaxhighlighter_currentblockuserdata_callback != nullptr) {
            return qsyntaxhighlighter_currentblockuserdata_callback();
        } else {
            return QSyntaxHighlighter::currentBlockUserData();
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock currentBlock() const {
        if (qsyntaxhighlighter_currentblock_isbase) {
            qsyntaxhighlighter_currentblock_isbase = false;
            return QSyntaxHighlighter::currentBlock();
        } else if (qsyntaxhighlighter_currentblock_callback != nullptr) {
            return qsyntaxhighlighter_currentblock_callback();
        } else {
            return QSyntaxHighlighter::currentBlock();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsyntaxhighlighter_sender_isbase) {
            qsyntaxhighlighter_sender_isbase = false;
            return QSyntaxHighlighter::sender();
        } else if (qsyntaxhighlighter_sender_callback != nullptr) {
            return qsyntaxhighlighter_sender_callback();
        } else {
            return QSyntaxHighlighter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsyntaxhighlighter_sendersignalindex_isbase) {
            qsyntaxhighlighter_sendersignalindex_isbase = false;
            return QSyntaxHighlighter::senderSignalIndex();
        } else if (qsyntaxhighlighter_sendersignalindex_callback != nullptr) {
            return qsyntaxhighlighter_sendersignalindex_callback();
        } else {
            return QSyntaxHighlighter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsyntaxhighlighter_receivers_isbase) {
            qsyntaxhighlighter_receivers_isbase = false;
            return QSyntaxHighlighter::receivers(signal);
        } else if (qsyntaxhighlighter_receivers_callback != nullptr) {
            return qsyntaxhighlighter_receivers_callback(this, signal);
        } else {
            return QSyntaxHighlighter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsyntaxhighlighter_issignalconnected_isbase) {
            qsyntaxhighlighter_issignalconnected_isbase = false;
            return QSyntaxHighlighter::isSignalConnected(signal);
        } else if (qsyntaxhighlighter_issignalconnected_callback != nullptr) {
            return qsyntaxhighlighter_issignalconnected_callback(this, signal);
        } else {
            return QSyntaxHighlighter::isSignalConnected(signal);
        }
    }
};

#endif

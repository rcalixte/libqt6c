#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQWAVEDECODER_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWaveDecoder so that we can call protected methods
class VirtualQWaveDecoder : public QWaveDecoder {

  public:
    // Virtual class public types (including callbacks)
    using QWaveDecoder_Metacall_Callback = int (*)(QWaveDecoder*, QMetaObject::Call, int, void**);
    using QWaveDecoder_Open_Callback = bool (*)(QWaveDecoder*, QIODevice::OpenMode);
    using QWaveDecoder_Close_Callback = void (*)();
    using QWaveDecoder_Seek_Callback = bool (*)(QWaveDecoder*, qint64);
    using QWaveDecoder_Pos_Callback = qint64 (*)();
    using QWaveDecoder_Size_Callback = qint64 (*)();
    using QWaveDecoder_IsSequential_Callback = bool (*)();
    using QWaveDecoder_BytesAvailable_Callback = qint64 (*)();
    using QWaveDecoder_AtEnd_Callback = bool (*)();
    using QWaveDecoder_Reset_Callback = bool (*)();
    using QWaveDecoder_BytesToWrite_Callback = qint64 (*)();
    using QWaveDecoder_CanReadLine_Callback = bool (*)();
    using QWaveDecoder_WaitForReadyRead_Callback = bool (*)(QWaveDecoder*, int);
    using QWaveDecoder_WaitForBytesWritten_Callback = bool (*)(QWaveDecoder*, int);
    using QWaveDecoder_ReadLineData_Callback = qint64 (*)(QWaveDecoder*, char*, qint64);
    using QWaveDecoder_SkipData_Callback = qint64 (*)(QWaveDecoder*, qint64);
    using QWaveDecoder_Event_Callback = bool (*)(QWaveDecoder*, QEvent*);
    using QWaveDecoder_EventFilter_Callback = bool (*)(QWaveDecoder*, QObject*, QEvent*);
    using QWaveDecoder_TimerEvent_Callback = void (*)(QWaveDecoder*, QTimerEvent*);
    using QWaveDecoder_ChildEvent_Callback = void (*)(QWaveDecoder*, QChildEvent*);
    using QWaveDecoder_CustomEvent_Callback = void (*)(QWaveDecoder*, QEvent*);
    using QWaveDecoder_ConnectNotify_Callback = void (*)(QWaveDecoder*, const QMetaMethod&);
    using QWaveDecoder_DisconnectNotify_Callback = void (*)(QWaveDecoder*, const QMetaMethod&);
    using QWaveDecoder_SetOpenMode_Callback = void (*)(QWaveDecoder*, QIODeviceBase::OpenMode);
    using QWaveDecoder_SetErrorString_Callback = void (*)(QWaveDecoder*, const QString&);
    using QWaveDecoder_Sender_Callback = QObject* (*)();
    using QWaveDecoder_SenderSignalIndex_Callback = int (*)();
    using QWaveDecoder_Receivers_Callback = int (*)(const QWaveDecoder*, const char*);
    using QWaveDecoder_IsSignalConnected_Callback = bool (*)(const QWaveDecoder*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QWaveDecoder_Metacall_Callback qwavedecoder_metacall_callback = nullptr;
    QWaveDecoder_Open_Callback qwavedecoder_open_callback = nullptr;
    QWaveDecoder_Close_Callback qwavedecoder_close_callback = nullptr;
    QWaveDecoder_Seek_Callback qwavedecoder_seek_callback = nullptr;
    QWaveDecoder_Pos_Callback qwavedecoder_pos_callback = nullptr;
    QWaveDecoder_Size_Callback qwavedecoder_size_callback = nullptr;
    QWaveDecoder_IsSequential_Callback qwavedecoder_issequential_callback = nullptr;
    QWaveDecoder_BytesAvailable_Callback qwavedecoder_bytesavailable_callback = nullptr;
    QWaveDecoder_AtEnd_Callback qwavedecoder_atend_callback = nullptr;
    QWaveDecoder_Reset_Callback qwavedecoder_reset_callback = nullptr;
    QWaveDecoder_BytesToWrite_Callback qwavedecoder_bytestowrite_callback = nullptr;
    QWaveDecoder_CanReadLine_Callback qwavedecoder_canreadline_callback = nullptr;
    QWaveDecoder_WaitForReadyRead_Callback qwavedecoder_waitforreadyread_callback = nullptr;
    QWaveDecoder_WaitForBytesWritten_Callback qwavedecoder_waitforbyteswritten_callback = nullptr;
    QWaveDecoder_ReadLineData_Callback qwavedecoder_readlinedata_callback = nullptr;
    QWaveDecoder_SkipData_Callback qwavedecoder_skipdata_callback = nullptr;
    QWaveDecoder_Event_Callback qwavedecoder_event_callback = nullptr;
    QWaveDecoder_EventFilter_Callback qwavedecoder_eventfilter_callback = nullptr;
    QWaveDecoder_TimerEvent_Callback qwavedecoder_timerevent_callback = nullptr;
    QWaveDecoder_ChildEvent_Callback qwavedecoder_childevent_callback = nullptr;
    QWaveDecoder_CustomEvent_Callback qwavedecoder_customevent_callback = nullptr;
    QWaveDecoder_ConnectNotify_Callback qwavedecoder_connectnotify_callback = nullptr;
    QWaveDecoder_DisconnectNotify_Callback qwavedecoder_disconnectnotify_callback = nullptr;
    QWaveDecoder_SetOpenMode_Callback qwavedecoder_setopenmode_callback = nullptr;
    QWaveDecoder_SetErrorString_Callback qwavedecoder_seterrorstring_callback = nullptr;
    QWaveDecoder_Sender_Callback qwavedecoder_sender_callback = nullptr;
    QWaveDecoder_SenderSignalIndex_Callback qwavedecoder_sendersignalindex_callback = nullptr;
    QWaveDecoder_Receivers_Callback qwavedecoder_receivers_callback = nullptr;
    QWaveDecoder_IsSignalConnected_Callback qwavedecoder_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwavedecoder_metacall_isbase = false;
    mutable bool qwavedecoder_open_isbase = false;
    mutable bool qwavedecoder_close_isbase = false;
    mutable bool qwavedecoder_seek_isbase = false;
    mutable bool qwavedecoder_pos_isbase = false;
    mutable bool qwavedecoder_size_isbase = false;
    mutable bool qwavedecoder_issequential_isbase = false;
    mutable bool qwavedecoder_bytesavailable_isbase = false;
    mutable bool qwavedecoder_atend_isbase = false;
    mutable bool qwavedecoder_reset_isbase = false;
    mutable bool qwavedecoder_bytestowrite_isbase = false;
    mutable bool qwavedecoder_canreadline_isbase = false;
    mutable bool qwavedecoder_waitforreadyread_isbase = false;
    mutable bool qwavedecoder_waitforbyteswritten_isbase = false;
    mutable bool qwavedecoder_readlinedata_isbase = false;
    mutable bool qwavedecoder_skipdata_isbase = false;
    mutable bool qwavedecoder_event_isbase = false;
    mutable bool qwavedecoder_eventfilter_isbase = false;
    mutable bool qwavedecoder_timerevent_isbase = false;
    mutable bool qwavedecoder_childevent_isbase = false;
    mutable bool qwavedecoder_customevent_isbase = false;
    mutable bool qwavedecoder_connectnotify_isbase = false;
    mutable bool qwavedecoder_disconnectnotify_isbase = false;
    mutable bool qwavedecoder_setopenmode_isbase = false;
    mutable bool qwavedecoder_seterrorstring_isbase = false;
    mutable bool qwavedecoder_sender_isbase = false;
    mutable bool qwavedecoder_sendersignalindex_isbase = false;
    mutable bool qwavedecoder_receivers_isbase = false;
    mutable bool qwavedecoder_issignalconnected_isbase = false;

  public:
    VirtualQWaveDecoder(QIODevice* device) : QWaveDecoder(device){};
    VirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format) : QWaveDecoder(device, format){};
    VirtualQWaveDecoder(QIODevice* device, QObject* parent) : QWaveDecoder(device, parent){};
    VirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format, QObject* parent) : QWaveDecoder(device, format, parent){};

    ~VirtualQWaveDecoder() {
        qwavedecoder_metacall_callback = nullptr;
        qwavedecoder_open_callback = nullptr;
        qwavedecoder_close_callback = nullptr;
        qwavedecoder_seek_callback = nullptr;
        qwavedecoder_pos_callback = nullptr;
        qwavedecoder_size_callback = nullptr;
        qwavedecoder_issequential_callback = nullptr;
        qwavedecoder_bytesavailable_callback = nullptr;
        qwavedecoder_atend_callback = nullptr;
        qwavedecoder_reset_callback = nullptr;
        qwavedecoder_bytestowrite_callback = nullptr;
        qwavedecoder_canreadline_callback = nullptr;
        qwavedecoder_waitforreadyread_callback = nullptr;
        qwavedecoder_waitforbyteswritten_callback = nullptr;
        qwavedecoder_readlinedata_callback = nullptr;
        qwavedecoder_skipdata_callback = nullptr;
        qwavedecoder_event_callback = nullptr;
        qwavedecoder_eventfilter_callback = nullptr;
        qwavedecoder_timerevent_callback = nullptr;
        qwavedecoder_childevent_callback = nullptr;
        qwavedecoder_customevent_callback = nullptr;
        qwavedecoder_connectnotify_callback = nullptr;
        qwavedecoder_disconnectnotify_callback = nullptr;
        qwavedecoder_setopenmode_callback = nullptr;
        qwavedecoder_seterrorstring_callback = nullptr;
        qwavedecoder_sender_callback = nullptr;
        qwavedecoder_sendersignalindex_callback = nullptr;
        qwavedecoder_receivers_callback = nullptr;
        qwavedecoder_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQWaveDecoder_Metacall_Callback(QWaveDecoder_Metacall_Callback cb) { qwavedecoder_metacall_callback = cb; }
    void setQWaveDecoder_Open_Callback(QWaveDecoder_Open_Callback cb) { qwavedecoder_open_callback = cb; }
    void setQWaveDecoder_Close_Callback(QWaveDecoder_Close_Callback cb) { qwavedecoder_close_callback = cb; }
    void setQWaveDecoder_Seek_Callback(QWaveDecoder_Seek_Callback cb) { qwavedecoder_seek_callback = cb; }
    void setQWaveDecoder_Pos_Callback(QWaveDecoder_Pos_Callback cb) { qwavedecoder_pos_callback = cb; }
    void setQWaveDecoder_Size_Callback(QWaveDecoder_Size_Callback cb) { qwavedecoder_size_callback = cb; }
    void setQWaveDecoder_IsSequential_Callback(QWaveDecoder_IsSequential_Callback cb) { qwavedecoder_issequential_callback = cb; }
    void setQWaveDecoder_BytesAvailable_Callback(QWaveDecoder_BytesAvailable_Callback cb) { qwavedecoder_bytesavailable_callback = cb; }
    void setQWaveDecoder_AtEnd_Callback(QWaveDecoder_AtEnd_Callback cb) { qwavedecoder_atend_callback = cb; }
    void setQWaveDecoder_Reset_Callback(QWaveDecoder_Reset_Callback cb) { qwavedecoder_reset_callback = cb; }
    void setQWaveDecoder_BytesToWrite_Callback(QWaveDecoder_BytesToWrite_Callback cb) { qwavedecoder_bytestowrite_callback = cb; }
    void setQWaveDecoder_CanReadLine_Callback(QWaveDecoder_CanReadLine_Callback cb) { qwavedecoder_canreadline_callback = cb; }
    void setQWaveDecoder_WaitForReadyRead_Callback(QWaveDecoder_WaitForReadyRead_Callback cb) { qwavedecoder_waitforreadyread_callback = cb; }
    void setQWaveDecoder_WaitForBytesWritten_Callback(QWaveDecoder_WaitForBytesWritten_Callback cb) { qwavedecoder_waitforbyteswritten_callback = cb; }
    void setQWaveDecoder_ReadLineData_Callback(QWaveDecoder_ReadLineData_Callback cb) { qwavedecoder_readlinedata_callback = cb; }
    void setQWaveDecoder_SkipData_Callback(QWaveDecoder_SkipData_Callback cb) { qwavedecoder_skipdata_callback = cb; }
    void setQWaveDecoder_Event_Callback(QWaveDecoder_Event_Callback cb) { qwavedecoder_event_callback = cb; }
    void setQWaveDecoder_EventFilter_Callback(QWaveDecoder_EventFilter_Callback cb) { qwavedecoder_eventfilter_callback = cb; }
    void setQWaveDecoder_TimerEvent_Callback(QWaveDecoder_TimerEvent_Callback cb) { qwavedecoder_timerevent_callback = cb; }
    void setQWaveDecoder_ChildEvent_Callback(QWaveDecoder_ChildEvent_Callback cb) { qwavedecoder_childevent_callback = cb; }
    void setQWaveDecoder_CustomEvent_Callback(QWaveDecoder_CustomEvent_Callback cb) { qwavedecoder_customevent_callback = cb; }
    void setQWaveDecoder_ConnectNotify_Callback(QWaveDecoder_ConnectNotify_Callback cb) { qwavedecoder_connectnotify_callback = cb; }
    void setQWaveDecoder_DisconnectNotify_Callback(QWaveDecoder_DisconnectNotify_Callback cb) { qwavedecoder_disconnectnotify_callback = cb; }
    void setQWaveDecoder_SetOpenMode_Callback(QWaveDecoder_SetOpenMode_Callback cb) { qwavedecoder_setopenmode_callback = cb; }
    void setQWaveDecoder_SetErrorString_Callback(QWaveDecoder_SetErrorString_Callback cb) { qwavedecoder_seterrorstring_callback = cb; }
    void setQWaveDecoder_Sender_Callback(QWaveDecoder_Sender_Callback cb) { qwavedecoder_sender_callback = cb; }
    void setQWaveDecoder_SenderSignalIndex_Callback(QWaveDecoder_SenderSignalIndex_Callback cb) { qwavedecoder_sendersignalindex_callback = cb; }
    void setQWaveDecoder_Receivers_Callback(QWaveDecoder_Receivers_Callback cb) { qwavedecoder_receivers_callback = cb; }
    void setQWaveDecoder_IsSignalConnected_Callback(QWaveDecoder_IsSignalConnected_Callback cb) { qwavedecoder_issignalconnected_callback = cb; }

    // Base flag setters
    void setQWaveDecoder_Metacall_IsBase(bool value) const { qwavedecoder_metacall_isbase = value; }
    void setQWaveDecoder_Open_IsBase(bool value) const { qwavedecoder_open_isbase = value; }
    void setQWaveDecoder_Close_IsBase(bool value) const { qwavedecoder_close_isbase = value; }
    void setQWaveDecoder_Seek_IsBase(bool value) const { qwavedecoder_seek_isbase = value; }
    void setQWaveDecoder_Pos_IsBase(bool value) const { qwavedecoder_pos_isbase = value; }
    void setQWaveDecoder_Size_IsBase(bool value) const { qwavedecoder_size_isbase = value; }
    void setQWaveDecoder_IsSequential_IsBase(bool value) const { qwavedecoder_issequential_isbase = value; }
    void setQWaveDecoder_BytesAvailable_IsBase(bool value) const { qwavedecoder_bytesavailable_isbase = value; }
    void setQWaveDecoder_AtEnd_IsBase(bool value) const { qwavedecoder_atend_isbase = value; }
    void setQWaveDecoder_Reset_IsBase(bool value) const { qwavedecoder_reset_isbase = value; }
    void setQWaveDecoder_BytesToWrite_IsBase(bool value) const { qwavedecoder_bytestowrite_isbase = value; }
    void setQWaveDecoder_CanReadLine_IsBase(bool value) const { qwavedecoder_canreadline_isbase = value; }
    void setQWaveDecoder_WaitForReadyRead_IsBase(bool value) const { qwavedecoder_waitforreadyread_isbase = value; }
    void setQWaveDecoder_WaitForBytesWritten_IsBase(bool value) const { qwavedecoder_waitforbyteswritten_isbase = value; }
    void setQWaveDecoder_ReadLineData_IsBase(bool value) const { qwavedecoder_readlinedata_isbase = value; }
    void setQWaveDecoder_SkipData_IsBase(bool value) const { qwavedecoder_skipdata_isbase = value; }
    void setQWaveDecoder_Event_IsBase(bool value) const { qwavedecoder_event_isbase = value; }
    void setQWaveDecoder_EventFilter_IsBase(bool value) const { qwavedecoder_eventfilter_isbase = value; }
    void setQWaveDecoder_TimerEvent_IsBase(bool value) const { qwavedecoder_timerevent_isbase = value; }
    void setQWaveDecoder_ChildEvent_IsBase(bool value) const { qwavedecoder_childevent_isbase = value; }
    void setQWaveDecoder_CustomEvent_IsBase(bool value) const { qwavedecoder_customevent_isbase = value; }
    void setQWaveDecoder_ConnectNotify_IsBase(bool value) const { qwavedecoder_connectnotify_isbase = value; }
    void setQWaveDecoder_DisconnectNotify_IsBase(bool value) const { qwavedecoder_disconnectnotify_isbase = value; }
    void setQWaveDecoder_SetOpenMode_IsBase(bool value) const { qwavedecoder_setopenmode_isbase = value; }
    void setQWaveDecoder_SetErrorString_IsBase(bool value) const { qwavedecoder_seterrorstring_isbase = value; }
    void setQWaveDecoder_Sender_IsBase(bool value) const { qwavedecoder_sender_isbase = value; }
    void setQWaveDecoder_SenderSignalIndex_IsBase(bool value) const { qwavedecoder_sendersignalindex_isbase = value; }
    void setQWaveDecoder_Receivers_IsBase(bool value) const { qwavedecoder_receivers_isbase = value; }
    void setQWaveDecoder_IsSignalConnected_IsBase(bool value) const { qwavedecoder_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwavedecoder_metacall_isbase) {
            qwavedecoder_metacall_isbase = false;
            return QWaveDecoder::qt_metacall(param1, param2, param3);
        } else if (qwavedecoder_metacall_callback != nullptr) {
            return qwavedecoder_metacall_callback(this, param1, param2, param3);
        } else {
            return QWaveDecoder::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (qwavedecoder_open_isbase) {
            qwavedecoder_open_isbase = false;
            return QWaveDecoder::open(mode);
        } else if (qwavedecoder_open_callback != nullptr) {
            return qwavedecoder_open_callback(this, mode);
        } else {
            return QWaveDecoder::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qwavedecoder_close_isbase) {
            qwavedecoder_close_isbase = false;
            QWaveDecoder::close();
        } else if (qwavedecoder_close_callback != nullptr) {
            qwavedecoder_close_callback();
        } else {
            QWaveDecoder::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qwavedecoder_seek_isbase) {
            qwavedecoder_seek_isbase = false;
            return QWaveDecoder::seek(pos);
        } else if (qwavedecoder_seek_callback != nullptr) {
            return qwavedecoder_seek_callback(this, pos);
        } else {
            return QWaveDecoder::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qwavedecoder_pos_isbase) {
            qwavedecoder_pos_isbase = false;
            return QWaveDecoder::pos();
        } else if (qwavedecoder_pos_callback != nullptr) {
            return qwavedecoder_pos_callback();
        } else {
            return QWaveDecoder::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qwavedecoder_size_isbase) {
            qwavedecoder_size_isbase = false;
            return QWaveDecoder::size();
        } else if (qwavedecoder_size_callback != nullptr) {
            return qwavedecoder_size_callback();
        } else {
            return QWaveDecoder::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qwavedecoder_issequential_isbase) {
            qwavedecoder_issequential_isbase = false;
            return QWaveDecoder::isSequential();
        } else if (qwavedecoder_issequential_callback != nullptr) {
            return qwavedecoder_issequential_callback();
        } else {
            return QWaveDecoder::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qwavedecoder_bytesavailable_isbase) {
            qwavedecoder_bytesavailable_isbase = false;
            return QWaveDecoder::bytesAvailable();
        } else if (qwavedecoder_bytesavailable_callback != nullptr) {
            return qwavedecoder_bytesavailable_callback();
        } else {
            return QWaveDecoder::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qwavedecoder_atend_isbase) {
            qwavedecoder_atend_isbase = false;
            return QWaveDecoder::atEnd();
        } else if (qwavedecoder_atend_callback != nullptr) {
            return qwavedecoder_atend_callback();
        } else {
            return QWaveDecoder::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qwavedecoder_reset_isbase) {
            qwavedecoder_reset_isbase = false;
            return QWaveDecoder::reset();
        } else if (qwavedecoder_reset_callback != nullptr) {
            return qwavedecoder_reset_callback();
        } else {
            return QWaveDecoder::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qwavedecoder_bytestowrite_isbase) {
            qwavedecoder_bytestowrite_isbase = false;
            return QWaveDecoder::bytesToWrite();
        } else if (qwavedecoder_bytestowrite_callback != nullptr) {
            return qwavedecoder_bytestowrite_callback();
        } else {
            return QWaveDecoder::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qwavedecoder_canreadline_isbase) {
            qwavedecoder_canreadline_isbase = false;
            return QWaveDecoder::canReadLine();
        } else if (qwavedecoder_canreadline_callback != nullptr) {
            return qwavedecoder_canreadline_callback();
        } else {
            return QWaveDecoder::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qwavedecoder_waitforreadyread_isbase) {
            qwavedecoder_waitforreadyread_isbase = false;
            return QWaveDecoder::waitForReadyRead(msecs);
        } else if (qwavedecoder_waitforreadyread_callback != nullptr) {
            return qwavedecoder_waitforreadyread_callback(this, msecs);
        } else {
            return QWaveDecoder::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qwavedecoder_waitforbyteswritten_isbase) {
            qwavedecoder_waitforbyteswritten_isbase = false;
            return QWaveDecoder::waitForBytesWritten(msecs);
        } else if (qwavedecoder_waitforbyteswritten_callback != nullptr) {
            return qwavedecoder_waitforbyteswritten_callback(this, msecs);
        } else {
            return QWaveDecoder::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qwavedecoder_readlinedata_isbase) {
            qwavedecoder_readlinedata_isbase = false;
            return QWaveDecoder::readLineData(data, maxlen);
        } else if (qwavedecoder_readlinedata_callback != nullptr) {
            return qwavedecoder_readlinedata_callback(this, data, maxlen);
        } else {
            return QWaveDecoder::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qwavedecoder_skipdata_isbase) {
            qwavedecoder_skipdata_isbase = false;
            return QWaveDecoder::skipData(maxSize);
        } else if (qwavedecoder_skipdata_callback != nullptr) {
            return qwavedecoder_skipdata_callback(this, maxSize);
        } else {
            return QWaveDecoder::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwavedecoder_event_isbase) {
            qwavedecoder_event_isbase = false;
            return QWaveDecoder::event(event);
        } else if (qwavedecoder_event_callback != nullptr) {
            return qwavedecoder_event_callback(this, event);
        } else {
            return QWaveDecoder::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwavedecoder_eventfilter_isbase) {
            qwavedecoder_eventfilter_isbase = false;
            return QWaveDecoder::eventFilter(watched, event);
        } else if (qwavedecoder_eventfilter_callback != nullptr) {
            return qwavedecoder_eventfilter_callback(this, watched, event);
        } else {
            return QWaveDecoder::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwavedecoder_timerevent_isbase) {
            qwavedecoder_timerevent_isbase = false;
            QWaveDecoder::timerEvent(event);
        } else if (qwavedecoder_timerevent_callback != nullptr) {
            qwavedecoder_timerevent_callback(this, event);
        } else {
            QWaveDecoder::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwavedecoder_childevent_isbase) {
            qwavedecoder_childevent_isbase = false;
            QWaveDecoder::childEvent(event);
        } else if (qwavedecoder_childevent_callback != nullptr) {
            qwavedecoder_childevent_callback(this, event);
        } else {
            QWaveDecoder::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwavedecoder_customevent_isbase) {
            qwavedecoder_customevent_isbase = false;
            QWaveDecoder::customEvent(event);
        } else if (qwavedecoder_customevent_callback != nullptr) {
            qwavedecoder_customevent_callback(this, event);
        } else {
            QWaveDecoder::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwavedecoder_connectnotify_isbase) {
            qwavedecoder_connectnotify_isbase = false;
            QWaveDecoder::connectNotify(signal);
        } else if (qwavedecoder_connectnotify_callback != nullptr) {
            qwavedecoder_connectnotify_callback(this, signal);
        } else {
            QWaveDecoder::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwavedecoder_disconnectnotify_isbase) {
            qwavedecoder_disconnectnotify_isbase = false;
            QWaveDecoder::disconnectNotify(signal);
        } else if (qwavedecoder_disconnectnotify_callback != nullptr) {
            qwavedecoder_disconnectnotify_callback(this, signal);
        } else {
            QWaveDecoder::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qwavedecoder_setopenmode_isbase) {
            qwavedecoder_setopenmode_isbase = false;
            QWaveDecoder::setOpenMode(openMode);
        } else if (qwavedecoder_setopenmode_callback != nullptr) {
            qwavedecoder_setopenmode_callback(this, openMode);
        } else {
            QWaveDecoder::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qwavedecoder_seterrorstring_isbase) {
            qwavedecoder_seterrorstring_isbase = false;
            QWaveDecoder::setErrorString(errorString);
        } else if (qwavedecoder_seterrorstring_callback != nullptr) {
            qwavedecoder_seterrorstring_callback(this, errorString);
        } else {
            QWaveDecoder::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwavedecoder_sender_isbase) {
            qwavedecoder_sender_isbase = false;
            return QWaveDecoder::sender();
        } else if (qwavedecoder_sender_callback != nullptr) {
            return qwavedecoder_sender_callback();
        } else {
            return QWaveDecoder::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwavedecoder_sendersignalindex_isbase) {
            qwavedecoder_sendersignalindex_isbase = false;
            return QWaveDecoder::senderSignalIndex();
        } else if (qwavedecoder_sendersignalindex_callback != nullptr) {
            return qwavedecoder_sendersignalindex_callback();
        } else {
            return QWaveDecoder::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwavedecoder_receivers_isbase) {
            qwavedecoder_receivers_isbase = false;
            return QWaveDecoder::receivers(signal);
        } else if (qwavedecoder_receivers_callback != nullptr) {
            return qwavedecoder_receivers_callback(this, signal);
        } else {
            return QWaveDecoder::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwavedecoder_issignalconnected_isbase) {
            qwavedecoder_issignalconnected_isbase = false;
            return QWaveDecoder::isSignalConnected(signal);
        } else if (qwavedecoder_issignalconnected_callback != nullptr) {
            return qwavedecoder_issignalconnected_callback(this, signal);
        } else {
            return QWaveDecoder::isSignalConnected(signal);
        }
    }
};

#endif

#pragma once
#ifndef SRCC_LIBVIRTUALQIODEVICE_H
#define SRCC_LIBVIRTUALQIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIODevice so that we can call protected methods
class VirtualQIODevice : public QIODevice {

  public:
    // Virtual class public types (including callbacks)
    using QIODevice_Metacall_Callback = int (*)(QIODevice*, QMetaObject::Call, int, void**);
    using QIODevice_IsSequential_Callback = bool (*)();
    using QIODevice_Open_Callback = bool (*)(QIODevice*, QIODeviceBase::OpenMode);
    using QIODevice_Close_Callback = void (*)();
    using QIODevice_Pos_Callback = qint64 (*)();
    using QIODevice_Size_Callback = qint64 (*)();
    using QIODevice_Seek_Callback = bool (*)(QIODevice*, qint64);
    using QIODevice_AtEnd_Callback = bool (*)();
    using QIODevice_Reset_Callback = bool (*)();
    using QIODevice_BytesAvailable_Callback = qint64 (*)();
    using QIODevice_BytesToWrite_Callback = qint64 (*)();
    using QIODevice_CanReadLine_Callback = bool (*)();
    using QIODevice_WaitForReadyRead_Callback = bool (*)(QIODevice*, int);
    using QIODevice_WaitForBytesWritten_Callback = bool (*)(QIODevice*, int);
    using QIODevice_ReadData_Callback = qint64 (*)(QIODevice*, char*, qint64);
    using QIODevice_ReadLineData_Callback = qint64 (*)(QIODevice*, char*, qint64);
    using QIODevice_SkipData_Callback = qint64 (*)(QIODevice*, qint64);
    using QIODevice_WriteData_Callback = qint64 (*)(QIODevice*, const char*, qint64);
    using QIODevice_Event_Callback = bool (*)(QIODevice*, QEvent*);
    using QIODevice_EventFilter_Callback = bool (*)(QIODevice*, QObject*, QEvent*);
    using QIODevice_TimerEvent_Callback = void (*)(QIODevice*, QTimerEvent*);
    using QIODevice_ChildEvent_Callback = void (*)(QIODevice*, QChildEvent*);
    using QIODevice_CustomEvent_Callback = void (*)(QIODevice*, QEvent*);
    using QIODevice_ConnectNotify_Callback = void (*)(QIODevice*, const QMetaMethod&);
    using QIODevice_DisconnectNotify_Callback = void (*)(QIODevice*, const QMetaMethod&);
    using QIODevice_SetOpenMode_Callback = void (*)(QIODevice*, QIODeviceBase::OpenMode);
    using QIODevice_SetErrorString_Callback = void (*)(QIODevice*, const QString&);
    using QIODevice_Sender_Callback = QObject* (*)();
    using QIODevice_SenderSignalIndex_Callback = int (*)();
    using QIODevice_Receivers_Callback = int (*)(const QIODevice*, const char*);
    using QIODevice_IsSignalConnected_Callback = bool (*)(const QIODevice*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QIODevice_Metacall_Callback qiodevice_metacall_callback = nullptr;
    QIODevice_IsSequential_Callback qiodevice_issequential_callback = nullptr;
    QIODevice_Open_Callback qiodevice_open_callback = nullptr;
    QIODevice_Close_Callback qiodevice_close_callback = nullptr;
    QIODevice_Pos_Callback qiodevice_pos_callback = nullptr;
    QIODevice_Size_Callback qiodevice_size_callback = nullptr;
    QIODevice_Seek_Callback qiodevice_seek_callback = nullptr;
    QIODevice_AtEnd_Callback qiodevice_atend_callback = nullptr;
    QIODevice_Reset_Callback qiodevice_reset_callback = nullptr;
    QIODevice_BytesAvailable_Callback qiodevice_bytesavailable_callback = nullptr;
    QIODevice_BytesToWrite_Callback qiodevice_bytestowrite_callback = nullptr;
    QIODevice_CanReadLine_Callback qiodevice_canreadline_callback = nullptr;
    QIODevice_WaitForReadyRead_Callback qiodevice_waitforreadyread_callback = nullptr;
    QIODevice_WaitForBytesWritten_Callback qiodevice_waitforbyteswritten_callback = nullptr;
    QIODevice_ReadData_Callback qiodevice_readdata_callback = nullptr;
    QIODevice_ReadLineData_Callback qiodevice_readlinedata_callback = nullptr;
    QIODevice_SkipData_Callback qiodevice_skipdata_callback = nullptr;
    QIODevice_WriteData_Callback qiodevice_writedata_callback = nullptr;
    QIODevice_Event_Callback qiodevice_event_callback = nullptr;
    QIODevice_EventFilter_Callback qiodevice_eventfilter_callback = nullptr;
    QIODevice_TimerEvent_Callback qiodevice_timerevent_callback = nullptr;
    QIODevice_ChildEvent_Callback qiodevice_childevent_callback = nullptr;
    QIODevice_CustomEvent_Callback qiodevice_customevent_callback = nullptr;
    QIODevice_ConnectNotify_Callback qiodevice_connectnotify_callback = nullptr;
    QIODevice_DisconnectNotify_Callback qiodevice_disconnectnotify_callback = nullptr;
    QIODevice_SetOpenMode_Callback qiodevice_setopenmode_callback = nullptr;
    QIODevice_SetErrorString_Callback qiodevice_seterrorstring_callback = nullptr;
    QIODevice_Sender_Callback qiodevice_sender_callback = nullptr;
    QIODevice_SenderSignalIndex_Callback qiodevice_sendersignalindex_callback = nullptr;
    QIODevice_Receivers_Callback qiodevice_receivers_callback = nullptr;
    QIODevice_IsSignalConnected_Callback qiodevice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qiodevice_metacall_isbase = false;
    mutable bool qiodevice_issequential_isbase = false;
    mutable bool qiodevice_open_isbase = false;
    mutable bool qiodevice_close_isbase = false;
    mutable bool qiodevice_pos_isbase = false;
    mutable bool qiodevice_size_isbase = false;
    mutable bool qiodevice_seek_isbase = false;
    mutable bool qiodevice_atend_isbase = false;
    mutable bool qiodevice_reset_isbase = false;
    mutable bool qiodevice_bytesavailable_isbase = false;
    mutable bool qiodevice_bytestowrite_isbase = false;
    mutable bool qiodevice_canreadline_isbase = false;
    mutable bool qiodevice_waitforreadyread_isbase = false;
    mutable bool qiodevice_waitforbyteswritten_isbase = false;
    mutable bool qiodevice_readdata_isbase = false;
    mutable bool qiodevice_readlinedata_isbase = false;
    mutable bool qiodevice_skipdata_isbase = false;
    mutable bool qiodevice_writedata_isbase = false;
    mutable bool qiodevice_event_isbase = false;
    mutable bool qiodevice_eventfilter_isbase = false;
    mutable bool qiodevice_timerevent_isbase = false;
    mutable bool qiodevice_childevent_isbase = false;
    mutable bool qiodevice_customevent_isbase = false;
    mutable bool qiodevice_connectnotify_isbase = false;
    mutable bool qiodevice_disconnectnotify_isbase = false;
    mutable bool qiodevice_setopenmode_isbase = false;
    mutable bool qiodevice_seterrorstring_isbase = false;
    mutable bool qiodevice_sender_isbase = false;
    mutable bool qiodevice_sendersignalindex_isbase = false;
    mutable bool qiodevice_receivers_isbase = false;
    mutable bool qiodevice_issignalconnected_isbase = false;

  public:
    VirtualQIODevice() : QIODevice(){};
    VirtualQIODevice(QObject* parent) : QIODevice(parent){};

    ~VirtualQIODevice() {
        qiodevice_metacall_callback = nullptr;
        qiodevice_issequential_callback = nullptr;
        qiodevice_open_callback = nullptr;
        qiodevice_close_callback = nullptr;
        qiodevice_pos_callback = nullptr;
        qiodevice_size_callback = nullptr;
        qiodevice_seek_callback = nullptr;
        qiodevice_atend_callback = nullptr;
        qiodevice_reset_callback = nullptr;
        qiodevice_bytesavailable_callback = nullptr;
        qiodevice_bytestowrite_callback = nullptr;
        qiodevice_canreadline_callback = nullptr;
        qiodevice_waitforreadyread_callback = nullptr;
        qiodevice_waitforbyteswritten_callback = nullptr;
        qiodevice_readdata_callback = nullptr;
        qiodevice_readlinedata_callback = nullptr;
        qiodevice_skipdata_callback = nullptr;
        qiodevice_writedata_callback = nullptr;
        qiodevice_event_callback = nullptr;
        qiodevice_eventfilter_callback = nullptr;
        qiodevice_timerevent_callback = nullptr;
        qiodevice_childevent_callback = nullptr;
        qiodevice_customevent_callback = nullptr;
        qiodevice_connectnotify_callback = nullptr;
        qiodevice_disconnectnotify_callback = nullptr;
        qiodevice_setopenmode_callback = nullptr;
        qiodevice_seterrorstring_callback = nullptr;
        qiodevice_sender_callback = nullptr;
        qiodevice_sendersignalindex_callback = nullptr;
        qiodevice_receivers_callback = nullptr;
        qiodevice_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQIODevice_Metacall_Callback(QIODevice_Metacall_Callback cb) { qiodevice_metacall_callback = cb; }
    void setQIODevice_IsSequential_Callback(QIODevice_IsSequential_Callback cb) { qiodevice_issequential_callback = cb; }
    void setQIODevice_Open_Callback(QIODevice_Open_Callback cb) { qiodevice_open_callback = cb; }
    void setQIODevice_Close_Callback(QIODevice_Close_Callback cb) { qiodevice_close_callback = cb; }
    void setQIODevice_Pos_Callback(QIODevice_Pos_Callback cb) { qiodevice_pos_callback = cb; }
    void setQIODevice_Size_Callback(QIODevice_Size_Callback cb) { qiodevice_size_callback = cb; }
    void setQIODevice_Seek_Callback(QIODevice_Seek_Callback cb) { qiodevice_seek_callback = cb; }
    void setQIODevice_AtEnd_Callback(QIODevice_AtEnd_Callback cb) { qiodevice_atend_callback = cb; }
    void setQIODevice_Reset_Callback(QIODevice_Reset_Callback cb) { qiodevice_reset_callback = cb; }
    void setQIODevice_BytesAvailable_Callback(QIODevice_BytesAvailable_Callback cb) { qiodevice_bytesavailable_callback = cb; }
    void setQIODevice_BytesToWrite_Callback(QIODevice_BytesToWrite_Callback cb) { qiodevice_bytestowrite_callback = cb; }
    void setQIODevice_CanReadLine_Callback(QIODevice_CanReadLine_Callback cb) { qiodevice_canreadline_callback = cb; }
    void setQIODevice_WaitForReadyRead_Callback(QIODevice_WaitForReadyRead_Callback cb) { qiodevice_waitforreadyread_callback = cb; }
    void setQIODevice_WaitForBytesWritten_Callback(QIODevice_WaitForBytesWritten_Callback cb) { qiodevice_waitforbyteswritten_callback = cb; }
    void setQIODevice_ReadData_Callback(QIODevice_ReadData_Callback cb) { qiodevice_readdata_callback = cb; }
    void setQIODevice_ReadLineData_Callback(QIODevice_ReadLineData_Callback cb) { qiodevice_readlinedata_callback = cb; }
    void setQIODevice_SkipData_Callback(QIODevice_SkipData_Callback cb) { qiodevice_skipdata_callback = cb; }
    void setQIODevice_WriteData_Callback(QIODevice_WriteData_Callback cb) { qiodevice_writedata_callback = cb; }
    void setQIODevice_Event_Callback(QIODevice_Event_Callback cb) { qiodevice_event_callback = cb; }
    void setQIODevice_EventFilter_Callback(QIODevice_EventFilter_Callback cb) { qiodevice_eventfilter_callback = cb; }
    void setQIODevice_TimerEvent_Callback(QIODevice_TimerEvent_Callback cb) { qiodevice_timerevent_callback = cb; }
    void setQIODevice_ChildEvent_Callback(QIODevice_ChildEvent_Callback cb) { qiodevice_childevent_callback = cb; }
    void setQIODevice_CustomEvent_Callback(QIODevice_CustomEvent_Callback cb) { qiodevice_customevent_callback = cb; }
    void setQIODevice_ConnectNotify_Callback(QIODevice_ConnectNotify_Callback cb) { qiodevice_connectnotify_callback = cb; }
    void setQIODevice_DisconnectNotify_Callback(QIODevice_DisconnectNotify_Callback cb) { qiodevice_disconnectnotify_callback = cb; }
    void setQIODevice_SetOpenMode_Callback(QIODevice_SetOpenMode_Callback cb) { qiodevice_setopenmode_callback = cb; }
    void setQIODevice_SetErrorString_Callback(QIODevice_SetErrorString_Callback cb) { qiodevice_seterrorstring_callback = cb; }
    void setQIODevice_Sender_Callback(QIODevice_Sender_Callback cb) { qiodevice_sender_callback = cb; }
    void setQIODevice_SenderSignalIndex_Callback(QIODevice_SenderSignalIndex_Callback cb) { qiodevice_sendersignalindex_callback = cb; }
    void setQIODevice_Receivers_Callback(QIODevice_Receivers_Callback cb) { qiodevice_receivers_callback = cb; }
    void setQIODevice_IsSignalConnected_Callback(QIODevice_IsSignalConnected_Callback cb) { qiodevice_issignalconnected_callback = cb; }

    // Base flag setters
    void setQIODevice_Metacall_IsBase(bool value) const { qiodevice_metacall_isbase = value; }
    void setQIODevice_IsSequential_IsBase(bool value) const { qiodevice_issequential_isbase = value; }
    void setQIODevice_Open_IsBase(bool value) const { qiodevice_open_isbase = value; }
    void setQIODevice_Close_IsBase(bool value) const { qiodevice_close_isbase = value; }
    void setQIODevice_Pos_IsBase(bool value) const { qiodevice_pos_isbase = value; }
    void setQIODevice_Size_IsBase(bool value) const { qiodevice_size_isbase = value; }
    void setQIODevice_Seek_IsBase(bool value) const { qiodevice_seek_isbase = value; }
    void setQIODevice_AtEnd_IsBase(bool value) const { qiodevice_atend_isbase = value; }
    void setQIODevice_Reset_IsBase(bool value) const { qiodevice_reset_isbase = value; }
    void setQIODevice_BytesAvailable_IsBase(bool value) const { qiodevice_bytesavailable_isbase = value; }
    void setQIODevice_BytesToWrite_IsBase(bool value) const { qiodevice_bytestowrite_isbase = value; }
    void setQIODevice_CanReadLine_IsBase(bool value) const { qiodevice_canreadline_isbase = value; }
    void setQIODevice_WaitForReadyRead_IsBase(bool value) const { qiodevice_waitforreadyread_isbase = value; }
    void setQIODevice_WaitForBytesWritten_IsBase(bool value) const { qiodevice_waitforbyteswritten_isbase = value; }
    void setQIODevice_ReadData_IsBase(bool value) const { qiodevice_readdata_isbase = value; }
    void setQIODevice_ReadLineData_IsBase(bool value) const { qiodevice_readlinedata_isbase = value; }
    void setQIODevice_SkipData_IsBase(bool value) const { qiodevice_skipdata_isbase = value; }
    void setQIODevice_WriteData_IsBase(bool value) const { qiodevice_writedata_isbase = value; }
    void setQIODevice_Event_IsBase(bool value) const { qiodevice_event_isbase = value; }
    void setQIODevice_EventFilter_IsBase(bool value) const { qiodevice_eventfilter_isbase = value; }
    void setQIODevice_TimerEvent_IsBase(bool value) const { qiodevice_timerevent_isbase = value; }
    void setQIODevice_ChildEvent_IsBase(bool value) const { qiodevice_childevent_isbase = value; }
    void setQIODevice_CustomEvent_IsBase(bool value) const { qiodevice_customevent_isbase = value; }
    void setQIODevice_ConnectNotify_IsBase(bool value) const { qiodevice_connectnotify_isbase = value; }
    void setQIODevice_DisconnectNotify_IsBase(bool value) const { qiodevice_disconnectnotify_isbase = value; }
    void setQIODevice_SetOpenMode_IsBase(bool value) const { qiodevice_setopenmode_isbase = value; }
    void setQIODevice_SetErrorString_IsBase(bool value) const { qiodevice_seterrorstring_isbase = value; }
    void setQIODevice_Sender_IsBase(bool value) const { qiodevice_sender_isbase = value; }
    void setQIODevice_SenderSignalIndex_IsBase(bool value) const { qiodevice_sendersignalindex_isbase = value; }
    void setQIODevice_Receivers_IsBase(bool value) const { qiodevice_receivers_isbase = value; }
    void setQIODevice_IsSignalConnected_IsBase(bool value) const { qiodevice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qiodevice_metacall_isbase) {
            qiodevice_metacall_isbase = false;
            return QIODevice::qt_metacall(param1, param2, param3);
        } else if (qiodevice_metacall_callback != nullptr) {
            return qiodevice_metacall_callback(this, param1, param2, param3);
        } else {
            return QIODevice::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qiodevice_issequential_isbase) {
            qiodevice_issequential_isbase = false;
            return QIODevice::isSequential();
        } else if (qiodevice_issequential_callback != nullptr) {
            return qiodevice_issequential_callback();
        } else {
            return QIODevice::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qiodevice_open_isbase) {
            qiodevice_open_isbase = false;
            return QIODevice::open(mode);
        } else if (qiodevice_open_callback != nullptr) {
            return qiodevice_open_callback(this, mode);
        } else {
            return QIODevice::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qiodevice_close_isbase) {
            qiodevice_close_isbase = false;
            QIODevice::close();
        } else if (qiodevice_close_callback != nullptr) {
            qiodevice_close_callback();
        } else {
            QIODevice::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qiodevice_pos_isbase) {
            qiodevice_pos_isbase = false;
            return QIODevice::pos();
        } else if (qiodevice_pos_callback != nullptr) {
            return qiodevice_pos_callback();
        } else {
            return QIODevice::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qiodevice_size_isbase) {
            qiodevice_size_isbase = false;
            return QIODevice::size();
        } else if (qiodevice_size_callback != nullptr) {
            return qiodevice_size_callback();
        } else {
            return QIODevice::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qiodevice_seek_isbase) {
            qiodevice_seek_isbase = false;
            return QIODevice::seek(pos);
        } else if (qiodevice_seek_callback != nullptr) {
            return qiodevice_seek_callback(this, pos);
        } else {
            return QIODevice::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qiodevice_atend_isbase) {
            qiodevice_atend_isbase = false;
            return QIODevice::atEnd();
        } else if (qiodevice_atend_callback != nullptr) {
            return qiodevice_atend_callback();
        } else {
            return QIODevice::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qiodevice_reset_isbase) {
            qiodevice_reset_isbase = false;
            return QIODevice::reset();
        } else if (qiodevice_reset_callback != nullptr) {
            return qiodevice_reset_callback();
        } else {
            return QIODevice::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qiodevice_bytesavailable_isbase) {
            qiodevice_bytesavailable_isbase = false;
            return QIODevice::bytesAvailable();
        } else if (qiodevice_bytesavailable_callback != nullptr) {
            return qiodevice_bytesavailable_callback();
        } else {
            return QIODevice::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qiodevice_bytestowrite_isbase) {
            qiodevice_bytestowrite_isbase = false;
            return QIODevice::bytesToWrite();
        } else if (qiodevice_bytestowrite_callback != nullptr) {
            return qiodevice_bytestowrite_callback();
        } else {
            return QIODevice::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qiodevice_canreadline_isbase) {
            qiodevice_canreadline_isbase = false;
            return QIODevice::canReadLine();
        } else if (qiodevice_canreadline_callback != nullptr) {
            return qiodevice_canreadline_callback();
        } else {
            return QIODevice::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qiodevice_waitforreadyread_isbase) {
            qiodevice_waitforreadyread_isbase = false;
            return QIODevice::waitForReadyRead(msecs);
        } else if (qiodevice_waitforreadyread_callback != nullptr) {
            return qiodevice_waitforreadyread_callback(this, msecs);
        } else {
            return QIODevice::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qiodevice_waitforbyteswritten_isbase) {
            qiodevice_waitforbyteswritten_isbase = false;
            return QIODevice::waitForBytesWritten(msecs);
        } else if (qiodevice_waitforbyteswritten_callback != nullptr) {
            return qiodevice_waitforbyteswritten_callback(this, msecs);
        } else {
            return QIODevice::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        return qiodevice_readdata_callback(this, data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qiodevice_readlinedata_isbase) {
            qiodevice_readlinedata_isbase = false;
            return QIODevice::readLineData(data, maxlen);
        } else if (qiodevice_readlinedata_callback != nullptr) {
            return qiodevice_readlinedata_callback(this, data, maxlen);
        } else {
            return QIODevice::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qiodevice_skipdata_isbase) {
            qiodevice_skipdata_isbase = false;
            return QIODevice::skipData(maxSize);
        } else if (qiodevice_skipdata_callback != nullptr) {
            return qiodevice_skipdata_callback(this, maxSize);
        } else {
            return QIODevice::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        return qiodevice_writedata_callback(this, data, lenVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qiodevice_event_isbase) {
            qiodevice_event_isbase = false;
            return QIODevice::event(event);
        } else if (qiodevice_event_callback != nullptr) {
            return qiodevice_event_callback(this, event);
        } else {
            return QIODevice::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qiodevice_eventfilter_isbase) {
            qiodevice_eventfilter_isbase = false;
            return QIODevice::eventFilter(watched, event);
        } else if (qiodevice_eventfilter_callback != nullptr) {
            return qiodevice_eventfilter_callback(this, watched, event);
        } else {
            return QIODevice::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qiodevice_timerevent_isbase) {
            qiodevice_timerevent_isbase = false;
            QIODevice::timerEvent(event);
        } else if (qiodevice_timerevent_callback != nullptr) {
            qiodevice_timerevent_callback(this, event);
        } else {
            QIODevice::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qiodevice_childevent_isbase) {
            qiodevice_childevent_isbase = false;
            QIODevice::childEvent(event);
        } else if (qiodevice_childevent_callback != nullptr) {
            qiodevice_childevent_callback(this, event);
        } else {
            QIODevice::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qiodevice_customevent_isbase) {
            qiodevice_customevent_isbase = false;
            QIODevice::customEvent(event);
        } else if (qiodevice_customevent_callback != nullptr) {
            qiodevice_customevent_callback(this, event);
        } else {
            QIODevice::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qiodevice_connectnotify_isbase) {
            qiodevice_connectnotify_isbase = false;
            QIODevice::connectNotify(signal);
        } else if (qiodevice_connectnotify_callback != nullptr) {
            qiodevice_connectnotify_callback(this, signal);
        } else {
            QIODevice::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qiodevice_disconnectnotify_isbase) {
            qiodevice_disconnectnotify_isbase = false;
            QIODevice::disconnectNotify(signal);
        } else if (qiodevice_disconnectnotify_callback != nullptr) {
            qiodevice_disconnectnotify_callback(this, signal);
        } else {
            QIODevice::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qiodevice_setopenmode_isbase) {
            qiodevice_setopenmode_isbase = false;
            QIODevice::setOpenMode(openMode);
        } else if (qiodevice_setopenmode_callback != nullptr) {
            qiodevice_setopenmode_callback(this, openMode);
        } else {
            QIODevice::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qiodevice_seterrorstring_isbase) {
            qiodevice_seterrorstring_isbase = false;
            QIODevice::setErrorString(errorString);
        } else if (qiodevice_seterrorstring_callback != nullptr) {
            qiodevice_seterrorstring_callback(this, errorString);
        } else {
            QIODevice::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qiodevice_sender_isbase) {
            qiodevice_sender_isbase = false;
            return QIODevice::sender();
        } else if (qiodevice_sender_callback != nullptr) {
            return qiodevice_sender_callback();
        } else {
            return QIODevice::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qiodevice_sendersignalindex_isbase) {
            qiodevice_sendersignalindex_isbase = false;
            return QIODevice::senderSignalIndex();
        } else if (qiodevice_sendersignalindex_callback != nullptr) {
            return qiodevice_sendersignalindex_callback();
        } else {
            return QIODevice::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qiodevice_receivers_isbase) {
            qiodevice_receivers_isbase = false;
            return QIODevice::receivers(signal);
        } else if (qiodevice_receivers_callback != nullptr) {
            return qiodevice_receivers_callback(this, signal);
        } else {
            return QIODevice::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qiodevice_issignalconnected_isbase) {
            qiodevice_issignalconnected_isbase = false;
            return QIODevice::isSignalConnected(signal);
        } else if (qiodevice_issignalconnected_callback != nullptr) {
            return qiodevice_issignalconnected_callback(this, signal);
        } else {
            return QIODevice::isSignalConnected(signal);
        }
    }
};

#endif

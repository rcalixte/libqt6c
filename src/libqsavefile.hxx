#pragma once
#ifndef SRCC_LIBVIRTUALQSAVEFILE_H
#define SRCC_LIBVIRTUALQSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSaveFile so that we can call protected methods
class VirtualQSaveFile : public QSaveFile {

  public:
    // Virtual class public types (including callbacks)
    using QSaveFile_Metacall_Callback = int (*)(QSaveFile*, QMetaObject::Call, int, void**);
    using QSaveFile_FileName_Callback = QString (*)();
    using QSaveFile_Open_Callback = bool (*)(QSaveFile*, QIODeviceBase::OpenMode);
    using QSaveFile_WriteData_Callback = qint64 (*)(QSaveFile*, const char*, qint64);
    using QSaveFile_IsSequential_Callback = bool (*)();
    using QSaveFile_Pos_Callback = qint64 (*)();
    using QSaveFile_Seek_Callback = bool (*)(QSaveFile*, qint64);
    using QSaveFile_AtEnd_Callback = bool (*)();
    using QSaveFile_Size_Callback = qint64 (*)();
    using QSaveFile_Resize_Callback = bool (*)(QSaveFile*, qint64);
    using QSaveFile_Permissions_Callback = QFileDevice::Permissions (*)();
    using QSaveFile_SetPermissions_Callback = bool (*)(QSaveFile*, QFileDevice::Permissions);
    using QSaveFile_ReadData_Callback = qint64 (*)(QSaveFile*, char*, qint64);
    using QSaveFile_ReadLineData_Callback = qint64 (*)(QSaveFile*, char*, qint64);
    using QSaveFile_Reset_Callback = bool (*)();
    using QSaveFile_BytesAvailable_Callback = qint64 (*)();
    using QSaveFile_BytesToWrite_Callback = qint64 (*)();
    using QSaveFile_CanReadLine_Callback = bool (*)();
    using QSaveFile_WaitForReadyRead_Callback = bool (*)(QSaveFile*, int);
    using QSaveFile_WaitForBytesWritten_Callback = bool (*)(QSaveFile*, int);
    using QSaveFile_SkipData_Callback = qint64 (*)(QSaveFile*, qint64);
    using QSaveFile_Event_Callback = bool (*)(QSaveFile*, QEvent*);
    using QSaveFile_EventFilter_Callback = bool (*)(QSaveFile*, QObject*, QEvent*);
    using QSaveFile_TimerEvent_Callback = void (*)(QSaveFile*, QTimerEvent*);
    using QSaveFile_ChildEvent_Callback = void (*)(QSaveFile*, QChildEvent*);
    using QSaveFile_CustomEvent_Callback = void (*)(QSaveFile*, QEvent*);
    using QSaveFile_ConnectNotify_Callback = void (*)(QSaveFile*, const QMetaMethod&);
    using QSaveFile_DisconnectNotify_Callback = void (*)(QSaveFile*, const QMetaMethod&);
    using QSaveFile_SetOpenMode_Callback = void (*)(QSaveFile*, QIODeviceBase::OpenMode);
    using QSaveFile_SetErrorString_Callback = void (*)(QSaveFile*, const QString&);
    using QSaveFile_Sender_Callback = QObject* (*)();
    using QSaveFile_SenderSignalIndex_Callback = int (*)();
    using QSaveFile_Receivers_Callback = int (*)(const QSaveFile*, const char*);
    using QSaveFile_IsSignalConnected_Callback = bool (*)(const QSaveFile*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSaveFile_Metacall_Callback qsavefile_metacall_callback = nullptr;
    QSaveFile_FileName_Callback qsavefile_filename_callback = nullptr;
    QSaveFile_Open_Callback qsavefile_open_callback = nullptr;
    QSaveFile_WriteData_Callback qsavefile_writedata_callback = nullptr;
    QSaveFile_IsSequential_Callback qsavefile_issequential_callback = nullptr;
    QSaveFile_Pos_Callback qsavefile_pos_callback = nullptr;
    QSaveFile_Seek_Callback qsavefile_seek_callback = nullptr;
    QSaveFile_AtEnd_Callback qsavefile_atend_callback = nullptr;
    QSaveFile_Size_Callback qsavefile_size_callback = nullptr;
    QSaveFile_Resize_Callback qsavefile_resize_callback = nullptr;
    QSaveFile_Permissions_Callback qsavefile_permissions_callback = nullptr;
    QSaveFile_SetPermissions_Callback qsavefile_setpermissions_callback = nullptr;
    QSaveFile_ReadData_Callback qsavefile_readdata_callback = nullptr;
    QSaveFile_ReadLineData_Callback qsavefile_readlinedata_callback = nullptr;
    QSaveFile_Reset_Callback qsavefile_reset_callback = nullptr;
    QSaveFile_BytesAvailable_Callback qsavefile_bytesavailable_callback = nullptr;
    QSaveFile_BytesToWrite_Callback qsavefile_bytestowrite_callback = nullptr;
    QSaveFile_CanReadLine_Callback qsavefile_canreadline_callback = nullptr;
    QSaveFile_WaitForReadyRead_Callback qsavefile_waitforreadyread_callback = nullptr;
    QSaveFile_WaitForBytesWritten_Callback qsavefile_waitforbyteswritten_callback = nullptr;
    QSaveFile_SkipData_Callback qsavefile_skipdata_callback = nullptr;
    QSaveFile_Event_Callback qsavefile_event_callback = nullptr;
    QSaveFile_EventFilter_Callback qsavefile_eventfilter_callback = nullptr;
    QSaveFile_TimerEvent_Callback qsavefile_timerevent_callback = nullptr;
    QSaveFile_ChildEvent_Callback qsavefile_childevent_callback = nullptr;
    QSaveFile_CustomEvent_Callback qsavefile_customevent_callback = nullptr;
    QSaveFile_ConnectNotify_Callback qsavefile_connectnotify_callback = nullptr;
    QSaveFile_DisconnectNotify_Callback qsavefile_disconnectnotify_callback = nullptr;
    QSaveFile_SetOpenMode_Callback qsavefile_setopenmode_callback = nullptr;
    QSaveFile_SetErrorString_Callback qsavefile_seterrorstring_callback = nullptr;
    QSaveFile_Sender_Callback qsavefile_sender_callback = nullptr;
    QSaveFile_SenderSignalIndex_Callback qsavefile_sendersignalindex_callback = nullptr;
    QSaveFile_Receivers_Callback qsavefile_receivers_callback = nullptr;
    QSaveFile_IsSignalConnected_Callback qsavefile_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsavefile_metacall_isbase = false;
    mutable bool qsavefile_filename_isbase = false;
    mutable bool qsavefile_open_isbase = false;
    mutable bool qsavefile_writedata_isbase = false;
    mutable bool qsavefile_issequential_isbase = false;
    mutable bool qsavefile_pos_isbase = false;
    mutable bool qsavefile_seek_isbase = false;
    mutable bool qsavefile_atend_isbase = false;
    mutable bool qsavefile_size_isbase = false;
    mutable bool qsavefile_resize_isbase = false;
    mutable bool qsavefile_permissions_isbase = false;
    mutable bool qsavefile_setpermissions_isbase = false;
    mutable bool qsavefile_readdata_isbase = false;
    mutable bool qsavefile_readlinedata_isbase = false;
    mutable bool qsavefile_reset_isbase = false;
    mutable bool qsavefile_bytesavailable_isbase = false;
    mutable bool qsavefile_bytestowrite_isbase = false;
    mutable bool qsavefile_canreadline_isbase = false;
    mutable bool qsavefile_waitforreadyread_isbase = false;
    mutable bool qsavefile_waitforbyteswritten_isbase = false;
    mutable bool qsavefile_skipdata_isbase = false;
    mutable bool qsavefile_event_isbase = false;
    mutable bool qsavefile_eventfilter_isbase = false;
    mutable bool qsavefile_timerevent_isbase = false;
    mutable bool qsavefile_childevent_isbase = false;
    mutable bool qsavefile_customevent_isbase = false;
    mutable bool qsavefile_connectnotify_isbase = false;
    mutable bool qsavefile_disconnectnotify_isbase = false;
    mutable bool qsavefile_setopenmode_isbase = false;
    mutable bool qsavefile_seterrorstring_isbase = false;
    mutable bool qsavefile_sender_isbase = false;
    mutable bool qsavefile_sendersignalindex_isbase = false;
    mutable bool qsavefile_receivers_isbase = false;
    mutable bool qsavefile_issignalconnected_isbase = false;

  public:
    VirtualQSaveFile(const QString& name) : QSaveFile(name){};
    VirtualQSaveFile() : QSaveFile(){};
    VirtualQSaveFile(const QString& name, QObject* parent) : QSaveFile(name, parent){};
    VirtualQSaveFile(QObject* parent) : QSaveFile(parent){};

    ~VirtualQSaveFile() {
        qsavefile_metacall_callback = nullptr;
        qsavefile_filename_callback = nullptr;
        qsavefile_open_callback = nullptr;
        qsavefile_writedata_callback = nullptr;
        qsavefile_issequential_callback = nullptr;
        qsavefile_pos_callback = nullptr;
        qsavefile_seek_callback = nullptr;
        qsavefile_atend_callback = nullptr;
        qsavefile_size_callback = nullptr;
        qsavefile_resize_callback = nullptr;
        qsavefile_permissions_callback = nullptr;
        qsavefile_setpermissions_callback = nullptr;
        qsavefile_readdata_callback = nullptr;
        qsavefile_readlinedata_callback = nullptr;
        qsavefile_reset_callback = nullptr;
        qsavefile_bytesavailable_callback = nullptr;
        qsavefile_bytestowrite_callback = nullptr;
        qsavefile_canreadline_callback = nullptr;
        qsavefile_waitforreadyread_callback = nullptr;
        qsavefile_waitforbyteswritten_callback = nullptr;
        qsavefile_skipdata_callback = nullptr;
        qsavefile_event_callback = nullptr;
        qsavefile_eventfilter_callback = nullptr;
        qsavefile_timerevent_callback = nullptr;
        qsavefile_childevent_callback = nullptr;
        qsavefile_customevent_callback = nullptr;
        qsavefile_connectnotify_callback = nullptr;
        qsavefile_disconnectnotify_callback = nullptr;
        qsavefile_setopenmode_callback = nullptr;
        qsavefile_seterrorstring_callback = nullptr;
        qsavefile_sender_callback = nullptr;
        qsavefile_sendersignalindex_callback = nullptr;
        qsavefile_receivers_callback = nullptr;
        qsavefile_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSaveFile_Metacall_Callback(QSaveFile_Metacall_Callback cb) { qsavefile_metacall_callback = cb; }
    void setQSaveFile_FileName_Callback(QSaveFile_FileName_Callback cb) { qsavefile_filename_callback = cb; }
    void setQSaveFile_Open_Callback(QSaveFile_Open_Callback cb) { qsavefile_open_callback = cb; }
    void setQSaveFile_WriteData_Callback(QSaveFile_WriteData_Callback cb) { qsavefile_writedata_callback = cb; }
    void setQSaveFile_IsSequential_Callback(QSaveFile_IsSequential_Callback cb) { qsavefile_issequential_callback = cb; }
    void setQSaveFile_Pos_Callback(QSaveFile_Pos_Callback cb) { qsavefile_pos_callback = cb; }
    void setQSaveFile_Seek_Callback(QSaveFile_Seek_Callback cb) { qsavefile_seek_callback = cb; }
    void setQSaveFile_AtEnd_Callback(QSaveFile_AtEnd_Callback cb) { qsavefile_atend_callback = cb; }
    void setQSaveFile_Size_Callback(QSaveFile_Size_Callback cb) { qsavefile_size_callback = cb; }
    void setQSaveFile_Resize_Callback(QSaveFile_Resize_Callback cb) { qsavefile_resize_callback = cb; }
    void setQSaveFile_Permissions_Callback(QSaveFile_Permissions_Callback cb) { qsavefile_permissions_callback = cb; }
    void setQSaveFile_SetPermissions_Callback(QSaveFile_SetPermissions_Callback cb) { qsavefile_setpermissions_callback = cb; }
    void setQSaveFile_ReadData_Callback(QSaveFile_ReadData_Callback cb) { qsavefile_readdata_callback = cb; }
    void setQSaveFile_ReadLineData_Callback(QSaveFile_ReadLineData_Callback cb) { qsavefile_readlinedata_callback = cb; }
    void setQSaveFile_Reset_Callback(QSaveFile_Reset_Callback cb) { qsavefile_reset_callback = cb; }
    void setQSaveFile_BytesAvailable_Callback(QSaveFile_BytesAvailable_Callback cb) { qsavefile_bytesavailable_callback = cb; }
    void setQSaveFile_BytesToWrite_Callback(QSaveFile_BytesToWrite_Callback cb) { qsavefile_bytestowrite_callback = cb; }
    void setQSaveFile_CanReadLine_Callback(QSaveFile_CanReadLine_Callback cb) { qsavefile_canreadline_callback = cb; }
    void setQSaveFile_WaitForReadyRead_Callback(QSaveFile_WaitForReadyRead_Callback cb) { qsavefile_waitforreadyread_callback = cb; }
    void setQSaveFile_WaitForBytesWritten_Callback(QSaveFile_WaitForBytesWritten_Callback cb) { qsavefile_waitforbyteswritten_callback = cb; }
    void setQSaveFile_SkipData_Callback(QSaveFile_SkipData_Callback cb) { qsavefile_skipdata_callback = cb; }
    void setQSaveFile_Event_Callback(QSaveFile_Event_Callback cb) { qsavefile_event_callback = cb; }
    void setQSaveFile_EventFilter_Callback(QSaveFile_EventFilter_Callback cb) { qsavefile_eventfilter_callback = cb; }
    void setQSaveFile_TimerEvent_Callback(QSaveFile_TimerEvent_Callback cb) { qsavefile_timerevent_callback = cb; }
    void setQSaveFile_ChildEvent_Callback(QSaveFile_ChildEvent_Callback cb) { qsavefile_childevent_callback = cb; }
    void setQSaveFile_CustomEvent_Callback(QSaveFile_CustomEvent_Callback cb) { qsavefile_customevent_callback = cb; }
    void setQSaveFile_ConnectNotify_Callback(QSaveFile_ConnectNotify_Callback cb) { qsavefile_connectnotify_callback = cb; }
    void setQSaveFile_DisconnectNotify_Callback(QSaveFile_DisconnectNotify_Callback cb) { qsavefile_disconnectnotify_callback = cb; }
    void setQSaveFile_SetOpenMode_Callback(QSaveFile_SetOpenMode_Callback cb) { qsavefile_setopenmode_callback = cb; }
    void setQSaveFile_SetErrorString_Callback(QSaveFile_SetErrorString_Callback cb) { qsavefile_seterrorstring_callback = cb; }
    void setQSaveFile_Sender_Callback(QSaveFile_Sender_Callback cb) { qsavefile_sender_callback = cb; }
    void setQSaveFile_SenderSignalIndex_Callback(QSaveFile_SenderSignalIndex_Callback cb) { qsavefile_sendersignalindex_callback = cb; }
    void setQSaveFile_Receivers_Callback(QSaveFile_Receivers_Callback cb) { qsavefile_receivers_callback = cb; }
    void setQSaveFile_IsSignalConnected_Callback(QSaveFile_IsSignalConnected_Callback cb) { qsavefile_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSaveFile_Metacall_IsBase(bool value) const { qsavefile_metacall_isbase = value; }
    void setQSaveFile_FileName_IsBase(bool value) const { qsavefile_filename_isbase = value; }
    void setQSaveFile_Open_IsBase(bool value) const { qsavefile_open_isbase = value; }
    void setQSaveFile_WriteData_IsBase(bool value) const { qsavefile_writedata_isbase = value; }
    void setQSaveFile_IsSequential_IsBase(bool value) const { qsavefile_issequential_isbase = value; }
    void setQSaveFile_Pos_IsBase(bool value) const { qsavefile_pos_isbase = value; }
    void setQSaveFile_Seek_IsBase(bool value) const { qsavefile_seek_isbase = value; }
    void setQSaveFile_AtEnd_IsBase(bool value) const { qsavefile_atend_isbase = value; }
    void setQSaveFile_Size_IsBase(bool value) const { qsavefile_size_isbase = value; }
    void setQSaveFile_Resize_IsBase(bool value) const { qsavefile_resize_isbase = value; }
    void setQSaveFile_Permissions_IsBase(bool value) const { qsavefile_permissions_isbase = value; }
    void setQSaveFile_SetPermissions_IsBase(bool value) const { qsavefile_setpermissions_isbase = value; }
    void setQSaveFile_ReadData_IsBase(bool value) const { qsavefile_readdata_isbase = value; }
    void setQSaveFile_ReadLineData_IsBase(bool value) const { qsavefile_readlinedata_isbase = value; }
    void setQSaveFile_Reset_IsBase(bool value) const { qsavefile_reset_isbase = value; }
    void setQSaveFile_BytesAvailable_IsBase(bool value) const { qsavefile_bytesavailable_isbase = value; }
    void setQSaveFile_BytesToWrite_IsBase(bool value) const { qsavefile_bytestowrite_isbase = value; }
    void setQSaveFile_CanReadLine_IsBase(bool value) const { qsavefile_canreadline_isbase = value; }
    void setQSaveFile_WaitForReadyRead_IsBase(bool value) const { qsavefile_waitforreadyread_isbase = value; }
    void setQSaveFile_WaitForBytesWritten_IsBase(bool value) const { qsavefile_waitforbyteswritten_isbase = value; }
    void setQSaveFile_SkipData_IsBase(bool value) const { qsavefile_skipdata_isbase = value; }
    void setQSaveFile_Event_IsBase(bool value) const { qsavefile_event_isbase = value; }
    void setQSaveFile_EventFilter_IsBase(bool value) const { qsavefile_eventfilter_isbase = value; }
    void setQSaveFile_TimerEvent_IsBase(bool value) const { qsavefile_timerevent_isbase = value; }
    void setQSaveFile_ChildEvent_IsBase(bool value) const { qsavefile_childevent_isbase = value; }
    void setQSaveFile_CustomEvent_IsBase(bool value) const { qsavefile_customevent_isbase = value; }
    void setQSaveFile_ConnectNotify_IsBase(bool value) const { qsavefile_connectnotify_isbase = value; }
    void setQSaveFile_DisconnectNotify_IsBase(bool value) const { qsavefile_disconnectnotify_isbase = value; }
    void setQSaveFile_SetOpenMode_IsBase(bool value) const { qsavefile_setopenmode_isbase = value; }
    void setQSaveFile_SetErrorString_IsBase(bool value) const { qsavefile_seterrorstring_isbase = value; }
    void setQSaveFile_Sender_IsBase(bool value) const { qsavefile_sender_isbase = value; }
    void setQSaveFile_SenderSignalIndex_IsBase(bool value) const { qsavefile_sendersignalindex_isbase = value; }
    void setQSaveFile_Receivers_IsBase(bool value) const { qsavefile_receivers_isbase = value; }
    void setQSaveFile_IsSignalConnected_IsBase(bool value) const { qsavefile_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsavefile_metacall_isbase) {
            qsavefile_metacall_isbase = false;
            return QSaveFile::qt_metacall(param1, param2, param3);
        } else if (qsavefile_metacall_callback != nullptr) {
            return qsavefile_metacall_callback(this, param1, param2, param3);
        } else {
            return QSaveFile::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (qsavefile_filename_isbase) {
            qsavefile_filename_isbase = false;
            return QSaveFile::fileName();
        } else if (qsavefile_filename_callback != nullptr) {
            return qsavefile_filename_callback();
        } else {
            return QSaveFile::fileName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode flags) override {
        if (qsavefile_open_isbase) {
            qsavefile_open_isbase = false;
            return QSaveFile::open(flags);
        } else if (qsavefile_open_callback != nullptr) {
            return qsavefile_open_callback(this, flags);
        } else {
            return QSaveFile::open(flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qsavefile_writedata_isbase) {
            qsavefile_writedata_isbase = false;
            return QSaveFile::writeData(data, lenVal);
        } else if (qsavefile_writedata_callback != nullptr) {
            return qsavefile_writedata_callback(this, data, lenVal);
        } else {
            return QSaveFile::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qsavefile_issequential_isbase) {
            qsavefile_issequential_isbase = false;
            return QSaveFile::isSequential();
        } else if (qsavefile_issequential_callback != nullptr) {
            return qsavefile_issequential_callback();
        } else {
            return QSaveFile::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qsavefile_pos_isbase) {
            qsavefile_pos_isbase = false;
            return QSaveFile::pos();
        } else if (qsavefile_pos_callback != nullptr) {
            return qsavefile_pos_callback();
        } else {
            return QSaveFile::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (qsavefile_seek_isbase) {
            qsavefile_seek_isbase = false;
            return QSaveFile::seek(offset);
        } else if (qsavefile_seek_callback != nullptr) {
            return qsavefile_seek_callback(this, offset);
        } else {
            return QSaveFile::seek(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qsavefile_atend_isbase) {
            qsavefile_atend_isbase = false;
            return QSaveFile::atEnd();
        } else if (qsavefile_atend_callback != nullptr) {
            return qsavefile_atend_callback();
        } else {
            return QSaveFile::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qsavefile_size_isbase) {
            qsavefile_size_isbase = false;
            return QSaveFile::size();
        } else if (qsavefile_size_callback != nullptr) {
            return qsavefile_size_callback();
        } else {
            return QSaveFile::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (qsavefile_resize_isbase) {
            qsavefile_resize_isbase = false;
            return QSaveFile::resize(sz);
        } else if (qsavefile_resize_callback != nullptr) {
            return qsavefile_resize_callback(this, sz);
        } else {
            return QSaveFile::resize(sz);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (qsavefile_permissions_isbase) {
            qsavefile_permissions_isbase = false;
            return QSaveFile::permissions();
        } else if (qsavefile_permissions_callback != nullptr) {
            return qsavefile_permissions_callback();
        } else {
            return QSaveFile::permissions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (qsavefile_setpermissions_isbase) {
            qsavefile_setpermissions_isbase = false;
            return QSaveFile::setPermissions(permissionSpec);
        } else if (qsavefile_setpermissions_callback != nullptr) {
            return qsavefile_setpermissions_callback(this, permissionSpec);
        } else {
            return QSaveFile::setPermissions(permissionSpec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qsavefile_readdata_isbase) {
            qsavefile_readdata_isbase = false;
            return QSaveFile::readData(data, maxlen);
        } else if (qsavefile_readdata_callback != nullptr) {
            return qsavefile_readdata_callback(this, data, maxlen);
        } else {
            return QSaveFile::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qsavefile_readlinedata_isbase) {
            qsavefile_readlinedata_isbase = false;
            return QSaveFile::readLineData(data, maxlen);
        } else if (qsavefile_readlinedata_callback != nullptr) {
            return qsavefile_readlinedata_callback(this, data, maxlen);
        } else {
            return QSaveFile::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qsavefile_reset_isbase) {
            qsavefile_reset_isbase = false;
            return QSaveFile::reset();
        } else if (qsavefile_reset_callback != nullptr) {
            return qsavefile_reset_callback();
        } else {
            return QSaveFile::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qsavefile_bytesavailable_isbase) {
            qsavefile_bytesavailable_isbase = false;
            return QSaveFile::bytesAvailable();
        } else if (qsavefile_bytesavailable_callback != nullptr) {
            return qsavefile_bytesavailable_callback();
        } else {
            return QSaveFile::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qsavefile_bytestowrite_isbase) {
            qsavefile_bytestowrite_isbase = false;
            return QSaveFile::bytesToWrite();
        } else if (qsavefile_bytestowrite_callback != nullptr) {
            return qsavefile_bytestowrite_callback();
        } else {
            return QSaveFile::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qsavefile_canreadline_isbase) {
            qsavefile_canreadline_isbase = false;
            return QSaveFile::canReadLine();
        } else if (qsavefile_canreadline_callback != nullptr) {
            return qsavefile_canreadline_callback();
        } else {
            return QSaveFile::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qsavefile_waitforreadyread_isbase) {
            qsavefile_waitforreadyread_isbase = false;
            return QSaveFile::waitForReadyRead(msecs);
        } else if (qsavefile_waitforreadyread_callback != nullptr) {
            return qsavefile_waitforreadyread_callback(this, msecs);
        } else {
            return QSaveFile::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qsavefile_waitforbyteswritten_isbase) {
            qsavefile_waitforbyteswritten_isbase = false;
            return QSaveFile::waitForBytesWritten(msecs);
        } else if (qsavefile_waitforbyteswritten_callback != nullptr) {
            return qsavefile_waitforbyteswritten_callback(this, msecs);
        } else {
            return QSaveFile::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qsavefile_skipdata_isbase) {
            qsavefile_skipdata_isbase = false;
            return QSaveFile::skipData(maxSize);
        } else if (qsavefile_skipdata_callback != nullptr) {
            return qsavefile_skipdata_callback(this, maxSize);
        } else {
            return QSaveFile::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsavefile_event_isbase) {
            qsavefile_event_isbase = false;
            return QSaveFile::event(event);
        } else if (qsavefile_event_callback != nullptr) {
            return qsavefile_event_callback(this, event);
        } else {
            return QSaveFile::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsavefile_eventfilter_isbase) {
            qsavefile_eventfilter_isbase = false;
            return QSaveFile::eventFilter(watched, event);
        } else if (qsavefile_eventfilter_callback != nullptr) {
            return qsavefile_eventfilter_callback(this, watched, event);
        } else {
            return QSaveFile::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsavefile_timerevent_isbase) {
            qsavefile_timerevent_isbase = false;
            QSaveFile::timerEvent(event);
        } else if (qsavefile_timerevent_callback != nullptr) {
            qsavefile_timerevent_callback(this, event);
        } else {
            QSaveFile::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsavefile_childevent_isbase) {
            qsavefile_childevent_isbase = false;
            QSaveFile::childEvent(event);
        } else if (qsavefile_childevent_callback != nullptr) {
            qsavefile_childevent_callback(this, event);
        } else {
            QSaveFile::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsavefile_customevent_isbase) {
            qsavefile_customevent_isbase = false;
            QSaveFile::customEvent(event);
        } else if (qsavefile_customevent_callback != nullptr) {
            qsavefile_customevent_callback(this, event);
        } else {
            QSaveFile::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsavefile_connectnotify_isbase) {
            qsavefile_connectnotify_isbase = false;
            QSaveFile::connectNotify(signal);
        } else if (qsavefile_connectnotify_callback != nullptr) {
            qsavefile_connectnotify_callback(this, signal);
        } else {
            QSaveFile::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsavefile_disconnectnotify_isbase) {
            qsavefile_disconnectnotify_isbase = false;
            QSaveFile::disconnectNotify(signal);
        } else if (qsavefile_disconnectnotify_callback != nullptr) {
            qsavefile_disconnectnotify_callback(this, signal);
        } else {
            QSaveFile::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qsavefile_setopenmode_isbase) {
            qsavefile_setopenmode_isbase = false;
            QSaveFile::setOpenMode(openMode);
        } else if (qsavefile_setopenmode_callback != nullptr) {
            qsavefile_setopenmode_callback(this, openMode);
        } else {
            QSaveFile::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qsavefile_seterrorstring_isbase) {
            qsavefile_seterrorstring_isbase = false;
            QSaveFile::setErrorString(errorString);
        } else if (qsavefile_seterrorstring_callback != nullptr) {
            qsavefile_seterrorstring_callback(this, errorString);
        } else {
            QSaveFile::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsavefile_sender_isbase) {
            qsavefile_sender_isbase = false;
            return QSaveFile::sender();
        } else if (qsavefile_sender_callback != nullptr) {
            return qsavefile_sender_callback();
        } else {
            return QSaveFile::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsavefile_sendersignalindex_isbase) {
            qsavefile_sendersignalindex_isbase = false;
            return QSaveFile::senderSignalIndex();
        } else if (qsavefile_sendersignalindex_callback != nullptr) {
            return qsavefile_sendersignalindex_callback();
        } else {
            return QSaveFile::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsavefile_receivers_isbase) {
            qsavefile_receivers_isbase = false;
            return QSaveFile::receivers(signal);
        } else if (qsavefile_receivers_callback != nullptr) {
            return qsavefile_receivers_callback(this, signal);
        } else {
            return QSaveFile::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsavefile_issignalconnected_isbase) {
            qsavefile_issignalconnected_isbase = false;
            return QSaveFile::isSignalConnected(signal);
        } else if (qsavefile_issignalconnected_callback != nullptr) {
            return qsavefile_issignalconnected_callback(this, signal);
        } else {
            return QSaveFile::isSignalConnected(signal);
        }
    }
};

#endif

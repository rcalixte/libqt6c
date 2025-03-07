#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQUDPSOCKET_H
#define SRC_NETWORKC_LIBVIRTUALQUDPSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QUdpSocket so that we can call protected methods
class VirtualQUdpSocket : public QUdpSocket {

  public:
    // Virtual class public types (including callbacks)
    using QUdpSocket_Metacall_Callback = int (*)(QUdpSocket*, QMetaObject::Call, int, void**);
    using QUdpSocket_Resume_Callback = void (*)();
    using QUdpSocket_Bind_Callback = bool (*)(QUdpSocket*, const QHostAddress&, quint16, QAbstractSocket::BindMode);
    using QUdpSocket_ConnectToHost_Callback = void (*)(QUdpSocket*, const QString&, quint16, QIODeviceBase::OpenMode, QAbstractSocket::NetworkLayerProtocol);
    using QUdpSocket_DisconnectFromHost_Callback = void (*)();
    using QUdpSocket_BytesAvailable_Callback = qint64 (*)();
    using QUdpSocket_BytesToWrite_Callback = qint64 (*)();
    using QUdpSocket_SetReadBufferSize_Callback = void (*)(QUdpSocket*, qint64);
    using QUdpSocket_SocketDescriptor_Callback = qintptr (*)();
    using QUdpSocket_SetSocketDescriptor_Callback = bool (*)(QUdpSocket*, qintptr, QAbstractSocket::SocketState, QIODeviceBase::OpenMode);
    using QUdpSocket_SetSocketOption_Callback = void (*)(QUdpSocket*, QAbstractSocket::SocketOption, const QVariant&);
    using QUdpSocket_SocketOption_Callback = QVariant (*)(QUdpSocket*, QAbstractSocket::SocketOption);
    using QUdpSocket_Close_Callback = void (*)();
    using QUdpSocket_IsSequential_Callback = bool (*)();
    using QUdpSocket_WaitForConnected_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_WaitForReadyRead_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_WaitForBytesWritten_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_WaitForDisconnected_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_ReadData_Callback = qint64 (*)(QUdpSocket*, char*, qint64);
    using QUdpSocket_ReadLineData_Callback = qint64 (*)(QUdpSocket*, char*, qint64);
    using QUdpSocket_SkipData_Callback = qint64 (*)(QUdpSocket*, qint64);
    using QUdpSocket_WriteData_Callback = qint64 (*)(QUdpSocket*, const char*, qint64);
    using QUdpSocket_Open_Callback = bool (*)(QUdpSocket*, QIODeviceBase::OpenMode);
    using QUdpSocket_Pos_Callback = qint64 (*)();
    using QUdpSocket_Size_Callback = qint64 (*)();
    using QUdpSocket_Seek_Callback = bool (*)(QUdpSocket*, qint64);
    using QUdpSocket_AtEnd_Callback = bool (*)();
    using QUdpSocket_Reset_Callback = bool (*)();
    using QUdpSocket_CanReadLine_Callback = bool (*)();
    using QUdpSocket_Event_Callback = bool (*)(QUdpSocket*, QEvent*);
    using QUdpSocket_EventFilter_Callback = bool (*)(QUdpSocket*, QObject*, QEvent*);
    using QUdpSocket_TimerEvent_Callback = void (*)(QUdpSocket*, QTimerEvent*);
    using QUdpSocket_ChildEvent_Callback = void (*)(QUdpSocket*, QChildEvent*);
    using QUdpSocket_CustomEvent_Callback = void (*)(QUdpSocket*, QEvent*);
    using QUdpSocket_ConnectNotify_Callback = void (*)(QUdpSocket*, const QMetaMethod&);
    using QUdpSocket_DisconnectNotify_Callback = void (*)(QUdpSocket*, const QMetaMethod&);
    using QUdpSocket_SetSocketState_Callback = void (*)(QUdpSocket*, QAbstractSocket::SocketState);
    using QUdpSocket_SetSocketError_Callback = void (*)(QUdpSocket*, QAbstractSocket::SocketError);
    using QUdpSocket_SetLocalPort_Callback = void (*)(QUdpSocket*, quint16);
    using QUdpSocket_SetLocalAddress_Callback = void (*)(QUdpSocket*, const QHostAddress&);
    using QUdpSocket_SetPeerPort_Callback = void (*)(QUdpSocket*, quint16);
    using QUdpSocket_SetPeerAddress_Callback = void (*)(QUdpSocket*, const QHostAddress&);
    using QUdpSocket_SetPeerName_Callback = void (*)(QUdpSocket*, const QString&);
    using QUdpSocket_SetOpenMode_Callback = void (*)(QUdpSocket*, QIODeviceBase::OpenMode);
    using QUdpSocket_SetErrorString_Callback = void (*)(QUdpSocket*, const QString&);
    using QUdpSocket_Sender_Callback = QObject* (*)();
    using QUdpSocket_SenderSignalIndex_Callback = int (*)();
    using QUdpSocket_Receivers_Callback = int (*)(const QUdpSocket*, const char*);
    using QUdpSocket_IsSignalConnected_Callback = bool (*)(const QUdpSocket*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QUdpSocket_Metacall_Callback qudpsocket_metacall_callback = nullptr;
    QUdpSocket_Resume_Callback qudpsocket_resume_callback = nullptr;
    QUdpSocket_Bind_Callback qudpsocket_bind_callback = nullptr;
    QUdpSocket_ConnectToHost_Callback qudpsocket_connecttohost_callback = nullptr;
    QUdpSocket_DisconnectFromHost_Callback qudpsocket_disconnectfromhost_callback = nullptr;
    QUdpSocket_BytesAvailable_Callback qudpsocket_bytesavailable_callback = nullptr;
    QUdpSocket_BytesToWrite_Callback qudpsocket_bytestowrite_callback = nullptr;
    QUdpSocket_SetReadBufferSize_Callback qudpsocket_setreadbuffersize_callback = nullptr;
    QUdpSocket_SocketDescriptor_Callback qudpsocket_socketdescriptor_callback = nullptr;
    QUdpSocket_SetSocketDescriptor_Callback qudpsocket_setsocketdescriptor_callback = nullptr;
    QUdpSocket_SetSocketOption_Callback qudpsocket_setsocketoption_callback = nullptr;
    QUdpSocket_SocketOption_Callback qudpsocket_socketoption_callback = nullptr;
    QUdpSocket_Close_Callback qudpsocket_close_callback = nullptr;
    QUdpSocket_IsSequential_Callback qudpsocket_issequential_callback = nullptr;
    QUdpSocket_WaitForConnected_Callback qudpsocket_waitforconnected_callback = nullptr;
    QUdpSocket_WaitForReadyRead_Callback qudpsocket_waitforreadyread_callback = nullptr;
    QUdpSocket_WaitForBytesWritten_Callback qudpsocket_waitforbyteswritten_callback = nullptr;
    QUdpSocket_WaitForDisconnected_Callback qudpsocket_waitfordisconnected_callback = nullptr;
    QUdpSocket_ReadData_Callback qudpsocket_readdata_callback = nullptr;
    QUdpSocket_ReadLineData_Callback qudpsocket_readlinedata_callback = nullptr;
    QUdpSocket_SkipData_Callback qudpsocket_skipdata_callback = nullptr;
    QUdpSocket_WriteData_Callback qudpsocket_writedata_callback = nullptr;
    QUdpSocket_Open_Callback qudpsocket_open_callback = nullptr;
    QUdpSocket_Pos_Callback qudpsocket_pos_callback = nullptr;
    QUdpSocket_Size_Callback qudpsocket_size_callback = nullptr;
    QUdpSocket_Seek_Callback qudpsocket_seek_callback = nullptr;
    QUdpSocket_AtEnd_Callback qudpsocket_atend_callback = nullptr;
    QUdpSocket_Reset_Callback qudpsocket_reset_callback = nullptr;
    QUdpSocket_CanReadLine_Callback qudpsocket_canreadline_callback = nullptr;
    QUdpSocket_Event_Callback qudpsocket_event_callback = nullptr;
    QUdpSocket_EventFilter_Callback qudpsocket_eventfilter_callback = nullptr;
    QUdpSocket_TimerEvent_Callback qudpsocket_timerevent_callback = nullptr;
    QUdpSocket_ChildEvent_Callback qudpsocket_childevent_callback = nullptr;
    QUdpSocket_CustomEvent_Callback qudpsocket_customevent_callback = nullptr;
    QUdpSocket_ConnectNotify_Callback qudpsocket_connectnotify_callback = nullptr;
    QUdpSocket_DisconnectNotify_Callback qudpsocket_disconnectnotify_callback = nullptr;
    QUdpSocket_SetSocketState_Callback qudpsocket_setsocketstate_callback = nullptr;
    QUdpSocket_SetSocketError_Callback qudpsocket_setsocketerror_callback = nullptr;
    QUdpSocket_SetLocalPort_Callback qudpsocket_setlocalport_callback = nullptr;
    QUdpSocket_SetLocalAddress_Callback qudpsocket_setlocaladdress_callback = nullptr;
    QUdpSocket_SetPeerPort_Callback qudpsocket_setpeerport_callback = nullptr;
    QUdpSocket_SetPeerAddress_Callback qudpsocket_setpeeraddress_callback = nullptr;
    QUdpSocket_SetPeerName_Callback qudpsocket_setpeername_callback = nullptr;
    QUdpSocket_SetOpenMode_Callback qudpsocket_setopenmode_callback = nullptr;
    QUdpSocket_SetErrorString_Callback qudpsocket_seterrorstring_callback = nullptr;
    QUdpSocket_Sender_Callback qudpsocket_sender_callback = nullptr;
    QUdpSocket_SenderSignalIndex_Callback qudpsocket_sendersignalindex_callback = nullptr;
    QUdpSocket_Receivers_Callback qudpsocket_receivers_callback = nullptr;
    QUdpSocket_IsSignalConnected_Callback qudpsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qudpsocket_metacall_isbase = false;
    mutable bool qudpsocket_resume_isbase = false;
    mutable bool qudpsocket_bind_isbase = false;
    mutable bool qudpsocket_connecttohost_isbase = false;
    mutable bool qudpsocket_disconnectfromhost_isbase = false;
    mutable bool qudpsocket_bytesavailable_isbase = false;
    mutable bool qudpsocket_bytestowrite_isbase = false;
    mutable bool qudpsocket_setreadbuffersize_isbase = false;
    mutable bool qudpsocket_socketdescriptor_isbase = false;
    mutable bool qudpsocket_setsocketdescriptor_isbase = false;
    mutable bool qudpsocket_setsocketoption_isbase = false;
    mutable bool qudpsocket_socketoption_isbase = false;
    mutable bool qudpsocket_close_isbase = false;
    mutable bool qudpsocket_issequential_isbase = false;
    mutable bool qudpsocket_waitforconnected_isbase = false;
    mutable bool qudpsocket_waitforreadyread_isbase = false;
    mutable bool qudpsocket_waitforbyteswritten_isbase = false;
    mutable bool qudpsocket_waitfordisconnected_isbase = false;
    mutable bool qudpsocket_readdata_isbase = false;
    mutable bool qudpsocket_readlinedata_isbase = false;
    mutable bool qudpsocket_skipdata_isbase = false;
    mutable bool qudpsocket_writedata_isbase = false;
    mutable bool qudpsocket_open_isbase = false;
    mutable bool qudpsocket_pos_isbase = false;
    mutable bool qudpsocket_size_isbase = false;
    mutable bool qudpsocket_seek_isbase = false;
    mutable bool qudpsocket_atend_isbase = false;
    mutable bool qudpsocket_reset_isbase = false;
    mutable bool qudpsocket_canreadline_isbase = false;
    mutable bool qudpsocket_event_isbase = false;
    mutable bool qudpsocket_eventfilter_isbase = false;
    mutable bool qudpsocket_timerevent_isbase = false;
    mutable bool qudpsocket_childevent_isbase = false;
    mutable bool qudpsocket_customevent_isbase = false;
    mutable bool qudpsocket_connectnotify_isbase = false;
    mutable bool qudpsocket_disconnectnotify_isbase = false;
    mutable bool qudpsocket_setsocketstate_isbase = false;
    mutable bool qudpsocket_setsocketerror_isbase = false;
    mutable bool qudpsocket_setlocalport_isbase = false;
    mutable bool qudpsocket_setlocaladdress_isbase = false;
    mutable bool qudpsocket_setpeerport_isbase = false;
    mutable bool qudpsocket_setpeeraddress_isbase = false;
    mutable bool qudpsocket_setpeername_isbase = false;
    mutable bool qudpsocket_setopenmode_isbase = false;
    mutable bool qudpsocket_seterrorstring_isbase = false;
    mutable bool qudpsocket_sender_isbase = false;
    mutable bool qudpsocket_sendersignalindex_isbase = false;
    mutable bool qudpsocket_receivers_isbase = false;
    mutable bool qudpsocket_issignalconnected_isbase = false;

  public:
    VirtualQUdpSocket() : QUdpSocket(){};
    VirtualQUdpSocket(QObject* parent) : QUdpSocket(parent){};

    ~VirtualQUdpSocket() {
        qudpsocket_metacall_callback = nullptr;
        qudpsocket_resume_callback = nullptr;
        qudpsocket_bind_callback = nullptr;
        qudpsocket_connecttohost_callback = nullptr;
        qudpsocket_disconnectfromhost_callback = nullptr;
        qudpsocket_bytesavailable_callback = nullptr;
        qudpsocket_bytestowrite_callback = nullptr;
        qudpsocket_setreadbuffersize_callback = nullptr;
        qudpsocket_socketdescriptor_callback = nullptr;
        qudpsocket_setsocketdescriptor_callback = nullptr;
        qudpsocket_setsocketoption_callback = nullptr;
        qudpsocket_socketoption_callback = nullptr;
        qudpsocket_close_callback = nullptr;
        qudpsocket_issequential_callback = nullptr;
        qudpsocket_waitforconnected_callback = nullptr;
        qudpsocket_waitforreadyread_callback = nullptr;
        qudpsocket_waitforbyteswritten_callback = nullptr;
        qudpsocket_waitfordisconnected_callback = nullptr;
        qudpsocket_readdata_callback = nullptr;
        qudpsocket_readlinedata_callback = nullptr;
        qudpsocket_skipdata_callback = nullptr;
        qudpsocket_writedata_callback = nullptr;
        qudpsocket_open_callback = nullptr;
        qudpsocket_pos_callback = nullptr;
        qudpsocket_size_callback = nullptr;
        qudpsocket_seek_callback = nullptr;
        qudpsocket_atend_callback = nullptr;
        qudpsocket_reset_callback = nullptr;
        qudpsocket_canreadline_callback = nullptr;
        qudpsocket_event_callback = nullptr;
        qudpsocket_eventfilter_callback = nullptr;
        qudpsocket_timerevent_callback = nullptr;
        qudpsocket_childevent_callback = nullptr;
        qudpsocket_customevent_callback = nullptr;
        qudpsocket_connectnotify_callback = nullptr;
        qudpsocket_disconnectnotify_callback = nullptr;
        qudpsocket_setsocketstate_callback = nullptr;
        qudpsocket_setsocketerror_callback = nullptr;
        qudpsocket_setlocalport_callback = nullptr;
        qudpsocket_setlocaladdress_callback = nullptr;
        qudpsocket_setpeerport_callback = nullptr;
        qudpsocket_setpeeraddress_callback = nullptr;
        qudpsocket_setpeername_callback = nullptr;
        qudpsocket_setopenmode_callback = nullptr;
        qudpsocket_seterrorstring_callback = nullptr;
        qudpsocket_sender_callback = nullptr;
        qudpsocket_sendersignalindex_callback = nullptr;
        qudpsocket_receivers_callback = nullptr;
        qudpsocket_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQUdpSocket_Metacall_Callback(QUdpSocket_Metacall_Callback cb) { qudpsocket_metacall_callback = cb; }
    void setQUdpSocket_Resume_Callback(QUdpSocket_Resume_Callback cb) { qudpsocket_resume_callback = cb; }
    void setQUdpSocket_Bind_Callback(QUdpSocket_Bind_Callback cb) { qudpsocket_bind_callback = cb; }
    void setQUdpSocket_ConnectToHost_Callback(QUdpSocket_ConnectToHost_Callback cb) { qudpsocket_connecttohost_callback = cb; }
    void setQUdpSocket_DisconnectFromHost_Callback(QUdpSocket_DisconnectFromHost_Callback cb) { qudpsocket_disconnectfromhost_callback = cb; }
    void setQUdpSocket_BytesAvailable_Callback(QUdpSocket_BytesAvailable_Callback cb) { qudpsocket_bytesavailable_callback = cb; }
    void setQUdpSocket_BytesToWrite_Callback(QUdpSocket_BytesToWrite_Callback cb) { qudpsocket_bytestowrite_callback = cb; }
    void setQUdpSocket_SetReadBufferSize_Callback(QUdpSocket_SetReadBufferSize_Callback cb) { qudpsocket_setreadbuffersize_callback = cb; }
    void setQUdpSocket_SocketDescriptor_Callback(QUdpSocket_SocketDescriptor_Callback cb) { qudpsocket_socketdescriptor_callback = cb; }
    void setQUdpSocket_SetSocketDescriptor_Callback(QUdpSocket_SetSocketDescriptor_Callback cb) { qudpsocket_setsocketdescriptor_callback = cb; }
    void setQUdpSocket_SetSocketOption_Callback(QUdpSocket_SetSocketOption_Callback cb) { qudpsocket_setsocketoption_callback = cb; }
    void setQUdpSocket_SocketOption_Callback(QUdpSocket_SocketOption_Callback cb) { qudpsocket_socketoption_callback = cb; }
    void setQUdpSocket_Close_Callback(QUdpSocket_Close_Callback cb) { qudpsocket_close_callback = cb; }
    void setQUdpSocket_IsSequential_Callback(QUdpSocket_IsSequential_Callback cb) { qudpsocket_issequential_callback = cb; }
    void setQUdpSocket_WaitForConnected_Callback(QUdpSocket_WaitForConnected_Callback cb) { qudpsocket_waitforconnected_callback = cb; }
    void setQUdpSocket_WaitForReadyRead_Callback(QUdpSocket_WaitForReadyRead_Callback cb) { qudpsocket_waitforreadyread_callback = cb; }
    void setQUdpSocket_WaitForBytesWritten_Callback(QUdpSocket_WaitForBytesWritten_Callback cb) { qudpsocket_waitforbyteswritten_callback = cb; }
    void setQUdpSocket_WaitForDisconnected_Callback(QUdpSocket_WaitForDisconnected_Callback cb) { qudpsocket_waitfordisconnected_callback = cb; }
    void setQUdpSocket_ReadData_Callback(QUdpSocket_ReadData_Callback cb) { qudpsocket_readdata_callback = cb; }
    void setQUdpSocket_ReadLineData_Callback(QUdpSocket_ReadLineData_Callback cb) { qudpsocket_readlinedata_callback = cb; }
    void setQUdpSocket_SkipData_Callback(QUdpSocket_SkipData_Callback cb) { qudpsocket_skipdata_callback = cb; }
    void setQUdpSocket_WriteData_Callback(QUdpSocket_WriteData_Callback cb) { qudpsocket_writedata_callback = cb; }
    void setQUdpSocket_Open_Callback(QUdpSocket_Open_Callback cb) { qudpsocket_open_callback = cb; }
    void setQUdpSocket_Pos_Callback(QUdpSocket_Pos_Callback cb) { qudpsocket_pos_callback = cb; }
    void setQUdpSocket_Size_Callback(QUdpSocket_Size_Callback cb) { qudpsocket_size_callback = cb; }
    void setQUdpSocket_Seek_Callback(QUdpSocket_Seek_Callback cb) { qudpsocket_seek_callback = cb; }
    void setQUdpSocket_AtEnd_Callback(QUdpSocket_AtEnd_Callback cb) { qudpsocket_atend_callback = cb; }
    void setQUdpSocket_Reset_Callback(QUdpSocket_Reset_Callback cb) { qudpsocket_reset_callback = cb; }
    void setQUdpSocket_CanReadLine_Callback(QUdpSocket_CanReadLine_Callback cb) { qudpsocket_canreadline_callback = cb; }
    void setQUdpSocket_Event_Callback(QUdpSocket_Event_Callback cb) { qudpsocket_event_callback = cb; }
    void setQUdpSocket_EventFilter_Callback(QUdpSocket_EventFilter_Callback cb) { qudpsocket_eventfilter_callback = cb; }
    void setQUdpSocket_TimerEvent_Callback(QUdpSocket_TimerEvent_Callback cb) { qudpsocket_timerevent_callback = cb; }
    void setQUdpSocket_ChildEvent_Callback(QUdpSocket_ChildEvent_Callback cb) { qudpsocket_childevent_callback = cb; }
    void setQUdpSocket_CustomEvent_Callback(QUdpSocket_CustomEvent_Callback cb) { qudpsocket_customevent_callback = cb; }
    void setQUdpSocket_ConnectNotify_Callback(QUdpSocket_ConnectNotify_Callback cb) { qudpsocket_connectnotify_callback = cb; }
    void setQUdpSocket_DisconnectNotify_Callback(QUdpSocket_DisconnectNotify_Callback cb) { qudpsocket_disconnectnotify_callback = cb; }
    void setQUdpSocket_SetSocketState_Callback(QUdpSocket_SetSocketState_Callback cb) { qudpsocket_setsocketstate_callback = cb; }
    void setQUdpSocket_SetSocketError_Callback(QUdpSocket_SetSocketError_Callback cb) { qudpsocket_setsocketerror_callback = cb; }
    void setQUdpSocket_SetLocalPort_Callback(QUdpSocket_SetLocalPort_Callback cb) { qudpsocket_setlocalport_callback = cb; }
    void setQUdpSocket_SetLocalAddress_Callback(QUdpSocket_SetLocalAddress_Callback cb) { qudpsocket_setlocaladdress_callback = cb; }
    void setQUdpSocket_SetPeerPort_Callback(QUdpSocket_SetPeerPort_Callback cb) { qudpsocket_setpeerport_callback = cb; }
    void setQUdpSocket_SetPeerAddress_Callback(QUdpSocket_SetPeerAddress_Callback cb) { qudpsocket_setpeeraddress_callback = cb; }
    void setQUdpSocket_SetPeerName_Callback(QUdpSocket_SetPeerName_Callback cb) { qudpsocket_setpeername_callback = cb; }
    void setQUdpSocket_SetOpenMode_Callback(QUdpSocket_SetOpenMode_Callback cb) { qudpsocket_setopenmode_callback = cb; }
    void setQUdpSocket_SetErrorString_Callback(QUdpSocket_SetErrorString_Callback cb) { qudpsocket_seterrorstring_callback = cb; }
    void setQUdpSocket_Sender_Callback(QUdpSocket_Sender_Callback cb) { qudpsocket_sender_callback = cb; }
    void setQUdpSocket_SenderSignalIndex_Callback(QUdpSocket_SenderSignalIndex_Callback cb) { qudpsocket_sendersignalindex_callback = cb; }
    void setQUdpSocket_Receivers_Callback(QUdpSocket_Receivers_Callback cb) { qudpsocket_receivers_callback = cb; }
    void setQUdpSocket_IsSignalConnected_Callback(QUdpSocket_IsSignalConnected_Callback cb) { qudpsocket_issignalconnected_callback = cb; }

    // Base flag setters
    void setQUdpSocket_Metacall_IsBase(bool value) const { qudpsocket_metacall_isbase = value; }
    void setQUdpSocket_Resume_IsBase(bool value) const { qudpsocket_resume_isbase = value; }
    void setQUdpSocket_Bind_IsBase(bool value) const { qudpsocket_bind_isbase = value; }
    void setQUdpSocket_ConnectToHost_IsBase(bool value) const { qudpsocket_connecttohost_isbase = value; }
    void setQUdpSocket_DisconnectFromHost_IsBase(bool value) const { qudpsocket_disconnectfromhost_isbase = value; }
    void setQUdpSocket_BytesAvailable_IsBase(bool value) const { qudpsocket_bytesavailable_isbase = value; }
    void setQUdpSocket_BytesToWrite_IsBase(bool value) const { qudpsocket_bytestowrite_isbase = value; }
    void setQUdpSocket_SetReadBufferSize_IsBase(bool value) const { qudpsocket_setreadbuffersize_isbase = value; }
    void setQUdpSocket_SocketDescriptor_IsBase(bool value) const { qudpsocket_socketdescriptor_isbase = value; }
    void setQUdpSocket_SetSocketDescriptor_IsBase(bool value) const { qudpsocket_setsocketdescriptor_isbase = value; }
    void setQUdpSocket_SetSocketOption_IsBase(bool value) const { qudpsocket_setsocketoption_isbase = value; }
    void setQUdpSocket_SocketOption_IsBase(bool value) const { qudpsocket_socketoption_isbase = value; }
    void setQUdpSocket_Close_IsBase(bool value) const { qudpsocket_close_isbase = value; }
    void setQUdpSocket_IsSequential_IsBase(bool value) const { qudpsocket_issequential_isbase = value; }
    void setQUdpSocket_WaitForConnected_IsBase(bool value) const { qudpsocket_waitforconnected_isbase = value; }
    void setQUdpSocket_WaitForReadyRead_IsBase(bool value) const { qudpsocket_waitforreadyread_isbase = value; }
    void setQUdpSocket_WaitForBytesWritten_IsBase(bool value) const { qudpsocket_waitforbyteswritten_isbase = value; }
    void setQUdpSocket_WaitForDisconnected_IsBase(bool value) const { qudpsocket_waitfordisconnected_isbase = value; }
    void setQUdpSocket_ReadData_IsBase(bool value) const { qudpsocket_readdata_isbase = value; }
    void setQUdpSocket_ReadLineData_IsBase(bool value) const { qudpsocket_readlinedata_isbase = value; }
    void setQUdpSocket_SkipData_IsBase(bool value) const { qudpsocket_skipdata_isbase = value; }
    void setQUdpSocket_WriteData_IsBase(bool value) const { qudpsocket_writedata_isbase = value; }
    void setQUdpSocket_Open_IsBase(bool value) const { qudpsocket_open_isbase = value; }
    void setQUdpSocket_Pos_IsBase(bool value) const { qudpsocket_pos_isbase = value; }
    void setQUdpSocket_Size_IsBase(bool value) const { qudpsocket_size_isbase = value; }
    void setQUdpSocket_Seek_IsBase(bool value) const { qudpsocket_seek_isbase = value; }
    void setQUdpSocket_AtEnd_IsBase(bool value) const { qudpsocket_atend_isbase = value; }
    void setQUdpSocket_Reset_IsBase(bool value) const { qudpsocket_reset_isbase = value; }
    void setQUdpSocket_CanReadLine_IsBase(bool value) const { qudpsocket_canreadline_isbase = value; }
    void setQUdpSocket_Event_IsBase(bool value) const { qudpsocket_event_isbase = value; }
    void setQUdpSocket_EventFilter_IsBase(bool value) const { qudpsocket_eventfilter_isbase = value; }
    void setQUdpSocket_TimerEvent_IsBase(bool value) const { qudpsocket_timerevent_isbase = value; }
    void setQUdpSocket_ChildEvent_IsBase(bool value) const { qudpsocket_childevent_isbase = value; }
    void setQUdpSocket_CustomEvent_IsBase(bool value) const { qudpsocket_customevent_isbase = value; }
    void setQUdpSocket_ConnectNotify_IsBase(bool value) const { qudpsocket_connectnotify_isbase = value; }
    void setQUdpSocket_DisconnectNotify_IsBase(bool value) const { qudpsocket_disconnectnotify_isbase = value; }
    void setQUdpSocket_SetSocketState_IsBase(bool value) const { qudpsocket_setsocketstate_isbase = value; }
    void setQUdpSocket_SetSocketError_IsBase(bool value) const { qudpsocket_setsocketerror_isbase = value; }
    void setQUdpSocket_SetLocalPort_IsBase(bool value) const { qudpsocket_setlocalport_isbase = value; }
    void setQUdpSocket_SetLocalAddress_IsBase(bool value) const { qudpsocket_setlocaladdress_isbase = value; }
    void setQUdpSocket_SetPeerPort_IsBase(bool value) const { qudpsocket_setpeerport_isbase = value; }
    void setQUdpSocket_SetPeerAddress_IsBase(bool value) const { qudpsocket_setpeeraddress_isbase = value; }
    void setQUdpSocket_SetPeerName_IsBase(bool value) const { qudpsocket_setpeername_isbase = value; }
    void setQUdpSocket_SetOpenMode_IsBase(bool value) const { qudpsocket_setopenmode_isbase = value; }
    void setQUdpSocket_SetErrorString_IsBase(bool value) const { qudpsocket_seterrorstring_isbase = value; }
    void setQUdpSocket_Sender_IsBase(bool value) const { qudpsocket_sender_isbase = value; }
    void setQUdpSocket_SenderSignalIndex_IsBase(bool value) const { qudpsocket_sendersignalindex_isbase = value; }
    void setQUdpSocket_Receivers_IsBase(bool value) const { qudpsocket_receivers_isbase = value; }
    void setQUdpSocket_IsSignalConnected_IsBase(bool value) const { qudpsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qudpsocket_metacall_isbase) {
            qudpsocket_metacall_isbase = false;
            return QUdpSocket::qt_metacall(param1, param2, param3);
        } else if (qudpsocket_metacall_callback != nullptr) {
            return qudpsocket_metacall_callback(this, param1, param2, param3);
        } else {
            return QUdpSocket::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qudpsocket_resume_isbase) {
            qudpsocket_resume_isbase = false;
            QUdpSocket::resume();
        } else if (qudpsocket_resume_callback != nullptr) {
            qudpsocket_resume_callback();
        } else {
            QUdpSocket::resume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
        if (qudpsocket_bind_isbase) {
            qudpsocket_bind_isbase = false;
            return QUdpSocket::bind(address, port, mode);
        } else if (qudpsocket_bind_callback != nullptr) {
            return qudpsocket_bind_callback(this, address, port, mode);
        } else {
            return QUdpSocket::bind(address, port, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qudpsocket_connecttohost_isbase) {
            qudpsocket_connecttohost_isbase = false;
            QUdpSocket::connectToHost(hostName, port, mode, protocol);
        } else if (qudpsocket_connecttohost_callback != nullptr) {
            qudpsocket_connecttohost_callback(this, hostName, port, mode, protocol);
        } else {
            QUdpSocket::connectToHost(hostName, port, mode, protocol);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qudpsocket_disconnectfromhost_isbase) {
            qudpsocket_disconnectfromhost_isbase = false;
            QUdpSocket::disconnectFromHost();
        } else if (qudpsocket_disconnectfromhost_callback != nullptr) {
            qudpsocket_disconnectfromhost_callback();
        } else {
            QUdpSocket::disconnectFromHost();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qudpsocket_bytesavailable_isbase) {
            qudpsocket_bytesavailable_isbase = false;
            return QUdpSocket::bytesAvailable();
        } else if (qudpsocket_bytesavailable_callback != nullptr) {
            return qudpsocket_bytesavailable_callback();
        } else {
            return QUdpSocket::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qudpsocket_bytestowrite_isbase) {
            qudpsocket_bytestowrite_isbase = false;
            return QUdpSocket::bytesToWrite();
        } else if (qudpsocket_bytestowrite_callback != nullptr) {
            return qudpsocket_bytestowrite_callback();
        } else {
            return QUdpSocket::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qudpsocket_setreadbuffersize_isbase) {
            qudpsocket_setreadbuffersize_isbase = false;
            QUdpSocket::setReadBufferSize(size);
        } else if (qudpsocket_setreadbuffersize_callback != nullptr) {
            qudpsocket_setreadbuffersize_callback(this, size);
        } else {
            QUdpSocket::setReadBufferSize(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qudpsocket_socketdescriptor_isbase) {
            qudpsocket_socketdescriptor_isbase = false;
            return QUdpSocket::socketDescriptor();
        } else if (qudpsocket_socketdescriptor_callback != nullptr) {
            return qudpsocket_socketdescriptor_callback();
        } else {
            return QUdpSocket::socketDescriptor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
        if (qudpsocket_setsocketdescriptor_isbase) {
            qudpsocket_setsocketdescriptor_isbase = false;
            return QUdpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        } else if (qudpsocket_setsocketdescriptor_callback != nullptr) {
            return qudpsocket_setsocketdescriptor_callback(this, socketDescriptor, state, openMode);
        } else {
            return QUdpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qudpsocket_setsocketoption_isbase) {
            qudpsocket_setsocketoption_isbase = false;
            QUdpSocket::setSocketOption(option, value);
        } else if (qudpsocket_setsocketoption_callback != nullptr) {
            qudpsocket_setsocketoption_callback(this, option, value);
        } else {
            QUdpSocket::setSocketOption(option, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qudpsocket_socketoption_isbase) {
            qudpsocket_socketoption_isbase = false;
            return QUdpSocket::socketOption(option);
        } else if (qudpsocket_socketoption_callback != nullptr) {
            return qudpsocket_socketoption_callback(this, option);
        } else {
            return QUdpSocket::socketOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qudpsocket_close_isbase) {
            qudpsocket_close_isbase = false;
            QUdpSocket::close();
        } else if (qudpsocket_close_callback != nullptr) {
            qudpsocket_close_callback();
        } else {
            QUdpSocket::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qudpsocket_issequential_isbase) {
            qudpsocket_issequential_isbase = false;
            return QUdpSocket::isSequential();
        } else if (qudpsocket_issequential_callback != nullptr) {
            return qudpsocket_issequential_callback();
        } else {
            return QUdpSocket::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qudpsocket_waitforconnected_isbase) {
            qudpsocket_waitforconnected_isbase = false;
            return QUdpSocket::waitForConnected(msecs);
        } else if (qudpsocket_waitforconnected_callback != nullptr) {
            return qudpsocket_waitforconnected_callback(this, msecs);
        } else {
            return QUdpSocket::waitForConnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qudpsocket_waitforreadyread_isbase) {
            qudpsocket_waitforreadyread_isbase = false;
            return QUdpSocket::waitForReadyRead(msecs);
        } else if (qudpsocket_waitforreadyread_callback != nullptr) {
            return qudpsocket_waitforreadyread_callback(this, msecs);
        } else {
            return QUdpSocket::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qudpsocket_waitforbyteswritten_isbase) {
            qudpsocket_waitforbyteswritten_isbase = false;
            return QUdpSocket::waitForBytesWritten(msecs);
        } else if (qudpsocket_waitforbyteswritten_callback != nullptr) {
            return qudpsocket_waitforbyteswritten_callback(this, msecs);
        } else {
            return QUdpSocket::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qudpsocket_waitfordisconnected_isbase) {
            qudpsocket_waitfordisconnected_isbase = false;
            return QUdpSocket::waitForDisconnected(msecs);
        } else if (qudpsocket_waitfordisconnected_callback != nullptr) {
            return qudpsocket_waitfordisconnected_callback(this, msecs);
        } else {
            return QUdpSocket::waitForDisconnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qudpsocket_readdata_isbase) {
            qudpsocket_readdata_isbase = false;
            return QUdpSocket::readData(data, maxlen);
        } else if (qudpsocket_readdata_callback != nullptr) {
            return qudpsocket_readdata_callback(this, data, maxlen);
        } else {
            return QUdpSocket::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qudpsocket_readlinedata_isbase) {
            qudpsocket_readlinedata_isbase = false;
            return QUdpSocket::readLineData(data, maxlen);
        } else if (qudpsocket_readlinedata_callback != nullptr) {
            return qudpsocket_readlinedata_callback(this, data, maxlen);
        } else {
            return QUdpSocket::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qudpsocket_skipdata_isbase) {
            qudpsocket_skipdata_isbase = false;
            return QUdpSocket::skipData(maxSize);
        } else if (qudpsocket_skipdata_callback != nullptr) {
            return qudpsocket_skipdata_callback(this, maxSize);
        } else {
            return QUdpSocket::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qudpsocket_writedata_isbase) {
            qudpsocket_writedata_isbase = false;
            return QUdpSocket::writeData(data, lenVal);
        } else if (qudpsocket_writedata_callback != nullptr) {
            return qudpsocket_writedata_callback(this, data, lenVal);
        } else {
            return QUdpSocket::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qudpsocket_open_isbase) {
            qudpsocket_open_isbase = false;
            return QUdpSocket::open(mode);
        } else if (qudpsocket_open_callback != nullptr) {
            return qudpsocket_open_callback(this, mode);
        } else {
            return QUdpSocket::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qudpsocket_pos_isbase) {
            qudpsocket_pos_isbase = false;
            return QUdpSocket::pos();
        } else if (qudpsocket_pos_callback != nullptr) {
            return qudpsocket_pos_callback();
        } else {
            return QUdpSocket::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qudpsocket_size_isbase) {
            qudpsocket_size_isbase = false;
            return QUdpSocket::size();
        } else if (qudpsocket_size_callback != nullptr) {
            return qudpsocket_size_callback();
        } else {
            return QUdpSocket::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qudpsocket_seek_isbase) {
            qudpsocket_seek_isbase = false;
            return QUdpSocket::seek(pos);
        } else if (qudpsocket_seek_callback != nullptr) {
            return qudpsocket_seek_callback(this, pos);
        } else {
            return QUdpSocket::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qudpsocket_atend_isbase) {
            qudpsocket_atend_isbase = false;
            return QUdpSocket::atEnd();
        } else if (qudpsocket_atend_callback != nullptr) {
            return qudpsocket_atend_callback();
        } else {
            return QUdpSocket::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qudpsocket_reset_isbase) {
            qudpsocket_reset_isbase = false;
            return QUdpSocket::reset();
        } else if (qudpsocket_reset_callback != nullptr) {
            return qudpsocket_reset_callback();
        } else {
            return QUdpSocket::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qudpsocket_canreadline_isbase) {
            qudpsocket_canreadline_isbase = false;
            return QUdpSocket::canReadLine();
        } else if (qudpsocket_canreadline_callback != nullptr) {
            return qudpsocket_canreadline_callback();
        } else {
            return QUdpSocket::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qudpsocket_event_isbase) {
            qudpsocket_event_isbase = false;
            return QUdpSocket::event(event);
        } else if (qudpsocket_event_callback != nullptr) {
            return qudpsocket_event_callback(this, event);
        } else {
            return QUdpSocket::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qudpsocket_eventfilter_isbase) {
            qudpsocket_eventfilter_isbase = false;
            return QUdpSocket::eventFilter(watched, event);
        } else if (qudpsocket_eventfilter_callback != nullptr) {
            return qudpsocket_eventfilter_callback(this, watched, event);
        } else {
            return QUdpSocket::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qudpsocket_timerevent_isbase) {
            qudpsocket_timerevent_isbase = false;
            QUdpSocket::timerEvent(event);
        } else if (qudpsocket_timerevent_callback != nullptr) {
            qudpsocket_timerevent_callback(this, event);
        } else {
            QUdpSocket::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qudpsocket_childevent_isbase) {
            qudpsocket_childevent_isbase = false;
            QUdpSocket::childEvent(event);
        } else if (qudpsocket_childevent_callback != nullptr) {
            qudpsocket_childevent_callback(this, event);
        } else {
            QUdpSocket::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qudpsocket_customevent_isbase) {
            qudpsocket_customevent_isbase = false;
            QUdpSocket::customEvent(event);
        } else if (qudpsocket_customevent_callback != nullptr) {
            qudpsocket_customevent_callback(this, event);
        } else {
            QUdpSocket::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qudpsocket_connectnotify_isbase) {
            qudpsocket_connectnotify_isbase = false;
            QUdpSocket::connectNotify(signal);
        } else if (qudpsocket_connectnotify_callback != nullptr) {
            qudpsocket_connectnotify_callback(this, signal);
        } else {
            QUdpSocket::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qudpsocket_disconnectnotify_isbase) {
            qudpsocket_disconnectnotify_isbase = false;
            QUdpSocket::disconnectNotify(signal);
        } else if (qudpsocket_disconnectnotify_callback != nullptr) {
            qudpsocket_disconnectnotify_callback(this, signal);
        } else {
            QUdpSocket::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketState(QAbstractSocket::SocketState state) {
        if (qudpsocket_setsocketstate_isbase) {
            qudpsocket_setsocketstate_isbase = false;
            QUdpSocket::setSocketState(state);
        } else if (qudpsocket_setsocketstate_callback != nullptr) {
            qudpsocket_setsocketstate_callback(this, state);
        } else {
            QUdpSocket::setSocketState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketError(QAbstractSocket::SocketError socketError) {
        if (qudpsocket_setsocketerror_isbase) {
            qudpsocket_setsocketerror_isbase = false;
            QUdpSocket::setSocketError(socketError);
        } else if (qudpsocket_setsocketerror_callback != nullptr) {
            qudpsocket_setsocketerror_callback(this, socketError);
        } else {
            QUdpSocket::setSocketError(socketError);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalPort(quint16 port) {
        if (qudpsocket_setlocalport_isbase) {
            qudpsocket_setlocalport_isbase = false;
            QUdpSocket::setLocalPort(port);
        } else if (qudpsocket_setlocalport_callback != nullptr) {
            qudpsocket_setlocalport_callback(this, port);
        } else {
            QUdpSocket::setLocalPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalAddress(const QHostAddress& address) {
        if (qudpsocket_setlocaladdress_isbase) {
            qudpsocket_setlocaladdress_isbase = false;
            QUdpSocket::setLocalAddress(address);
        } else if (qudpsocket_setlocaladdress_callback != nullptr) {
            qudpsocket_setlocaladdress_callback(this, address);
        } else {
            QUdpSocket::setLocalAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerPort(quint16 port) {
        if (qudpsocket_setpeerport_isbase) {
            qudpsocket_setpeerport_isbase = false;
            QUdpSocket::setPeerPort(port);
        } else if (qudpsocket_setpeerport_callback != nullptr) {
            qudpsocket_setpeerport_callback(this, port);
        } else {
            QUdpSocket::setPeerPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerAddress(const QHostAddress& address) {
        if (qudpsocket_setpeeraddress_isbase) {
            qudpsocket_setpeeraddress_isbase = false;
            QUdpSocket::setPeerAddress(address);
        } else if (qudpsocket_setpeeraddress_callback != nullptr) {
            qudpsocket_setpeeraddress_callback(this, address);
        } else {
            QUdpSocket::setPeerAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerName(const QString& name) {
        if (qudpsocket_setpeername_isbase) {
            qudpsocket_setpeername_isbase = false;
            QUdpSocket::setPeerName(name);
        } else if (qudpsocket_setpeername_callback != nullptr) {
            qudpsocket_setpeername_callback(this, name);
        } else {
            QUdpSocket::setPeerName(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qudpsocket_setopenmode_isbase) {
            qudpsocket_setopenmode_isbase = false;
            QUdpSocket::setOpenMode(openMode);
        } else if (qudpsocket_setopenmode_callback != nullptr) {
            qudpsocket_setopenmode_callback(this, openMode);
        } else {
            QUdpSocket::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qudpsocket_seterrorstring_isbase) {
            qudpsocket_seterrorstring_isbase = false;
            QUdpSocket::setErrorString(errorString);
        } else if (qudpsocket_seterrorstring_callback != nullptr) {
            qudpsocket_seterrorstring_callback(this, errorString);
        } else {
            QUdpSocket::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qudpsocket_sender_isbase) {
            qudpsocket_sender_isbase = false;
            return QUdpSocket::sender();
        } else if (qudpsocket_sender_callback != nullptr) {
            return qudpsocket_sender_callback();
        } else {
            return QUdpSocket::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qudpsocket_sendersignalindex_isbase) {
            qudpsocket_sendersignalindex_isbase = false;
            return QUdpSocket::senderSignalIndex();
        } else if (qudpsocket_sendersignalindex_callback != nullptr) {
            return qudpsocket_sendersignalindex_callback();
        } else {
            return QUdpSocket::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qudpsocket_receivers_isbase) {
            qudpsocket_receivers_isbase = false;
            return QUdpSocket::receivers(signal);
        } else if (qudpsocket_receivers_callback != nullptr) {
            return qudpsocket_receivers_callback(this, signal);
        } else {
            return QUdpSocket::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qudpsocket_issignalconnected_isbase) {
            qudpsocket_issignalconnected_isbase = false;
            return QUdpSocket::isSignalConnected(signal);
        } else if (qudpsocket_issignalconnected_callback != nullptr) {
            return qudpsocket_issignalconnected_callback(this, signal);
        } else {
            return QUdpSocket::isSignalConnected(signal);
        }
    }
};

#endif

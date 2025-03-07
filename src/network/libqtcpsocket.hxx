#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQTCPSOCKET_H
#define SRC_NETWORKC_LIBVIRTUALQTCPSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTcpSocket so that we can call protected methods
class VirtualQTcpSocket : public QTcpSocket {

  public:
    // Virtual class public types (including callbacks)
    using QTcpSocket_Metacall_Callback = int (*)(QTcpSocket*, QMetaObject::Call, int, void**);
    using QTcpSocket_Resume_Callback = void (*)();
    using QTcpSocket_Bind_Callback = bool (*)(QTcpSocket*, const QHostAddress&, quint16, QAbstractSocket::BindMode);
    using QTcpSocket_ConnectToHost_Callback = void (*)(QTcpSocket*, const QString&, quint16, QIODeviceBase::OpenMode, QAbstractSocket::NetworkLayerProtocol);
    using QTcpSocket_DisconnectFromHost_Callback = void (*)();
    using QTcpSocket_BytesAvailable_Callback = qint64 (*)();
    using QTcpSocket_BytesToWrite_Callback = qint64 (*)();
    using QTcpSocket_SetReadBufferSize_Callback = void (*)(QTcpSocket*, qint64);
    using QTcpSocket_SocketDescriptor_Callback = qintptr (*)();
    using QTcpSocket_SetSocketDescriptor_Callback = bool (*)(QTcpSocket*, qintptr, QAbstractSocket::SocketState, QIODeviceBase::OpenMode);
    using QTcpSocket_SetSocketOption_Callback = void (*)(QTcpSocket*, QAbstractSocket::SocketOption, const QVariant&);
    using QTcpSocket_SocketOption_Callback = QVariant (*)(QTcpSocket*, QAbstractSocket::SocketOption);
    using QTcpSocket_Close_Callback = void (*)();
    using QTcpSocket_IsSequential_Callback = bool (*)();
    using QTcpSocket_WaitForConnected_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForReadyRead_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForBytesWritten_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForDisconnected_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_ReadData_Callback = qint64 (*)(QTcpSocket*, char*, qint64);
    using QTcpSocket_ReadLineData_Callback = qint64 (*)(QTcpSocket*, char*, qint64);
    using QTcpSocket_SkipData_Callback = qint64 (*)(QTcpSocket*, qint64);
    using QTcpSocket_WriteData_Callback = qint64 (*)(QTcpSocket*, const char*, qint64);
    using QTcpSocket_Open_Callback = bool (*)(QTcpSocket*, QIODeviceBase::OpenMode);
    using QTcpSocket_Pos_Callback = qint64 (*)();
    using QTcpSocket_Size_Callback = qint64 (*)();
    using QTcpSocket_Seek_Callback = bool (*)(QTcpSocket*, qint64);
    using QTcpSocket_AtEnd_Callback = bool (*)();
    using QTcpSocket_Reset_Callback = bool (*)();
    using QTcpSocket_CanReadLine_Callback = bool (*)();
    using QTcpSocket_Event_Callback = bool (*)(QTcpSocket*, QEvent*);
    using QTcpSocket_EventFilter_Callback = bool (*)(QTcpSocket*, QObject*, QEvent*);
    using QTcpSocket_TimerEvent_Callback = void (*)(QTcpSocket*, QTimerEvent*);
    using QTcpSocket_ChildEvent_Callback = void (*)(QTcpSocket*, QChildEvent*);
    using QTcpSocket_CustomEvent_Callback = void (*)(QTcpSocket*, QEvent*);
    using QTcpSocket_ConnectNotify_Callback = void (*)(QTcpSocket*, const QMetaMethod&);
    using QTcpSocket_DisconnectNotify_Callback = void (*)(QTcpSocket*, const QMetaMethod&);
    using QTcpSocket_SetSocketState_Callback = void (*)(QTcpSocket*, QAbstractSocket::SocketState);
    using QTcpSocket_SetSocketError_Callback = void (*)(QTcpSocket*, QAbstractSocket::SocketError);
    using QTcpSocket_SetLocalPort_Callback = void (*)(QTcpSocket*, quint16);
    using QTcpSocket_SetLocalAddress_Callback = void (*)(QTcpSocket*, const QHostAddress&);
    using QTcpSocket_SetPeerPort_Callback = void (*)(QTcpSocket*, quint16);
    using QTcpSocket_SetPeerAddress_Callback = void (*)(QTcpSocket*, const QHostAddress&);
    using QTcpSocket_SetPeerName_Callback = void (*)(QTcpSocket*, const QString&);
    using QTcpSocket_SetOpenMode_Callback = void (*)(QTcpSocket*, QIODeviceBase::OpenMode);
    using QTcpSocket_SetErrorString_Callback = void (*)(QTcpSocket*, const QString&);
    using QTcpSocket_Sender_Callback = QObject* (*)();
    using QTcpSocket_SenderSignalIndex_Callback = int (*)();
    using QTcpSocket_Receivers_Callback = int (*)(const QTcpSocket*, const char*);
    using QTcpSocket_IsSignalConnected_Callback = bool (*)(const QTcpSocket*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTcpSocket_Metacall_Callback qtcpsocket_metacall_callback = nullptr;
    QTcpSocket_Resume_Callback qtcpsocket_resume_callback = nullptr;
    QTcpSocket_Bind_Callback qtcpsocket_bind_callback = nullptr;
    QTcpSocket_ConnectToHost_Callback qtcpsocket_connecttohost_callback = nullptr;
    QTcpSocket_DisconnectFromHost_Callback qtcpsocket_disconnectfromhost_callback = nullptr;
    QTcpSocket_BytesAvailable_Callback qtcpsocket_bytesavailable_callback = nullptr;
    QTcpSocket_BytesToWrite_Callback qtcpsocket_bytestowrite_callback = nullptr;
    QTcpSocket_SetReadBufferSize_Callback qtcpsocket_setreadbuffersize_callback = nullptr;
    QTcpSocket_SocketDescriptor_Callback qtcpsocket_socketdescriptor_callback = nullptr;
    QTcpSocket_SetSocketDescriptor_Callback qtcpsocket_setsocketdescriptor_callback = nullptr;
    QTcpSocket_SetSocketOption_Callback qtcpsocket_setsocketoption_callback = nullptr;
    QTcpSocket_SocketOption_Callback qtcpsocket_socketoption_callback = nullptr;
    QTcpSocket_Close_Callback qtcpsocket_close_callback = nullptr;
    QTcpSocket_IsSequential_Callback qtcpsocket_issequential_callback = nullptr;
    QTcpSocket_WaitForConnected_Callback qtcpsocket_waitforconnected_callback = nullptr;
    QTcpSocket_WaitForReadyRead_Callback qtcpsocket_waitforreadyread_callback = nullptr;
    QTcpSocket_WaitForBytesWritten_Callback qtcpsocket_waitforbyteswritten_callback = nullptr;
    QTcpSocket_WaitForDisconnected_Callback qtcpsocket_waitfordisconnected_callback = nullptr;
    QTcpSocket_ReadData_Callback qtcpsocket_readdata_callback = nullptr;
    QTcpSocket_ReadLineData_Callback qtcpsocket_readlinedata_callback = nullptr;
    QTcpSocket_SkipData_Callback qtcpsocket_skipdata_callback = nullptr;
    QTcpSocket_WriteData_Callback qtcpsocket_writedata_callback = nullptr;
    QTcpSocket_Open_Callback qtcpsocket_open_callback = nullptr;
    QTcpSocket_Pos_Callback qtcpsocket_pos_callback = nullptr;
    QTcpSocket_Size_Callback qtcpsocket_size_callback = nullptr;
    QTcpSocket_Seek_Callback qtcpsocket_seek_callback = nullptr;
    QTcpSocket_AtEnd_Callback qtcpsocket_atend_callback = nullptr;
    QTcpSocket_Reset_Callback qtcpsocket_reset_callback = nullptr;
    QTcpSocket_CanReadLine_Callback qtcpsocket_canreadline_callback = nullptr;
    QTcpSocket_Event_Callback qtcpsocket_event_callback = nullptr;
    QTcpSocket_EventFilter_Callback qtcpsocket_eventfilter_callback = nullptr;
    QTcpSocket_TimerEvent_Callback qtcpsocket_timerevent_callback = nullptr;
    QTcpSocket_ChildEvent_Callback qtcpsocket_childevent_callback = nullptr;
    QTcpSocket_CustomEvent_Callback qtcpsocket_customevent_callback = nullptr;
    QTcpSocket_ConnectNotify_Callback qtcpsocket_connectnotify_callback = nullptr;
    QTcpSocket_DisconnectNotify_Callback qtcpsocket_disconnectnotify_callback = nullptr;
    QTcpSocket_SetSocketState_Callback qtcpsocket_setsocketstate_callback = nullptr;
    QTcpSocket_SetSocketError_Callback qtcpsocket_setsocketerror_callback = nullptr;
    QTcpSocket_SetLocalPort_Callback qtcpsocket_setlocalport_callback = nullptr;
    QTcpSocket_SetLocalAddress_Callback qtcpsocket_setlocaladdress_callback = nullptr;
    QTcpSocket_SetPeerPort_Callback qtcpsocket_setpeerport_callback = nullptr;
    QTcpSocket_SetPeerAddress_Callback qtcpsocket_setpeeraddress_callback = nullptr;
    QTcpSocket_SetPeerName_Callback qtcpsocket_setpeername_callback = nullptr;
    QTcpSocket_SetOpenMode_Callback qtcpsocket_setopenmode_callback = nullptr;
    QTcpSocket_SetErrorString_Callback qtcpsocket_seterrorstring_callback = nullptr;
    QTcpSocket_Sender_Callback qtcpsocket_sender_callback = nullptr;
    QTcpSocket_SenderSignalIndex_Callback qtcpsocket_sendersignalindex_callback = nullptr;
    QTcpSocket_Receivers_Callback qtcpsocket_receivers_callback = nullptr;
    QTcpSocket_IsSignalConnected_Callback qtcpsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtcpsocket_metacall_isbase = false;
    mutable bool qtcpsocket_resume_isbase = false;
    mutable bool qtcpsocket_bind_isbase = false;
    mutable bool qtcpsocket_connecttohost_isbase = false;
    mutable bool qtcpsocket_disconnectfromhost_isbase = false;
    mutable bool qtcpsocket_bytesavailable_isbase = false;
    mutable bool qtcpsocket_bytestowrite_isbase = false;
    mutable bool qtcpsocket_setreadbuffersize_isbase = false;
    mutable bool qtcpsocket_socketdescriptor_isbase = false;
    mutable bool qtcpsocket_setsocketdescriptor_isbase = false;
    mutable bool qtcpsocket_setsocketoption_isbase = false;
    mutable bool qtcpsocket_socketoption_isbase = false;
    mutable bool qtcpsocket_close_isbase = false;
    mutable bool qtcpsocket_issequential_isbase = false;
    mutable bool qtcpsocket_waitforconnected_isbase = false;
    mutable bool qtcpsocket_waitforreadyread_isbase = false;
    mutable bool qtcpsocket_waitforbyteswritten_isbase = false;
    mutable bool qtcpsocket_waitfordisconnected_isbase = false;
    mutable bool qtcpsocket_readdata_isbase = false;
    mutable bool qtcpsocket_readlinedata_isbase = false;
    mutable bool qtcpsocket_skipdata_isbase = false;
    mutable bool qtcpsocket_writedata_isbase = false;
    mutable bool qtcpsocket_open_isbase = false;
    mutable bool qtcpsocket_pos_isbase = false;
    mutable bool qtcpsocket_size_isbase = false;
    mutable bool qtcpsocket_seek_isbase = false;
    mutable bool qtcpsocket_atend_isbase = false;
    mutable bool qtcpsocket_reset_isbase = false;
    mutable bool qtcpsocket_canreadline_isbase = false;
    mutable bool qtcpsocket_event_isbase = false;
    mutable bool qtcpsocket_eventfilter_isbase = false;
    mutable bool qtcpsocket_timerevent_isbase = false;
    mutable bool qtcpsocket_childevent_isbase = false;
    mutable bool qtcpsocket_customevent_isbase = false;
    mutable bool qtcpsocket_connectnotify_isbase = false;
    mutable bool qtcpsocket_disconnectnotify_isbase = false;
    mutable bool qtcpsocket_setsocketstate_isbase = false;
    mutable bool qtcpsocket_setsocketerror_isbase = false;
    mutable bool qtcpsocket_setlocalport_isbase = false;
    mutable bool qtcpsocket_setlocaladdress_isbase = false;
    mutable bool qtcpsocket_setpeerport_isbase = false;
    mutable bool qtcpsocket_setpeeraddress_isbase = false;
    mutable bool qtcpsocket_setpeername_isbase = false;
    mutable bool qtcpsocket_setopenmode_isbase = false;
    mutable bool qtcpsocket_seterrorstring_isbase = false;
    mutable bool qtcpsocket_sender_isbase = false;
    mutable bool qtcpsocket_sendersignalindex_isbase = false;
    mutable bool qtcpsocket_receivers_isbase = false;
    mutable bool qtcpsocket_issignalconnected_isbase = false;

  public:
    VirtualQTcpSocket() : QTcpSocket(){};
    VirtualQTcpSocket(QObject* parent) : QTcpSocket(parent){};

    ~VirtualQTcpSocket() {
        qtcpsocket_metacall_callback = nullptr;
        qtcpsocket_resume_callback = nullptr;
        qtcpsocket_bind_callback = nullptr;
        qtcpsocket_connecttohost_callback = nullptr;
        qtcpsocket_disconnectfromhost_callback = nullptr;
        qtcpsocket_bytesavailable_callback = nullptr;
        qtcpsocket_bytestowrite_callback = nullptr;
        qtcpsocket_setreadbuffersize_callback = nullptr;
        qtcpsocket_socketdescriptor_callback = nullptr;
        qtcpsocket_setsocketdescriptor_callback = nullptr;
        qtcpsocket_setsocketoption_callback = nullptr;
        qtcpsocket_socketoption_callback = nullptr;
        qtcpsocket_close_callback = nullptr;
        qtcpsocket_issequential_callback = nullptr;
        qtcpsocket_waitforconnected_callback = nullptr;
        qtcpsocket_waitforreadyread_callback = nullptr;
        qtcpsocket_waitforbyteswritten_callback = nullptr;
        qtcpsocket_waitfordisconnected_callback = nullptr;
        qtcpsocket_readdata_callback = nullptr;
        qtcpsocket_readlinedata_callback = nullptr;
        qtcpsocket_skipdata_callback = nullptr;
        qtcpsocket_writedata_callback = nullptr;
        qtcpsocket_open_callback = nullptr;
        qtcpsocket_pos_callback = nullptr;
        qtcpsocket_size_callback = nullptr;
        qtcpsocket_seek_callback = nullptr;
        qtcpsocket_atend_callback = nullptr;
        qtcpsocket_reset_callback = nullptr;
        qtcpsocket_canreadline_callback = nullptr;
        qtcpsocket_event_callback = nullptr;
        qtcpsocket_eventfilter_callback = nullptr;
        qtcpsocket_timerevent_callback = nullptr;
        qtcpsocket_childevent_callback = nullptr;
        qtcpsocket_customevent_callback = nullptr;
        qtcpsocket_connectnotify_callback = nullptr;
        qtcpsocket_disconnectnotify_callback = nullptr;
        qtcpsocket_setsocketstate_callback = nullptr;
        qtcpsocket_setsocketerror_callback = nullptr;
        qtcpsocket_setlocalport_callback = nullptr;
        qtcpsocket_setlocaladdress_callback = nullptr;
        qtcpsocket_setpeerport_callback = nullptr;
        qtcpsocket_setpeeraddress_callback = nullptr;
        qtcpsocket_setpeername_callback = nullptr;
        qtcpsocket_setopenmode_callback = nullptr;
        qtcpsocket_seterrorstring_callback = nullptr;
        qtcpsocket_sender_callback = nullptr;
        qtcpsocket_sendersignalindex_callback = nullptr;
        qtcpsocket_receivers_callback = nullptr;
        qtcpsocket_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTcpSocket_Metacall_Callback(QTcpSocket_Metacall_Callback cb) { qtcpsocket_metacall_callback = cb; }
    void setQTcpSocket_Resume_Callback(QTcpSocket_Resume_Callback cb) { qtcpsocket_resume_callback = cb; }
    void setQTcpSocket_Bind_Callback(QTcpSocket_Bind_Callback cb) { qtcpsocket_bind_callback = cb; }
    void setQTcpSocket_ConnectToHost_Callback(QTcpSocket_ConnectToHost_Callback cb) { qtcpsocket_connecttohost_callback = cb; }
    void setQTcpSocket_DisconnectFromHost_Callback(QTcpSocket_DisconnectFromHost_Callback cb) { qtcpsocket_disconnectfromhost_callback = cb; }
    void setQTcpSocket_BytesAvailable_Callback(QTcpSocket_BytesAvailable_Callback cb) { qtcpsocket_bytesavailable_callback = cb; }
    void setQTcpSocket_BytesToWrite_Callback(QTcpSocket_BytesToWrite_Callback cb) { qtcpsocket_bytestowrite_callback = cb; }
    void setQTcpSocket_SetReadBufferSize_Callback(QTcpSocket_SetReadBufferSize_Callback cb) { qtcpsocket_setreadbuffersize_callback = cb; }
    void setQTcpSocket_SocketDescriptor_Callback(QTcpSocket_SocketDescriptor_Callback cb) { qtcpsocket_socketdescriptor_callback = cb; }
    void setQTcpSocket_SetSocketDescriptor_Callback(QTcpSocket_SetSocketDescriptor_Callback cb) { qtcpsocket_setsocketdescriptor_callback = cb; }
    void setQTcpSocket_SetSocketOption_Callback(QTcpSocket_SetSocketOption_Callback cb) { qtcpsocket_setsocketoption_callback = cb; }
    void setQTcpSocket_SocketOption_Callback(QTcpSocket_SocketOption_Callback cb) { qtcpsocket_socketoption_callback = cb; }
    void setQTcpSocket_Close_Callback(QTcpSocket_Close_Callback cb) { qtcpsocket_close_callback = cb; }
    void setQTcpSocket_IsSequential_Callback(QTcpSocket_IsSequential_Callback cb) { qtcpsocket_issequential_callback = cb; }
    void setQTcpSocket_WaitForConnected_Callback(QTcpSocket_WaitForConnected_Callback cb) { qtcpsocket_waitforconnected_callback = cb; }
    void setQTcpSocket_WaitForReadyRead_Callback(QTcpSocket_WaitForReadyRead_Callback cb) { qtcpsocket_waitforreadyread_callback = cb; }
    void setQTcpSocket_WaitForBytesWritten_Callback(QTcpSocket_WaitForBytesWritten_Callback cb) { qtcpsocket_waitforbyteswritten_callback = cb; }
    void setQTcpSocket_WaitForDisconnected_Callback(QTcpSocket_WaitForDisconnected_Callback cb) { qtcpsocket_waitfordisconnected_callback = cb; }
    void setQTcpSocket_ReadData_Callback(QTcpSocket_ReadData_Callback cb) { qtcpsocket_readdata_callback = cb; }
    void setQTcpSocket_ReadLineData_Callback(QTcpSocket_ReadLineData_Callback cb) { qtcpsocket_readlinedata_callback = cb; }
    void setQTcpSocket_SkipData_Callback(QTcpSocket_SkipData_Callback cb) { qtcpsocket_skipdata_callback = cb; }
    void setQTcpSocket_WriteData_Callback(QTcpSocket_WriteData_Callback cb) { qtcpsocket_writedata_callback = cb; }
    void setQTcpSocket_Open_Callback(QTcpSocket_Open_Callback cb) { qtcpsocket_open_callback = cb; }
    void setQTcpSocket_Pos_Callback(QTcpSocket_Pos_Callback cb) { qtcpsocket_pos_callback = cb; }
    void setQTcpSocket_Size_Callback(QTcpSocket_Size_Callback cb) { qtcpsocket_size_callback = cb; }
    void setQTcpSocket_Seek_Callback(QTcpSocket_Seek_Callback cb) { qtcpsocket_seek_callback = cb; }
    void setQTcpSocket_AtEnd_Callback(QTcpSocket_AtEnd_Callback cb) { qtcpsocket_atend_callback = cb; }
    void setQTcpSocket_Reset_Callback(QTcpSocket_Reset_Callback cb) { qtcpsocket_reset_callback = cb; }
    void setQTcpSocket_CanReadLine_Callback(QTcpSocket_CanReadLine_Callback cb) { qtcpsocket_canreadline_callback = cb; }
    void setQTcpSocket_Event_Callback(QTcpSocket_Event_Callback cb) { qtcpsocket_event_callback = cb; }
    void setQTcpSocket_EventFilter_Callback(QTcpSocket_EventFilter_Callback cb) { qtcpsocket_eventfilter_callback = cb; }
    void setQTcpSocket_TimerEvent_Callback(QTcpSocket_TimerEvent_Callback cb) { qtcpsocket_timerevent_callback = cb; }
    void setQTcpSocket_ChildEvent_Callback(QTcpSocket_ChildEvent_Callback cb) { qtcpsocket_childevent_callback = cb; }
    void setQTcpSocket_CustomEvent_Callback(QTcpSocket_CustomEvent_Callback cb) { qtcpsocket_customevent_callback = cb; }
    void setQTcpSocket_ConnectNotify_Callback(QTcpSocket_ConnectNotify_Callback cb) { qtcpsocket_connectnotify_callback = cb; }
    void setQTcpSocket_DisconnectNotify_Callback(QTcpSocket_DisconnectNotify_Callback cb) { qtcpsocket_disconnectnotify_callback = cb; }
    void setQTcpSocket_SetSocketState_Callback(QTcpSocket_SetSocketState_Callback cb) { qtcpsocket_setsocketstate_callback = cb; }
    void setQTcpSocket_SetSocketError_Callback(QTcpSocket_SetSocketError_Callback cb) { qtcpsocket_setsocketerror_callback = cb; }
    void setQTcpSocket_SetLocalPort_Callback(QTcpSocket_SetLocalPort_Callback cb) { qtcpsocket_setlocalport_callback = cb; }
    void setQTcpSocket_SetLocalAddress_Callback(QTcpSocket_SetLocalAddress_Callback cb) { qtcpsocket_setlocaladdress_callback = cb; }
    void setQTcpSocket_SetPeerPort_Callback(QTcpSocket_SetPeerPort_Callback cb) { qtcpsocket_setpeerport_callback = cb; }
    void setQTcpSocket_SetPeerAddress_Callback(QTcpSocket_SetPeerAddress_Callback cb) { qtcpsocket_setpeeraddress_callback = cb; }
    void setQTcpSocket_SetPeerName_Callback(QTcpSocket_SetPeerName_Callback cb) { qtcpsocket_setpeername_callback = cb; }
    void setQTcpSocket_SetOpenMode_Callback(QTcpSocket_SetOpenMode_Callback cb) { qtcpsocket_setopenmode_callback = cb; }
    void setQTcpSocket_SetErrorString_Callback(QTcpSocket_SetErrorString_Callback cb) { qtcpsocket_seterrorstring_callback = cb; }
    void setQTcpSocket_Sender_Callback(QTcpSocket_Sender_Callback cb) { qtcpsocket_sender_callback = cb; }
    void setQTcpSocket_SenderSignalIndex_Callback(QTcpSocket_SenderSignalIndex_Callback cb) { qtcpsocket_sendersignalindex_callback = cb; }
    void setQTcpSocket_Receivers_Callback(QTcpSocket_Receivers_Callback cb) { qtcpsocket_receivers_callback = cb; }
    void setQTcpSocket_IsSignalConnected_Callback(QTcpSocket_IsSignalConnected_Callback cb) { qtcpsocket_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTcpSocket_Metacall_IsBase(bool value) const { qtcpsocket_metacall_isbase = value; }
    void setQTcpSocket_Resume_IsBase(bool value) const { qtcpsocket_resume_isbase = value; }
    void setQTcpSocket_Bind_IsBase(bool value) const { qtcpsocket_bind_isbase = value; }
    void setQTcpSocket_ConnectToHost_IsBase(bool value) const { qtcpsocket_connecttohost_isbase = value; }
    void setQTcpSocket_DisconnectFromHost_IsBase(bool value) const { qtcpsocket_disconnectfromhost_isbase = value; }
    void setQTcpSocket_BytesAvailable_IsBase(bool value) const { qtcpsocket_bytesavailable_isbase = value; }
    void setQTcpSocket_BytesToWrite_IsBase(bool value) const { qtcpsocket_bytestowrite_isbase = value; }
    void setQTcpSocket_SetReadBufferSize_IsBase(bool value) const { qtcpsocket_setreadbuffersize_isbase = value; }
    void setQTcpSocket_SocketDescriptor_IsBase(bool value) const { qtcpsocket_socketdescriptor_isbase = value; }
    void setQTcpSocket_SetSocketDescriptor_IsBase(bool value) const { qtcpsocket_setsocketdescriptor_isbase = value; }
    void setQTcpSocket_SetSocketOption_IsBase(bool value) const { qtcpsocket_setsocketoption_isbase = value; }
    void setQTcpSocket_SocketOption_IsBase(bool value) const { qtcpsocket_socketoption_isbase = value; }
    void setQTcpSocket_Close_IsBase(bool value) const { qtcpsocket_close_isbase = value; }
    void setQTcpSocket_IsSequential_IsBase(bool value) const { qtcpsocket_issequential_isbase = value; }
    void setQTcpSocket_WaitForConnected_IsBase(bool value) const { qtcpsocket_waitforconnected_isbase = value; }
    void setQTcpSocket_WaitForReadyRead_IsBase(bool value) const { qtcpsocket_waitforreadyread_isbase = value; }
    void setQTcpSocket_WaitForBytesWritten_IsBase(bool value) const { qtcpsocket_waitforbyteswritten_isbase = value; }
    void setQTcpSocket_WaitForDisconnected_IsBase(bool value) const { qtcpsocket_waitfordisconnected_isbase = value; }
    void setQTcpSocket_ReadData_IsBase(bool value) const { qtcpsocket_readdata_isbase = value; }
    void setQTcpSocket_ReadLineData_IsBase(bool value) const { qtcpsocket_readlinedata_isbase = value; }
    void setQTcpSocket_SkipData_IsBase(bool value) const { qtcpsocket_skipdata_isbase = value; }
    void setQTcpSocket_WriteData_IsBase(bool value) const { qtcpsocket_writedata_isbase = value; }
    void setQTcpSocket_Open_IsBase(bool value) const { qtcpsocket_open_isbase = value; }
    void setQTcpSocket_Pos_IsBase(bool value) const { qtcpsocket_pos_isbase = value; }
    void setQTcpSocket_Size_IsBase(bool value) const { qtcpsocket_size_isbase = value; }
    void setQTcpSocket_Seek_IsBase(bool value) const { qtcpsocket_seek_isbase = value; }
    void setQTcpSocket_AtEnd_IsBase(bool value) const { qtcpsocket_atend_isbase = value; }
    void setQTcpSocket_Reset_IsBase(bool value) const { qtcpsocket_reset_isbase = value; }
    void setQTcpSocket_CanReadLine_IsBase(bool value) const { qtcpsocket_canreadline_isbase = value; }
    void setQTcpSocket_Event_IsBase(bool value) const { qtcpsocket_event_isbase = value; }
    void setQTcpSocket_EventFilter_IsBase(bool value) const { qtcpsocket_eventfilter_isbase = value; }
    void setQTcpSocket_TimerEvent_IsBase(bool value) const { qtcpsocket_timerevent_isbase = value; }
    void setQTcpSocket_ChildEvent_IsBase(bool value) const { qtcpsocket_childevent_isbase = value; }
    void setQTcpSocket_CustomEvent_IsBase(bool value) const { qtcpsocket_customevent_isbase = value; }
    void setQTcpSocket_ConnectNotify_IsBase(bool value) const { qtcpsocket_connectnotify_isbase = value; }
    void setQTcpSocket_DisconnectNotify_IsBase(bool value) const { qtcpsocket_disconnectnotify_isbase = value; }
    void setQTcpSocket_SetSocketState_IsBase(bool value) const { qtcpsocket_setsocketstate_isbase = value; }
    void setQTcpSocket_SetSocketError_IsBase(bool value) const { qtcpsocket_setsocketerror_isbase = value; }
    void setQTcpSocket_SetLocalPort_IsBase(bool value) const { qtcpsocket_setlocalport_isbase = value; }
    void setQTcpSocket_SetLocalAddress_IsBase(bool value) const { qtcpsocket_setlocaladdress_isbase = value; }
    void setQTcpSocket_SetPeerPort_IsBase(bool value) const { qtcpsocket_setpeerport_isbase = value; }
    void setQTcpSocket_SetPeerAddress_IsBase(bool value) const { qtcpsocket_setpeeraddress_isbase = value; }
    void setQTcpSocket_SetPeerName_IsBase(bool value) const { qtcpsocket_setpeername_isbase = value; }
    void setQTcpSocket_SetOpenMode_IsBase(bool value) const { qtcpsocket_setopenmode_isbase = value; }
    void setQTcpSocket_SetErrorString_IsBase(bool value) const { qtcpsocket_seterrorstring_isbase = value; }
    void setQTcpSocket_Sender_IsBase(bool value) const { qtcpsocket_sender_isbase = value; }
    void setQTcpSocket_SenderSignalIndex_IsBase(bool value) const { qtcpsocket_sendersignalindex_isbase = value; }
    void setQTcpSocket_Receivers_IsBase(bool value) const { qtcpsocket_receivers_isbase = value; }
    void setQTcpSocket_IsSignalConnected_IsBase(bool value) const { qtcpsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtcpsocket_metacall_isbase) {
            qtcpsocket_metacall_isbase = false;
            return QTcpSocket::qt_metacall(param1, param2, param3);
        } else if (qtcpsocket_metacall_callback != nullptr) {
            return qtcpsocket_metacall_callback(this, param1, param2, param3);
        } else {
            return QTcpSocket::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qtcpsocket_resume_isbase) {
            qtcpsocket_resume_isbase = false;
            QTcpSocket::resume();
        } else if (qtcpsocket_resume_callback != nullptr) {
            qtcpsocket_resume_callback();
        } else {
            QTcpSocket::resume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
        if (qtcpsocket_bind_isbase) {
            qtcpsocket_bind_isbase = false;
            return QTcpSocket::bind(address, port, mode);
        } else if (qtcpsocket_bind_callback != nullptr) {
            return qtcpsocket_bind_callback(this, address, port, mode);
        } else {
            return QTcpSocket::bind(address, port, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qtcpsocket_connecttohost_isbase) {
            qtcpsocket_connecttohost_isbase = false;
            QTcpSocket::connectToHost(hostName, port, mode, protocol);
        } else if (qtcpsocket_connecttohost_callback != nullptr) {
            qtcpsocket_connecttohost_callback(this, hostName, port, mode, protocol);
        } else {
            QTcpSocket::connectToHost(hostName, port, mode, protocol);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qtcpsocket_disconnectfromhost_isbase) {
            qtcpsocket_disconnectfromhost_isbase = false;
            QTcpSocket::disconnectFromHost();
        } else if (qtcpsocket_disconnectfromhost_callback != nullptr) {
            qtcpsocket_disconnectfromhost_callback();
        } else {
            QTcpSocket::disconnectFromHost();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qtcpsocket_bytesavailable_isbase) {
            qtcpsocket_bytesavailable_isbase = false;
            return QTcpSocket::bytesAvailable();
        } else if (qtcpsocket_bytesavailable_callback != nullptr) {
            return qtcpsocket_bytesavailable_callback();
        } else {
            return QTcpSocket::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qtcpsocket_bytestowrite_isbase) {
            qtcpsocket_bytestowrite_isbase = false;
            return QTcpSocket::bytesToWrite();
        } else if (qtcpsocket_bytestowrite_callback != nullptr) {
            return qtcpsocket_bytestowrite_callback();
        } else {
            return QTcpSocket::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qtcpsocket_setreadbuffersize_isbase) {
            qtcpsocket_setreadbuffersize_isbase = false;
            QTcpSocket::setReadBufferSize(size);
        } else if (qtcpsocket_setreadbuffersize_callback != nullptr) {
            qtcpsocket_setreadbuffersize_callback(this, size);
        } else {
            QTcpSocket::setReadBufferSize(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qtcpsocket_socketdescriptor_isbase) {
            qtcpsocket_socketdescriptor_isbase = false;
            return QTcpSocket::socketDescriptor();
        } else if (qtcpsocket_socketdescriptor_callback != nullptr) {
            return qtcpsocket_socketdescriptor_callback();
        } else {
            return QTcpSocket::socketDescriptor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
        if (qtcpsocket_setsocketdescriptor_isbase) {
            qtcpsocket_setsocketdescriptor_isbase = false;
            return QTcpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        } else if (qtcpsocket_setsocketdescriptor_callback != nullptr) {
            return qtcpsocket_setsocketdescriptor_callback(this, socketDescriptor, state, openMode);
        } else {
            return QTcpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qtcpsocket_setsocketoption_isbase) {
            qtcpsocket_setsocketoption_isbase = false;
            QTcpSocket::setSocketOption(option, value);
        } else if (qtcpsocket_setsocketoption_callback != nullptr) {
            qtcpsocket_setsocketoption_callback(this, option, value);
        } else {
            QTcpSocket::setSocketOption(option, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qtcpsocket_socketoption_isbase) {
            qtcpsocket_socketoption_isbase = false;
            return QTcpSocket::socketOption(option);
        } else if (qtcpsocket_socketoption_callback != nullptr) {
            return qtcpsocket_socketoption_callback(this, option);
        } else {
            return QTcpSocket::socketOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qtcpsocket_close_isbase) {
            qtcpsocket_close_isbase = false;
            QTcpSocket::close();
        } else if (qtcpsocket_close_callback != nullptr) {
            qtcpsocket_close_callback();
        } else {
            QTcpSocket::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qtcpsocket_issequential_isbase) {
            qtcpsocket_issequential_isbase = false;
            return QTcpSocket::isSequential();
        } else if (qtcpsocket_issequential_callback != nullptr) {
            return qtcpsocket_issequential_callback();
        } else {
            return QTcpSocket::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qtcpsocket_waitforconnected_isbase) {
            qtcpsocket_waitforconnected_isbase = false;
            return QTcpSocket::waitForConnected(msecs);
        } else if (qtcpsocket_waitforconnected_callback != nullptr) {
            return qtcpsocket_waitforconnected_callback(this, msecs);
        } else {
            return QTcpSocket::waitForConnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qtcpsocket_waitforreadyread_isbase) {
            qtcpsocket_waitforreadyread_isbase = false;
            return QTcpSocket::waitForReadyRead(msecs);
        } else if (qtcpsocket_waitforreadyread_callback != nullptr) {
            return qtcpsocket_waitforreadyread_callback(this, msecs);
        } else {
            return QTcpSocket::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qtcpsocket_waitforbyteswritten_isbase) {
            qtcpsocket_waitforbyteswritten_isbase = false;
            return QTcpSocket::waitForBytesWritten(msecs);
        } else if (qtcpsocket_waitforbyteswritten_callback != nullptr) {
            return qtcpsocket_waitforbyteswritten_callback(this, msecs);
        } else {
            return QTcpSocket::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qtcpsocket_waitfordisconnected_isbase) {
            qtcpsocket_waitfordisconnected_isbase = false;
            return QTcpSocket::waitForDisconnected(msecs);
        } else if (qtcpsocket_waitfordisconnected_callback != nullptr) {
            return qtcpsocket_waitfordisconnected_callback(this, msecs);
        } else {
            return QTcpSocket::waitForDisconnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qtcpsocket_readdata_isbase) {
            qtcpsocket_readdata_isbase = false;
            return QTcpSocket::readData(data, maxlen);
        } else if (qtcpsocket_readdata_callback != nullptr) {
            return qtcpsocket_readdata_callback(this, data, maxlen);
        } else {
            return QTcpSocket::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qtcpsocket_readlinedata_isbase) {
            qtcpsocket_readlinedata_isbase = false;
            return QTcpSocket::readLineData(data, maxlen);
        } else if (qtcpsocket_readlinedata_callback != nullptr) {
            return qtcpsocket_readlinedata_callback(this, data, maxlen);
        } else {
            return QTcpSocket::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qtcpsocket_skipdata_isbase) {
            qtcpsocket_skipdata_isbase = false;
            return QTcpSocket::skipData(maxSize);
        } else if (qtcpsocket_skipdata_callback != nullptr) {
            return qtcpsocket_skipdata_callback(this, maxSize);
        } else {
            return QTcpSocket::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qtcpsocket_writedata_isbase) {
            qtcpsocket_writedata_isbase = false;
            return QTcpSocket::writeData(data, lenVal);
        } else if (qtcpsocket_writedata_callback != nullptr) {
            return qtcpsocket_writedata_callback(this, data, lenVal);
        } else {
            return QTcpSocket::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qtcpsocket_open_isbase) {
            qtcpsocket_open_isbase = false;
            return QTcpSocket::open(mode);
        } else if (qtcpsocket_open_callback != nullptr) {
            return qtcpsocket_open_callback(this, mode);
        } else {
            return QTcpSocket::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qtcpsocket_pos_isbase) {
            qtcpsocket_pos_isbase = false;
            return QTcpSocket::pos();
        } else if (qtcpsocket_pos_callback != nullptr) {
            return qtcpsocket_pos_callback();
        } else {
            return QTcpSocket::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qtcpsocket_size_isbase) {
            qtcpsocket_size_isbase = false;
            return QTcpSocket::size();
        } else if (qtcpsocket_size_callback != nullptr) {
            return qtcpsocket_size_callback();
        } else {
            return QTcpSocket::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qtcpsocket_seek_isbase) {
            qtcpsocket_seek_isbase = false;
            return QTcpSocket::seek(pos);
        } else if (qtcpsocket_seek_callback != nullptr) {
            return qtcpsocket_seek_callback(this, pos);
        } else {
            return QTcpSocket::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qtcpsocket_atend_isbase) {
            qtcpsocket_atend_isbase = false;
            return QTcpSocket::atEnd();
        } else if (qtcpsocket_atend_callback != nullptr) {
            return qtcpsocket_atend_callback();
        } else {
            return QTcpSocket::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qtcpsocket_reset_isbase) {
            qtcpsocket_reset_isbase = false;
            return QTcpSocket::reset();
        } else if (qtcpsocket_reset_callback != nullptr) {
            return qtcpsocket_reset_callback();
        } else {
            return QTcpSocket::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qtcpsocket_canreadline_isbase) {
            qtcpsocket_canreadline_isbase = false;
            return QTcpSocket::canReadLine();
        } else if (qtcpsocket_canreadline_callback != nullptr) {
            return qtcpsocket_canreadline_callback();
        } else {
            return QTcpSocket::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtcpsocket_event_isbase) {
            qtcpsocket_event_isbase = false;
            return QTcpSocket::event(event);
        } else if (qtcpsocket_event_callback != nullptr) {
            return qtcpsocket_event_callback(this, event);
        } else {
            return QTcpSocket::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtcpsocket_eventfilter_isbase) {
            qtcpsocket_eventfilter_isbase = false;
            return QTcpSocket::eventFilter(watched, event);
        } else if (qtcpsocket_eventfilter_callback != nullptr) {
            return qtcpsocket_eventfilter_callback(this, watched, event);
        } else {
            return QTcpSocket::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtcpsocket_timerevent_isbase) {
            qtcpsocket_timerevent_isbase = false;
            QTcpSocket::timerEvent(event);
        } else if (qtcpsocket_timerevent_callback != nullptr) {
            qtcpsocket_timerevent_callback(this, event);
        } else {
            QTcpSocket::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtcpsocket_childevent_isbase) {
            qtcpsocket_childevent_isbase = false;
            QTcpSocket::childEvent(event);
        } else if (qtcpsocket_childevent_callback != nullptr) {
            qtcpsocket_childevent_callback(this, event);
        } else {
            QTcpSocket::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtcpsocket_customevent_isbase) {
            qtcpsocket_customevent_isbase = false;
            QTcpSocket::customEvent(event);
        } else if (qtcpsocket_customevent_callback != nullptr) {
            qtcpsocket_customevent_callback(this, event);
        } else {
            QTcpSocket::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtcpsocket_connectnotify_isbase) {
            qtcpsocket_connectnotify_isbase = false;
            QTcpSocket::connectNotify(signal);
        } else if (qtcpsocket_connectnotify_callback != nullptr) {
            qtcpsocket_connectnotify_callback(this, signal);
        } else {
            QTcpSocket::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtcpsocket_disconnectnotify_isbase) {
            qtcpsocket_disconnectnotify_isbase = false;
            QTcpSocket::disconnectNotify(signal);
        } else if (qtcpsocket_disconnectnotify_callback != nullptr) {
            qtcpsocket_disconnectnotify_callback(this, signal);
        } else {
            QTcpSocket::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketState(QAbstractSocket::SocketState state) {
        if (qtcpsocket_setsocketstate_isbase) {
            qtcpsocket_setsocketstate_isbase = false;
            QTcpSocket::setSocketState(state);
        } else if (qtcpsocket_setsocketstate_callback != nullptr) {
            qtcpsocket_setsocketstate_callback(this, state);
        } else {
            QTcpSocket::setSocketState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketError(QAbstractSocket::SocketError socketError) {
        if (qtcpsocket_setsocketerror_isbase) {
            qtcpsocket_setsocketerror_isbase = false;
            QTcpSocket::setSocketError(socketError);
        } else if (qtcpsocket_setsocketerror_callback != nullptr) {
            qtcpsocket_setsocketerror_callback(this, socketError);
        } else {
            QTcpSocket::setSocketError(socketError);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalPort(quint16 port) {
        if (qtcpsocket_setlocalport_isbase) {
            qtcpsocket_setlocalport_isbase = false;
            QTcpSocket::setLocalPort(port);
        } else if (qtcpsocket_setlocalport_callback != nullptr) {
            qtcpsocket_setlocalport_callback(this, port);
        } else {
            QTcpSocket::setLocalPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalAddress(const QHostAddress& address) {
        if (qtcpsocket_setlocaladdress_isbase) {
            qtcpsocket_setlocaladdress_isbase = false;
            QTcpSocket::setLocalAddress(address);
        } else if (qtcpsocket_setlocaladdress_callback != nullptr) {
            qtcpsocket_setlocaladdress_callback(this, address);
        } else {
            QTcpSocket::setLocalAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerPort(quint16 port) {
        if (qtcpsocket_setpeerport_isbase) {
            qtcpsocket_setpeerport_isbase = false;
            QTcpSocket::setPeerPort(port);
        } else if (qtcpsocket_setpeerport_callback != nullptr) {
            qtcpsocket_setpeerport_callback(this, port);
        } else {
            QTcpSocket::setPeerPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerAddress(const QHostAddress& address) {
        if (qtcpsocket_setpeeraddress_isbase) {
            qtcpsocket_setpeeraddress_isbase = false;
            QTcpSocket::setPeerAddress(address);
        } else if (qtcpsocket_setpeeraddress_callback != nullptr) {
            qtcpsocket_setpeeraddress_callback(this, address);
        } else {
            QTcpSocket::setPeerAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerName(const QString& name) {
        if (qtcpsocket_setpeername_isbase) {
            qtcpsocket_setpeername_isbase = false;
            QTcpSocket::setPeerName(name);
        } else if (qtcpsocket_setpeername_callback != nullptr) {
            qtcpsocket_setpeername_callback(this, name);
        } else {
            QTcpSocket::setPeerName(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qtcpsocket_setopenmode_isbase) {
            qtcpsocket_setopenmode_isbase = false;
            QTcpSocket::setOpenMode(openMode);
        } else if (qtcpsocket_setopenmode_callback != nullptr) {
            qtcpsocket_setopenmode_callback(this, openMode);
        } else {
            QTcpSocket::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qtcpsocket_seterrorstring_isbase) {
            qtcpsocket_seterrorstring_isbase = false;
            QTcpSocket::setErrorString(errorString);
        } else if (qtcpsocket_seterrorstring_callback != nullptr) {
            qtcpsocket_seterrorstring_callback(this, errorString);
        } else {
            QTcpSocket::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtcpsocket_sender_isbase) {
            qtcpsocket_sender_isbase = false;
            return QTcpSocket::sender();
        } else if (qtcpsocket_sender_callback != nullptr) {
            return qtcpsocket_sender_callback();
        } else {
            return QTcpSocket::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtcpsocket_sendersignalindex_isbase) {
            qtcpsocket_sendersignalindex_isbase = false;
            return QTcpSocket::senderSignalIndex();
        } else if (qtcpsocket_sendersignalindex_callback != nullptr) {
            return qtcpsocket_sendersignalindex_callback();
        } else {
            return QTcpSocket::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtcpsocket_receivers_isbase) {
            qtcpsocket_receivers_isbase = false;
            return QTcpSocket::receivers(signal);
        } else if (qtcpsocket_receivers_callback != nullptr) {
            return qtcpsocket_receivers_callback(this, signal);
        } else {
            return QTcpSocket::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtcpsocket_issignalconnected_isbase) {
            qtcpsocket_issignalconnected_isbase = false;
            return QTcpSocket::isSignalConnected(signal);
        } else if (qtcpsocket_issignalconnected_callback != nullptr) {
            return qtcpsocket_issignalconnected_callback(this, signal);
        } else {
            return QTcpSocket::isSignalConnected(signal);
        }
    }
};

#endif

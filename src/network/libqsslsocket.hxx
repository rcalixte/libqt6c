#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQSSLSOCKET_H
#define SRC_NETWORKC_LIBVIRTUALQSSLSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSslSocket so that we can call protected methods
class VirtualQSslSocket : public QSslSocket {

  public:
    // Virtual class public types (including callbacks)
    using QSslSocket_Metacall_Callback = int (*)(QSslSocket*, QMetaObject::Call, int, void**);
    using QSslSocket_Resume_Callback = void (*)();
    using QSslSocket_SetSocketDescriptor_Callback = bool (*)(QSslSocket*, qintptr, QAbstractSocket::SocketState, QIODeviceBase::OpenMode);
    using QSslSocket_ConnectToHost_Callback = void (*)(QSslSocket*, const QString&, quint16, QIODeviceBase::OpenMode, QAbstractSocket::NetworkLayerProtocol);
    using QSslSocket_DisconnectFromHost_Callback = void (*)();
    using QSslSocket_SetSocketOption_Callback = void (*)(QSslSocket*, QAbstractSocket::SocketOption, const QVariant&);
    using QSslSocket_SocketOption_Callback = QVariant (*)(QSslSocket*, QAbstractSocket::SocketOption);
    using QSslSocket_BytesAvailable_Callback = qint64 (*)();
    using QSslSocket_BytesToWrite_Callback = qint64 (*)();
    using QSslSocket_CanReadLine_Callback = bool (*)();
    using QSslSocket_Close_Callback = void (*)();
    using QSslSocket_AtEnd_Callback = bool (*)();
    using QSslSocket_SetReadBufferSize_Callback = void (*)(QSslSocket*, qint64);
    using QSslSocket_WaitForConnected_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_WaitForReadyRead_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_WaitForBytesWritten_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_WaitForDisconnected_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_ReadData_Callback = qint64 (*)(QSslSocket*, char*, qint64);
    using QSslSocket_SkipData_Callback = qint64 (*)(QSslSocket*, qint64);
    using QSslSocket_WriteData_Callback = qint64 (*)(QSslSocket*, const char*, qint64);
    using QSslSocket_Bind_Callback = bool (*)(QSslSocket*, const QHostAddress&, quint16, QAbstractSocket::BindMode);
    using QSslSocket_SocketDescriptor_Callback = qintptr (*)();
    using QSslSocket_IsSequential_Callback = bool (*)();
    using QSslSocket_ReadLineData_Callback = qint64 (*)(QSslSocket*, char*, qint64);
    using QSslSocket_Open_Callback = bool (*)(QSslSocket*, QIODeviceBase::OpenMode);
    using QSslSocket_Pos_Callback = qint64 (*)();
    using QSslSocket_Size_Callback = qint64 (*)();
    using QSslSocket_Seek_Callback = bool (*)(QSslSocket*, qint64);
    using QSslSocket_Reset_Callback = bool (*)();
    using QSslSocket_Event_Callback = bool (*)(QSslSocket*, QEvent*);
    using QSslSocket_EventFilter_Callback = bool (*)(QSslSocket*, QObject*, QEvent*);
    using QSslSocket_TimerEvent_Callback = void (*)(QSslSocket*, QTimerEvent*);
    using QSslSocket_ChildEvent_Callback = void (*)(QSslSocket*, QChildEvent*);
    using QSslSocket_CustomEvent_Callback = void (*)(QSslSocket*, QEvent*);
    using QSslSocket_ConnectNotify_Callback = void (*)(QSslSocket*, const QMetaMethod&);
    using QSslSocket_DisconnectNotify_Callback = void (*)(QSslSocket*, const QMetaMethod&);
    using QSslSocket_SetSocketState_Callback = void (*)(QSslSocket*, QAbstractSocket::SocketState);
    using QSslSocket_SetSocketError_Callback = void (*)(QSslSocket*, QAbstractSocket::SocketError);
    using QSslSocket_SetLocalPort_Callback = void (*)(QSslSocket*, quint16);
    using QSslSocket_SetLocalAddress_Callback = void (*)(QSslSocket*, const QHostAddress&);
    using QSslSocket_SetPeerPort_Callback = void (*)(QSslSocket*, quint16);
    using QSslSocket_SetPeerAddress_Callback = void (*)(QSslSocket*, const QHostAddress&);
    using QSslSocket_SetPeerName_Callback = void (*)(QSslSocket*, const QString&);
    using QSslSocket_SetOpenMode_Callback = void (*)(QSslSocket*, QIODeviceBase::OpenMode);
    using QSslSocket_SetErrorString_Callback = void (*)(QSslSocket*, const QString&);
    using QSslSocket_Sender_Callback = QObject* (*)();
    using QSslSocket_SenderSignalIndex_Callback = int (*)();
    using QSslSocket_Receivers_Callback = int (*)(const QSslSocket*, const char*);
    using QSslSocket_IsSignalConnected_Callback = bool (*)(const QSslSocket*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSslSocket_Metacall_Callback qsslsocket_metacall_callback = nullptr;
    QSslSocket_Resume_Callback qsslsocket_resume_callback = nullptr;
    QSslSocket_SetSocketDescriptor_Callback qsslsocket_setsocketdescriptor_callback = nullptr;
    QSslSocket_ConnectToHost_Callback qsslsocket_connecttohost_callback = nullptr;
    QSslSocket_DisconnectFromHost_Callback qsslsocket_disconnectfromhost_callback = nullptr;
    QSslSocket_SetSocketOption_Callback qsslsocket_setsocketoption_callback = nullptr;
    QSslSocket_SocketOption_Callback qsslsocket_socketoption_callback = nullptr;
    QSslSocket_BytesAvailable_Callback qsslsocket_bytesavailable_callback = nullptr;
    QSslSocket_BytesToWrite_Callback qsslsocket_bytestowrite_callback = nullptr;
    QSslSocket_CanReadLine_Callback qsslsocket_canreadline_callback = nullptr;
    QSslSocket_Close_Callback qsslsocket_close_callback = nullptr;
    QSslSocket_AtEnd_Callback qsslsocket_atend_callback = nullptr;
    QSslSocket_SetReadBufferSize_Callback qsslsocket_setreadbuffersize_callback = nullptr;
    QSslSocket_WaitForConnected_Callback qsslsocket_waitforconnected_callback = nullptr;
    QSslSocket_WaitForReadyRead_Callback qsslsocket_waitforreadyread_callback = nullptr;
    QSslSocket_WaitForBytesWritten_Callback qsslsocket_waitforbyteswritten_callback = nullptr;
    QSslSocket_WaitForDisconnected_Callback qsslsocket_waitfordisconnected_callback = nullptr;
    QSslSocket_ReadData_Callback qsslsocket_readdata_callback = nullptr;
    QSslSocket_SkipData_Callback qsslsocket_skipdata_callback = nullptr;
    QSslSocket_WriteData_Callback qsslsocket_writedata_callback = nullptr;
    QSslSocket_Bind_Callback qsslsocket_bind_callback = nullptr;
    QSslSocket_SocketDescriptor_Callback qsslsocket_socketdescriptor_callback = nullptr;
    QSslSocket_IsSequential_Callback qsslsocket_issequential_callback = nullptr;
    QSslSocket_ReadLineData_Callback qsslsocket_readlinedata_callback = nullptr;
    QSslSocket_Open_Callback qsslsocket_open_callback = nullptr;
    QSslSocket_Pos_Callback qsslsocket_pos_callback = nullptr;
    QSslSocket_Size_Callback qsslsocket_size_callback = nullptr;
    QSslSocket_Seek_Callback qsslsocket_seek_callback = nullptr;
    QSslSocket_Reset_Callback qsslsocket_reset_callback = nullptr;
    QSslSocket_Event_Callback qsslsocket_event_callback = nullptr;
    QSslSocket_EventFilter_Callback qsslsocket_eventfilter_callback = nullptr;
    QSslSocket_TimerEvent_Callback qsslsocket_timerevent_callback = nullptr;
    QSslSocket_ChildEvent_Callback qsslsocket_childevent_callback = nullptr;
    QSslSocket_CustomEvent_Callback qsslsocket_customevent_callback = nullptr;
    QSslSocket_ConnectNotify_Callback qsslsocket_connectnotify_callback = nullptr;
    QSslSocket_DisconnectNotify_Callback qsslsocket_disconnectnotify_callback = nullptr;
    QSslSocket_SetSocketState_Callback qsslsocket_setsocketstate_callback = nullptr;
    QSslSocket_SetSocketError_Callback qsslsocket_setsocketerror_callback = nullptr;
    QSslSocket_SetLocalPort_Callback qsslsocket_setlocalport_callback = nullptr;
    QSslSocket_SetLocalAddress_Callback qsslsocket_setlocaladdress_callback = nullptr;
    QSslSocket_SetPeerPort_Callback qsslsocket_setpeerport_callback = nullptr;
    QSslSocket_SetPeerAddress_Callback qsslsocket_setpeeraddress_callback = nullptr;
    QSslSocket_SetPeerName_Callback qsslsocket_setpeername_callback = nullptr;
    QSslSocket_SetOpenMode_Callback qsslsocket_setopenmode_callback = nullptr;
    QSslSocket_SetErrorString_Callback qsslsocket_seterrorstring_callback = nullptr;
    QSslSocket_Sender_Callback qsslsocket_sender_callback = nullptr;
    QSslSocket_SenderSignalIndex_Callback qsslsocket_sendersignalindex_callback = nullptr;
    QSslSocket_Receivers_Callback qsslsocket_receivers_callback = nullptr;
    QSslSocket_IsSignalConnected_Callback qsslsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsslsocket_metacall_isbase = false;
    mutable bool qsslsocket_resume_isbase = false;
    mutable bool qsslsocket_setsocketdescriptor_isbase = false;
    mutable bool qsslsocket_connecttohost_isbase = false;
    mutable bool qsslsocket_disconnectfromhost_isbase = false;
    mutable bool qsslsocket_setsocketoption_isbase = false;
    mutable bool qsslsocket_socketoption_isbase = false;
    mutable bool qsslsocket_bytesavailable_isbase = false;
    mutable bool qsslsocket_bytestowrite_isbase = false;
    mutable bool qsslsocket_canreadline_isbase = false;
    mutable bool qsslsocket_close_isbase = false;
    mutable bool qsslsocket_atend_isbase = false;
    mutable bool qsslsocket_setreadbuffersize_isbase = false;
    mutable bool qsslsocket_waitforconnected_isbase = false;
    mutable bool qsslsocket_waitforreadyread_isbase = false;
    mutable bool qsslsocket_waitforbyteswritten_isbase = false;
    mutable bool qsslsocket_waitfordisconnected_isbase = false;
    mutable bool qsslsocket_readdata_isbase = false;
    mutable bool qsslsocket_skipdata_isbase = false;
    mutable bool qsslsocket_writedata_isbase = false;
    mutable bool qsslsocket_bind_isbase = false;
    mutable bool qsslsocket_socketdescriptor_isbase = false;
    mutable bool qsslsocket_issequential_isbase = false;
    mutable bool qsslsocket_readlinedata_isbase = false;
    mutable bool qsslsocket_open_isbase = false;
    mutable bool qsslsocket_pos_isbase = false;
    mutable bool qsslsocket_size_isbase = false;
    mutable bool qsslsocket_seek_isbase = false;
    mutable bool qsslsocket_reset_isbase = false;
    mutable bool qsslsocket_event_isbase = false;
    mutable bool qsslsocket_eventfilter_isbase = false;
    mutable bool qsslsocket_timerevent_isbase = false;
    mutable bool qsslsocket_childevent_isbase = false;
    mutable bool qsslsocket_customevent_isbase = false;
    mutable bool qsslsocket_connectnotify_isbase = false;
    mutable bool qsslsocket_disconnectnotify_isbase = false;
    mutable bool qsslsocket_setsocketstate_isbase = false;
    mutable bool qsslsocket_setsocketerror_isbase = false;
    mutable bool qsslsocket_setlocalport_isbase = false;
    mutable bool qsslsocket_setlocaladdress_isbase = false;
    mutable bool qsslsocket_setpeerport_isbase = false;
    mutable bool qsslsocket_setpeeraddress_isbase = false;
    mutable bool qsslsocket_setpeername_isbase = false;
    mutable bool qsslsocket_setopenmode_isbase = false;
    mutable bool qsslsocket_seterrorstring_isbase = false;
    mutable bool qsslsocket_sender_isbase = false;
    mutable bool qsslsocket_sendersignalindex_isbase = false;
    mutable bool qsslsocket_receivers_isbase = false;
    mutable bool qsslsocket_issignalconnected_isbase = false;

  public:
    VirtualQSslSocket() : QSslSocket(){};
    VirtualQSslSocket(QObject* parent) : QSslSocket(parent){};

    ~VirtualQSslSocket() {
        qsslsocket_metacall_callback = nullptr;
        qsslsocket_resume_callback = nullptr;
        qsslsocket_setsocketdescriptor_callback = nullptr;
        qsslsocket_connecttohost_callback = nullptr;
        qsslsocket_disconnectfromhost_callback = nullptr;
        qsslsocket_setsocketoption_callback = nullptr;
        qsslsocket_socketoption_callback = nullptr;
        qsslsocket_bytesavailable_callback = nullptr;
        qsslsocket_bytestowrite_callback = nullptr;
        qsslsocket_canreadline_callback = nullptr;
        qsslsocket_close_callback = nullptr;
        qsslsocket_atend_callback = nullptr;
        qsslsocket_setreadbuffersize_callback = nullptr;
        qsslsocket_waitforconnected_callback = nullptr;
        qsslsocket_waitforreadyread_callback = nullptr;
        qsslsocket_waitforbyteswritten_callback = nullptr;
        qsslsocket_waitfordisconnected_callback = nullptr;
        qsslsocket_readdata_callback = nullptr;
        qsslsocket_skipdata_callback = nullptr;
        qsslsocket_writedata_callback = nullptr;
        qsslsocket_bind_callback = nullptr;
        qsslsocket_socketdescriptor_callback = nullptr;
        qsslsocket_issequential_callback = nullptr;
        qsslsocket_readlinedata_callback = nullptr;
        qsslsocket_open_callback = nullptr;
        qsslsocket_pos_callback = nullptr;
        qsslsocket_size_callback = nullptr;
        qsslsocket_seek_callback = nullptr;
        qsslsocket_reset_callback = nullptr;
        qsslsocket_event_callback = nullptr;
        qsslsocket_eventfilter_callback = nullptr;
        qsslsocket_timerevent_callback = nullptr;
        qsslsocket_childevent_callback = nullptr;
        qsslsocket_customevent_callback = nullptr;
        qsslsocket_connectnotify_callback = nullptr;
        qsslsocket_disconnectnotify_callback = nullptr;
        qsslsocket_setsocketstate_callback = nullptr;
        qsslsocket_setsocketerror_callback = nullptr;
        qsslsocket_setlocalport_callback = nullptr;
        qsslsocket_setlocaladdress_callback = nullptr;
        qsslsocket_setpeerport_callback = nullptr;
        qsslsocket_setpeeraddress_callback = nullptr;
        qsslsocket_setpeername_callback = nullptr;
        qsslsocket_setopenmode_callback = nullptr;
        qsslsocket_seterrorstring_callback = nullptr;
        qsslsocket_sender_callback = nullptr;
        qsslsocket_sendersignalindex_callback = nullptr;
        qsslsocket_receivers_callback = nullptr;
        qsslsocket_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSslSocket_Metacall_Callback(QSslSocket_Metacall_Callback cb) { qsslsocket_metacall_callback = cb; }
    void setQSslSocket_Resume_Callback(QSslSocket_Resume_Callback cb) { qsslsocket_resume_callback = cb; }
    void setQSslSocket_SetSocketDescriptor_Callback(QSslSocket_SetSocketDescriptor_Callback cb) { qsslsocket_setsocketdescriptor_callback = cb; }
    void setQSslSocket_ConnectToHost_Callback(QSslSocket_ConnectToHost_Callback cb) { qsslsocket_connecttohost_callback = cb; }
    void setQSslSocket_DisconnectFromHost_Callback(QSslSocket_DisconnectFromHost_Callback cb) { qsslsocket_disconnectfromhost_callback = cb; }
    void setQSslSocket_SetSocketOption_Callback(QSslSocket_SetSocketOption_Callback cb) { qsslsocket_setsocketoption_callback = cb; }
    void setQSslSocket_SocketOption_Callback(QSslSocket_SocketOption_Callback cb) { qsslsocket_socketoption_callback = cb; }
    void setQSslSocket_BytesAvailable_Callback(QSslSocket_BytesAvailable_Callback cb) { qsslsocket_bytesavailable_callback = cb; }
    void setQSslSocket_BytesToWrite_Callback(QSslSocket_BytesToWrite_Callback cb) { qsslsocket_bytestowrite_callback = cb; }
    void setQSslSocket_CanReadLine_Callback(QSslSocket_CanReadLine_Callback cb) { qsslsocket_canreadline_callback = cb; }
    void setQSslSocket_Close_Callback(QSslSocket_Close_Callback cb) { qsslsocket_close_callback = cb; }
    void setQSslSocket_AtEnd_Callback(QSslSocket_AtEnd_Callback cb) { qsslsocket_atend_callback = cb; }
    void setQSslSocket_SetReadBufferSize_Callback(QSslSocket_SetReadBufferSize_Callback cb) { qsslsocket_setreadbuffersize_callback = cb; }
    void setQSslSocket_WaitForConnected_Callback(QSslSocket_WaitForConnected_Callback cb) { qsslsocket_waitforconnected_callback = cb; }
    void setQSslSocket_WaitForReadyRead_Callback(QSslSocket_WaitForReadyRead_Callback cb) { qsslsocket_waitforreadyread_callback = cb; }
    void setQSslSocket_WaitForBytesWritten_Callback(QSslSocket_WaitForBytesWritten_Callback cb) { qsslsocket_waitforbyteswritten_callback = cb; }
    void setQSslSocket_WaitForDisconnected_Callback(QSslSocket_WaitForDisconnected_Callback cb) { qsslsocket_waitfordisconnected_callback = cb; }
    void setQSslSocket_ReadData_Callback(QSslSocket_ReadData_Callback cb) { qsslsocket_readdata_callback = cb; }
    void setQSslSocket_SkipData_Callback(QSslSocket_SkipData_Callback cb) { qsslsocket_skipdata_callback = cb; }
    void setQSslSocket_WriteData_Callback(QSslSocket_WriteData_Callback cb) { qsslsocket_writedata_callback = cb; }
    void setQSslSocket_Bind_Callback(QSslSocket_Bind_Callback cb) { qsslsocket_bind_callback = cb; }
    void setQSslSocket_SocketDescriptor_Callback(QSslSocket_SocketDescriptor_Callback cb) { qsslsocket_socketdescriptor_callback = cb; }
    void setQSslSocket_IsSequential_Callback(QSslSocket_IsSequential_Callback cb) { qsslsocket_issequential_callback = cb; }
    void setQSslSocket_ReadLineData_Callback(QSslSocket_ReadLineData_Callback cb) { qsslsocket_readlinedata_callback = cb; }
    void setQSslSocket_Open_Callback(QSslSocket_Open_Callback cb) { qsslsocket_open_callback = cb; }
    void setQSslSocket_Pos_Callback(QSslSocket_Pos_Callback cb) { qsslsocket_pos_callback = cb; }
    void setQSslSocket_Size_Callback(QSslSocket_Size_Callback cb) { qsslsocket_size_callback = cb; }
    void setQSslSocket_Seek_Callback(QSslSocket_Seek_Callback cb) { qsslsocket_seek_callback = cb; }
    void setQSslSocket_Reset_Callback(QSslSocket_Reset_Callback cb) { qsslsocket_reset_callback = cb; }
    void setQSslSocket_Event_Callback(QSslSocket_Event_Callback cb) { qsslsocket_event_callback = cb; }
    void setQSslSocket_EventFilter_Callback(QSslSocket_EventFilter_Callback cb) { qsslsocket_eventfilter_callback = cb; }
    void setQSslSocket_TimerEvent_Callback(QSslSocket_TimerEvent_Callback cb) { qsslsocket_timerevent_callback = cb; }
    void setQSslSocket_ChildEvent_Callback(QSslSocket_ChildEvent_Callback cb) { qsslsocket_childevent_callback = cb; }
    void setQSslSocket_CustomEvent_Callback(QSslSocket_CustomEvent_Callback cb) { qsslsocket_customevent_callback = cb; }
    void setQSslSocket_ConnectNotify_Callback(QSslSocket_ConnectNotify_Callback cb) { qsslsocket_connectnotify_callback = cb; }
    void setQSslSocket_DisconnectNotify_Callback(QSslSocket_DisconnectNotify_Callback cb) { qsslsocket_disconnectnotify_callback = cb; }
    void setQSslSocket_SetSocketState_Callback(QSslSocket_SetSocketState_Callback cb) { qsslsocket_setsocketstate_callback = cb; }
    void setQSslSocket_SetSocketError_Callback(QSslSocket_SetSocketError_Callback cb) { qsslsocket_setsocketerror_callback = cb; }
    void setQSslSocket_SetLocalPort_Callback(QSslSocket_SetLocalPort_Callback cb) { qsslsocket_setlocalport_callback = cb; }
    void setQSslSocket_SetLocalAddress_Callback(QSslSocket_SetLocalAddress_Callback cb) { qsslsocket_setlocaladdress_callback = cb; }
    void setQSslSocket_SetPeerPort_Callback(QSslSocket_SetPeerPort_Callback cb) { qsslsocket_setpeerport_callback = cb; }
    void setQSslSocket_SetPeerAddress_Callback(QSslSocket_SetPeerAddress_Callback cb) { qsslsocket_setpeeraddress_callback = cb; }
    void setQSslSocket_SetPeerName_Callback(QSslSocket_SetPeerName_Callback cb) { qsslsocket_setpeername_callback = cb; }
    void setQSslSocket_SetOpenMode_Callback(QSslSocket_SetOpenMode_Callback cb) { qsslsocket_setopenmode_callback = cb; }
    void setQSslSocket_SetErrorString_Callback(QSslSocket_SetErrorString_Callback cb) { qsslsocket_seterrorstring_callback = cb; }
    void setQSslSocket_Sender_Callback(QSslSocket_Sender_Callback cb) { qsslsocket_sender_callback = cb; }
    void setQSslSocket_SenderSignalIndex_Callback(QSslSocket_SenderSignalIndex_Callback cb) { qsslsocket_sendersignalindex_callback = cb; }
    void setQSslSocket_Receivers_Callback(QSslSocket_Receivers_Callback cb) { qsslsocket_receivers_callback = cb; }
    void setQSslSocket_IsSignalConnected_Callback(QSslSocket_IsSignalConnected_Callback cb) { qsslsocket_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSslSocket_Metacall_IsBase(bool value) const { qsslsocket_metacall_isbase = value; }
    void setQSslSocket_Resume_IsBase(bool value) const { qsslsocket_resume_isbase = value; }
    void setQSslSocket_SetSocketDescriptor_IsBase(bool value) const { qsslsocket_setsocketdescriptor_isbase = value; }
    void setQSslSocket_ConnectToHost_IsBase(bool value) const { qsslsocket_connecttohost_isbase = value; }
    void setQSslSocket_DisconnectFromHost_IsBase(bool value) const { qsslsocket_disconnectfromhost_isbase = value; }
    void setQSslSocket_SetSocketOption_IsBase(bool value) const { qsslsocket_setsocketoption_isbase = value; }
    void setQSslSocket_SocketOption_IsBase(bool value) const { qsslsocket_socketoption_isbase = value; }
    void setQSslSocket_BytesAvailable_IsBase(bool value) const { qsslsocket_bytesavailable_isbase = value; }
    void setQSslSocket_BytesToWrite_IsBase(bool value) const { qsslsocket_bytestowrite_isbase = value; }
    void setQSslSocket_CanReadLine_IsBase(bool value) const { qsslsocket_canreadline_isbase = value; }
    void setQSslSocket_Close_IsBase(bool value) const { qsslsocket_close_isbase = value; }
    void setQSslSocket_AtEnd_IsBase(bool value) const { qsslsocket_atend_isbase = value; }
    void setQSslSocket_SetReadBufferSize_IsBase(bool value) const { qsslsocket_setreadbuffersize_isbase = value; }
    void setQSslSocket_WaitForConnected_IsBase(bool value) const { qsslsocket_waitforconnected_isbase = value; }
    void setQSslSocket_WaitForReadyRead_IsBase(bool value) const { qsslsocket_waitforreadyread_isbase = value; }
    void setQSslSocket_WaitForBytesWritten_IsBase(bool value) const { qsslsocket_waitforbyteswritten_isbase = value; }
    void setQSslSocket_WaitForDisconnected_IsBase(bool value) const { qsslsocket_waitfordisconnected_isbase = value; }
    void setQSslSocket_ReadData_IsBase(bool value) const { qsslsocket_readdata_isbase = value; }
    void setQSslSocket_SkipData_IsBase(bool value) const { qsslsocket_skipdata_isbase = value; }
    void setQSslSocket_WriteData_IsBase(bool value) const { qsslsocket_writedata_isbase = value; }
    void setQSslSocket_Bind_IsBase(bool value) const { qsslsocket_bind_isbase = value; }
    void setQSslSocket_SocketDescriptor_IsBase(bool value) const { qsslsocket_socketdescriptor_isbase = value; }
    void setQSslSocket_IsSequential_IsBase(bool value) const { qsslsocket_issequential_isbase = value; }
    void setQSslSocket_ReadLineData_IsBase(bool value) const { qsslsocket_readlinedata_isbase = value; }
    void setQSslSocket_Open_IsBase(bool value) const { qsslsocket_open_isbase = value; }
    void setQSslSocket_Pos_IsBase(bool value) const { qsslsocket_pos_isbase = value; }
    void setQSslSocket_Size_IsBase(bool value) const { qsslsocket_size_isbase = value; }
    void setQSslSocket_Seek_IsBase(bool value) const { qsslsocket_seek_isbase = value; }
    void setQSslSocket_Reset_IsBase(bool value) const { qsslsocket_reset_isbase = value; }
    void setQSslSocket_Event_IsBase(bool value) const { qsslsocket_event_isbase = value; }
    void setQSslSocket_EventFilter_IsBase(bool value) const { qsslsocket_eventfilter_isbase = value; }
    void setQSslSocket_TimerEvent_IsBase(bool value) const { qsslsocket_timerevent_isbase = value; }
    void setQSslSocket_ChildEvent_IsBase(bool value) const { qsslsocket_childevent_isbase = value; }
    void setQSslSocket_CustomEvent_IsBase(bool value) const { qsslsocket_customevent_isbase = value; }
    void setQSslSocket_ConnectNotify_IsBase(bool value) const { qsslsocket_connectnotify_isbase = value; }
    void setQSslSocket_DisconnectNotify_IsBase(bool value) const { qsslsocket_disconnectnotify_isbase = value; }
    void setQSslSocket_SetSocketState_IsBase(bool value) const { qsslsocket_setsocketstate_isbase = value; }
    void setQSslSocket_SetSocketError_IsBase(bool value) const { qsslsocket_setsocketerror_isbase = value; }
    void setQSslSocket_SetLocalPort_IsBase(bool value) const { qsslsocket_setlocalport_isbase = value; }
    void setQSslSocket_SetLocalAddress_IsBase(bool value) const { qsslsocket_setlocaladdress_isbase = value; }
    void setQSslSocket_SetPeerPort_IsBase(bool value) const { qsslsocket_setpeerport_isbase = value; }
    void setQSslSocket_SetPeerAddress_IsBase(bool value) const { qsslsocket_setpeeraddress_isbase = value; }
    void setQSslSocket_SetPeerName_IsBase(bool value) const { qsslsocket_setpeername_isbase = value; }
    void setQSslSocket_SetOpenMode_IsBase(bool value) const { qsslsocket_setopenmode_isbase = value; }
    void setQSslSocket_SetErrorString_IsBase(bool value) const { qsslsocket_seterrorstring_isbase = value; }
    void setQSslSocket_Sender_IsBase(bool value) const { qsslsocket_sender_isbase = value; }
    void setQSslSocket_SenderSignalIndex_IsBase(bool value) const { qsslsocket_sendersignalindex_isbase = value; }
    void setQSslSocket_Receivers_IsBase(bool value) const { qsslsocket_receivers_isbase = value; }
    void setQSslSocket_IsSignalConnected_IsBase(bool value) const { qsslsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsslsocket_metacall_isbase) {
            qsslsocket_metacall_isbase = false;
            return QSslSocket::qt_metacall(param1, param2, param3);
        } else if (qsslsocket_metacall_callback != nullptr) {
            return qsslsocket_metacall_callback(this, param1, param2, param3);
        } else {
            return QSslSocket::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qsslsocket_resume_isbase) {
            qsslsocket_resume_isbase = false;
            QSslSocket::resume();
        } else if (qsslsocket_resume_callback != nullptr) {
            qsslsocket_resume_callback();
        } else {
            QSslSocket::resume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
        if (qsslsocket_setsocketdescriptor_isbase) {
            qsslsocket_setsocketdescriptor_isbase = false;
            return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        } else if (qsslsocket_setsocketdescriptor_callback != nullptr) {
            return qsslsocket_setsocketdescriptor_callback(this, socketDescriptor, state, openMode);
        } else {
            return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode openMode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qsslsocket_connecttohost_isbase) {
            qsslsocket_connecttohost_isbase = false;
            QSslSocket::connectToHost(hostName, port, openMode, protocol);
        } else if (qsslsocket_connecttohost_callback != nullptr) {
            qsslsocket_connecttohost_callback(this, hostName, port, openMode, protocol);
        } else {
            QSslSocket::connectToHost(hostName, port, openMode, protocol);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qsslsocket_disconnectfromhost_isbase) {
            qsslsocket_disconnectfromhost_isbase = false;
            QSslSocket::disconnectFromHost();
        } else if (qsslsocket_disconnectfromhost_callback != nullptr) {
            qsslsocket_disconnectfromhost_callback();
        } else {
            QSslSocket::disconnectFromHost();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qsslsocket_setsocketoption_isbase) {
            qsslsocket_setsocketoption_isbase = false;
            QSslSocket::setSocketOption(option, value);
        } else if (qsslsocket_setsocketoption_callback != nullptr) {
            qsslsocket_setsocketoption_callback(this, option, value);
        } else {
            QSslSocket::setSocketOption(option, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qsslsocket_socketoption_isbase) {
            qsslsocket_socketoption_isbase = false;
            return QSslSocket::socketOption(option);
        } else if (qsslsocket_socketoption_callback != nullptr) {
            return qsslsocket_socketoption_callback(this, option);
        } else {
            return QSslSocket::socketOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qsslsocket_bytesavailable_isbase) {
            qsslsocket_bytesavailable_isbase = false;
            return QSslSocket::bytesAvailable();
        } else if (qsslsocket_bytesavailable_callback != nullptr) {
            return qsslsocket_bytesavailable_callback();
        } else {
            return QSslSocket::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qsslsocket_bytestowrite_isbase) {
            qsslsocket_bytestowrite_isbase = false;
            return QSslSocket::bytesToWrite();
        } else if (qsslsocket_bytestowrite_callback != nullptr) {
            return qsslsocket_bytestowrite_callback();
        } else {
            return QSslSocket::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qsslsocket_canreadline_isbase) {
            qsslsocket_canreadline_isbase = false;
            return QSslSocket::canReadLine();
        } else if (qsslsocket_canreadline_callback != nullptr) {
            return qsslsocket_canreadline_callback();
        } else {
            return QSslSocket::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qsslsocket_close_isbase) {
            qsslsocket_close_isbase = false;
            QSslSocket::close();
        } else if (qsslsocket_close_callback != nullptr) {
            qsslsocket_close_callback();
        } else {
            QSslSocket::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qsslsocket_atend_isbase) {
            qsslsocket_atend_isbase = false;
            return QSslSocket::atEnd();
        } else if (qsslsocket_atend_callback != nullptr) {
            return qsslsocket_atend_callback();
        } else {
            return QSslSocket::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qsslsocket_setreadbuffersize_isbase) {
            qsslsocket_setreadbuffersize_isbase = false;
            QSslSocket::setReadBufferSize(size);
        } else if (qsslsocket_setreadbuffersize_callback != nullptr) {
            qsslsocket_setreadbuffersize_callback(this, size);
        } else {
            QSslSocket::setReadBufferSize(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qsslsocket_waitforconnected_isbase) {
            qsslsocket_waitforconnected_isbase = false;
            return QSslSocket::waitForConnected(msecs);
        } else if (qsslsocket_waitforconnected_callback != nullptr) {
            return qsslsocket_waitforconnected_callback(this, msecs);
        } else {
            return QSslSocket::waitForConnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qsslsocket_waitforreadyread_isbase) {
            qsslsocket_waitforreadyread_isbase = false;
            return QSslSocket::waitForReadyRead(msecs);
        } else if (qsslsocket_waitforreadyread_callback != nullptr) {
            return qsslsocket_waitforreadyread_callback(this, msecs);
        } else {
            return QSslSocket::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qsslsocket_waitforbyteswritten_isbase) {
            qsslsocket_waitforbyteswritten_isbase = false;
            return QSslSocket::waitForBytesWritten(msecs);
        } else if (qsslsocket_waitforbyteswritten_callback != nullptr) {
            return qsslsocket_waitforbyteswritten_callback(this, msecs);
        } else {
            return QSslSocket::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qsslsocket_waitfordisconnected_isbase) {
            qsslsocket_waitfordisconnected_isbase = false;
            return QSslSocket::waitForDisconnected(msecs);
        } else if (qsslsocket_waitfordisconnected_callback != nullptr) {
            return qsslsocket_waitfordisconnected_callback(this, msecs);
        } else {
            return QSslSocket::waitForDisconnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qsslsocket_readdata_isbase) {
            qsslsocket_readdata_isbase = false;
            return QSslSocket::readData(data, maxlen);
        } else if (qsslsocket_readdata_callback != nullptr) {
            return qsslsocket_readdata_callback(this, data, maxlen);
        } else {
            return QSslSocket::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qsslsocket_skipdata_isbase) {
            qsslsocket_skipdata_isbase = false;
            return QSslSocket::skipData(maxSize);
        } else if (qsslsocket_skipdata_callback != nullptr) {
            return qsslsocket_skipdata_callback(this, maxSize);
        } else {
            return QSslSocket::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qsslsocket_writedata_isbase) {
            qsslsocket_writedata_isbase = false;
            return QSslSocket::writeData(data, lenVal);
        } else if (qsslsocket_writedata_callback != nullptr) {
            return qsslsocket_writedata_callback(this, data, lenVal);
        } else {
            return QSslSocket::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
        if (qsslsocket_bind_isbase) {
            qsslsocket_bind_isbase = false;
            return QSslSocket::bind(address, port, mode);
        } else if (qsslsocket_bind_callback != nullptr) {
            return qsslsocket_bind_callback(this, address, port, mode);
        } else {
            return QSslSocket::bind(address, port, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qsslsocket_socketdescriptor_isbase) {
            qsslsocket_socketdescriptor_isbase = false;
            return QSslSocket::socketDescriptor();
        } else if (qsslsocket_socketdescriptor_callback != nullptr) {
            return qsslsocket_socketdescriptor_callback();
        } else {
            return QSslSocket::socketDescriptor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qsslsocket_issequential_isbase) {
            qsslsocket_issequential_isbase = false;
            return QSslSocket::isSequential();
        } else if (qsslsocket_issequential_callback != nullptr) {
            return qsslsocket_issequential_callback();
        } else {
            return QSslSocket::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qsslsocket_readlinedata_isbase) {
            qsslsocket_readlinedata_isbase = false;
            return QSslSocket::readLineData(data, maxlen);
        } else if (qsslsocket_readlinedata_callback != nullptr) {
            return qsslsocket_readlinedata_callback(this, data, maxlen);
        } else {
            return QSslSocket::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qsslsocket_open_isbase) {
            qsslsocket_open_isbase = false;
            return QSslSocket::open(mode);
        } else if (qsslsocket_open_callback != nullptr) {
            return qsslsocket_open_callback(this, mode);
        } else {
            return QSslSocket::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qsslsocket_pos_isbase) {
            qsslsocket_pos_isbase = false;
            return QSslSocket::pos();
        } else if (qsslsocket_pos_callback != nullptr) {
            return qsslsocket_pos_callback();
        } else {
            return QSslSocket::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qsslsocket_size_isbase) {
            qsslsocket_size_isbase = false;
            return QSslSocket::size();
        } else if (qsslsocket_size_callback != nullptr) {
            return qsslsocket_size_callback();
        } else {
            return QSslSocket::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qsslsocket_seek_isbase) {
            qsslsocket_seek_isbase = false;
            return QSslSocket::seek(pos);
        } else if (qsslsocket_seek_callback != nullptr) {
            return qsslsocket_seek_callback(this, pos);
        } else {
            return QSslSocket::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qsslsocket_reset_isbase) {
            qsslsocket_reset_isbase = false;
            return QSslSocket::reset();
        } else if (qsslsocket_reset_callback != nullptr) {
            return qsslsocket_reset_callback();
        } else {
            return QSslSocket::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsslsocket_event_isbase) {
            qsslsocket_event_isbase = false;
            return QSslSocket::event(event);
        } else if (qsslsocket_event_callback != nullptr) {
            return qsslsocket_event_callback(this, event);
        } else {
            return QSslSocket::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsslsocket_eventfilter_isbase) {
            qsslsocket_eventfilter_isbase = false;
            return QSslSocket::eventFilter(watched, event);
        } else if (qsslsocket_eventfilter_callback != nullptr) {
            return qsslsocket_eventfilter_callback(this, watched, event);
        } else {
            return QSslSocket::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsslsocket_timerevent_isbase) {
            qsslsocket_timerevent_isbase = false;
            QSslSocket::timerEvent(event);
        } else if (qsslsocket_timerevent_callback != nullptr) {
            qsslsocket_timerevent_callback(this, event);
        } else {
            QSslSocket::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsslsocket_childevent_isbase) {
            qsslsocket_childevent_isbase = false;
            QSslSocket::childEvent(event);
        } else if (qsslsocket_childevent_callback != nullptr) {
            qsslsocket_childevent_callback(this, event);
        } else {
            QSslSocket::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsslsocket_customevent_isbase) {
            qsslsocket_customevent_isbase = false;
            QSslSocket::customEvent(event);
        } else if (qsslsocket_customevent_callback != nullptr) {
            qsslsocket_customevent_callback(this, event);
        } else {
            QSslSocket::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsslsocket_connectnotify_isbase) {
            qsslsocket_connectnotify_isbase = false;
            QSslSocket::connectNotify(signal);
        } else if (qsslsocket_connectnotify_callback != nullptr) {
            qsslsocket_connectnotify_callback(this, signal);
        } else {
            QSslSocket::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsslsocket_disconnectnotify_isbase) {
            qsslsocket_disconnectnotify_isbase = false;
            QSslSocket::disconnectNotify(signal);
        } else if (qsslsocket_disconnectnotify_callback != nullptr) {
            qsslsocket_disconnectnotify_callback(this, signal);
        } else {
            QSslSocket::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketState(QAbstractSocket::SocketState state) {
        if (qsslsocket_setsocketstate_isbase) {
            qsslsocket_setsocketstate_isbase = false;
            QSslSocket::setSocketState(state);
        } else if (qsslsocket_setsocketstate_callback != nullptr) {
            qsslsocket_setsocketstate_callback(this, state);
        } else {
            QSslSocket::setSocketState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketError(QAbstractSocket::SocketError socketError) {
        if (qsslsocket_setsocketerror_isbase) {
            qsslsocket_setsocketerror_isbase = false;
            QSslSocket::setSocketError(socketError);
        } else if (qsslsocket_setsocketerror_callback != nullptr) {
            qsslsocket_setsocketerror_callback(this, socketError);
        } else {
            QSslSocket::setSocketError(socketError);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalPort(quint16 port) {
        if (qsslsocket_setlocalport_isbase) {
            qsslsocket_setlocalport_isbase = false;
            QSslSocket::setLocalPort(port);
        } else if (qsslsocket_setlocalport_callback != nullptr) {
            qsslsocket_setlocalport_callback(this, port);
        } else {
            QSslSocket::setLocalPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalAddress(const QHostAddress& address) {
        if (qsslsocket_setlocaladdress_isbase) {
            qsslsocket_setlocaladdress_isbase = false;
            QSslSocket::setLocalAddress(address);
        } else if (qsslsocket_setlocaladdress_callback != nullptr) {
            qsslsocket_setlocaladdress_callback(this, address);
        } else {
            QSslSocket::setLocalAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerPort(quint16 port) {
        if (qsslsocket_setpeerport_isbase) {
            qsslsocket_setpeerport_isbase = false;
            QSslSocket::setPeerPort(port);
        } else if (qsslsocket_setpeerport_callback != nullptr) {
            qsslsocket_setpeerport_callback(this, port);
        } else {
            QSslSocket::setPeerPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerAddress(const QHostAddress& address) {
        if (qsslsocket_setpeeraddress_isbase) {
            qsslsocket_setpeeraddress_isbase = false;
            QSslSocket::setPeerAddress(address);
        } else if (qsslsocket_setpeeraddress_callback != nullptr) {
            qsslsocket_setpeeraddress_callback(this, address);
        } else {
            QSslSocket::setPeerAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerName(const QString& name) {
        if (qsslsocket_setpeername_isbase) {
            qsslsocket_setpeername_isbase = false;
            QSslSocket::setPeerName(name);
        } else if (qsslsocket_setpeername_callback != nullptr) {
            qsslsocket_setpeername_callback(this, name);
        } else {
            QSslSocket::setPeerName(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qsslsocket_setopenmode_isbase) {
            qsslsocket_setopenmode_isbase = false;
            QSslSocket::setOpenMode(openMode);
        } else if (qsslsocket_setopenmode_callback != nullptr) {
            qsslsocket_setopenmode_callback(this, openMode);
        } else {
            QSslSocket::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qsslsocket_seterrorstring_isbase) {
            qsslsocket_seterrorstring_isbase = false;
            QSslSocket::setErrorString(errorString);
        } else if (qsslsocket_seterrorstring_callback != nullptr) {
            qsslsocket_seterrorstring_callback(this, errorString);
        } else {
            QSslSocket::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsslsocket_sender_isbase) {
            qsslsocket_sender_isbase = false;
            return QSslSocket::sender();
        } else if (qsslsocket_sender_callback != nullptr) {
            return qsslsocket_sender_callback();
        } else {
            return QSslSocket::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsslsocket_sendersignalindex_isbase) {
            qsslsocket_sendersignalindex_isbase = false;
            return QSslSocket::senderSignalIndex();
        } else if (qsslsocket_sendersignalindex_callback != nullptr) {
            return qsslsocket_sendersignalindex_callback();
        } else {
            return QSslSocket::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsslsocket_receivers_isbase) {
            qsslsocket_receivers_isbase = false;
            return QSslSocket::receivers(signal);
        } else if (qsslsocket_receivers_callback != nullptr) {
            return qsslsocket_receivers_callback(this, signal);
        } else {
            return QSslSocket::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsslsocket_issignalconnected_isbase) {
            qsslsocket_issignalconnected_isbase = false;
            return QSslSocket::isSignalConnected(signal);
        } else if (qsslsocket_issignalconnected_callback != nullptr) {
            return qsslsocket_issignalconnected_callback(this, signal);
        } else {
            return QSslSocket::isSignalConnected(signal);
        }
    }
};

#endif

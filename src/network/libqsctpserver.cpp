#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QNetworkProxy>
#include <QObject>
#include <QSctpServer>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qsctpserver.h>
#include "libqsctpserver.hpp"
#include "libqsctpserver.hxx"

QSctpServer* QSctpServer_new() {
    return new VirtualQSctpServer();
}

QSctpServer* QSctpServer_new2(QObject* parent) {
    return new VirtualQSctpServer(parent);
}

QMetaObject* QSctpServer_MetaObject(const QSctpServer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSctpServer_Metacast(QSctpServer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSctpServer_Metacall(QSctpServer* self, int param1, int param2, void** param3) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSctpServer_OnMetacall(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_Metacall_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSctpServer_QBaseMetacall(QSctpServer* self, int param1, int param2, void** param3) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_Metacall_IsBase(true);
        return vqsctpserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSctpServer_Tr(const char* s) {
    QString _ret = QSctpServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSctpServer_SetMaximumChannelCount(QSctpServer* self, int count) {
    self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpServer_MaximumChannelCount(const QSctpServer* self) {
    return self->maximumChannelCount();
}

QSctpSocket* QSctpServer_NextPendingDatagramConnection(QSctpServer* self) {
    return self->nextPendingDatagramConnection();
}

libqt_string QSctpServer_Tr2(const char* s, const char* c) {
    QString _ret = QSctpServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSctpServer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSctpServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QSctpServer_IncomingConnection(QSctpServer* self, intptr_t handle) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->incomingConnection((qintptr)(handle));
    } else {
        vqsctpserver->incomingConnection((qintptr)(handle));
    }
}

// Base class handler implementation
void QSctpServer_QBaseIncomingConnection(QSctpServer* self, intptr_t handle) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_IncomingConnection_IsBase(true);
        vqsctpserver->incomingConnection((qintptr)(handle));
    } else {
        vqsctpserver->incomingConnection((qintptr)(handle));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnIncomingConnection(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_IncomingConnection_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_IncomingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpServer_HasPendingConnections(const QSctpServer* self) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->hasPendingConnections();
    } else {
        return vqsctpserver->hasPendingConnections();
    }
}

// Base class handler implementation
bool QSctpServer_QBaseHasPendingConnections(const QSctpServer* self) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_HasPendingConnections_IsBase(true);
        return vqsctpserver->hasPendingConnections();
    } else {
        return vqsctpserver->hasPendingConnections();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnHasPendingConnections(const QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_HasPendingConnections_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_HasPendingConnections_Callback>(slot));
    }
}

// Derived class handler implementation
QTcpSocket* QSctpServer_NextPendingConnection(QSctpServer* self) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        return vqsctpserver->nextPendingConnection();
    } else {
        return vqsctpserver->nextPendingConnection();
    }
}

// Base class handler implementation
QTcpSocket* QSctpServer_QBaseNextPendingConnection(QSctpServer* self) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_NextPendingConnection_IsBase(true);
        return vqsctpserver->nextPendingConnection();
    } else {
        return vqsctpserver->nextPendingConnection();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnNextPendingConnection(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_NextPendingConnection_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_NextPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpServer_Event(QSctpServer* self, QEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        return vqsctpserver->event(event);
    } else {
        return vqsctpserver->event(event);
    }
}

// Base class handler implementation
bool QSctpServer_QBaseEvent(QSctpServer* self, QEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_Event_IsBase(true);
        return vqsctpserver->event(event);
    } else {
        return vqsctpserver->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnEvent(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_Event_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpServer_EventFilter(QSctpServer* self, QObject* watched, QEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        return vqsctpserver->eventFilter(watched, event);
    } else {
        return vqsctpserver->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSctpServer_QBaseEventFilter(QSctpServer* self, QObject* watched, QEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_EventFilter_IsBase(true);
        return vqsctpserver->eventFilter(watched, event);
    } else {
        return vqsctpserver->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnEventFilter(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_EventFilter_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_TimerEvent(QSctpServer* self, QTimerEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->timerEvent(event);
    } else {
        vqsctpserver->timerEvent(event);
    }
}

// Base class handler implementation
void QSctpServer_QBaseTimerEvent(QSctpServer* self, QTimerEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_TimerEvent_IsBase(true);
        vqsctpserver->timerEvent(event);
    } else {
        vqsctpserver->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnTimerEvent(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_TimerEvent_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_ChildEvent(QSctpServer* self, QChildEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->childEvent(event);
    } else {
        vqsctpserver->childEvent(event);
    }
}

// Base class handler implementation
void QSctpServer_QBaseChildEvent(QSctpServer* self, QChildEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_ChildEvent_IsBase(true);
        vqsctpserver->childEvent(event);
    } else {
        vqsctpserver->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnChildEvent(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_ChildEvent_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_CustomEvent(QSctpServer* self, QEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->customEvent(event);
    } else {
        vqsctpserver->customEvent(event);
    }
}

// Base class handler implementation
void QSctpServer_QBaseCustomEvent(QSctpServer* self, QEvent* event) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_CustomEvent_IsBase(true);
        vqsctpserver->customEvent(event);
    } else {
        vqsctpserver->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnCustomEvent(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_CustomEvent_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_ConnectNotify(QSctpServer* self, QMetaMethod* signal) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->connectNotify(*signal);
    } else {
        vqsctpserver->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSctpServer_QBaseConnectNotify(QSctpServer* self, QMetaMethod* signal) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_ConnectNotify_IsBase(true);
        vqsctpserver->connectNotify(*signal);
    } else {
        vqsctpserver->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnConnectNotify(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_ConnectNotify_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_DisconnectNotify(QSctpServer* self, QMetaMethod* signal) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->disconnectNotify(*signal);
    } else {
        vqsctpserver->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSctpServer_QBaseDisconnectNotify(QSctpServer* self, QMetaMethod* signal) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_DisconnectNotify_IsBase(true);
        vqsctpserver->disconnectNotify(*signal);
    } else {
        vqsctpserver->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnDisconnectNotify(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_DisconnectNotify_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpServer_AddPendingConnection(QSctpServer* self, QTcpSocket* socket) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->addPendingConnection(socket);
    } else {
        vqsctpserver->addPendingConnection(socket);
    }
}

// Base class handler implementation
void QSctpServer_QBaseAddPendingConnection(QSctpServer* self, QTcpSocket* socket) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_AddPendingConnection_IsBase(true);
        vqsctpserver->addPendingConnection(socket);
    } else {
        vqsctpserver->addPendingConnection(socket);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnAddPendingConnection(QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = dynamic_cast<VirtualQSctpServer*>(self)) {
        vqsctpserver->setQSctpServer_AddPendingConnection_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_AddPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSctpServer_Sender(const QSctpServer* self) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->sender();
    } else {
        return vqsctpserver->sender();
    }
}

// Base class handler implementation
QObject* QSctpServer_QBaseSender(const QSctpServer* self) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_Sender_IsBase(true);
        return vqsctpserver->sender();
    } else {
        return vqsctpserver->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnSender(const QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_Sender_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSctpServer_SenderSignalIndex(const QSctpServer* self) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->senderSignalIndex();
    } else {
        return vqsctpserver->senderSignalIndex();
    }
}

// Base class handler implementation
int QSctpServer_QBaseSenderSignalIndex(const QSctpServer* self) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_SenderSignalIndex_IsBase(true);
        return vqsctpserver->senderSignalIndex();
    } else {
        return vqsctpserver->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnSenderSignalIndex(const QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSctpServer_Receivers(const QSctpServer* self, const char* signal) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->receivers(signal);
    } else {
        return vqsctpserver->receivers(signal);
    }
}

// Base class handler implementation
int QSctpServer_QBaseReceivers(const QSctpServer* self, const char* signal) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_Receivers_IsBase(true);
        return vqsctpserver->receivers(signal);
    } else {
        return vqsctpserver->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnReceivers(const QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_Receivers_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpServer_IsSignalConnected(const QSctpServer* self, QMetaMethod* signal) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        return vqsctpserver->isSignalConnected(*signal);
    } else {
        return vqsctpserver->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSctpServer_QBaseIsSignalConnected(const QSctpServer* self, QMetaMethod* signal) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_IsSignalConnected_IsBase(true);
        return vqsctpserver->isSignalConnected(*signal);
    } else {
        return vqsctpserver->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpServer_OnIsSignalConnected(const QSctpServer* self, intptr_t slot) {
    if (auto* vqsctpserver = const_cast<VirtualQSctpServer*>(dynamic_cast<const VirtualQSctpServer*>(self))) {
        vqsctpserver->setQSctpServer_IsSignalConnected_Callback(reinterpret_cast<VirtualQSctpServer::QSctpServer_IsSignalConnected_Callback>(slot));
    }
}

void QSctpServer_Delete(QSctpServer* self) {
    delete self;
}

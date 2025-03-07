#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QLocalServer>
#include <QLocalSocket>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qlocalserver.h>
#include "libqlocalserver.hpp"
#include "libqlocalserver.hxx"

QLocalServer* QLocalServer_new() {
    return new VirtualQLocalServer();
}

QLocalServer* QLocalServer_new2(QObject* parent) {
    return new VirtualQLocalServer(parent);
}

QMetaObject* QLocalServer_MetaObject(const QLocalServer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLocalServer_Metacast(QLocalServer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLocalServer_Metacall(QLocalServer* self, int param1, int param2, void** param3) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLocalServer_OnMetacall(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_Metacall_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLocalServer_QBaseMetacall(QLocalServer* self, int param1, int param2, void** param3) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_Metacall_IsBase(true);
        return vqlocalserver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLocalServer_Tr(const char* s) {
    QString _ret = QLocalServer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLocalServer_NewConnection(QLocalServer* self) {
    self->newConnection();
}

void QLocalServer_Connect_NewConnection(QLocalServer* self, intptr_t slot) {
    void (*slotFunc)(QLocalServer*) = reinterpret_cast<void (*)(QLocalServer*)>(slot);
    QLocalServer::connect(self, &QLocalServer::newConnection, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QLocalServer_Close(QLocalServer* self) {
    self->close();
}

libqt_string QLocalServer_ErrorString(const QLocalServer* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QLocalServer_IsListening(const QLocalServer* self) {
    return self->isListening();
}

bool QLocalServer_Listen(QLocalServer* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->listen(name_QString);
}

bool QLocalServer_ListenWithSocketDescriptor(QLocalServer* self, intptr_t socketDescriptor) {
    return self->listen((qintptr)(socketDescriptor));
}

int QLocalServer_MaxPendingConnections(const QLocalServer* self) {
    return self->maxPendingConnections();
}

libqt_string QLocalServer_ServerName(const QLocalServer* self) {
    QString _ret = self->serverName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLocalServer_FullServerName(const QLocalServer* self) {
    QString _ret = self->fullServerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QLocalServer_RemoveServer(libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return QLocalServer::removeServer(name_QString);
}

int QLocalServer_ServerError(const QLocalServer* self) {
    return static_cast<int>(self->serverError());
}

void QLocalServer_SetMaxPendingConnections(QLocalServer* self, int numConnections) {
    self->setMaxPendingConnections(static_cast<int>(numConnections));
}

bool QLocalServer_WaitForNewConnection(QLocalServer* self) {
    return self->waitForNewConnection();
}

void QLocalServer_SetListenBacklogSize(QLocalServer* self, int size) {
    self->setListenBacklogSize(static_cast<int>(size));
}

int QLocalServer_ListenBacklogSize(const QLocalServer* self) {
    return self->listenBacklogSize();
}

void QLocalServer_SetSocketOptions(QLocalServer* self, int options) {
    self->setSocketOptions(static_cast<QLocalServer::SocketOptions>(options));
}

int QLocalServer_SocketOptions(const QLocalServer* self) {
    return static_cast<int>(self->socketOptions());
}

intptr_t QLocalServer_SocketDescriptor(const QLocalServer* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

libqt_string QLocalServer_Tr2(const char* s, const char* c) {
    QString _ret = QLocalServer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLocalServer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLocalServer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QLocalServer_WaitForNewConnection1(QLocalServer* self, int msec) {
    return self->waitForNewConnection(static_cast<int>(msec));
}

bool QLocalServer_WaitForNewConnection2(QLocalServer* self, int msec, bool* timedOut) {
    return self->waitForNewConnection(static_cast<int>(msec), timedOut);
}

// Derived class handler implementation
bool QLocalServer_HasPendingConnections(const QLocalServer* self) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->hasPendingConnections();
    } else {
        return vqlocalserver->hasPendingConnections();
    }
}

// Base class handler implementation
bool QLocalServer_QBaseHasPendingConnections(const QLocalServer* self) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_HasPendingConnections_IsBase(true);
        return vqlocalserver->hasPendingConnections();
    } else {
        return vqlocalserver->hasPendingConnections();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnHasPendingConnections(const QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_HasPendingConnections_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_HasPendingConnections_Callback>(slot));
    }
}

// Derived class handler implementation
QLocalSocket* QLocalServer_NextPendingConnection(QLocalServer* self) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        return vqlocalserver->nextPendingConnection();
    } else {
        return vqlocalserver->nextPendingConnection();
    }
}

// Base class handler implementation
QLocalSocket* QLocalServer_QBaseNextPendingConnection(QLocalServer* self) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_NextPendingConnection_IsBase(true);
        return vqlocalserver->nextPendingConnection();
    } else {
        return vqlocalserver->nextPendingConnection();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnNextPendingConnection(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_NextPendingConnection_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_NextPendingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalServer_IncomingConnection(QLocalServer* self, uintptr_t socketDescriptor) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->incomingConnection(static_cast<quintptr>(socketDescriptor));
    } else {
        vqlocalserver->incomingConnection(static_cast<quintptr>(socketDescriptor));
    }
}

// Base class handler implementation
void QLocalServer_QBaseIncomingConnection(QLocalServer* self, uintptr_t socketDescriptor) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_IncomingConnection_IsBase(true);
        vqlocalserver->incomingConnection(static_cast<quintptr>(socketDescriptor));
    } else {
        vqlocalserver->incomingConnection(static_cast<quintptr>(socketDescriptor));
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnIncomingConnection(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_IncomingConnection_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_IncomingConnection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalServer_Event(QLocalServer* self, QEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        return vqlocalserver->event(event);
    } else {
        return vqlocalserver->event(event);
    }
}

// Base class handler implementation
bool QLocalServer_QBaseEvent(QLocalServer* self, QEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_Event_IsBase(true);
        return vqlocalserver->event(event);
    } else {
        return vqlocalserver->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnEvent(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_Event_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalServer_EventFilter(QLocalServer* self, QObject* watched, QEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        return vqlocalserver->eventFilter(watched, event);
    } else {
        return vqlocalserver->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLocalServer_QBaseEventFilter(QLocalServer* self, QObject* watched, QEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_EventFilter_IsBase(true);
        return vqlocalserver->eventFilter(watched, event);
    } else {
        return vqlocalserver->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnEventFilter(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_EventFilter_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalServer_TimerEvent(QLocalServer* self, QTimerEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->timerEvent(event);
    } else {
        vqlocalserver->timerEvent(event);
    }
}

// Base class handler implementation
void QLocalServer_QBaseTimerEvent(QLocalServer* self, QTimerEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_TimerEvent_IsBase(true);
        vqlocalserver->timerEvent(event);
    } else {
        vqlocalserver->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnTimerEvent(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_TimerEvent_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalServer_ChildEvent(QLocalServer* self, QChildEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->childEvent(event);
    } else {
        vqlocalserver->childEvent(event);
    }
}

// Base class handler implementation
void QLocalServer_QBaseChildEvent(QLocalServer* self, QChildEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_ChildEvent_IsBase(true);
        vqlocalserver->childEvent(event);
    } else {
        vqlocalserver->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnChildEvent(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_ChildEvent_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalServer_CustomEvent(QLocalServer* self, QEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->customEvent(event);
    } else {
        vqlocalserver->customEvent(event);
    }
}

// Base class handler implementation
void QLocalServer_QBaseCustomEvent(QLocalServer* self, QEvent* event) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_CustomEvent_IsBase(true);
        vqlocalserver->customEvent(event);
    } else {
        vqlocalserver->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnCustomEvent(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_CustomEvent_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalServer_ConnectNotify(QLocalServer* self, QMetaMethod* signal) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->connectNotify(*signal);
    } else {
        vqlocalserver->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLocalServer_QBaseConnectNotify(QLocalServer* self, QMetaMethod* signal) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_ConnectNotify_IsBase(true);
        vqlocalserver->connectNotify(*signal);
    } else {
        vqlocalserver->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnConnectNotify(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_ConnectNotify_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLocalServer_DisconnectNotify(QLocalServer* self, QMetaMethod* signal) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->disconnectNotify(*signal);
    } else {
        vqlocalserver->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLocalServer_QBaseDisconnectNotify(QLocalServer* self, QMetaMethod* signal) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_DisconnectNotify_IsBase(true);
        vqlocalserver->disconnectNotify(*signal);
    } else {
        vqlocalserver->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnDisconnectNotify(QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = dynamic_cast<VirtualQLocalServer*>(self)) {
        vqlocalserver->setQLocalServer_DisconnectNotify_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLocalServer_Sender(const QLocalServer* self) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->sender();
    } else {
        return vqlocalserver->sender();
    }
}

// Base class handler implementation
QObject* QLocalServer_QBaseSender(const QLocalServer* self) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_Sender_IsBase(true);
        return vqlocalserver->sender();
    } else {
        return vqlocalserver->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnSender(const QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_Sender_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLocalServer_SenderSignalIndex(const QLocalServer* self) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->senderSignalIndex();
    } else {
        return vqlocalserver->senderSignalIndex();
    }
}

// Base class handler implementation
int QLocalServer_QBaseSenderSignalIndex(const QLocalServer* self) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_SenderSignalIndex_IsBase(true);
        return vqlocalserver->senderSignalIndex();
    } else {
        return vqlocalserver->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnSenderSignalIndex(const QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLocalServer_Receivers(const QLocalServer* self, const char* signal) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->receivers(signal);
    } else {
        return vqlocalserver->receivers(signal);
    }
}

// Base class handler implementation
int QLocalServer_QBaseReceivers(const QLocalServer* self, const char* signal) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_Receivers_IsBase(true);
        return vqlocalserver->receivers(signal);
    } else {
        return vqlocalserver->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnReceivers(const QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_Receivers_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLocalServer_IsSignalConnected(const QLocalServer* self, QMetaMethod* signal) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        return vqlocalserver->isSignalConnected(*signal);
    } else {
        return vqlocalserver->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLocalServer_QBaseIsSignalConnected(const QLocalServer* self, QMetaMethod* signal) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_IsSignalConnected_IsBase(true);
        return vqlocalserver->isSignalConnected(*signal);
    } else {
        return vqlocalserver->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLocalServer_OnIsSignalConnected(const QLocalServer* self, intptr_t slot) {
    if (auto* vqlocalserver = const_cast<VirtualQLocalServer*>(dynamic_cast<const VirtualQLocalServer*>(self))) {
        vqlocalserver->setQLocalServer_IsSignalConnected_Callback(reinterpret_cast<VirtualQLocalServer::QLocalServer_IsSignalConnected_Callback>(slot));
    }
}

void QLocalServer_Delete(QLocalServer* self) {
    delete self;
}

#include <QAbstractSocket>
#include <QAnyStringView>
#include <QAuthenticator>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractsocket.h>
#include "libqabstractsocket.hpp"
#include "libqabstractsocket.hxx"

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent) {
    return new VirtualQAbstractSocket(static_cast<QAbstractSocket::SocketType>(socketType), parent);
}

QMetaObject* QAbstractSocket_MetaObject(const QAbstractSocket* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractSocket_Metacast(QAbstractSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractSocket_Metacall(QAbstractSocket* self, int param1, int param2, void** param3) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractSocket_OnMetacall(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Metacall_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractSocket_QBaseMetacall(QAbstractSocket* self, int param1, int param2, void** param3) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Metacall_IsBase(true);
        return vqabstractsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractSocket_Tr(const char* s) {
    QString _ret = QAbstractSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAbstractSocket_PauseMode(const QAbstractSocket* self) {
    return static_cast<int>(self->pauseMode());
}

void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode) {
    self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

bool QAbstractSocket_Bind2(QAbstractSocket* self) {
    return self->bind();
}

void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, QHostAddress* address, uint16_t port) {
    self->connectToHost(*address, static_cast<quint16>(port));
}

bool QAbstractSocket_IsValid(const QAbstractSocket* self) {
    return self->isValid();
}

uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self) {
    return static_cast<uint16_t>(self->localPort());
}

QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self) {
    return new QHostAddress(self->localAddress());
}

uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self) {
    return static_cast<uint16_t>(self->peerPort());
}

QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self) {
    return new QHostAddress(self->peerAddress());
}

libqt_string QAbstractSocket_PeerName(const QAbstractSocket* self) {
    QString _ret = self->peerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self) {
    return static_cast<long long>(self->readBufferSize());
}

void QAbstractSocket_Abort(QAbstractSocket* self) {
    self->abort();
}

int QAbstractSocket_SocketType(const QAbstractSocket* self) {
    return static_cast<int>(self->socketType());
}

int QAbstractSocket_State(const QAbstractSocket* self) {
    return static_cast<int>(self->state());
}

int QAbstractSocket_Error(const QAbstractSocket* self) {
    return static_cast<int>(self->error());
}

bool QAbstractSocket_Flush(QAbstractSocket* self) {
    return self->flush();
}

void QAbstractSocket_SetProxy(QAbstractSocket* self, QNetworkProxy* networkProxy) {
    self->setProxy(*networkProxy);
}

QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self) {
    return new QNetworkProxy(self->proxy());
}

libqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self) {
    QString _ret = self->protocolTag();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, libqt_string tag) {
    QString tag_QString = QString::fromUtf8(tag.data, tag.len);
    self->setProtocolTag(tag_QString);
}

void QAbstractSocket_HostFound(QAbstractSocket* self) {
    self->hostFound();
}

void QAbstractSocket_Connect_HostFound(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::hostFound, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSocket_Connected(QAbstractSocket* self) {
    self->connected();
}

void QAbstractSocket_Connect_Connected(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::connected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSocket_Disconnected(QAbstractSocket* self) {
    self->disconnected();
}

void QAbstractSocket_Connect_Disconnected(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*) = reinterpret_cast<void (*)(QAbstractSocket*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::disconnected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1) {
    self->stateChanged(static_cast<QAbstractSocket::SocketState>(param1));
}

void QAbstractSocket_Connect_StateChanged(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, int) = reinterpret_cast<void (*)(QAbstractSocket*, int)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::stateChanged, [self, slotFunc](QAbstractSocket::SocketState param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1) {
    self->errorOccurred(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_Connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, int) = reinterpret_cast<void (*)(QAbstractSocket*, int)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::errorOccurred, [self, slotFunc](QAbstractSocket::SocketError param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator) {
    self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QAbstractSocket_Connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) = reinterpret_cast<void (*)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*)>(slot);
    QAbstractSocket::connect(self, &QAbstractSocket::proxyAuthenticationRequired, [self, slotFunc](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
        const QNetworkProxy& proxy_ret = proxy;
        // Cast returned reference into pointer
        QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
        QAuthenticator* sigval2 = authenticator;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QAbstractSocket_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port) {
    return self->bind(static_cast<quint16>(port));
}

bool QAbstractSocket_Bind22(QAbstractSocket* self, uint16_t port, int mode) {
    return self->bind(static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
    self->connectToHost(*address, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode));
}

// Derived class handler implementation
void QAbstractSocket_Resume(QAbstractSocket* self) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->resume();
    } else {
        vqabstractsocket->resume();
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseResume(QAbstractSocket* self) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Resume_IsBase(true);
        vqabstractsocket->resume();
    } else {
        vqabstractsocket->resume();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnResume(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Resume_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Resume_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Bind(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    } else {
        return vqabstractsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseBind(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Bind_IsBase(true);
        return vqabstractsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    } else {
        return vqabstractsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBind(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Bind_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Bind_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_ConnectToHost(QAbstractSocket* self, libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        vqabstractsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseConnectToHost(QAbstractSocket* self, libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ConnectToHost_IsBase(true);
        vqabstractsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        vqabstractsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnConnectToHost(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ConnectToHost_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ConnectToHost_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->disconnectFromHost();
    } else {
        vqabstractsocket->disconnectFromHost();
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseDisconnectFromHost(QAbstractSocket* self) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_DisconnectFromHost_IsBase(true);
        vqabstractsocket->disconnectFromHost();
    } else {
        vqabstractsocket->disconnectFromHost();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnDisconnectFromHost(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_DisconnectFromHost_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_DisconnectFromHost_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return static_cast<long long>(vqabstractsocket->bytesAvailable());
    } else {
        return static_cast<long long>(vqabstractsocket->bytesAvailable());
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseBytesAvailable(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqabstractsocket->bytesAvailable());
    } else {
        return static_cast<long long>(vqabstractsocket->bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBytesAvailable(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return static_cast<long long>(vqabstractsocket->bytesToWrite());
    } else {
        return static_cast<long long>(vqabstractsocket->bytesToWrite());
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseBytesToWrite(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqabstractsocket->bytesToWrite());
    } else {
        return static_cast<long long>(vqabstractsocket->bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnBytesToWrite(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        vqabstractsocket->setReadBufferSize(static_cast<qint64>(size));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetReadBufferSize(QAbstractSocket* self, long long size) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetReadBufferSize_IsBase(true);
        vqabstractsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        vqabstractsocket->setReadBufferSize(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetReadBufferSize(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetReadBufferSize_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetReadBufferSize_Callback>(slot));
    }
}

// Derived class handler implementation
intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        qintptr _ret = vqabstractsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = vqabstractsocket->socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Base class handler implementation
intptr_t QAbstractSocket_QBaseSocketDescriptor(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_SocketDescriptor_IsBase(true);
        qintptr _ret = vqabstractsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = vqabstractsocket->socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSocketDescriptor(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_SocketDescriptor_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return vqabstractsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseSetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetSocketDescriptor_IsBase(true);
        return vqabstractsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return vqabstractsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketDescriptor(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetSocketDescriptor_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, QVariant* value) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        vqabstractsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetSocketOption(QAbstractSocket* self, int option, QVariant* value) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetSocketOption_IsBase(true);
        vqabstractsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        vqabstractsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketOption(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetSocketOption_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return new QVariant(vqabstractsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Base class handler implementation
QVariant* QAbstractSocket_QBaseSocketOption(QAbstractSocket* self, int option) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SocketOption_IsBase(true);
        return new QVariant(vqabstractsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSocketOption(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SocketOption_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_Close(QAbstractSocket* self) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->close();
    } else {
        vqabstractsocket->close();
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseClose(QAbstractSocket* self) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Close_IsBase(true);
        vqabstractsocket->close();
    } else {
        vqabstractsocket->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnClose(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Close_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_IsSequential(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->isSequential();
    } else {
        return vqabstractsocket->isSequential();
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseIsSequential(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_IsSequential_IsBase(true);
        return vqabstractsocket->isSequential();
    } else {
        return vqabstractsocket->isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnIsSequential(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_IsSequential_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_WaitForConnected(QAbstractSocket* self, int msecs) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return vqabstractsocket->waitForConnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForConnected(QAbstractSocket* self, int msecs) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WaitForConnected_IsBase(true);
        return vqabstractsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return vqabstractsocket->waitForConnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForConnected(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WaitForConnected_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForConnected_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self, int msecs) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqabstractsocket->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForReadyRead(QAbstractSocket* self, int msecs) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WaitForReadyRead_IsBase(true);
        return vqabstractsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqabstractsocket->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForReadyRead(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self, int msecs) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqabstractsocket->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForBytesWritten(QAbstractSocket* self, int msecs) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WaitForBytesWritten_IsBase(true);
        return vqabstractsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqabstractsocket->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForBytesWritten(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self, int msecs) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return vqabstractsocket->waitForDisconnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseWaitForDisconnected(QAbstractSocket* self, int msecs) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WaitForDisconnected_IsBase(true);
        return vqabstractsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return vqabstractsocket->waitForDisconnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWaitForDisconnected(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WaitForDisconnected_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WaitForDisconnected_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_ReadData(QAbstractSocket* self, char* data, long long maxlen) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return static_cast<long long>(vqabstractsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqabstractsocket->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseReadData(QAbstractSocket* self, char* data, long long maxlen) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ReadData_IsBase(true);
        return static_cast<long long>(vqabstractsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqabstractsocket->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReadData(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ReadData_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_ReadLineData(QAbstractSocket* self, char* data, long long maxlen) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return static_cast<long long>(vqabstractsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqabstractsocket->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseReadLineData(QAbstractSocket* self, char* data, long long maxlen) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ReadLineData_IsBase(true);
        return static_cast<long long>(vqabstractsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqabstractsocket->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReadLineData(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ReadLineData_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_SkipData(QAbstractSocket* self, long long maxSize) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return static_cast<long long>(vqabstractsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqabstractsocket->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseSkipData(QAbstractSocket* self, long long maxSize) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SkipData_IsBase(true);
        return static_cast<long long>(vqabstractsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqabstractsocket->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSkipData(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SkipData_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_WriteData(QAbstractSocket* self, const char* data, long long lenVal) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return static_cast<long long>(vqabstractsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqabstractsocket->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseWriteData(QAbstractSocket* self, const char* data, long long lenVal) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WriteData_IsBase(true);
        return static_cast<long long>(vqabstractsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqabstractsocket->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnWriteData(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_WriteData_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Open(QAbstractSocket* self, int mode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return vqabstractsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseOpen(QAbstractSocket* self, int mode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Open_IsBase(true);
        return vqabstractsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return vqabstractsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnOpen(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Open_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_Pos(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return static_cast<long long>(vqabstractsocket->pos());
    } else {
        return static_cast<long long>(vqabstractsocket->pos());
    }
}

// Base class handler implementation
long long QAbstractSocket_QBasePos(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_Pos_IsBase(true);
        return static_cast<long long>(vqabstractsocket->pos());
    } else {
        return static_cast<long long>(vqabstractsocket->pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnPos(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_Pos_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAbstractSocket_Size(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return static_cast<long long>(vqabstractsocket->size());
    } else {
        return static_cast<long long>(vqabstractsocket->size());
    }
}

// Base class handler implementation
long long QAbstractSocket_QBaseSize(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_Size_IsBase(true);
        return static_cast<long long>(vqabstractsocket->size());
    } else {
        return static_cast<long long>(vqabstractsocket->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSize(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_Size_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Seek(QAbstractSocket* self, long long pos) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->seek(static_cast<qint64>(pos));
    } else {
        return vqabstractsocket->seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseSeek(QAbstractSocket* self, long long pos) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Seek_IsBase(true);
        return vqabstractsocket->seek(static_cast<qint64>(pos));
    } else {
        return vqabstractsocket->seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSeek(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Seek_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_AtEnd(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->atEnd();
    } else {
        return vqabstractsocket->atEnd();
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseAtEnd(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_AtEnd_IsBase(true);
        return vqabstractsocket->atEnd();
    } else {
        return vqabstractsocket->atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnAtEnd(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_AtEnd_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Reset(QAbstractSocket* self) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->reset();
    } else {
        return vqabstractsocket->reset();
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseReset(QAbstractSocket* self) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Reset_IsBase(true);
        return vqabstractsocket->reset();
    } else {
        return vqabstractsocket->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReset(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Reset_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_CanReadLine(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->canReadLine();
    } else {
        return vqabstractsocket->canReadLine();
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseCanReadLine(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_CanReadLine_IsBase(true);
        return vqabstractsocket->canReadLine();
    } else {
        return vqabstractsocket->canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnCanReadLine(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_CanReadLine_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_Event(QAbstractSocket* self, QEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->event(event);
    } else {
        return vqabstractsocket->event(event);
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseEvent(QAbstractSocket* self, QEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Event_IsBase(true);
        return vqabstractsocket->event(event);
    } else {
        return vqabstractsocket->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnEvent(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_Event_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_EventFilter(QAbstractSocket* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        return vqabstractsocket->eventFilter(watched, event);
    } else {
        return vqabstractsocket->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseEventFilter(QAbstractSocket* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_EventFilter_IsBase(true);
        return vqabstractsocket->eventFilter(watched, event);
    } else {
        return vqabstractsocket->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnEventFilter(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_EventFilter_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_TimerEvent(QAbstractSocket* self, QTimerEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->timerEvent(event);
    } else {
        vqabstractsocket->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseTimerEvent(QAbstractSocket* self, QTimerEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_TimerEvent_IsBase(true);
        vqabstractsocket->timerEvent(event);
    } else {
        vqabstractsocket->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnTimerEvent(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_ChildEvent(QAbstractSocket* self, QChildEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->childEvent(event);
    } else {
        vqabstractsocket->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseChildEvent(QAbstractSocket* self, QChildEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ChildEvent_IsBase(true);
        vqabstractsocket->childEvent(event);
    } else {
        vqabstractsocket->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnChildEvent(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_CustomEvent(QAbstractSocket* self, QEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->customEvent(event);
    } else {
        vqabstractsocket->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseCustomEvent(QAbstractSocket* self, QEvent* event) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_CustomEvent_IsBase(true);
        vqabstractsocket->customEvent(event);
    } else {
        vqabstractsocket->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnCustomEvent(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_ConnectNotify(QAbstractSocket* self, QMetaMethod* signal) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->connectNotify(*signal);
    } else {
        vqabstractsocket->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseConnectNotify(QAbstractSocket* self, QMetaMethod* signal) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ConnectNotify_IsBase(true);
        vqabstractsocket->connectNotify(*signal);
    } else {
        vqabstractsocket->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnConnectNotify(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_DisconnectNotify(QAbstractSocket* self, QMetaMethod* signal) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->disconnectNotify(*signal);
    } else {
        vqabstractsocket->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseDisconnectNotify(QAbstractSocket* self, QMetaMethod* signal) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_DisconnectNotify_IsBase(true);
        vqabstractsocket->disconnectNotify(*signal);
    } else {
        vqabstractsocket->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnDisconnectNotify(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetSocketState(QAbstractSocket* self, int state) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        vqabstractsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetSocketState(QAbstractSocket* self, int state) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetSocketState_IsBase(true);
        vqabstractsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        vqabstractsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketState(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetSocketState_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketState_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetSocketError(QAbstractSocket* self, int socketError) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        vqabstractsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetSocketError(QAbstractSocket* self, int socketError) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetSocketError_IsBase(true);
        vqabstractsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        vqabstractsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetSocketError(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetSocketError_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetSocketError_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetLocalPort(QAbstractSocket* self, uint16_t port) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        vqabstractsocket->setLocalPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetLocalPort(QAbstractSocket* self, uint16_t port) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetLocalPort_IsBase(true);
        vqabstractsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        vqabstractsocket->setLocalPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetLocalPort(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetLocalPort_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetLocalPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetLocalAddress(QAbstractSocket* self, QHostAddress* address) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setLocalAddress(*address);
    } else {
        vqabstractsocket->setLocalAddress(*address);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetLocalAddress(QAbstractSocket* self, QHostAddress* address) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetLocalAddress_IsBase(true);
        vqabstractsocket->setLocalAddress(*address);
    } else {
        vqabstractsocket->setLocalAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetLocalAddress(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetLocalAddress_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetLocalAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetPeerPort(QAbstractSocket* self, uint16_t port) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        vqabstractsocket->setPeerPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetPeerPort(QAbstractSocket* self, uint16_t port) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetPeerPort_IsBase(true);
        vqabstractsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        vqabstractsocket->setPeerPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetPeerPort(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetPeerPort_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetPeerPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetPeerAddress(QAbstractSocket* self, QHostAddress* address) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setPeerAddress(*address);
    } else {
        vqabstractsocket->setPeerAddress(*address);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetPeerAddress(QAbstractSocket* self, QHostAddress* address) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetPeerAddress_IsBase(true);
        vqabstractsocket->setPeerAddress(*address);
    } else {
        vqabstractsocket->setPeerAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetPeerAddress(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetPeerAddress_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetPeerAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetPeerName(QAbstractSocket* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setPeerName(name_QString);
    } else {
        vqabstractsocket->setPeerName(name_QString);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetPeerName(QAbstractSocket* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetPeerName_IsBase(true);
        vqabstractsocket->setPeerName(name_QString);
    } else {
        vqabstractsocket->setPeerName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetPeerName(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetPeerName_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetPeerName_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetOpenMode(QAbstractSocket* self, int openMode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqabstractsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetOpenMode(QAbstractSocket* self, int openMode) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetOpenMode_IsBase(true);
        vqabstractsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqabstractsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetOpenMode(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetOpenMode_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSocket_SetErrorString(QAbstractSocket* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setErrorString(errorString_QString);
    } else {
        vqabstractsocket->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QAbstractSocket_QBaseSetErrorString(QAbstractSocket* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetErrorString_IsBase(true);
        vqabstractsocket->setErrorString(errorString_QString);
    } else {
        vqabstractsocket->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSetErrorString(QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = dynamic_cast<VirtualQAbstractSocket*>(self)) {
        vqabstractsocket->setQAbstractSocket_SetErrorString_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractSocket_Sender(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->sender();
    } else {
        return vqabstractsocket->sender();
    }
}

// Base class handler implementation
QObject* QAbstractSocket_QBaseSender(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_Sender_IsBase(true);
        return vqabstractsocket->sender();
    } else {
        return vqabstractsocket->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSender(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_Sender_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSocket_SenderSignalIndex(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->senderSignalIndex();
    } else {
        return vqabstractsocket->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractSocket_QBaseSenderSignalIndex(const QAbstractSocket* self) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_SenderSignalIndex_IsBase(true);
        return vqabstractsocket->senderSignalIndex();
    } else {
        return vqabstractsocket->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnSenderSignalIndex(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSocket_Receivers(const QAbstractSocket* self, const char* signal) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->receivers(signal);
    } else {
        return vqabstractsocket->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractSocket_QBaseReceivers(const QAbstractSocket* self, const char* signal) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_Receivers_IsBase(true);
        return vqabstractsocket->receivers(signal);
    } else {
        return vqabstractsocket->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnReceivers(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_Receivers_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSocket_IsSignalConnected(const QAbstractSocket* self, QMetaMethod* signal) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        return vqabstractsocket->isSignalConnected(*signal);
    } else {
        return vqabstractsocket->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractSocket_QBaseIsSignalConnected(const QAbstractSocket* self, QMetaMethod* signal) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_IsSignalConnected_IsBase(true);
        return vqabstractsocket->isSignalConnected(*signal);
    } else {
        return vqabstractsocket->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSocket_OnIsSignalConnected(const QAbstractSocket* self, intptr_t slot) {
    if (auto* vqabstractsocket = const_cast<VirtualQAbstractSocket*>(dynamic_cast<const VirtualQAbstractSocket*>(self))) {
        vqabstractsocket->setQAbstractSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractSocket::QAbstractSocket_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractSocket_Delete(QAbstractSocket* self) {
    delete self;
}

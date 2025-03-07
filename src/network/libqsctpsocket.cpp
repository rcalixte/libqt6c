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
#include <QNetworkDatagram>
#include <QNetworkProxy>
#include <QObject>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qsctpsocket.h>
#include "libqsctpsocket.hpp"
#include "libqsctpsocket.hxx"

QSctpSocket* QSctpSocket_new() {
    return new VirtualQSctpSocket();
}

QSctpSocket* QSctpSocket_new2(QObject* parent) {
    return new VirtualQSctpSocket(parent);
}

QMetaObject* QSctpSocket_MetaObject(const QSctpSocket* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSctpSocket_Metacast(QSctpSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSctpSocket_Metacall(QSctpSocket* self, int param1, int param2, void** param3) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSctpSocket_OnMetacall(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Metacall_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSctpSocket_QBaseMetacall(QSctpSocket* self, int param1, int param2, void** param3) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Metacall_IsBase(true);
        return vqsctpsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSctpSocket_Tr(const char* s) {
    QString _ret = QSctpSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSctpSocket_SetMaximumChannelCount(QSctpSocket* self, int count) {
    self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpSocket_MaximumChannelCount(const QSctpSocket* self) {
    return self->maximumChannelCount();
}

bool QSctpSocket_IsInDatagramMode(const QSctpSocket* self) {
    return self->isInDatagramMode();
}

QNetworkDatagram* QSctpSocket_ReadDatagram(QSctpSocket* self) {
    return new QNetworkDatagram(self->readDatagram());
}

bool QSctpSocket_WriteDatagram(QSctpSocket* self, QNetworkDatagram* datagram) {
    return self->writeDatagram(*datagram);
}

libqt_string QSctpSocket_Tr2(const char* s, const char* c) {
    QString _ret = QSctpSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSctpSocket_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSctpSocket::tr(s, c, static_cast<int>(n));
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
void QSctpSocket_Close(QSctpSocket* self) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->close();
    } else {
        vqsctpsocket->close();
    }
}

// Base class handler implementation
void QSctpSocket_QBaseClose(QSctpSocket* self) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Close_IsBase(true);
        vqsctpsocket->close();
    } else {
        vqsctpsocket->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnClose(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Close_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Close_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_DisconnectFromHost(QSctpSocket* self) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->disconnectFromHost();
    } else {
        vqsctpsocket->disconnectFromHost();
    }
}

// Base class handler implementation
void QSctpSocket_QBaseDisconnectFromHost(QSctpSocket* self) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_DisconnectFromHost_IsBase(true);
        vqsctpsocket->disconnectFromHost();
    } else {
        vqsctpsocket->disconnectFromHost();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnDisconnectFromHost(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_DisconnectFromHost_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_DisconnectFromHost_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSctpSocket_ReadData(QSctpSocket* self, char* data, long long maxlen) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return static_cast<long long>(vqsctpsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqsctpsocket->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QSctpSocket_QBaseReadData(QSctpSocket* self, char* data, long long maxlen) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ReadData_IsBase(true);
        return static_cast<long long>(vqsctpsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqsctpsocket->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnReadData(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ReadData_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSctpSocket_ReadLineData(QSctpSocket* self, char* data, long long maxlen) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return static_cast<long long>(vqsctpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqsctpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QSctpSocket_QBaseReadLineData(QSctpSocket* self, char* data, long long maxlen) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ReadLineData_IsBase(true);
        return static_cast<long long>(vqsctpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqsctpsocket->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnReadLineData(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ReadLineData_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_Resume(QSctpSocket* self) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->resume();
    } else {
        vqsctpsocket->resume();
    }
}

// Base class handler implementation
void QSctpSocket_QBaseResume(QSctpSocket* self) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Resume_IsBase(true);
        vqsctpsocket->resume();
    } else {
        vqsctpsocket->resume();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnResume(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Resume_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Resume_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_Bind(QSctpSocket* self, QHostAddress* address, uint16_t port, int mode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    } else {
        return vqsctpsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseBind(QSctpSocket* self, QHostAddress* address, uint16_t port, int mode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Bind_IsBase(true);
        return vqsctpsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    } else {
        return vqsctpsocket->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnBind(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Bind_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Bind_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_ConnectToHost(QSctpSocket* self, libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        vqsctpsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Base class handler implementation
void QSctpSocket_QBaseConnectToHost(QSctpSocket* self, libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ConnectToHost_IsBase(true);
        vqsctpsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        vqsctpsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnConnectToHost(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ConnectToHost_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ConnectToHost_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSctpSocket_BytesAvailable(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return static_cast<long long>(vqsctpsocket->bytesAvailable());
    } else {
        return static_cast<long long>(vqsctpsocket->bytesAvailable());
    }
}

// Base class handler implementation
long long QSctpSocket_QBaseBytesAvailable(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqsctpsocket->bytesAvailable());
    } else {
        return static_cast<long long>(vqsctpsocket->bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnBytesAvailable(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSctpSocket_BytesToWrite(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return static_cast<long long>(vqsctpsocket->bytesToWrite());
    } else {
        return static_cast<long long>(vqsctpsocket->bytesToWrite());
    }
}

// Base class handler implementation
long long QSctpSocket_QBaseBytesToWrite(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqsctpsocket->bytesToWrite());
    } else {
        return static_cast<long long>(vqsctpsocket->bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnBytesToWrite(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetReadBufferSize(QSctpSocket* self, long long size) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        vqsctpsocket->setReadBufferSize(static_cast<qint64>(size));
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetReadBufferSize(QSctpSocket* self, long long size) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetReadBufferSize_IsBase(true);
        vqsctpsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        vqsctpsocket->setReadBufferSize(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetReadBufferSize(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetReadBufferSize_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetReadBufferSize_Callback>(slot));
    }
}

// Derived class handler implementation
intptr_t QSctpSocket_SocketDescriptor(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        qintptr _ret = vqsctpsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = vqsctpsocket->socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Base class handler implementation
intptr_t QSctpSocket_QBaseSocketDescriptor(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_SocketDescriptor_IsBase(true);
        qintptr _ret = vqsctpsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = vqsctpsocket->socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSocketDescriptor(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_SocketDescriptor_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_SetSocketDescriptor(QSctpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return vqsctpsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseSetSocketDescriptor(QSctpSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetSocketDescriptor_IsBase(true);
        return vqsctpsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        return vqsctpsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetSocketDescriptor(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetSocketDescriptor_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetSocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetSocketOption(QSctpSocket* self, int option, QVariant* value) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        vqsctpsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetSocketOption(QSctpSocket* self, int option, QVariant* value) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetSocketOption_IsBase(true);
        vqsctpsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        vqsctpsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetSocketOption(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetSocketOption_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetSocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSctpSocket_SocketOption(QSctpSocket* self, int option) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return new QVariant(vqsctpsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Base class handler implementation
QVariant* QSctpSocket_QBaseSocketOption(QSctpSocket* self, int option) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SocketOption_IsBase(true);
        return new QVariant(vqsctpsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSocketOption(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SocketOption_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SocketOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_IsSequential(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->isSequential();
    } else {
        return vqsctpsocket->isSequential();
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseIsSequential(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_IsSequential_IsBase(true);
        return vqsctpsocket->isSequential();
    } else {
        return vqsctpsocket->isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnIsSequential(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_IsSequential_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_WaitForConnected(QSctpSocket* self, int msecs) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return vqsctpsocket->waitForConnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseWaitForConnected(QSctpSocket* self, int msecs) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WaitForConnected_IsBase(true);
        return vqsctpsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return vqsctpsocket->waitForConnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWaitForConnected(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WaitForConnected_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WaitForConnected_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_WaitForReadyRead(QSctpSocket* self, int msecs) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqsctpsocket->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseWaitForReadyRead(QSctpSocket* self, int msecs) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WaitForReadyRead_IsBase(true);
        return vqsctpsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqsctpsocket->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWaitForReadyRead(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_WaitForBytesWritten(QSctpSocket* self, int msecs) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqsctpsocket->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseWaitForBytesWritten(QSctpSocket* self, int msecs) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WaitForBytesWritten_IsBase(true);
        return vqsctpsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqsctpsocket->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWaitForBytesWritten(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_WaitForDisconnected(QSctpSocket* self, int msecs) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return vqsctpsocket->waitForDisconnected(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseWaitForDisconnected(QSctpSocket* self, int msecs) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WaitForDisconnected_IsBase(true);
        return vqsctpsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return vqsctpsocket->waitForDisconnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWaitForDisconnected(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WaitForDisconnected_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WaitForDisconnected_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSctpSocket_SkipData(QSctpSocket* self, long long maxSize) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return static_cast<long long>(vqsctpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqsctpsocket->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QSctpSocket_QBaseSkipData(QSctpSocket* self, long long maxSize) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SkipData_IsBase(true);
        return static_cast<long long>(vqsctpsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqsctpsocket->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSkipData(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SkipData_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSctpSocket_WriteData(QSctpSocket* self, const char* data, long long lenVal) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return static_cast<long long>(vqsctpsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqsctpsocket->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QSctpSocket_QBaseWriteData(QSctpSocket* self, const char* data, long long lenVal) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WriteData_IsBase(true);
        return static_cast<long long>(vqsctpsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqsctpsocket->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnWriteData(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_WriteData_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_Open(QSctpSocket* self, int mode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return vqsctpsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseOpen(QSctpSocket* self, int mode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Open_IsBase(true);
        return vqsctpsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return vqsctpsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnOpen(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Open_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSctpSocket_Pos(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return static_cast<long long>(vqsctpsocket->pos());
    } else {
        return static_cast<long long>(vqsctpsocket->pos());
    }
}

// Base class handler implementation
long long QSctpSocket_QBasePos(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_Pos_IsBase(true);
        return static_cast<long long>(vqsctpsocket->pos());
    } else {
        return static_cast<long long>(vqsctpsocket->pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnPos(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_Pos_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSctpSocket_Size(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return static_cast<long long>(vqsctpsocket->size());
    } else {
        return static_cast<long long>(vqsctpsocket->size());
    }
}

// Base class handler implementation
long long QSctpSocket_QBaseSize(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_Size_IsBase(true);
        return static_cast<long long>(vqsctpsocket->size());
    } else {
        return static_cast<long long>(vqsctpsocket->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSize(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_Size_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_Seek(QSctpSocket* self, long long pos) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->seek(static_cast<qint64>(pos));
    } else {
        return vqsctpsocket->seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseSeek(QSctpSocket* self, long long pos) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Seek_IsBase(true);
        return vqsctpsocket->seek(static_cast<qint64>(pos));
    } else {
        return vqsctpsocket->seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSeek(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Seek_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_AtEnd(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->atEnd();
    } else {
        return vqsctpsocket->atEnd();
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseAtEnd(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_AtEnd_IsBase(true);
        return vqsctpsocket->atEnd();
    } else {
        return vqsctpsocket->atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnAtEnd(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_AtEnd_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_Reset(QSctpSocket* self) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->reset();
    } else {
        return vqsctpsocket->reset();
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseReset(QSctpSocket* self) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Reset_IsBase(true);
        return vqsctpsocket->reset();
    } else {
        return vqsctpsocket->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnReset(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Reset_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_CanReadLine(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->canReadLine();
    } else {
        return vqsctpsocket->canReadLine();
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseCanReadLine(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_CanReadLine_IsBase(true);
        return vqsctpsocket->canReadLine();
    } else {
        return vqsctpsocket->canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnCanReadLine(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_CanReadLine_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_Event(QSctpSocket* self, QEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->event(event);
    } else {
        return vqsctpsocket->event(event);
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseEvent(QSctpSocket* self, QEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Event_IsBase(true);
        return vqsctpsocket->event(event);
    } else {
        return vqsctpsocket->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnEvent(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_Event_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_EventFilter(QSctpSocket* self, QObject* watched, QEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        return vqsctpsocket->eventFilter(watched, event);
    } else {
        return vqsctpsocket->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseEventFilter(QSctpSocket* self, QObject* watched, QEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_EventFilter_IsBase(true);
        return vqsctpsocket->eventFilter(watched, event);
    } else {
        return vqsctpsocket->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnEventFilter(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_EventFilter_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_TimerEvent(QSctpSocket* self, QTimerEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->timerEvent(event);
    } else {
        vqsctpsocket->timerEvent(event);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseTimerEvent(QSctpSocket* self, QTimerEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_TimerEvent_IsBase(true);
        vqsctpsocket->timerEvent(event);
    } else {
        vqsctpsocket->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnTimerEvent(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_TimerEvent_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_ChildEvent(QSctpSocket* self, QChildEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->childEvent(event);
    } else {
        vqsctpsocket->childEvent(event);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseChildEvent(QSctpSocket* self, QChildEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ChildEvent_IsBase(true);
        vqsctpsocket->childEvent(event);
    } else {
        vqsctpsocket->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnChildEvent(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ChildEvent_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_CustomEvent(QSctpSocket* self, QEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->customEvent(event);
    } else {
        vqsctpsocket->customEvent(event);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseCustomEvent(QSctpSocket* self, QEvent* event) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_CustomEvent_IsBase(true);
        vqsctpsocket->customEvent(event);
    } else {
        vqsctpsocket->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnCustomEvent(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_CustomEvent_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_ConnectNotify(QSctpSocket* self, QMetaMethod* signal) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->connectNotify(*signal);
    } else {
        vqsctpsocket->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseConnectNotify(QSctpSocket* self, QMetaMethod* signal) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ConnectNotify_IsBase(true);
        vqsctpsocket->connectNotify(*signal);
    } else {
        vqsctpsocket->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnConnectNotify(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_DisconnectNotify(QSctpSocket* self, QMetaMethod* signal) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->disconnectNotify(*signal);
    } else {
        vqsctpsocket->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseDisconnectNotify(QSctpSocket* self, QMetaMethod* signal) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_DisconnectNotify_IsBase(true);
        vqsctpsocket->disconnectNotify(*signal);
    } else {
        vqsctpsocket->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnDisconnectNotify(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetSocketState(QSctpSocket* self, int state) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        vqsctpsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetSocketState(QSctpSocket* self, int state) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetSocketState_IsBase(true);
        vqsctpsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        vqsctpsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetSocketState(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetSocketState_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetSocketState_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetSocketError(QSctpSocket* self, int socketError) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        vqsctpsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetSocketError(QSctpSocket* self, int socketError) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetSocketError_IsBase(true);
        vqsctpsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        vqsctpsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetSocketError(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetSocketError_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetSocketError_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetLocalPort(QSctpSocket* self, uint16_t port) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        vqsctpsocket->setLocalPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetLocalPort(QSctpSocket* self, uint16_t port) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetLocalPort_IsBase(true);
        vqsctpsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        vqsctpsocket->setLocalPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetLocalPort(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetLocalPort_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetLocalPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetLocalAddress(QSctpSocket* self, QHostAddress* address) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setLocalAddress(*address);
    } else {
        vqsctpsocket->setLocalAddress(*address);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetLocalAddress(QSctpSocket* self, QHostAddress* address) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetLocalAddress_IsBase(true);
        vqsctpsocket->setLocalAddress(*address);
    } else {
        vqsctpsocket->setLocalAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetLocalAddress(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetLocalAddress_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetLocalAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetPeerPort(QSctpSocket* self, uint16_t port) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        vqsctpsocket->setPeerPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetPeerPort(QSctpSocket* self, uint16_t port) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetPeerPort_IsBase(true);
        vqsctpsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        vqsctpsocket->setPeerPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetPeerPort(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetPeerPort_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetPeerPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetPeerAddress(QSctpSocket* self, QHostAddress* address) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setPeerAddress(*address);
    } else {
        vqsctpsocket->setPeerAddress(*address);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetPeerAddress(QSctpSocket* self, QHostAddress* address) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetPeerAddress_IsBase(true);
        vqsctpsocket->setPeerAddress(*address);
    } else {
        vqsctpsocket->setPeerAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetPeerAddress(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetPeerAddress_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetPeerAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetPeerName(QSctpSocket* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setPeerName(name_QString);
    } else {
        vqsctpsocket->setPeerName(name_QString);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetPeerName(QSctpSocket* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetPeerName_IsBase(true);
        vqsctpsocket->setPeerName(name_QString);
    } else {
        vqsctpsocket->setPeerName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetPeerName(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetPeerName_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetPeerName_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetOpenMode(QSctpSocket* self, int openMode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqsctpsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetOpenMode(QSctpSocket* self, int openMode) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetOpenMode_IsBase(true);
        vqsctpsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqsctpsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetOpenMode(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetOpenMode_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QSctpSocket_SetErrorString(QSctpSocket* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setErrorString(errorString_QString);
    } else {
        vqsctpsocket->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QSctpSocket_QBaseSetErrorString(QSctpSocket* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetErrorString_IsBase(true);
        vqsctpsocket->setErrorString(errorString_QString);
    } else {
        vqsctpsocket->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSetErrorString(QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = dynamic_cast<VirtualQSctpSocket*>(self)) {
        vqsctpsocket->setQSctpSocket_SetErrorString_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSctpSocket_Sender(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->sender();
    } else {
        return vqsctpsocket->sender();
    }
}

// Base class handler implementation
QObject* QSctpSocket_QBaseSender(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_Sender_IsBase(true);
        return vqsctpsocket->sender();
    } else {
        return vqsctpsocket->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSender(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_Sender_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSctpSocket_SenderSignalIndex(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->senderSignalIndex();
    } else {
        return vqsctpsocket->senderSignalIndex();
    }
}

// Base class handler implementation
int QSctpSocket_QBaseSenderSignalIndex(const QSctpSocket* self) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_SenderSignalIndex_IsBase(true);
        return vqsctpsocket->senderSignalIndex();
    } else {
        return vqsctpsocket->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnSenderSignalIndex(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSctpSocket_Receivers(const QSctpSocket* self, const char* signal) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->receivers(signal);
    } else {
        return vqsctpsocket->receivers(signal);
    }
}

// Base class handler implementation
int QSctpSocket_QBaseReceivers(const QSctpSocket* self, const char* signal) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_Receivers_IsBase(true);
        return vqsctpsocket->receivers(signal);
    } else {
        return vqsctpsocket->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnReceivers(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_Receivers_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSctpSocket_IsSignalConnected(const QSctpSocket* self, QMetaMethod* signal) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        return vqsctpsocket->isSignalConnected(*signal);
    } else {
        return vqsctpsocket->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSctpSocket_QBaseIsSignalConnected(const QSctpSocket* self, QMetaMethod* signal) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_IsSignalConnected_IsBase(true);
        return vqsctpsocket->isSignalConnected(*signal);
    } else {
        return vqsctpsocket->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSctpSocket_OnIsSignalConnected(const QSctpSocket* self, intptr_t slot) {
    if (auto* vqsctpsocket = const_cast<VirtualQSctpSocket*>(dynamic_cast<const VirtualQSctpSocket*>(self))) {
        vqsctpsocket->setQSctpSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQSctpSocket::QSctpSocket_IsSignalConnected_Callback>(slot));
    }
}

void QSctpSocket_Delete(QSctpSocket* self) {
    delete self;
}

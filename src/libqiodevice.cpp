#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
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
#include <qiodevice.h>
#include "libqiodevice.hpp"
#include "libqiodevice.hxx"

QIODevice* QIODevice_new() {
    return new VirtualQIODevice();
}

QIODevice* QIODevice_new2(QObject* parent) {
    return new VirtualQIODevice(parent);
}

QMetaObject* QIODevice_MetaObject(const QIODevice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QIODevice_Metacast(QIODevice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QIODevice_Metacall(QIODevice* self, int param1, int param2, void** param3) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QIODevice_OnMetacall(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Metacall_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QIODevice_QBaseMetacall(QIODevice* self, int param1, int param2, void** param3) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Metacall_IsBase(true);
        return vqiodevice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QIODevice_Tr(const char* s) {
    QString _ret = QIODevice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QIODevice_OpenMode(const QIODevice* self) {
    return static_cast<int>(self->openMode());
}

void QIODevice_SetTextModeEnabled(QIODevice* self, bool enabled) {
    self->setTextModeEnabled(enabled);
}

bool QIODevice_IsTextModeEnabled(const QIODevice* self) {
    return self->isTextModeEnabled();
}

bool QIODevice_IsOpen(const QIODevice* self) {
    return self->isOpen();
}

bool QIODevice_IsReadable(const QIODevice* self) {
    return self->isReadable();
}

bool QIODevice_IsWritable(const QIODevice* self) {
    return self->isWritable();
}

int QIODevice_ReadChannelCount(const QIODevice* self) {
    return self->readChannelCount();
}

int QIODevice_WriteChannelCount(const QIODevice* self) {
    return self->writeChannelCount();
}

int QIODevice_CurrentReadChannel(const QIODevice* self) {
    return self->currentReadChannel();
}

void QIODevice_SetCurrentReadChannel(QIODevice* self, int channel) {
    self->setCurrentReadChannel(static_cast<int>(channel));
}

int QIODevice_CurrentWriteChannel(const QIODevice* self) {
    return self->currentWriteChannel();
}

void QIODevice_SetCurrentWriteChannel(QIODevice* self, int channel) {
    self->setCurrentWriteChannel(static_cast<int>(channel));
}

long long QIODevice_Read(QIODevice* self, char* data, long long maxlen) {
    return static_cast<long long>(self->read(data, static_cast<qint64>(maxlen)));
}

libqt_string QIODevice_ReadWithMaxlen(QIODevice* self, long long maxlen) {
    QByteArray _qb = self->read(static_cast<qint64>(maxlen));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QIODevice_ReadAll(QIODevice* self) {
    QByteArray _qb = self->readAll();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

long long QIODevice_ReadLine(QIODevice* self, char* data, long long maxlen) {
    return static_cast<long long>(self->readLine(data, static_cast<qint64>(maxlen)));
}

libqt_string QIODevice_ReadLine2(QIODevice* self) {
    QByteArray _qb = self->readLine();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QIODevice_StartTransaction(QIODevice* self) {
    self->startTransaction();
}

void QIODevice_CommitTransaction(QIODevice* self) {
    self->commitTransaction();
}

void QIODevice_RollbackTransaction(QIODevice* self) {
    self->rollbackTransaction();
}

bool QIODevice_IsTransactionStarted(const QIODevice* self) {
    return self->isTransactionStarted();
}

long long QIODevice_Write(QIODevice* self, const char* data, long long lenVal) {
    return static_cast<long long>(self->write(data, static_cast<qint64>(lenVal)));
}

long long QIODevice_WriteWithData(QIODevice* self, const char* data) {
    return static_cast<long long>(self->write(data));
}

long long QIODevice_Write2(QIODevice* self, libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return static_cast<long long>(self->write(data_QByteArray));
}

long long QIODevice_Peek(QIODevice* self, char* data, long long maxlen) {
    return static_cast<long long>(self->peek(data, static_cast<qint64>(maxlen)));
}

libqt_string QIODevice_PeekWithMaxlen(QIODevice* self, long long maxlen) {
    QByteArray _qb = self->peek(static_cast<qint64>(maxlen));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

long long QIODevice_Skip(QIODevice* self, long long maxSize) {
    return static_cast<long long>(self->skip(static_cast<qint64>(maxSize)));
}

void QIODevice_UngetChar(QIODevice* self, char c) {
    self->ungetChar(static_cast<char>(c));
}

bool QIODevice_PutChar(QIODevice* self, char c) {
    return self->putChar(static_cast<char>(c));
}

bool QIODevice_GetChar(QIODevice* self, char* c) {
    return self->getChar(c);
}

libqt_string QIODevice_ErrorString(const QIODevice* self) {
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

void QIODevice_ReadyRead(QIODevice* self) {
    self->readyRead();
}

void QIODevice_Connect_ReadyRead(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self, &QIODevice::readyRead, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QIODevice_ChannelReadyRead(QIODevice* self, int channel) {
    self->channelReadyRead(static_cast<int>(channel));
}

void QIODevice_Connect_ChannelReadyRead(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, int) = reinterpret_cast<void (*)(QIODevice*, int)>(slot);
    QIODevice::connect(self, &QIODevice::channelReadyRead, [self, slotFunc](int channel) {
        int sigval1 = channel;
        slotFunc(self, sigval1);
    });
}

void QIODevice_BytesWritten(QIODevice* self, long long bytes) {
    self->bytesWritten(static_cast<qint64>(bytes));
}

void QIODevice_Connect_BytesWritten(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, long long) = reinterpret_cast<void (*)(QIODevice*, long long)>(slot);
    QIODevice::connect(self, &QIODevice::bytesWritten, [self, slotFunc](qint64 bytes) {
        long long sigval1 = static_cast<long long>(bytes);
        slotFunc(self, sigval1);
    });
}

void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, long long bytes) {
    self->channelBytesWritten(static_cast<int>(channel), static_cast<qint64>(bytes));
}

void QIODevice_Connect_ChannelBytesWritten(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*, int, long long) = reinterpret_cast<void (*)(QIODevice*, int, long long)>(slot);
    QIODevice::connect(self, &QIODevice::channelBytesWritten, [self, slotFunc](int channel, qint64 bytes) {
        int sigval1 = channel;
        long long sigval2 = static_cast<long long>(bytes);
        slotFunc(self, sigval1, sigval2);
    });
}

void QIODevice_AboutToClose(QIODevice* self) {
    self->aboutToClose();
}

void QIODevice_Connect_AboutToClose(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self, &QIODevice::aboutToClose, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QIODevice_ReadChannelFinished(QIODevice* self) {
    self->readChannelFinished();
}

void QIODevice_Connect_ReadChannelFinished(QIODevice* self, intptr_t slot) {
    void (*slotFunc)(QIODevice*) = reinterpret_cast<void (*)(QIODevice*)>(slot);
    QIODevice::connect(self, &QIODevice::readChannelFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QIODevice_Tr2(const char* s, const char* c) {
    QString _ret = QIODevice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QIODevice_Tr3(const char* s, const char* c, int n) {
    QString _ret = QIODevice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QIODevice_ReadLine1(QIODevice* self, long long maxlen) {
    QByteArray _qb = self->readLine(static_cast<qint64>(maxlen));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QIODevice_IsSequential(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->isSequential();
    } else {
        return vqiodevice->isSequential();
    }
}

// Base class handler implementation
bool QIODevice_QBaseIsSequential(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_IsSequential_IsBase(true);
        return vqiodevice->isSequential();
    } else {
        return vqiodevice->isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnIsSequential(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_IsSequential_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_Open(QIODevice* self, int mode) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return vqiodevice->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return vqiodevice->open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QIODevice_QBaseOpen(QIODevice* self, int mode) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Open_IsBase(true);
        return vqiodevice->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return vqiodevice->open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnOpen(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Open_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void QIODevice_Close(QIODevice* self) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->close();
    } else {
        vqiodevice->close();
    }
}

// Base class handler implementation
void QIODevice_QBaseClose(QIODevice* self) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Close_IsBase(true);
        vqiodevice->close();
    } else {
        vqiodevice->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnClose(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Close_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Close_Callback>(slot));
    }
}

// Derived class handler implementation
long long QIODevice_Pos(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return static_cast<long long>(vqiodevice->pos());
    } else {
        return static_cast<long long>(vqiodevice->pos());
    }
}

// Base class handler implementation
long long QIODevice_QBasePos(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_Pos_IsBase(true);
        return static_cast<long long>(vqiodevice->pos());
    } else {
        return static_cast<long long>(vqiodevice->pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnPos(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_Pos_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QIODevice_Size(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return static_cast<long long>(vqiodevice->size());
    } else {
        return static_cast<long long>(vqiodevice->size());
    }
}

// Base class handler implementation
long long QIODevice_QBaseSize(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_Size_IsBase(true);
        return static_cast<long long>(vqiodevice->size());
    } else {
        return static_cast<long long>(vqiodevice->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSize(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_Size_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_Seek(QIODevice* self, long long pos) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return vqiodevice->seek(static_cast<qint64>(pos));
    } else {
        return vqiodevice->seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QIODevice_QBaseSeek(QIODevice* self, long long pos) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Seek_IsBase(true);
        return vqiodevice->seek(static_cast<qint64>(pos));
    } else {
        return vqiodevice->seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSeek(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Seek_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_AtEnd(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->atEnd();
    } else {
        return vqiodevice->atEnd();
    }
}

// Base class handler implementation
bool QIODevice_QBaseAtEnd(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_AtEnd_IsBase(true);
        return vqiodevice->atEnd();
    } else {
        return vqiodevice->atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnAtEnd(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_AtEnd_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_Reset(QIODevice* self) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return vqiodevice->reset();
    } else {
        return vqiodevice->reset();
    }
}

// Base class handler implementation
bool QIODevice_QBaseReset(QIODevice* self) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Reset_IsBase(true);
        return vqiodevice->reset();
    } else {
        return vqiodevice->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReset(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Reset_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QIODevice_BytesAvailable(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return static_cast<long long>(vqiodevice->bytesAvailable());
    } else {
        return static_cast<long long>(vqiodevice->bytesAvailable());
    }
}

// Base class handler implementation
long long QIODevice_QBaseBytesAvailable(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqiodevice->bytesAvailable());
    } else {
        return static_cast<long long>(vqiodevice->bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnBytesAvailable(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_BytesAvailable_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QIODevice_BytesToWrite(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return static_cast<long long>(vqiodevice->bytesToWrite());
    } else {
        return static_cast<long long>(vqiodevice->bytesToWrite());
    }
}

// Base class handler implementation
long long QIODevice_QBaseBytesToWrite(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqiodevice->bytesToWrite());
    } else {
        return static_cast<long long>(vqiodevice->bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnBytesToWrite(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_BytesToWrite_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_CanReadLine(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->canReadLine();
    } else {
        return vqiodevice->canReadLine();
    }
}

// Base class handler implementation
bool QIODevice_QBaseCanReadLine(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_CanReadLine_IsBase(true);
        return vqiodevice->canReadLine();
    } else {
        return vqiodevice->canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnCanReadLine(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_CanReadLine_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_WaitForReadyRead(QIODevice* self, int msecs) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return vqiodevice->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqiodevice->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QIODevice_QBaseWaitForReadyRead(QIODevice* self, int msecs) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_WaitForReadyRead_IsBase(true);
        return vqiodevice->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqiodevice->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWaitForReadyRead(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_WaitForReadyRead_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_WaitForBytesWritten(QIODevice* self, int msecs) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return vqiodevice->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqiodevice->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QIODevice_QBaseWaitForBytesWritten(QIODevice* self, int msecs) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_WaitForBytesWritten_IsBase(true);
        return vqiodevice->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqiodevice->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWaitForBytesWritten(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QIODevice_ReadData(QIODevice* self, char* data, long long maxlen) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return static_cast<long long>(vqiodevice->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqiodevice->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QIODevice_QBaseReadData(QIODevice* self, char* data, long long maxlen) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_ReadData_IsBase(true);
        return static_cast<long long>(vqiodevice->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqiodevice->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReadData(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_ReadData_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QIODevice_ReadLineData(QIODevice* self, char* data, long long maxlen) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return static_cast<long long>(vqiodevice->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqiodevice->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QIODevice_QBaseReadLineData(QIODevice* self, char* data, long long maxlen) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_ReadLineData_IsBase(true);
        return static_cast<long long>(vqiodevice->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqiodevice->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReadLineData(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_ReadLineData_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QIODevice_SkipData(QIODevice* self, long long maxSize) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return static_cast<long long>(vqiodevice->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqiodevice->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QIODevice_QBaseSkipData(QIODevice* self, long long maxSize) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_SkipData_IsBase(true);
        return static_cast<long long>(vqiodevice->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqiodevice->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSkipData(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_SkipData_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QIODevice_WriteData(QIODevice* self, const char* data, long long lenVal) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return static_cast<long long>(vqiodevice->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqiodevice->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QIODevice_QBaseWriteData(QIODevice* self, const char* data, long long lenVal) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_WriteData_IsBase(true);
        return static_cast<long long>(vqiodevice->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqiodevice->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnWriteData(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_WriteData_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_Event(QIODevice* self, QEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return vqiodevice->event(event);
    } else {
        return vqiodevice->event(event);
    }
}

// Base class handler implementation
bool QIODevice_QBaseEvent(QIODevice* self, QEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Event_IsBase(true);
        return vqiodevice->event(event);
    } else {
        return vqiodevice->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnEvent(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_Event_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_EventFilter(QIODevice* self, QObject* watched, QEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        return vqiodevice->eventFilter(watched, event);
    } else {
        return vqiodevice->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QIODevice_QBaseEventFilter(QIODevice* self, QObject* watched, QEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_EventFilter_IsBase(true);
        return vqiodevice->eventFilter(watched, event);
    } else {
        return vqiodevice->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnEventFilter(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_EventFilter_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QIODevice_TimerEvent(QIODevice* self, QTimerEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->timerEvent(event);
    } else {
        vqiodevice->timerEvent(event);
    }
}

// Base class handler implementation
void QIODevice_QBaseTimerEvent(QIODevice* self, QTimerEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_TimerEvent_IsBase(true);
        vqiodevice->timerEvent(event);
    } else {
        vqiodevice->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnTimerEvent(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_TimerEvent_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIODevice_ChildEvent(QIODevice* self, QChildEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->childEvent(event);
    } else {
        vqiodevice->childEvent(event);
    }
}

// Base class handler implementation
void QIODevice_QBaseChildEvent(QIODevice* self, QChildEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_ChildEvent_IsBase(true);
        vqiodevice->childEvent(event);
    } else {
        vqiodevice->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnChildEvent(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_ChildEvent_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIODevice_CustomEvent(QIODevice* self, QEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->customEvent(event);
    } else {
        vqiodevice->customEvent(event);
    }
}

// Base class handler implementation
void QIODevice_QBaseCustomEvent(QIODevice* self, QEvent* event) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_CustomEvent_IsBase(true);
        vqiodevice->customEvent(event);
    } else {
        vqiodevice->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnCustomEvent(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_CustomEvent_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIODevice_ConnectNotify(QIODevice* self, QMetaMethod* signal) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->connectNotify(*signal);
    } else {
        vqiodevice->connectNotify(*signal);
    }
}

// Base class handler implementation
void QIODevice_QBaseConnectNotify(QIODevice* self, QMetaMethod* signal) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_ConnectNotify_IsBase(true);
        vqiodevice->connectNotify(*signal);
    } else {
        vqiodevice->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnConnectNotify(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_ConnectNotify_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QIODevice_DisconnectNotify(QIODevice* self, QMetaMethod* signal) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->disconnectNotify(*signal);
    } else {
        vqiodevice->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QIODevice_QBaseDisconnectNotify(QIODevice* self, QMetaMethod* signal) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_DisconnectNotify_IsBase(true);
        vqiodevice->disconnectNotify(*signal);
    } else {
        vqiodevice->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnDisconnectNotify(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_DisconnectNotify_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QIODevice_SetOpenMode(QIODevice* self, int openMode) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqiodevice->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QIODevice_QBaseSetOpenMode(QIODevice* self, int openMode) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_SetOpenMode_IsBase(true);
        vqiodevice->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqiodevice->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSetOpenMode(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_SetOpenMode_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QIODevice_SetErrorString(QIODevice* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setErrorString(errorString_QString);
    } else {
        vqiodevice->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QIODevice_QBaseSetErrorString(QIODevice* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_SetErrorString_IsBase(true);
        vqiodevice->setErrorString(errorString_QString);
    } else {
        vqiodevice->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSetErrorString(QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = dynamic_cast<VirtualQIODevice*>(self)) {
        vqiodevice->setQIODevice_SetErrorString_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QIODevice_Sender(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->sender();
    } else {
        return vqiodevice->sender();
    }
}

// Base class handler implementation
QObject* QIODevice_QBaseSender(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_Sender_IsBase(true);
        return vqiodevice->sender();
    } else {
        return vqiodevice->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSender(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_Sender_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QIODevice_SenderSignalIndex(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->senderSignalIndex();
    } else {
        return vqiodevice->senderSignalIndex();
    }
}

// Base class handler implementation
int QIODevice_QBaseSenderSignalIndex(const QIODevice* self) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_SenderSignalIndex_IsBase(true);
        return vqiodevice->senderSignalIndex();
    } else {
        return vqiodevice->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnSenderSignalIndex(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_SenderSignalIndex_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QIODevice_Receivers(const QIODevice* self, const char* signal) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->receivers(signal);
    } else {
        return vqiodevice->receivers(signal);
    }
}

// Base class handler implementation
int QIODevice_QBaseReceivers(const QIODevice* self, const char* signal) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_Receivers_IsBase(true);
        return vqiodevice->receivers(signal);
    } else {
        return vqiodevice->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnReceivers(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_Receivers_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIODevice_IsSignalConnected(const QIODevice* self, QMetaMethod* signal) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        return vqiodevice->isSignalConnected(*signal);
    } else {
        return vqiodevice->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QIODevice_QBaseIsSignalConnected(const QIODevice* self, QMetaMethod* signal) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_IsSignalConnected_IsBase(true);
        return vqiodevice->isSignalConnected(*signal);
    } else {
        return vqiodevice->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIODevice_OnIsSignalConnected(const QIODevice* self, intptr_t slot) {
    if (auto* vqiodevice = const_cast<VirtualQIODevice*>(dynamic_cast<const VirtualQIODevice*>(self))) {
        vqiodevice->setQIODevice_IsSignalConnected_Callback(reinterpret_cast<VirtualQIODevice::QIODevice_IsSignalConnected_Callback>(slot));
    }
}

void QIODevice_Delete(QIODevice* self) {
    delete self;
}

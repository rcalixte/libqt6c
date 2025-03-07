#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
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
#include <QTemporaryFile>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qtemporaryfile.h>
#include "libqtemporaryfile.hpp"
#include "libqtemporaryfile.hxx"

QTemporaryFile* QTemporaryFile_new() {
    return new VirtualQTemporaryFile();
}

QTemporaryFile* QTemporaryFile_new2(libqt_string templateName) {
    QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
    return new VirtualQTemporaryFile(templateName_QString);
}

QTemporaryFile* QTemporaryFile_new3(QObject* parent) {
    return new VirtualQTemporaryFile(parent);
}

QTemporaryFile* QTemporaryFile_new4(libqt_string templateName, QObject* parent) {
    QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
    return new VirtualQTemporaryFile(templateName_QString, parent);
}

QMetaObject* QTemporaryFile_MetaObject(const QTemporaryFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTemporaryFile_Metacast(QTemporaryFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTemporaryFile_Metacall(QTemporaryFile* self, int param1, int param2, void** param3) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTemporaryFile_OnMetacall(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Metacall_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTemporaryFile_QBaseMetacall(QTemporaryFile* self, int param1, int param2, void** param3) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Metacall_IsBase(true);
        return vqtemporaryfile->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTemporaryFile_Tr(const char* s) {
    QString _ret = QTemporaryFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QTemporaryFile_AutoRemove(const QTemporaryFile* self) {
    return self->autoRemove();
}

void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b) {
    self->setAutoRemove(b);
}

bool QTemporaryFile_Open(QTemporaryFile* self) {
    return self->open();
}

libqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self) {
    QString _ret = self->fileTemplate();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFileTemplate(name_QString);
}

bool QTemporaryFile_Rename(QTemporaryFile* self, libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->rename(newName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFile(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QTemporaryFile::createNativeFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_CreateNativeFileWithFile(QFile* file) {
    return QTemporaryFile::createNativeFile(*file);
}

libqt_string QTemporaryFile_Tr2(const char* s, const char* c) {
    QString _ret = QTemporaryFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTemporaryFile_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTemporaryFile::tr(s, c, static_cast<int>(n));
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
libqt_string QTemporaryFile_FileName(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        QString _ret = vqtemporaryfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqtemporaryfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTemporaryFile_QBaseFileName(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_FileName_IsBase(true);
        QString _ret = vqtemporaryfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqtemporaryfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnFileName(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_FileName_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_FileName_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_OpenWithFlags(QTemporaryFile* self, int flags) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    } else {
        return vqtemporaryfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseOpenWithFlags(QTemporaryFile* self, int flags) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_OpenWithFlags_IsBase(true);
        return vqtemporaryfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    } else {
        return vqtemporaryfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnOpenWithFlags(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_OpenWithFlags_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_OpenWithFlags_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_Size(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return static_cast<long long>(vqtemporaryfile->size());
    } else {
        return static_cast<long long>(vqtemporaryfile->size());
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseSize(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Size_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->size());
    } else {
        return static_cast<long long>(vqtemporaryfile->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSize(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Size_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_Resize(QTemporaryFile* self, long long sz) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->resize(static_cast<qint64>(sz));
    } else {
        return vqtemporaryfile->resize(static_cast<qint64>(sz));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseResize(QTemporaryFile* self, long long sz) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Resize_IsBase(true);
        return vqtemporaryfile->resize(static_cast<qint64>(sz));
    } else {
        return vqtemporaryfile->resize(static_cast<qint64>(sz));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnResize(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Resize_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Resize_Callback>(slot));
    }
}

// Derived class handler implementation
int QTemporaryFile_Permissions(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return static_cast<int>(vqtemporaryfile->permissions());
    } else {
        return static_cast<int>(vqtemporaryfile->permissions());
    }
}

// Base class handler implementation
int QTemporaryFile_QBasePermissions(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Permissions_IsBase(true);
        return static_cast<int>(vqtemporaryfile->permissions());
    } else {
        return static_cast<int>(vqtemporaryfile->permissions());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnPermissions(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Permissions_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Permissions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_SetPermissions(QTemporaryFile* self, int permissionSpec) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return vqtemporaryfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseSetPermissions(QTemporaryFile* self, int permissionSpec) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_SetPermissions_IsBase(true);
        return vqtemporaryfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return vqtemporaryfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSetPermissions(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_SetPermissions_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SetPermissions_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_Close(QTemporaryFile* self) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->close();
    } else {
        vqtemporaryfile->close();
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseClose(QTemporaryFile* self) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Close_IsBase(true);
        vqtemporaryfile->close();
    } else {
        vqtemporaryfile->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnClose(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Close_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_IsSequential(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->isSequential();
    } else {
        return vqtemporaryfile->isSequential();
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseIsSequential(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_IsSequential_IsBase(true);
        return vqtemporaryfile->isSequential();
    } else {
        return vqtemporaryfile->isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnIsSequential(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_IsSequential_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_Pos(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return static_cast<long long>(vqtemporaryfile->pos());
    } else {
        return static_cast<long long>(vqtemporaryfile->pos());
    }
}

// Base class handler implementation
long long QTemporaryFile_QBasePos(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Pos_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->pos());
    } else {
        return static_cast<long long>(vqtemporaryfile->pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnPos(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Pos_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_Seek(QTemporaryFile* self, long long offset) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->seek(static_cast<qint64>(offset));
    } else {
        return vqtemporaryfile->seek(static_cast<qint64>(offset));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseSeek(QTemporaryFile* self, long long offset) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Seek_IsBase(true);
        return vqtemporaryfile->seek(static_cast<qint64>(offset));
    } else {
        return vqtemporaryfile->seek(static_cast<qint64>(offset));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSeek(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Seek_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_AtEnd(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->atEnd();
    } else {
        return vqtemporaryfile->atEnd();
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseAtEnd(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_AtEnd_IsBase(true);
        return vqtemporaryfile->atEnd();
    } else {
        return vqtemporaryfile->atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnAtEnd(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_AtEnd_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_ReadData(QTemporaryFile* self, char* data, long long maxlen) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return static_cast<long long>(vqtemporaryfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqtemporaryfile->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseReadData(QTemporaryFile* self, char* data, long long maxlen) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_ReadData_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqtemporaryfile->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReadData(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_ReadData_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_WriteData(QTemporaryFile* self, const char* data, long long lenVal) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return static_cast<long long>(vqtemporaryfile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqtemporaryfile->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseWriteData(QTemporaryFile* self, const char* data, long long lenVal) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_WriteData_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqtemporaryfile->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWriteData(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_WriteData_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_ReadLineData(QTemporaryFile* self, char* data, long long maxlen) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return static_cast<long long>(vqtemporaryfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqtemporaryfile->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseReadLineData(QTemporaryFile* self, char* data, long long maxlen) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_ReadLineData_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqtemporaryfile->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReadLineData(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_ReadLineData_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_Reset(QTemporaryFile* self) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->reset();
    } else {
        return vqtemporaryfile->reset();
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseReset(QTemporaryFile* self) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Reset_IsBase(true);
        return vqtemporaryfile->reset();
    } else {
        return vqtemporaryfile->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReset(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Reset_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_BytesAvailable(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return static_cast<long long>(vqtemporaryfile->bytesAvailable());
    } else {
        return static_cast<long long>(vqtemporaryfile->bytesAvailable());
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseBytesAvailable(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->bytesAvailable());
    } else {
        return static_cast<long long>(vqtemporaryfile->bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnBytesAvailable(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_BytesAvailable_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_BytesToWrite(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return static_cast<long long>(vqtemporaryfile->bytesToWrite());
    } else {
        return static_cast<long long>(vqtemporaryfile->bytesToWrite());
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseBytesToWrite(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->bytesToWrite());
    } else {
        return static_cast<long long>(vqtemporaryfile->bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnBytesToWrite(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_BytesToWrite_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_CanReadLine(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->canReadLine();
    } else {
        return vqtemporaryfile->canReadLine();
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseCanReadLine(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_CanReadLine_IsBase(true);
        return vqtemporaryfile->canReadLine();
    } else {
        return vqtemporaryfile->canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnCanReadLine(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_CanReadLine_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_WaitForReadyRead(QTemporaryFile* self, int msecs) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqtemporaryfile->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseWaitForReadyRead(QTemporaryFile* self, int msecs) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_WaitForReadyRead_IsBase(true);
        return vqtemporaryfile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqtemporaryfile->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWaitForReadyRead(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_WaitForReadyRead_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_WaitForBytesWritten(QTemporaryFile* self, int msecs) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqtemporaryfile->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseWaitForBytesWritten(QTemporaryFile* self, int msecs) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_WaitForBytesWritten_IsBase(true);
        return vqtemporaryfile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqtemporaryfile->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnWaitForBytesWritten(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QTemporaryFile_SkipData(QTemporaryFile* self, long long maxSize) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return static_cast<long long>(vqtemporaryfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqtemporaryfile->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QTemporaryFile_QBaseSkipData(QTemporaryFile* self, long long maxSize) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_SkipData_IsBase(true);
        return static_cast<long long>(vqtemporaryfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqtemporaryfile->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSkipData(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_SkipData_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_Event(QTemporaryFile* self, QEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->event(event);
    } else {
        return vqtemporaryfile->event(event);
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseEvent(QTemporaryFile* self, QEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Event_IsBase(true);
        return vqtemporaryfile->event(event);
    } else {
        return vqtemporaryfile->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnEvent(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_Event_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_EventFilter(QTemporaryFile* self, QObject* watched, QEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        return vqtemporaryfile->eventFilter(watched, event);
    } else {
        return vqtemporaryfile->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseEventFilter(QTemporaryFile* self, QObject* watched, QEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_EventFilter_IsBase(true);
        return vqtemporaryfile->eventFilter(watched, event);
    } else {
        return vqtemporaryfile->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnEventFilter(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_EventFilter_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_TimerEvent(QTemporaryFile* self, QTimerEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->timerEvent(event);
    } else {
        vqtemporaryfile->timerEvent(event);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseTimerEvent(QTemporaryFile* self, QTimerEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_TimerEvent_IsBase(true);
        vqtemporaryfile->timerEvent(event);
    } else {
        vqtemporaryfile->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnTimerEvent(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_TimerEvent_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_ChildEvent(QTemporaryFile* self, QChildEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->childEvent(event);
    } else {
        vqtemporaryfile->childEvent(event);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseChildEvent(QTemporaryFile* self, QChildEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_ChildEvent_IsBase(true);
        vqtemporaryfile->childEvent(event);
    } else {
        vqtemporaryfile->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnChildEvent(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_ChildEvent_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_CustomEvent(QTemporaryFile* self, QEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->customEvent(event);
    } else {
        vqtemporaryfile->customEvent(event);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseCustomEvent(QTemporaryFile* self, QEvent* event) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_CustomEvent_IsBase(true);
        vqtemporaryfile->customEvent(event);
    } else {
        vqtemporaryfile->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnCustomEvent(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_CustomEvent_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_ConnectNotify(QTemporaryFile* self, QMetaMethod* signal) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->connectNotify(*signal);
    } else {
        vqtemporaryfile->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseConnectNotify(QTemporaryFile* self, QMetaMethod* signal) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_ConnectNotify_IsBase(true);
        vqtemporaryfile->connectNotify(*signal);
    } else {
        vqtemporaryfile->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnConnectNotify(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_ConnectNotify_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_DisconnectNotify(QTemporaryFile* self, QMetaMethod* signal) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->disconnectNotify(*signal);
    } else {
        vqtemporaryfile->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseDisconnectNotify(QTemporaryFile* self, QMetaMethod* signal) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_DisconnectNotify_IsBase(true);
        vqtemporaryfile->disconnectNotify(*signal);
    } else {
        vqtemporaryfile->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnDisconnectNotify(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_DisconnectNotify_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_SetOpenMode(QTemporaryFile* self, int openMode) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqtemporaryfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseSetOpenMode(QTemporaryFile* self, int openMode) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_SetOpenMode_IsBase(true);
        vqtemporaryfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqtemporaryfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSetOpenMode(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_SetOpenMode_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QTemporaryFile_SetErrorString(QTemporaryFile* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setErrorString(errorString_QString);
    } else {
        vqtemporaryfile->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QTemporaryFile_QBaseSetErrorString(QTemporaryFile* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_SetErrorString_IsBase(true);
        vqtemporaryfile->setErrorString(errorString_QString);
    } else {
        vqtemporaryfile->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSetErrorString(QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = dynamic_cast<VirtualQTemporaryFile*>(self)) {
        vqtemporaryfile->setQTemporaryFile_SetErrorString_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTemporaryFile_Sender(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->sender();
    } else {
        return vqtemporaryfile->sender();
    }
}

// Base class handler implementation
QObject* QTemporaryFile_QBaseSender(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Sender_IsBase(true);
        return vqtemporaryfile->sender();
    } else {
        return vqtemporaryfile->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSender(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Sender_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTemporaryFile_SenderSignalIndex(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->senderSignalIndex();
    } else {
        return vqtemporaryfile->senderSignalIndex();
    }
}

// Base class handler implementation
int QTemporaryFile_QBaseSenderSignalIndex(const QTemporaryFile* self) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_SenderSignalIndex_IsBase(true);
        return vqtemporaryfile->senderSignalIndex();
    } else {
        return vqtemporaryfile->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnSenderSignalIndex(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTemporaryFile_Receivers(const QTemporaryFile* self, const char* signal) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->receivers(signal);
    } else {
        return vqtemporaryfile->receivers(signal);
    }
}

// Base class handler implementation
int QTemporaryFile_QBaseReceivers(const QTemporaryFile* self, const char* signal) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Receivers_IsBase(true);
        return vqtemporaryfile->receivers(signal);
    } else {
        return vqtemporaryfile->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnReceivers(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_Receivers_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTemporaryFile_IsSignalConnected(const QTemporaryFile* self, QMetaMethod* signal) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        return vqtemporaryfile->isSignalConnected(*signal);
    } else {
        return vqtemporaryfile->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTemporaryFile_QBaseIsSignalConnected(const QTemporaryFile* self, QMetaMethod* signal) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_IsSignalConnected_IsBase(true);
        return vqtemporaryfile->isSignalConnected(*signal);
    } else {
        return vqtemporaryfile->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTemporaryFile_OnIsSignalConnected(const QTemporaryFile* self, intptr_t slot) {
    if (auto* vqtemporaryfile = const_cast<VirtualQTemporaryFile*>(dynamic_cast<const VirtualQTemporaryFile*>(self))) {
        vqtemporaryfile->setQTemporaryFile_IsSignalConnected_Callback(reinterpret_cast<VirtualQTemporaryFile::QTemporaryFile_IsSignalConnected_Callback>(slot));
    }
}

void QTemporaryFile_Delete(QTemporaryFile* self) {
    delete self;
}

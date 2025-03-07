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
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qfile.h>
#include "libqfile.hpp"
#include "libqfile.hxx"

QFile* QFile_new() {
    return new VirtualQFile();
}

QFile* QFile_new2(libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQFile(name_QString);
}

QFile* QFile_new3(QObject* parent) {
    return new VirtualQFile(parent);
}

QFile* QFile_new4(libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQFile(name_QString, parent);
}

QMetaObject* QFile_MetaObject(const QFile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFile_Metacast(QFile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFile_Metacall(QFile* self, int param1, int param2, void** param3) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFile_OnMetacall(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Metacall_Callback(reinterpret_cast<VirtualQFile::QFile_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFile_QBaseMetacall(QFile* self, int param1, int param2, void** param3) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Metacall_IsBase(true);
        return vqfile->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFile_Tr(const char* s) {
    QString _ret = QFile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFile_SetFileName(QFile* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setFileName(name_QString);
}

libqt_string QFile_EncodeName(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray _qb = QFile::encodeName(fileName_QString);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFile_DecodeName(libqt_string localFileName) {
    QByteArray localFileName_QByteArray(localFileName.data, localFileName.len);
    QString _ret = QFile::decodeName(localFileName_QByteArray);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFile_DecodeNameWithLocalFileName(const char* localFileName) {
    QString _ret = QFile::decodeName(localFileName);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QFile_Exists(const QFile* self) {
    return self->exists();
}

bool QFile_ExistsWithFileName(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::exists(fileName_QString);
}

libqt_string QFile_SymLinkTarget(const QFile* self) {
    QString _ret = self->symLinkTarget();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFile_SymLinkTargetWithFileName(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString _ret = QFile::symLinkTarget(fileName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QFile_Remove(QFile* self) {
    return self->remove();
}

bool QFile_RemoveWithFileName(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::remove(fileName_QString);
}

bool QFile_MoveToTrash(QFile* self) {
    return self->moveToTrash();
}

bool QFile_MoveToTrashWithFileName(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QFile::moveToTrash(fileName_QString);
}

bool QFile_Rename(QFile* self, libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->rename(newName_QString);
}

bool QFile_Rename2(libqt_string oldName, libqt_string newName) {
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::rename(oldName_QString, newName_QString);
}

bool QFile_Link(QFile* self, libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->link(newName_QString);
}

bool QFile_Link2(libqt_string fileName, libqt_string newName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::link(fileName_QString, newName_QString);
}

bool QFile_Copy(QFile* self, libqt_string newName) {
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return self->copy(newName_QString);
}

bool QFile_Copy2(libqt_string fileName, libqt_string newName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return QFile::copy(fileName_QString, newName_QString);
}

bool QFile_Open2(QFile* self, int flags, int permissions) {
    return self->open(static_cast<QIODeviceBase::OpenMode>(flags), static_cast<QFileDevice::Permissions>(permissions));
}

bool QFile_Open4(QFile* self, int fd, int ioFlags) {
    return self->open(static_cast<int>(fd), static_cast<QIODeviceBase::OpenMode>(ioFlags));
}

bool QFile_Resize2(libqt_string filename, long long sz) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return QFile::resize(filename_QString, static_cast<qint64>(sz));
}

int QFile_PermissionsWithFilename(libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return static_cast<int>(QFile::permissions(filename_QString));
}

bool QFile_SetPermissions2(libqt_string filename, int permissionSpec) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return QFile::setPermissions(filename_QString, static_cast<QFileDevice::Permissions>(permissionSpec));
}

libqt_string QFile_Tr2(const char* s, const char* c) {
    QString _ret = QFile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFile_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags) {
    return self->open(static_cast<int>(fd), static_cast<QIODeviceBase::OpenMode>(ioFlags), static_cast<QFileDevice::FileHandleFlags>(handleFlags));
}

// Derived class handler implementation
libqt_string QFile_FileName(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        QString _ret = vqfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqfile->fileName();
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
libqt_string QFile_QBaseFileName(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_FileName_IsBase(true);
        QString _ret = vqfile->fileName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqfile->fileName();
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
void QFile_OnFileName(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_FileName_Callback(reinterpret_cast<VirtualQFile::QFile_FileName_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Open(QFile* self, int flags) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    } else {
        return vqfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    }
}

// Base class handler implementation
bool QFile_QBaseOpen(QFile* self, int flags) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Open_IsBase(true);
        return vqfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    } else {
        return vqfile->open(static_cast<QIODeviceBase::OpenMode>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnOpen(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Open_Callback(reinterpret_cast<VirtualQFile::QFile_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_Size(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return static_cast<long long>(vqfile->size());
    } else {
        return static_cast<long long>(vqfile->size());
    }
}

// Base class handler implementation
long long QFile_QBaseSize(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Size_IsBase(true);
        return static_cast<long long>(vqfile->size());
    } else {
        return static_cast<long long>(vqfile->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSize(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Size_Callback(reinterpret_cast<VirtualQFile::QFile_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Resize(QFile* self, long long sz) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->resize(static_cast<qint64>(sz));
    } else {
        return vqfile->resize(static_cast<qint64>(sz));
    }
}

// Base class handler implementation
bool QFile_QBaseResize(QFile* self, long long sz) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Resize_IsBase(true);
        return vqfile->resize(static_cast<qint64>(sz));
    } else {
        return vqfile->resize(static_cast<qint64>(sz));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnResize(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Resize_Callback(reinterpret_cast<VirtualQFile::QFile_Resize_Callback>(slot));
    }
}

// Derived class handler implementation
int QFile_Permissions(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return static_cast<int>(vqfile->permissions());
    } else {
        return static_cast<int>(vqfile->permissions());
    }
}

// Base class handler implementation
int QFile_QBasePermissions(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Permissions_IsBase(true);
        return static_cast<int>(vqfile->permissions());
    } else {
        return static_cast<int>(vqfile->permissions());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnPermissions(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Permissions_Callback(reinterpret_cast<VirtualQFile::QFile_Permissions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_SetPermissions(QFile* self, int permissionSpec) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return vqfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Base class handler implementation
bool QFile_QBaseSetPermissions(QFile* self, int permissionSpec) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_SetPermissions_IsBase(true);
        return vqfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    } else {
        return vqfile->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSetPermissions(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_SetPermissions_Callback(reinterpret_cast<VirtualQFile::QFile_SetPermissions_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_Close(QFile* self) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->close();
    } else {
        vqfile->close();
    }
}

// Base class handler implementation
void QFile_QBaseClose(QFile* self) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Close_IsBase(true);
        vqfile->close();
    } else {
        vqfile->close();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnClose(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Close_Callback(reinterpret_cast<VirtualQFile::QFile_Close_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_IsSequential(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->isSequential();
    } else {
        return vqfile->isSequential();
    }
}

// Base class handler implementation
bool QFile_QBaseIsSequential(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_IsSequential_IsBase(true);
        return vqfile->isSequential();
    } else {
        return vqfile->isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnIsSequential(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_IsSequential_Callback(reinterpret_cast<VirtualQFile::QFile_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_Pos(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return static_cast<long long>(vqfile->pos());
    } else {
        return static_cast<long long>(vqfile->pos());
    }
}

// Base class handler implementation
long long QFile_QBasePos(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Pos_IsBase(true);
        return static_cast<long long>(vqfile->pos());
    } else {
        return static_cast<long long>(vqfile->pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnPos(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Pos_Callback(reinterpret_cast<VirtualQFile::QFile_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Seek(QFile* self, long long offset) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->seek(static_cast<qint64>(offset));
    } else {
        return vqfile->seek(static_cast<qint64>(offset));
    }
}

// Base class handler implementation
bool QFile_QBaseSeek(QFile* self, long long offset) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Seek_IsBase(true);
        return vqfile->seek(static_cast<qint64>(offset));
    } else {
        return vqfile->seek(static_cast<qint64>(offset));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSeek(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Seek_Callback(reinterpret_cast<VirtualQFile::QFile_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_AtEnd(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->atEnd();
    } else {
        return vqfile->atEnd();
    }
}

// Base class handler implementation
bool QFile_QBaseAtEnd(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_AtEnd_IsBase(true);
        return vqfile->atEnd();
    } else {
        return vqfile->atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnAtEnd(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_AtEnd_Callback(reinterpret_cast<VirtualQFile::QFile_AtEnd_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_ReadData(QFile* self, char* data, long long maxlen) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return static_cast<long long>(vqfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqfile->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QFile_QBaseReadData(QFile* self, char* data, long long maxlen) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_ReadData_IsBase(true);
        return static_cast<long long>(vqfile->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqfile->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReadData(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_ReadData_Callback(reinterpret_cast<VirtualQFile::QFile_ReadData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_WriteData(QFile* self, const char* data, long long lenVal) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return static_cast<long long>(vqfile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqfile->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Base class handler implementation
long long QFile_QBaseWriteData(QFile* self, const char* data, long long lenVal) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_WriteData_IsBase(true);
        return static_cast<long long>(vqfile->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(vqfile->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWriteData(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_WriteData_Callback(reinterpret_cast<VirtualQFile::QFile_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_ReadLineData(QFile* self, char* data, long long maxlen) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return static_cast<long long>(vqfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqfile->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QFile_QBaseReadLineData(QFile* self, char* data, long long maxlen) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_ReadLineData_IsBase(true);
        return static_cast<long long>(vqfile->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(vqfile->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReadLineData(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_ReadLineData_Callback(reinterpret_cast<VirtualQFile::QFile_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Reset(QFile* self) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->reset();
    } else {
        return vqfile->reset();
    }
}

// Base class handler implementation
bool QFile_QBaseReset(QFile* self) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Reset_IsBase(true);
        return vqfile->reset();
    } else {
        return vqfile->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReset(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Reset_Callback(reinterpret_cast<VirtualQFile::QFile_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_BytesAvailable(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return static_cast<long long>(vqfile->bytesAvailable());
    } else {
        return static_cast<long long>(vqfile->bytesAvailable());
    }
}

// Base class handler implementation
long long QFile_QBaseBytesAvailable(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqfile->bytesAvailable());
    } else {
        return static_cast<long long>(vqfile->bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnBytesAvailable(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_BytesAvailable_Callback(reinterpret_cast<VirtualQFile::QFile_BytesAvailable_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_BytesToWrite(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return static_cast<long long>(vqfile->bytesToWrite());
    } else {
        return static_cast<long long>(vqfile->bytesToWrite());
    }
}

// Base class handler implementation
long long QFile_QBaseBytesToWrite(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqfile->bytesToWrite());
    } else {
        return static_cast<long long>(vqfile->bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnBytesToWrite(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_BytesToWrite_Callback(reinterpret_cast<VirtualQFile::QFile_BytesToWrite_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_CanReadLine(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->canReadLine();
    } else {
        return vqfile->canReadLine();
    }
}

// Base class handler implementation
bool QFile_QBaseCanReadLine(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_CanReadLine_IsBase(true);
        return vqfile->canReadLine();
    } else {
        return vqfile->canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnCanReadLine(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_CanReadLine_Callback(reinterpret_cast<VirtualQFile::QFile_CanReadLine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_WaitForReadyRead(QFile* self, int msecs) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqfile->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QFile_QBaseWaitForReadyRead(QFile* self, int msecs) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_WaitForReadyRead_IsBase(true);
        return vqfile->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return vqfile->waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWaitForReadyRead(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_WaitForReadyRead_Callback(reinterpret_cast<VirtualQFile::QFile_WaitForReadyRead_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_WaitForBytesWritten(QFile* self, int msecs) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqfile->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Base class handler implementation
bool QFile_QBaseWaitForBytesWritten(QFile* self, int msecs) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_WaitForBytesWritten_IsBase(true);
        return vqfile->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return vqfile->waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnWaitForBytesWritten(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQFile::QFile_WaitForBytesWritten_Callback>(slot));
    }
}

// Derived class handler implementation
long long QFile_SkipData(QFile* self, long long maxSize) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return static_cast<long long>(vqfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqfile->skipData(static_cast<qint64>(maxSize)));
    }
}

// Base class handler implementation
long long QFile_QBaseSkipData(QFile* self, long long maxSize) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_SkipData_IsBase(true);
        return static_cast<long long>(vqfile->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(vqfile->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSkipData(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_SkipData_Callback(reinterpret_cast<VirtualQFile::QFile_SkipData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_Event(QFile* self, QEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->event(event);
    } else {
        return vqfile->event(event);
    }
}

// Base class handler implementation
bool QFile_QBaseEvent(QFile* self, QEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Event_IsBase(true);
        return vqfile->event(event);
    } else {
        return vqfile->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnEvent(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_Event_Callback(reinterpret_cast<VirtualQFile::QFile_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_EventFilter(QFile* self, QObject* watched, QEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        return vqfile->eventFilter(watched, event);
    } else {
        return vqfile->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFile_QBaseEventFilter(QFile* self, QObject* watched, QEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_EventFilter_IsBase(true);
        return vqfile->eventFilter(watched, event);
    } else {
        return vqfile->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnEventFilter(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_EventFilter_Callback(reinterpret_cast<VirtualQFile::QFile_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_TimerEvent(QFile* self, QTimerEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->timerEvent(event);
    } else {
        vqfile->timerEvent(event);
    }
}

// Base class handler implementation
void QFile_QBaseTimerEvent(QFile* self, QTimerEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_TimerEvent_IsBase(true);
        vqfile->timerEvent(event);
    } else {
        vqfile->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnTimerEvent(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_TimerEvent_Callback(reinterpret_cast<VirtualQFile::QFile_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_ChildEvent(QFile* self, QChildEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->childEvent(event);
    } else {
        vqfile->childEvent(event);
    }
}

// Base class handler implementation
void QFile_QBaseChildEvent(QFile* self, QChildEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_ChildEvent_IsBase(true);
        vqfile->childEvent(event);
    } else {
        vqfile->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnChildEvent(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_ChildEvent_Callback(reinterpret_cast<VirtualQFile::QFile_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_CustomEvent(QFile* self, QEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->customEvent(event);
    } else {
        vqfile->customEvent(event);
    }
}

// Base class handler implementation
void QFile_QBaseCustomEvent(QFile* self, QEvent* event) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_CustomEvent_IsBase(true);
        vqfile->customEvent(event);
    } else {
        vqfile->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnCustomEvent(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_CustomEvent_Callback(reinterpret_cast<VirtualQFile::QFile_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_ConnectNotify(QFile* self, QMetaMethod* signal) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->connectNotify(*signal);
    } else {
        vqfile->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFile_QBaseConnectNotify(QFile* self, QMetaMethod* signal) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_ConnectNotify_IsBase(true);
        vqfile->connectNotify(*signal);
    } else {
        vqfile->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnConnectNotify(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_ConnectNotify_Callback(reinterpret_cast<VirtualQFile::QFile_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_DisconnectNotify(QFile* self, QMetaMethod* signal) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->disconnectNotify(*signal);
    } else {
        vqfile->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFile_QBaseDisconnectNotify(QFile* self, QMetaMethod* signal) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_DisconnectNotify_IsBase(true);
        vqfile->disconnectNotify(*signal);
    } else {
        vqfile->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnDisconnectNotify(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_DisconnectNotify_Callback(reinterpret_cast<VirtualQFile::QFile_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_SetOpenMode(QFile* self, int openMode) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QFile_QBaseSetOpenMode(QFile* self, int openMode) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_SetOpenMode_IsBase(true);
        vqfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        vqfile->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSetOpenMode(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_SetOpenMode_Callback(reinterpret_cast<VirtualQFile::QFile_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QFile_SetErrorString(QFile* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setErrorString(errorString_QString);
    } else {
        vqfile->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QFile_QBaseSetErrorString(QFile* self, libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_SetErrorString_IsBase(true);
        vqfile->setErrorString(errorString_QString);
    } else {
        vqfile->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSetErrorString(QFile* self, intptr_t slot) {
    if (auto* vqfile = dynamic_cast<VirtualQFile*>(self)) {
        vqfile->setQFile_SetErrorString_Callback(reinterpret_cast<VirtualQFile::QFile_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFile_Sender(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->sender();
    } else {
        return vqfile->sender();
    }
}

// Base class handler implementation
QObject* QFile_QBaseSender(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Sender_IsBase(true);
        return vqfile->sender();
    } else {
        return vqfile->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSender(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Sender_Callback(reinterpret_cast<VirtualQFile::QFile_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFile_SenderSignalIndex(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->senderSignalIndex();
    } else {
        return vqfile->senderSignalIndex();
    }
}

// Base class handler implementation
int QFile_QBaseSenderSignalIndex(const QFile* self) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_SenderSignalIndex_IsBase(true);
        return vqfile->senderSignalIndex();
    } else {
        return vqfile->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnSenderSignalIndex(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFile::QFile_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFile_Receivers(const QFile* self, const char* signal) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->receivers(signal);
    } else {
        return vqfile->receivers(signal);
    }
}

// Base class handler implementation
int QFile_QBaseReceivers(const QFile* self, const char* signal) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Receivers_IsBase(true);
        return vqfile->receivers(signal);
    } else {
        return vqfile->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnReceivers(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_Receivers_Callback(reinterpret_cast<VirtualQFile::QFile_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFile_IsSignalConnected(const QFile* self, QMetaMethod* signal) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        return vqfile->isSignalConnected(*signal);
    } else {
        return vqfile->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFile_QBaseIsSignalConnected(const QFile* self, QMetaMethod* signal) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_IsSignalConnected_IsBase(true);
        return vqfile->isSignalConnected(*signal);
    } else {
        return vqfile->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFile_OnIsSignalConnected(const QFile* self, intptr_t slot) {
    if (auto* vqfile = const_cast<VirtualQFile*>(dynamic_cast<const VirtualQFile*>(self))) {
        vqfile->setQFile_IsSignalConnected_Callback(reinterpret_cast<VirtualQFile::QFile_IsSignalConnected_Callback>(slot));
    }
}

void QFile_Delete(QFile* self) {
    delete self;
}

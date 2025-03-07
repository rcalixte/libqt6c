#include <QAbstractNetworkCache>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QNetworkCacheMetaData>
#include <QNetworkDiskCache>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qnetworkdiskcache.h>
#include "libqnetworkdiskcache.hpp"
#include "libqnetworkdiskcache.hxx"

QNetworkDiskCache* QNetworkDiskCache_new() {
    return new VirtualQNetworkDiskCache();
}

QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent) {
    return new VirtualQNetworkDiskCache(parent);
}

QMetaObject* QNetworkDiskCache_MetaObject(const QNetworkDiskCache* self) {
    return (QMetaObject*)self->metaObject();
}

void* QNetworkDiskCache_Metacast(QNetworkDiskCache* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QNetworkDiskCache_Metacall(QNetworkDiskCache* self, int param1, int param2, void** param3) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QNetworkDiskCache_OnMetacall(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Metacall_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QNetworkDiskCache_QBaseMetacall(QNetworkDiskCache* self, int param1, int param2, void** param3) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Metacall_IsBase(true);
        return vqnetworkdiskcache->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QNetworkDiskCache_Tr(const char* s) {
    QString _ret = QNetworkDiskCache::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkDiskCache_CacheDirectory(const QNetworkDiskCache* self) {
    QString _ret = self->cacheDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QNetworkDiskCache_SetCacheDirectory(QNetworkDiskCache* self, libqt_string cacheDir) {
    QString cacheDir_QString = QString::fromUtf8(cacheDir.data, cacheDir.len);
    self->setCacheDirectory(cacheDir_QString);
}

long long QNetworkDiskCache_MaximumCacheSize(const QNetworkDiskCache* self) {
    return static_cast<long long>(self->maximumCacheSize());
}

void QNetworkDiskCache_SetMaximumCacheSize(QNetworkDiskCache* self, long long size) {
    self->setMaximumCacheSize(static_cast<qint64>(size));
}

QNetworkCacheMetaData* QNetworkDiskCache_FileMetaData(const QNetworkDiskCache* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QNetworkCacheMetaData(self->fileMetaData(fileName_QString));
}

libqt_string QNetworkDiskCache_Tr2(const char* s, const char* c) {
    QString _ret = QNetworkDiskCache::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkDiskCache_Tr3(const char* s, const char* c, int n) {
    QString _ret = QNetworkDiskCache::tr(s, c, static_cast<int>(n));
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
long long QNetworkDiskCache_CacheSize(const QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return static_cast<long long>(vqnetworkdiskcache->cacheSize());
    } else {
        return static_cast<long long>(vqnetworkdiskcache->cacheSize());
    }
}

// Base class handler implementation
long long QNetworkDiskCache_QBaseCacheSize(const QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_CacheSize_IsBase(true);
        return static_cast<long long>(vqnetworkdiskcache->cacheSize());
    } else {
        return static_cast<long long>(vqnetworkdiskcache->cacheSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnCacheSize(const QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_CacheSize_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_CacheSize_Callback>(slot));
    }
}

// Derived class handler implementation
QNetworkCacheMetaData* QNetworkDiskCache_MetaData(QNetworkDiskCache* self, QUrl* url) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return new QNetworkCacheMetaData(vqnetworkdiskcache->metaData(*url));
    } else {
        return new QNetworkCacheMetaData(self->metaData(*url));
    }
}

// Base class handler implementation
QNetworkCacheMetaData* QNetworkDiskCache_QBaseMetaData(QNetworkDiskCache* self, QUrl* url) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_MetaData_IsBase(true);
        return new QNetworkCacheMetaData(vqnetworkdiskcache->metaData(*url));
    } else {
        return new QNetworkCacheMetaData(self->metaData(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnMetaData(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_MetaData_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_MetaData_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->updateMetaData(*metaData);
    } else {
        vqnetworkdiskcache->updateMetaData(*metaData);
    }
}

// Base class handler implementation
void QNetworkDiskCache_QBaseUpdateMetaData(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_UpdateMetaData_IsBase(true);
        vqnetworkdiskcache->updateMetaData(*metaData);
    } else {
        vqnetworkdiskcache->updateMetaData(*metaData);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnUpdateMetaData(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_UpdateMetaData_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_UpdateMetaData_Callback>(slot));
    }
}

// Derived class handler implementation
QIODevice* QNetworkDiskCache_Data(QNetworkDiskCache* self, QUrl* url) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return vqnetworkdiskcache->data(*url);
    } else {
        return vqnetworkdiskcache->data(*url);
    }
}

// Base class handler implementation
QIODevice* QNetworkDiskCache_QBaseData(QNetworkDiskCache* self, QUrl* url) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Data_IsBase(true);
        return vqnetworkdiskcache->data(*url);
    } else {
        return vqnetworkdiskcache->data(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnData(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Data_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkDiskCache_Remove(QNetworkDiskCache* self, QUrl* url) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return vqnetworkdiskcache->remove(*url);
    } else {
        return vqnetworkdiskcache->remove(*url);
    }
}

// Base class handler implementation
bool QNetworkDiskCache_QBaseRemove(QNetworkDiskCache* self, QUrl* url) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Remove_IsBase(true);
        return vqnetworkdiskcache->remove(*url);
    } else {
        return vqnetworkdiskcache->remove(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnRemove(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Remove_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Remove_Callback>(slot));
    }
}

// Derived class handler implementation
QIODevice* QNetworkDiskCache_Prepare(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return vqnetworkdiskcache->prepare(*metaData);
    } else {
        return vqnetworkdiskcache->prepare(*metaData);
    }
}

// Base class handler implementation
QIODevice* QNetworkDiskCache_QBasePrepare(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Prepare_IsBase(true);
        return vqnetworkdiskcache->prepare(*metaData);
    } else {
        return vqnetworkdiskcache->prepare(*metaData);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnPrepare(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Prepare_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Prepare_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkDiskCache_Insert(QNetworkDiskCache* self, QIODevice* device) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->insert(device);
    } else {
        vqnetworkdiskcache->insert(device);
    }
}

// Base class handler implementation
void QNetworkDiskCache_QBaseInsert(QNetworkDiskCache* self, QIODevice* device) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Insert_IsBase(true);
        vqnetworkdiskcache->insert(device);
    } else {
        vqnetworkdiskcache->insert(device);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnInsert(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Insert_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Insert_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkDiskCache_Clear(QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->clear();
    } else {
        vqnetworkdiskcache->clear();
    }
}

// Base class handler implementation
void QNetworkDiskCache_QBaseClear(QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Clear_IsBase(true);
        vqnetworkdiskcache->clear();
    } else {
        vqnetworkdiskcache->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnClear(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Clear_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
long long QNetworkDiskCache_Expire(QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return static_cast<long long>(vqnetworkdiskcache->expire());
    } else {
        return static_cast<long long>(vqnetworkdiskcache->expire());
    }
}

// Base class handler implementation
long long QNetworkDiskCache_QBaseExpire(QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Expire_IsBase(true);
        return static_cast<long long>(vqnetworkdiskcache->expire());
    } else {
        return static_cast<long long>(vqnetworkdiskcache->expire());
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnExpire(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Expire_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Expire_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkDiskCache_Event(QNetworkDiskCache* self, QEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return vqnetworkdiskcache->event(event);
    } else {
        return vqnetworkdiskcache->event(event);
    }
}

// Base class handler implementation
bool QNetworkDiskCache_QBaseEvent(QNetworkDiskCache* self, QEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Event_IsBase(true);
        return vqnetworkdiskcache->event(event);
    } else {
        return vqnetworkdiskcache->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnEvent(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_Event_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkDiskCache_EventFilter(QNetworkDiskCache* self, QObject* watched, QEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return vqnetworkdiskcache->eventFilter(watched, event);
    } else {
        return vqnetworkdiskcache->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QNetworkDiskCache_QBaseEventFilter(QNetworkDiskCache* self, QObject* watched, QEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_EventFilter_IsBase(true);
        return vqnetworkdiskcache->eventFilter(watched, event);
    } else {
        return vqnetworkdiskcache->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnEventFilter(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_EventFilter_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkDiskCache_TimerEvent(QNetworkDiskCache* self, QTimerEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->timerEvent(event);
    } else {
        vqnetworkdiskcache->timerEvent(event);
    }
}

// Base class handler implementation
void QNetworkDiskCache_QBaseTimerEvent(QNetworkDiskCache* self, QTimerEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_TimerEvent_IsBase(true);
        vqnetworkdiskcache->timerEvent(event);
    } else {
        vqnetworkdiskcache->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnTimerEvent(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_TimerEvent_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkDiskCache_ChildEvent(QNetworkDiskCache* self, QChildEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->childEvent(event);
    } else {
        vqnetworkdiskcache->childEvent(event);
    }
}

// Base class handler implementation
void QNetworkDiskCache_QBaseChildEvent(QNetworkDiskCache* self, QChildEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_ChildEvent_IsBase(true);
        vqnetworkdiskcache->childEvent(event);
    } else {
        vqnetworkdiskcache->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnChildEvent(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_ChildEvent_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkDiskCache_CustomEvent(QNetworkDiskCache* self, QEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->customEvent(event);
    } else {
        vqnetworkdiskcache->customEvent(event);
    }
}

// Base class handler implementation
void QNetworkDiskCache_QBaseCustomEvent(QNetworkDiskCache* self, QEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_CustomEvent_IsBase(true);
        vqnetworkdiskcache->customEvent(event);
    } else {
        vqnetworkdiskcache->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnCustomEvent(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_CustomEvent_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkDiskCache_ConnectNotify(QNetworkDiskCache* self, QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->connectNotify(*signal);
    } else {
        vqnetworkdiskcache->connectNotify(*signal);
    }
}

// Base class handler implementation
void QNetworkDiskCache_QBaseConnectNotify(QNetworkDiskCache* self, QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_ConnectNotify_IsBase(true);
        vqnetworkdiskcache->connectNotify(*signal);
    } else {
        vqnetworkdiskcache->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnConnectNotify(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_ConnectNotify_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QNetworkDiskCache_DisconnectNotify(QNetworkDiskCache* self, QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->disconnectNotify(*signal);
    } else {
        vqnetworkdiskcache->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QNetworkDiskCache_QBaseDisconnectNotify(QNetworkDiskCache* self, QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_DisconnectNotify_IsBase(true);
        vqnetworkdiskcache->disconnectNotify(*signal);
    } else {
        vqnetworkdiskcache->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnDisconnectNotify(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->setQNetworkDiskCache_DisconnectNotify_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QNetworkDiskCache_Sender(const QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return vqnetworkdiskcache->sender();
    } else {
        return vqnetworkdiskcache->sender();
    }
}

// Base class handler implementation
QObject* QNetworkDiskCache_QBaseSender(const QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_Sender_IsBase(true);
        return vqnetworkdiskcache->sender();
    } else {
        return vqnetworkdiskcache->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnSender(const QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_Sender_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QNetworkDiskCache_SenderSignalIndex(const QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return vqnetworkdiskcache->senderSignalIndex();
    } else {
        return vqnetworkdiskcache->senderSignalIndex();
    }
}

// Base class handler implementation
int QNetworkDiskCache_QBaseSenderSignalIndex(const QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_SenderSignalIndex_IsBase(true);
        return vqnetworkdiskcache->senderSignalIndex();
    } else {
        return vqnetworkdiskcache->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnSenderSignalIndex(const QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_SenderSignalIndex_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QNetworkDiskCache_Receivers(const QNetworkDiskCache* self, const char* signal) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return vqnetworkdiskcache->receivers(signal);
    } else {
        return vqnetworkdiskcache->receivers(signal);
    }
}

// Base class handler implementation
int QNetworkDiskCache_QBaseReceivers(const QNetworkDiskCache* self, const char* signal) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_Receivers_IsBase(true);
        return vqnetworkdiskcache->receivers(signal);
    } else {
        return vqnetworkdiskcache->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnReceivers(const QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_Receivers_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QNetworkDiskCache_IsSignalConnected(const QNetworkDiskCache* self, QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return vqnetworkdiskcache->isSignalConnected(*signal);
    } else {
        return vqnetworkdiskcache->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QNetworkDiskCache_QBaseIsSignalConnected(const QNetworkDiskCache* self, QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_IsSignalConnected_IsBase(true);
        return vqnetworkdiskcache->isSignalConnected(*signal);
    } else {
        return vqnetworkdiskcache->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnIsSignalConnected(const QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        vqnetworkdiskcache->setQNetworkDiskCache_IsSignalConnected_Callback(reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_IsSignalConnected_Callback>(slot));
    }
}

void QNetworkDiskCache_Delete(QNetworkDiskCache* self) {
    delete self;
}

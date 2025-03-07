#include <QAccessibleInterface>
#include <QAccessiblePlugin>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
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
#include <qaccessibleplugin.h>
#include "libqaccessibleplugin.hpp"
#include "libqaccessibleplugin.hxx"

QAccessiblePlugin* QAccessiblePlugin_new() {
    return new VirtualQAccessiblePlugin();
}

QAccessiblePlugin* QAccessiblePlugin_new2(QObject* parent) {
    return new VirtualQAccessiblePlugin(parent);
}

QMetaObject* QAccessiblePlugin_MetaObject(const QAccessiblePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAccessiblePlugin_Metacast(QAccessiblePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAccessiblePlugin_Metacall(QAccessiblePlugin* self, int param1, int param2, void** param3) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAccessiblePlugin_OnMetacall(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_Metacall_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAccessiblePlugin_QBaseMetacall(QAccessiblePlugin* self, int param1, int param2, void** param3) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_Metacall_IsBase(true);
        return vqaccessibleplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAccessiblePlugin_Tr(const char* s) {
    QString _ret = QAccessiblePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessiblePlugin_Tr2(const char* s, const char* c) {
    QString _ret = QAccessiblePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessiblePlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAccessiblePlugin::tr(s, c, static_cast<int>(n));
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
QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, libqt_string key, QObject* object) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        return vqaccessibleplugin->create(key_QString, object);
    } else {
        return vqaccessibleplugin->create(key_QString, object);
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessiblePlugin_QBaseCreate(QAccessiblePlugin* self, libqt_string key, QObject* object) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_Create_IsBase(true);
        return vqaccessibleplugin->create(key_QString, object);
    } else {
        return vqaccessibleplugin->create(key_QString, object);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnCreate(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_Create_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Create_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessiblePlugin_Event(QAccessiblePlugin* self, QEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        return vqaccessibleplugin->event(event);
    } else {
        return vqaccessibleplugin->event(event);
    }
}

// Base class handler implementation
bool QAccessiblePlugin_QBaseEvent(QAccessiblePlugin* self, QEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_Event_IsBase(true);
        return vqaccessibleplugin->event(event);
    } else {
        return vqaccessibleplugin->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnEvent(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_Event_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessiblePlugin_EventFilter(QAccessiblePlugin* self, QObject* watched, QEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        return vqaccessibleplugin->eventFilter(watched, event);
    } else {
        return vqaccessibleplugin->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAccessiblePlugin_QBaseEventFilter(QAccessiblePlugin* self, QObject* watched, QEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_EventFilter_IsBase(true);
        return vqaccessibleplugin->eventFilter(watched, event);
    } else {
        return vqaccessibleplugin->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnEventFilter(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_EventFilter_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessiblePlugin_TimerEvent(QAccessiblePlugin* self, QTimerEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->timerEvent(event);
    } else {
        vqaccessibleplugin->timerEvent(event);
    }
}

// Base class handler implementation
void QAccessiblePlugin_QBaseTimerEvent(QAccessiblePlugin* self, QTimerEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_TimerEvent_IsBase(true);
        vqaccessibleplugin->timerEvent(event);
    } else {
        vqaccessibleplugin->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnTimerEvent(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_TimerEvent_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessiblePlugin_ChildEvent(QAccessiblePlugin* self, QChildEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->childEvent(event);
    } else {
        vqaccessibleplugin->childEvent(event);
    }
}

// Base class handler implementation
void QAccessiblePlugin_QBaseChildEvent(QAccessiblePlugin* self, QChildEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_ChildEvent_IsBase(true);
        vqaccessibleplugin->childEvent(event);
    } else {
        vqaccessibleplugin->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnChildEvent(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_ChildEvent_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessiblePlugin_CustomEvent(QAccessiblePlugin* self, QEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->customEvent(event);
    } else {
        vqaccessibleplugin->customEvent(event);
    }
}

// Base class handler implementation
void QAccessiblePlugin_QBaseCustomEvent(QAccessiblePlugin* self, QEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_CustomEvent_IsBase(true);
        vqaccessibleplugin->customEvent(event);
    } else {
        vqaccessibleplugin->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnCustomEvent(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_CustomEvent_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessiblePlugin_ConnectNotify(QAccessiblePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->connectNotify(*signal);
    } else {
        vqaccessibleplugin->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAccessiblePlugin_QBaseConnectNotify(QAccessiblePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_ConnectNotify_IsBase(true);
        vqaccessibleplugin->connectNotify(*signal);
    } else {
        vqaccessibleplugin->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnConnectNotify(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessiblePlugin_DisconnectNotify(QAccessiblePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->disconnectNotify(*signal);
    } else {
        vqaccessibleplugin->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAccessiblePlugin_QBaseDisconnectNotify(QAccessiblePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_DisconnectNotify_IsBase(true);
        vqaccessibleplugin->disconnectNotify(*signal);
    } else {
        vqaccessibleplugin->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnDisconnectNotify(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->setQAccessiblePlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAccessiblePlugin_Sender(const QAccessiblePlugin* self) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        return vqaccessibleplugin->sender();
    } else {
        return vqaccessibleplugin->sender();
    }
}

// Base class handler implementation
QObject* QAccessiblePlugin_QBaseSender(const QAccessiblePlugin* self) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        vqaccessibleplugin->setQAccessiblePlugin_Sender_IsBase(true);
        return vqaccessibleplugin->sender();
    } else {
        return vqaccessibleplugin->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnSender(const QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        vqaccessibleplugin->setQAccessiblePlugin_Sender_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessiblePlugin_SenderSignalIndex(const QAccessiblePlugin* self) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        return vqaccessibleplugin->senderSignalIndex();
    } else {
        return vqaccessibleplugin->senderSignalIndex();
    }
}

// Base class handler implementation
int QAccessiblePlugin_QBaseSenderSignalIndex(const QAccessiblePlugin* self) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        vqaccessibleplugin->setQAccessiblePlugin_SenderSignalIndex_IsBase(true);
        return vqaccessibleplugin->senderSignalIndex();
    } else {
        return vqaccessibleplugin->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnSenderSignalIndex(const QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        vqaccessibleplugin->setQAccessiblePlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessiblePlugin_Receivers(const QAccessiblePlugin* self, const char* signal) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        return vqaccessibleplugin->receivers(signal);
    } else {
        return vqaccessibleplugin->receivers(signal);
    }
}

// Base class handler implementation
int QAccessiblePlugin_QBaseReceivers(const QAccessiblePlugin* self, const char* signal) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        vqaccessibleplugin->setQAccessiblePlugin_Receivers_IsBase(true);
        return vqaccessibleplugin->receivers(signal);
    } else {
        return vqaccessibleplugin->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnReceivers(const QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        vqaccessibleplugin->setQAccessiblePlugin_Receivers_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessiblePlugin_IsSignalConnected(const QAccessiblePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        return vqaccessibleplugin->isSignalConnected(*signal);
    } else {
        return vqaccessibleplugin->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAccessiblePlugin_QBaseIsSignalConnected(const QAccessiblePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        vqaccessibleplugin->setQAccessiblePlugin_IsSignalConnected_IsBase(true);
        return vqaccessibleplugin->isSignalConnected(*signal);
    } else {
        return vqaccessibleplugin->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnIsSignalConnected(const QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        vqaccessibleplugin->setQAccessiblePlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_IsSignalConnected_Callback>(slot));
    }
}

void QAccessiblePlugin_Delete(QAccessiblePlugin* self) {
    delete self;
}

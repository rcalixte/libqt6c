#include <QAccessibleBridge>
#include <QAccessibleBridgePlugin>
#include <QAccessibleEvent>
#include <QAccessibleInterface>
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
#include <qaccessiblebridge.h>
#include "libqaccessiblebridge.hpp"
#include "libqaccessiblebridge.hxx"

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject) {
    self->setRootObject(rootObject);
}

void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event) {
    self->notifyAccessibilityUpdate(event);
}

void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, QAccessibleBridge* param1) {
    self->operator=(*param1);
}

void QAccessibleBridge_Delete(QAccessibleBridge* self) {
    delete self;
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new() {
    return new VirtualQAccessibleBridgePlugin();
}

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent) {
    return new VirtualQAccessibleBridgePlugin(parent);
}

QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAccessibleBridgePlugin_Metacast(QAccessibleBridgePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAccessibleBridgePlugin_Metacall(QAccessibleBridgePlugin* self, int param1, int param2, void** param3) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAccessibleBridgePlugin_OnMetacall(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Metacall_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAccessibleBridgePlugin_QBaseMetacall(QAccessibleBridgePlugin* self, int param1, int param2, void** param3) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Metacall_IsBase(true);
        return vqaccessiblebridgeplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAccessibleBridgePlugin_Tr(const char* s) {
    QString _ret = QAccessibleBridgePlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c) {
    QString _ret = QAccessibleBridgePlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAccessibleBridgePlugin::tr(s, c, static_cast<int>(n));
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
QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        return vqaccessiblebridgeplugin->create(key_QString);
    } else {
        return vqaccessiblebridgeplugin->create(key_QString);
    }
}

// Base class handler implementation
QAccessibleBridge* QAccessibleBridgePlugin_QBaseCreate(QAccessibleBridgePlugin* self, libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Create_IsBase(true);
        return vqaccessiblebridgeplugin->create(key_QString);
    } else {
        return vqaccessiblebridgeplugin->create(key_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnCreate(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Create_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Create_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessibleBridgePlugin_Event(QAccessibleBridgePlugin* self, QEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        return vqaccessiblebridgeplugin->event(event);
    } else {
        return vqaccessiblebridgeplugin->event(event);
    }
}

// Base class handler implementation
bool QAccessibleBridgePlugin_QBaseEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Event_IsBase(true);
        return vqaccessiblebridgeplugin->event(event);
    } else {
        return vqaccessiblebridgeplugin->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Event_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessibleBridgePlugin_EventFilter(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        return vqaccessiblebridgeplugin->eventFilter(watched, event);
    } else {
        return vqaccessiblebridgeplugin->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAccessibleBridgePlugin_QBaseEventFilter(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_EventFilter_IsBase(true);
        return vqaccessiblebridgeplugin->eventFilter(watched, event);
    } else {
        return vqaccessiblebridgeplugin->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnEventFilter(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_EventFilter_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_TimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->timerEvent(event);
    } else {
        vqaccessiblebridgeplugin->timerEvent(event);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseTimerEvent(QAccessibleBridgePlugin* self, QTimerEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_TimerEvent_IsBase(true);
        vqaccessiblebridgeplugin->timerEvent(event);
    } else {
        vqaccessiblebridgeplugin->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnTimerEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_TimerEvent_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_ChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->childEvent(event);
    } else {
        vqaccessiblebridgeplugin->childEvent(event);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseChildEvent(QAccessibleBridgePlugin* self, QChildEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_ChildEvent_IsBase(true);
        vqaccessiblebridgeplugin->childEvent(event);
    } else {
        vqaccessiblebridgeplugin->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnChildEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_ChildEvent_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_CustomEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->customEvent(event);
    } else {
        vqaccessiblebridgeplugin->customEvent(event);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseCustomEvent(QAccessibleBridgePlugin* self, QEvent* event) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_CustomEvent_IsBase(true);
        vqaccessiblebridgeplugin->customEvent(event);
    } else {
        vqaccessiblebridgeplugin->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnCustomEvent(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_CustomEvent_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_ConnectNotify(QAccessibleBridgePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->connectNotify(*signal);
    } else {
        vqaccessiblebridgeplugin->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseConnectNotify(QAccessibleBridgePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_ConnectNotify_IsBase(true);
        vqaccessiblebridgeplugin->connectNotify(*signal);
    } else {
        vqaccessiblebridgeplugin->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnConnectNotify(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAccessibleBridgePlugin_DisconnectNotify(QAccessibleBridgePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->disconnectNotify(*signal);
    } else {
        vqaccessiblebridgeplugin->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAccessibleBridgePlugin_QBaseDisconnectNotify(QAccessibleBridgePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_DisconnectNotify_IsBase(true);
        vqaccessiblebridgeplugin->disconnectNotify(*signal);
    } else {
        vqaccessiblebridgeplugin->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnDisconnectNotify(QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = dynamic_cast<VirtualQAccessibleBridgePlugin*>(self)) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAccessibleBridgePlugin_Sender(const QAccessibleBridgePlugin* self) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        return vqaccessiblebridgeplugin->sender();
    } else {
        return vqaccessiblebridgeplugin->sender();
    }
}

// Base class handler implementation
QObject* QAccessibleBridgePlugin_QBaseSender(const QAccessibleBridgePlugin* self) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Sender_IsBase(true);
        return vqaccessiblebridgeplugin->sender();
    } else {
        return vqaccessiblebridgeplugin->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnSender(const QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Sender_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleBridgePlugin_SenderSignalIndex(const QAccessibleBridgePlugin* self) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        return vqaccessiblebridgeplugin->senderSignalIndex();
    } else {
        return vqaccessiblebridgeplugin->senderSignalIndex();
    }
}

// Base class handler implementation
int QAccessibleBridgePlugin_QBaseSenderSignalIndex(const QAccessibleBridgePlugin* self) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_SenderSignalIndex_IsBase(true);
        return vqaccessiblebridgeplugin->senderSignalIndex();
    } else {
        return vqaccessiblebridgeplugin->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnSenderSignalIndex(const QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAccessibleBridgePlugin_Receivers(const QAccessibleBridgePlugin* self, const char* signal) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        return vqaccessiblebridgeplugin->receivers(signal);
    } else {
        return vqaccessiblebridgeplugin->receivers(signal);
    }
}

// Base class handler implementation
int QAccessibleBridgePlugin_QBaseReceivers(const QAccessibleBridgePlugin* self, const char* signal) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Receivers_IsBase(true);
        return vqaccessiblebridgeplugin->receivers(signal);
    } else {
        return vqaccessiblebridgeplugin->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnReceivers(const QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_Receivers_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAccessibleBridgePlugin_IsSignalConnected(const QAccessibleBridgePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        return vqaccessiblebridgeplugin->isSignalConnected(*signal);
    } else {
        return vqaccessiblebridgeplugin->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAccessibleBridgePlugin_QBaseIsSignalConnected(const QAccessibleBridgePlugin* self, QMetaMethod* signal) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_IsSignalConnected_IsBase(true);
        return vqaccessiblebridgeplugin->isSignalConnected(*signal);
    } else {
        return vqaccessiblebridgeplugin->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleBridgePlugin_OnIsSignalConnected(const QAccessibleBridgePlugin* self, intptr_t slot) {
    if (auto* vqaccessiblebridgeplugin = const_cast<VirtualQAccessibleBridgePlugin*>(dynamic_cast<const VirtualQAccessibleBridgePlugin*>(self))) {
        vqaccessiblebridgeplugin->setQAccessibleBridgePlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQAccessibleBridgePlugin::QAccessibleBridgePlugin_IsSignalConnected_Callback>(slot));
    }
}

void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self) {
    delete self;
}

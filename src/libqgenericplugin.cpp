#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QGenericPlugin>
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
#include <qgenericplugin.h>
#include "libqgenericplugin.hpp"
#include "libqgenericplugin.hxx"

QGenericPlugin* QGenericPlugin_new() {
    return new VirtualQGenericPlugin();
}

QGenericPlugin* QGenericPlugin_new2(QObject* parent) {
    return new VirtualQGenericPlugin(parent);
}

QMetaObject* QGenericPlugin_MetaObject(const QGenericPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGenericPlugin_Metacast(QGenericPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGenericPlugin_Metacall(QGenericPlugin* self, int param1, int param2, void** param3) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGenericPlugin_OnMetacall(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_Metacall_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGenericPlugin_QBaseMetacall(QGenericPlugin* self, int param1, int param2, void** param3) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_Metacall_IsBase(true);
        return vqgenericplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGenericPlugin_Tr(const char* s) {
    QString _ret = QGenericPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGenericPlugin_Tr2(const char* s, const char* c) {
    QString _ret = QGenericPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGenericPlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGenericPlugin::tr(s, c, static_cast<int>(n));
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
QObject* QGenericPlugin_Create(QGenericPlugin* self, libqt_string name, libqt_string spec) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString spec_QString = QString::fromUtf8(spec.data, spec.len);
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        return vqgenericplugin->create(name_QString, spec_QString);
    } else {
        return vqgenericplugin->create(name_QString, spec_QString);
    }
}

// Base class handler implementation
QObject* QGenericPlugin_QBaseCreate(QGenericPlugin* self, libqt_string name, libqt_string spec) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString spec_QString = QString::fromUtf8(spec.data, spec.len);
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_Create_IsBase(true);
        return vqgenericplugin->create(name_QString, spec_QString);
    } else {
        return vqgenericplugin->create(name_QString, spec_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnCreate(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_Create_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Create_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGenericPlugin_Event(QGenericPlugin* self, QEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        return vqgenericplugin->event(event);
    } else {
        return vqgenericplugin->event(event);
    }
}

// Base class handler implementation
bool QGenericPlugin_QBaseEvent(QGenericPlugin* self, QEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_Event_IsBase(true);
        return vqgenericplugin->event(event);
    } else {
        return vqgenericplugin->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnEvent(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_Event_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGenericPlugin_EventFilter(QGenericPlugin* self, QObject* watched, QEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        return vqgenericplugin->eventFilter(watched, event);
    } else {
        return vqgenericplugin->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGenericPlugin_QBaseEventFilter(QGenericPlugin* self, QObject* watched, QEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_EventFilter_IsBase(true);
        return vqgenericplugin->eventFilter(watched, event);
    } else {
        return vqgenericplugin->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnEventFilter(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_EventFilter_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGenericPlugin_TimerEvent(QGenericPlugin* self, QTimerEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->timerEvent(event);
    } else {
        vqgenericplugin->timerEvent(event);
    }
}

// Base class handler implementation
void QGenericPlugin_QBaseTimerEvent(QGenericPlugin* self, QTimerEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_TimerEvent_IsBase(true);
        vqgenericplugin->timerEvent(event);
    } else {
        vqgenericplugin->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnTimerEvent(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_TimerEvent_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGenericPlugin_ChildEvent(QGenericPlugin* self, QChildEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->childEvent(event);
    } else {
        vqgenericplugin->childEvent(event);
    }
}

// Base class handler implementation
void QGenericPlugin_QBaseChildEvent(QGenericPlugin* self, QChildEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_ChildEvent_IsBase(true);
        vqgenericplugin->childEvent(event);
    } else {
        vqgenericplugin->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnChildEvent(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_ChildEvent_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGenericPlugin_CustomEvent(QGenericPlugin* self, QEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->customEvent(event);
    } else {
        vqgenericplugin->customEvent(event);
    }
}

// Base class handler implementation
void QGenericPlugin_QBaseCustomEvent(QGenericPlugin* self, QEvent* event) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_CustomEvent_IsBase(true);
        vqgenericplugin->customEvent(event);
    } else {
        vqgenericplugin->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnCustomEvent(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_CustomEvent_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGenericPlugin_ConnectNotify(QGenericPlugin* self, QMetaMethod* signal) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->connectNotify(*signal);
    } else {
        vqgenericplugin->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGenericPlugin_QBaseConnectNotify(QGenericPlugin* self, QMetaMethod* signal) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_ConnectNotify_IsBase(true);
        vqgenericplugin->connectNotify(*signal);
    } else {
        vqgenericplugin->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnConnectNotify(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGenericPlugin_DisconnectNotify(QGenericPlugin* self, QMetaMethod* signal) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->disconnectNotify(*signal);
    } else {
        vqgenericplugin->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGenericPlugin_QBaseDisconnectNotify(QGenericPlugin* self, QMetaMethod* signal) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_DisconnectNotify_IsBase(true);
        vqgenericplugin->disconnectNotify(*signal);
    } else {
        vqgenericplugin->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnDisconnectNotify(QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = dynamic_cast<VirtualQGenericPlugin*>(self)) {
        vqgenericplugin->setQGenericPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGenericPlugin_Sender(const QGenericPlugin* self) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        return vqgenericplugin->sender();
    } else {
        return vqgenericplugin->sender();
    }
}

// Base class handler implementation
QObject* QGenericPlugin_QBaseSender(const QGenericPlugin* self) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        vqgenericplugin->setQGenericPlugin_Sender_IsBase(true);
        return vqgenericplugin->sender();
    } else {
        return vqgenericplugin->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnSender(const QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        vqgenericplugin->setQGenericPlugin_Sender_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGenericPlugin_SenderSignalIndex(const QGenericPlugin* self) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        return vqgenericplugin->senderSignalIndex();
    } else {
        return vqgenericplugin->senderSignalIndex();
    }
}

// Base class handler implementation
int QGenericPlugin_QBaseSenderSignalIndex(const QGenericPlugin* self) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        vqgenericplugin->setQGenericPlugin_SenderSignalIndex_IsBase(true);
        return vqgenericplugin->senderSignalIndex();
    } else {
        return vqgenericplugin->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnSenderSignalIndex(const QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        vqgenericplugin->setQGenericPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGenericPlugin_Receivers(const QGenericPlugin* self, const char* signal) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        return vqgenericplugin->receivers(signal);
    } else {
        return vqgenericplugin->receivers(signal);
    }
}

// Base class handler implementation
int QGenericPlugin_QBaseReceivers(const QGenericPlugin* self, const char* signal) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        vqgenericplugin->setQGenericPlugin_Receivers_IsBase(true);
        return vqgenericplugin->receivers(signal);
    } else {
        return vqgenericplugin->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnReceivers(const QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        vqgenericplugin->setQGenericPlugin_Receivers_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGenericPlugin_IsSignalConnected(const QGenericPlugin* self, QMetaMethod* signal) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        return vqgenericplugin->isSignalConnected(*signal);
    } else {
        return vqgenericplugin->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGenericPlugin_QBaseIsSignalConnected(const QGenericPlugin* self, QMetaMethod* signal) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        vqgenericplugin->setQGenericPlugin_IsSignalConnected_IsBase(true);
        return vqgenericplugin->isSignalConnected(*signal);
    } else {
        return vqgenericplugin->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGenericPlugin_OnIsSignalConnected(const QGenericPlugin* self, intptr_t slot) {
    if (auto* vqgenericplugin = const_cast<VirtualQGenericPlugin*>(dynamic_cast<const VirtualQGenericPlugin*>(self))) {
        vqgenericplugin->setQGenericPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualQGenericPlugin::QGenericPlugin_IsSignalConnected_Callback>(slot));
    }
}

void QGenericPlugin_Delete(QGenericPlugin* self) {
    delete self;
}

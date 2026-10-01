#include <QAccessibleInterface>
#include <QAccessiblePlugin>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qaccessibleplugin.h>
#include "libqaccessibleplugin.hpp"
#include "libqaccessibleplugin.hxx"

QAccessiblePlugin* QAccessiblePlugin_New() {
    return new VirtualQAccessiblePlugin();
}

QAccessiblePlugin* QAccessiblePlugin_New2(QObject* parent) {
    return new VirtualQAccessiblePlugin(parent);
}

QMetaObject* QAccessiblePlugin_MetaObject(const QAccessiblePlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAccessiblePlugin_Metacast(QAccessiblePlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAccessiblePlugin_Metacall(QAccessiblePlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, const libqt_string key, QObject* object) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->create(key_QString, object);
}

// Base class handler implementation
QMetaObject* QAccessiblePlugin_SuperMetaObject(const QAccessiblePlugin* self) {
    return (QMetaObject*)self->QAccessiblePlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnMetaObject(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self)))
        vqaccessibleplugin->qaccessibleplugin_metaobject_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAccessiblePlugin_SuperMetacast(QAccessiblePlugin* self, const char* param1) {
    return self->QAccessiblePlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnMetacast(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_metacast_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAccessiblePlugin_SuperMetacall(QAccessiblePlugin* self, int param1, int param2, void** param3) {
    return self->QAccessiblePlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnMetacall(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_metacall_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnCreate(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_create_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Create_Callback>(slot);
}

// Derived class handler implementation
bool QAccessiblePlugin_Event(QAccessiblePlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAccessiblePlugin_SuperEvent(QAccessiblePlugin* self, QEvent* event) {
    return self->QAccessiblePlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnEvent(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_event_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAccessiblePlugin_EventFilter(QAccessiblePlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAccessiblePlugin_SuperEventFilter(QAccessiblePlugin* self, QObject* watched, QEvent* event) {
    return self->QAccessiblePlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnEventFilter(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_eventfilter_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAccessiblePlugin_TimerEvent(QAccessiblePlugin* self, QTimerEvent* event) {
    auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self);
    if (vqaccessibleplugin) {
        vqaccessibleplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAccessiblePlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessiblePlugin_SuperTimerEvent(QAccessiblePlugin* self, QTimerEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->QAccessiblePlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAccessiblePlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnTimerEvent(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_timerevent_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAccessiblePlugin_ChildEvent(QAccessiblePlugin* self, QChildEvent* event) {
    auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self);
    if (vqaccessibleplugin) {
        vqaccessibleplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAccessiblePlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessiblePlugin_SuperChildEvent(QAccessiblePlugin* self, QChildEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->QAccessiblePlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAccessiblePlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnChildEvent(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_childevent_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAccessiblePlugin_CustomEvent(QAccessiblePlugin* self, QEvent* event) {
    auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self);
    if (vqaccessibleplugin) {
        vqaccessibleplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAccessiblePlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessiblePlugin_SuperCustomEvent(QAccessiblePlugin* self, QEvent* event) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->QAccessiblePlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAccessiblePlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnCustomEvent(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_customevent_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAccessiblePlugin_ConnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self);
    if (vqaccessibleplugin) {
        vqaccessibleplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAccessiblePlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessiblePlugin_SuperConnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->QAccessiblePlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAccessiblePlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnConnectNotify(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_connectnotify_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAccessiblePlugin_DisconnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal) {
    auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self);
    if (vqaccessibleplugin) {
        vqaccessibleplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAccessiblePlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAccessiblePlugin_SuperDisconnectNotify(QAccessiblePlugin* self, const QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self)) {
        vqaccessibleplugin->QAccessiblePlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAccessiblePlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAccessiblePlugin_OnDisconnectNotify(QAccessiblePlugin* self, intptr_t slot) {
    if (auto* vqaccessibleplugin = dynamic_cast<VirtualQAccessiblePlugin*>(self))
        vqaccessibleplugin->qaccessibleplugin_disconnectnotify_callback = reinterpret_cast<VirtualQAccessiblePlugin::QAccessiblePlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAccessiblePlugin_Sender(const QAccessiblePlugin* self) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        return vqaccessibleplugin->VirtualQAccessiblePlugin::sender();
    } else
        qFatal("Error: Protected method QAccessiblePlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAccessiblePlugin_SenderSignalIndex(const QAccessiblePlugin* self) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        return vqaccessibleplugin->VirtualQAccessiblePlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAccessiblePlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAccessiblePlugin_Receivers(const QAccessiblePlugin* self, const char* signal) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        return vqaccessibleplugin->VirtualQAccessiblePlugin::receivers(signal);
    } else
        qFatal("Error: Protected method QAccessiblePlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAccessiblePlugin_IsSignalConnected(const QAccessiblePlugin* self, const QMetaMethod* signal) {
    if (auto* vqaccessibleplugin = const_cast<VirtualQAccessiblePlugin*>(dynamic_cast<const VirtualQAccessiblePlugin*>(self))) {
        return vqaccessibleplugin->VirtualQAccessiblePlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAccessiblePlugin::isSignalConnected called without a directly constructed type");
}

void QAccessiblePlugin_Delete(QAccessiblePlugin* self) {
    delete self;
}

#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__PlatformPluginFactory
#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__PlatformTheme
#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__Units
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <platformpluginfactory.h>
#include "libplatformpluginfactory.hpp"
#include "libplatformpluginfactory.hxx"

Kirigami__Platform__PlatformPluginFactory* Kirigami__Platform__PlatformPluginFactory_New() {
    return new VirtualKirigamiPlatformPlatformPluginFactory();
}

Kirigami__Platform__PlatformPluginFactory* Kirigami__Platform__PlatformPluginFactory_New2(QObject* parent) {
    return new VirtualKirigamiPlatformPlatformPluginFactory(parent);
}

QMetaObject* Kirigami__Platform__PlatformPluginFactory_MetaObject(const Kirigami__Platform__PlatformPluginFactory* self) {
    return (QMetaObject*)self->metaObject();
}

void* Kirigami__Platform__PlatformPluginFactory_Metacast(Kirigami__Platform__PlatformPluginFactory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Kirigami__Platform__PlatformPluginFactory_Metacall(Kirigami__Platform__PlatformPluginFactory* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

Kirigami__Platform__PlatformTheme* Kirigami__Platform__PlatformPluginFactory_CreatePlatformTheme(Kirigami__Platform__PlatformPluginFactory* self, QObject* parent) {
    return self->createPlatformTheme(parent);
}

Kirigami__Platform__Units* Kirigami__Platform__PlatformPluginFactory_CreateUnits(Kirigami__Platform__PlatformPluginFactory* self, QObject* parent) {
    return self->createUnits(parent);
}

Kirigami__Platform__PlatformPluginFactory* Kirigami__Platform__PlatformPluginFactory_FindPlugin() {
    return Kirigami::Platform::PlatformPluginFactory::findPlugin();
}

Kirigami__Platform__PlatformPluginFactory* Kirigami__Platform__PlatformPluginFactory_FindPlugin1(const libqt_string pluginName) {
    QString pluginName_QString = QString::fromUtf8(pluginName.data, pluginName.len);
    return Kirigami::Platform::PlatformPluginFactory::findPlugin(pluginName_QString);
}

// Base class handler implementation
QMetaObject* Kirigami__Platform__PlatformPluginFactory_SuperMetaObject(const Kirigami__Platform__PlatformPluginFactory* self) {
    return (QMetaObject*)self->Kirigami::Platform::PlatformPluginFactory::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnMetaObject(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self)))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_metaobject_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Kirigami__Platform__PlatformPluginFactory_SuperMetacast(Kirigami__Platform__PlatformPluginFactory* self, const char* param1) {
    return self->Kirigami::Platform::PlatformPluginFactory::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnMetacast(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_metacast_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_Metacast_Callback>(slot);
}

// Base class handler implementation
int Kirigami__Platform__PlatformPluginFactory_SuperMetacall(Kirigami__Platform__PlatformPluginFactory* self, int param1, int param2, void** param3) {
    return self->Kirigami::Platform::PlatformPluginFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnMetacall(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_metacall_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnCreatePlatformTheme(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_createplatformtheme_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_CreatePlatformTheme_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnCreateUnits(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_createunits_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_CreateUnits_Callback>(slot);
}

// Derived class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_Event(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_SuperEvent(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event) {
    return self->Kirigami::Platform::PlatformPluginFactory::event(event);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnEvent(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_event_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_Event_Callback>(slot);
}

// Derived class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_EventFilter(Kirigami__Platform__PlatformPluginFactory* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Kirigami__Platform__PlatformPluginFactory_SuperEventFilter(Kirigami__Platform__PlatformPluginFactory* self, QObject* watched, QEvent* event) {
    return self->Kirigami::Platform::PlatformPluginFactory::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnEventFilter(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_eventfilter_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_TimerEvent(Kirigami__Platform__PlatformPluginFactory* self, QTimerEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory) {
        vkirigamiplatformplatformpluginfactory->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperTimerEvent(Kirigami__Platform__PlatformPluginFactory* self, QTimerEvent* event) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self)) {
        vkirigamiplatformplatformpluginfactory->Kirigami::Platform::PlatformPluginFactory::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnTimerEvent(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_timerevent_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_ChildEvent(Kirigami__Platform__PlatformPluginFactory* self, QChildEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory) {
        vkirigamiplatformplatformpluginfactory->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperChildEvent(Kirigami__Platform__PlatformPluginFactory* self, QChildEvent* event) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self)) {
        vkirigamiplatformplatformpluginfactory->Kirigami::Platform::PlatformPluginFactory::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnChildEvent(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_childevent_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_CustomEvent(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory) {
        vkirigamiplatformplatformpluginfactory->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperCustomEvent(Kirigami__Platform__PlatformPluginFactory* self, QEvent* event) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self)) {
        vkirigamiplatformplatformpluginfactory->Kirigami::Platform::PlatformPluginFactory::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnCustomEvent(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_customevent_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_ConnectNotify(Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory) {
        vkirigamiplatformplatformpluginfactory->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperConnectNotify(Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self)) {
        vkirigamiplatformplatformpluginfactory->Kirigami::Platform::PlatformPluginFactory::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnConnectNotify(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_connectnotify_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformPluginFactory_DisconnectNotify(Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self);
    if (vkirigamiplatformplatformpluginfactory) {
        vkirigamiplatformplatformpluginfactory->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformPluginFactory_SuperDisconnectNotify(Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self)) {
        vkirigamiplatformplatformpluginfactory->Kirigami::Platform::PlatformPluginFactory::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformPluginFactory::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformPluginFactory_OnDisconnectNotify(Kirigami__Platform__PlatformPluginFactory* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformpluginfactory = dynamic_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(self))
        vkirigamiplatformplatformpluginfactory->kirigami__platform__platformpluginfactory_disconnectnotify_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformPluginFactory::Kirigami__Platform__PlatformPluginFactory_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Kirigami__Platform__PlatformPluginFactory_Sender(const Kirigami__Platform__PlatformPluginFactory* self) {
    if (auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self))) {
        return vkirigamiplatformplatformpluginfactory->VirtualKirigamiPlatformPlatformPluginFactory::sender();
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformPluginFactory::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Kirigami__Platform__PlatformPluginFactory_SenderSignalIndex(const Kirigami__Platform__PlatformPluginFactory* self) {
    if (auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self))) {
        return vkirigamiplatformplatformpluginfactory->VirtualKirigamiPlatformPlatformPluginFactory::senderSignalIndex();
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformPluginFactory::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Kirigami__Platform__PlatformPluginFactory_Receivers(const Kirigami__Platform__PlatformPluginFactory* self, const char* signal) {
    if (auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self))) {
        return vkirigamiplatformplatformpluginfactory->VirtualKirigamiPlatformPlatformPluginFactory::receivers(signal);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformPluginFactory::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Kirigami__Platform__PlatformPluginFactory_IsSignalConnected(const Kirigami__Platform__PlatformPluginFactory* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformplatformpluginfactory = const_cast<VirtualKirigamiPlatformPlatformPluginFactory*>(dynamic_cast<const VirtualKirigamiPlatformPlatformPluginFactory*>(self))) {
        return vkirigamiplatformplatformpluginfactory->VirtualKirigamiPlatformPlatformPluginFactory::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformPluginFactory::isSignalConnected called without a directly constructed type");
}

void Kirigami__Platform__PlatformPluginFactory_Delete(Kirigami__Platform__PlatformPluginFactory* self) {
    delete self;
}

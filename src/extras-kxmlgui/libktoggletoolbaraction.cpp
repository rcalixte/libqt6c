#include <KToggleAction>
#include <KToggleToolBarAction>
#include <KToolBar>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <ktoggletoolbaraction.h>
#include "libktoggletoolbaraction.hpp"
#include "libktoggletoolbaraction.hxx"

KToggleToolBarAction* KToggleToolBarAction_New(KToolBar* toolBar, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToggleToolBarAction(toolBar, text_QString, parent);
}

QMetaObject* KToggleToolBarAction_MetaObject(const KToggleToolBarAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToggleToolBarAction_Metacast(KToggleToolBarAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToggleToolBarAction_Metacall(KToggleToolBarAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

KToolBar* KToggleToolBarAction_ToolBar(KToggleToolBarAction* self) {
    return self->toolBar();
}

bool KToggleToolBarAction_EventFilter(KToggleToolBarAction* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
QMetaObject* KToggleToolBarAction_SuperMetaObject(const KToggleToolBarAction* self) {
    return (QMetaObject*)self->KToggleToolBarAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnMetaObject(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self)))
        vktoggletoolbaraction->ktoggletoolbaraction_metaobject_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KToggleToolBarAction_SuperMetacast(KToggleToolBarAction* self, const char* param1) {
    return self->KToggleToolBarAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnMetacast(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_metacast_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KToggleToolBarAction_SuperMetacall(KToggleToolBarAction* self, int param1, int param2, void** param3) {
    return self->KToggleToolBarAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnMetacall(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_metacall_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KToggleToolBarAction_SuperEventFilter(KToggleToolBarAction* self, QObject* watched, QEvent* event) {
    return self->KToggleToolBarAction::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnEventFilter(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_eventfilter_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KToggleToolBarAction_Event(KToggleToolBarAction* self, QEvent* param1) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction) {
        return vktoggletoolbaraction->event(param1);
    } else {
        qFatal("Error: Protected virtual method KToggleToolBarAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToggleToolBarAction_SuperEvent(KToggleToolBarAction* self, QEvent* param1) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self)) {
        return vktoggletoolbaraction->KToggleToolBarAction::event(param1);
    } else
        qFatal("Error: Protected virtual method KToggleToolBarAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnEvent(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_event_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_Event_Callback>(slot);
}

// Derived class handler implementation
void KToggleToolBarAction_TimerEvent(KToggleToolBarAction* self, QTimerEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction) {
        vktoggletoolbaraction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleToolBarAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleToolBarAction_SuperTimerEvent(KToggleToolBarAction* self, QTimerEvent* event) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self)) {
        vktoggletoolbaraction->KToggleToolBarAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleToolBarAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnTimerEvent(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_timerevent_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleToolBarAction_ChildEvent(KToggleToolBarAction* self, QChildEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction) {
        vktoggletoolbaraction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleToolBarAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleToolBarAction_SuperChildEvent(KToggleToolBarAction* self, QChildEvent* event) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self)) {
        vktoggletoolbaraction->KToggleToolBarAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleToolBarAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnChildEvent(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_childevent_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleToolBarAction_CustomEvent(KToggleToolBarAction* self, QEvent* event) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction) {
        vktoggletoolbaraction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToggleToolBarAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleToolBarAction_SuperCustomEvent(KToggleToolBarAction* self, QEvent* event) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self)) {
        vktoggletoolbaraction->KToggleToolBarAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KToggleToolBarAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnCustomEvent(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_customevent_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KToggleToolBarAction_ConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction) {
        vktoggletoolbaraction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToggleToolBarAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleToolBarAction_SuperConnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self)) {
        vktoggletoolbaraction->KToggleToolBarAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToggleToolBarAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnConnectNotify(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_connectnotify_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KToggleToolBarAction_DisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal) {
    auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self);
    if (vktoggletoolbaraction) {
        vktoggletoolbaraction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToggleToolBarAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToggleToolBarAction_SuperDisconnectNotify(KToggleToolBarAction* self, const QMetaMethod* signal) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self)) {
        vktoggletoolbaraction->KToggleToolBarAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToggleToolBarAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToggleToolBarAction_OnDisconnectNotify(KToggleToolBarAction* self, intptr_t slot) {
    if (auto* vktoggletoolbaraction = dynamic_cast<VirtualKToggleToolBarAction*>(self))
        vktoggletoolbaraction->ktoggletoolbaraction_disconnectnotify_callback = reinterpret_cast<VirtualKToggleToolBarAction::KToggleToolBarAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KToggleToolBarAction_Sender(const KToggleToolBarAction* self) {
    if (auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self))) {
        return vktoggletoolbaraction->VirtualKToggleToolBarAction::sender();
    } else
        qFatal("Error: Protected method KToggleToolBarAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KToggleToolBarAction_SenderSignalIndex(const KToggleToolBarAction* self) {
    if (auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self))) {
        return vktoggletoolbaraction->VirtualKToggleToolBarAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KToggleToolBarAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KToggleToolBarAction_Receivers(const KToggleToolBarAction* self, const char* signal) {
    if (auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self))) {
        return vktoggletoolbaraction->VirtualKToggleToolBarAction::receivers(signal);
    } else
        qFatal("Error: Protected method KToggleToolBarAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToggleToolBarAction_IsSignalConnected(const KToggleToolBarAction* self, const QMetaMethod* signal) {
    if (auto* vktoggletoolbaraction = const_cast<VirtualKToggleToolBarAction*>(dynamic_cast<const VirtualKToggleToolBarAction*>(self))) {
        return vktoggletoolbaraction->VirtualKToggleToolBarAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KToggleToolBarAction::isSignalConnected called without a directly constructed type");
}

void KToggleToolBarAction_Delete(KToggleToolBarAction* self) {
    delete self;
}

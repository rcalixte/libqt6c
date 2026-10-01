#include <KSelectionWatcher>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kselectionwatcher.h>
#include "libkselectionwatcher.hpp"
#include "libkselectionwatcher.hxx"

#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_New(xcb_atom_t selection) {
    return new VirtualKSelectionWatcher(selection);
}
#endif

KSelectionWatcher* KSelectionWatcher_New2(const char* selection) {
    return new VirtualKSelectionWatcher(selection);
}

#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_New3(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root) {
    return new VirtualKSelectionWatcher(selection, c, root);
}
#endif

#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_New4(const char* selection, xcb_connection_t* c, xcb_window_t root) {
    return new VirtualKSelectionWatcher(selection, c, root);
}
#endif

#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_New5(xcb_atom_t selection, int screen) {
    return new VirtualKSelectionWatcher(selection, static_cast<int>(screen));
}
#endif

#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_New6(xcb_atom_t selection, int screen, QObject* parent) {
    return new VirtualKSelectionWatcher(selection, static_cast<int>(screen), parent);
}
#endif

KSelectionWatcher* KSelectionWatcher_New7(const char* selection, int screen) {
    return new VirtualKSelectionWatcher(selection, static_cast<int>(screen));
}

KSelectionWatcher* KSelectionWatcher_New8(const char* selection, int screen, QObject* parent) {
    return new VirtualKSelectionWatcher(selection, static_cast<int>(screen), parent);
}

#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_New9(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root, QObject* parent) {
    return new VirtualKSelectionWatcher(selection, c, root, parent);
}
#endif

#ifdef __linux__
KSelectionWatcher* KSelectionWatcher_New10(const char* selection, xcb_connection_t* c, xcb_window_t root, QObject* parent) {
    return new VirtualKSelectionWatcher(selection, c, root, parent);
}
#endif

QMetaObject* KSelectionWatcher_MetaObject(const KSelectionWatcher* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSelectionWatcher_Metacast(KSelectionWatcher* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSelectionWatcher_Metacall(KSelectionWatcher* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

#ifdef __linux__
xcb_window_t KSelectionWatcher_Owner(KSelectionWatcher* self) {
    return self->owner();
}
#endif

void KSelectionWatcher_FilterEvent(KSelectionWatcher* self, void* ev_P) {
    self->filterEvent(ev_P);
}

#ifdef __linux__
void KSelectionWatcher_NewOwner(KSelectionWatcher* self, xcb_window_t owner) {
    self->newOwner(owner);
}
#endif

void KSelectionWatcher_Connect_NewOwner(KSelectionWatcher* self, intptr_t slot) {
    void (*slotFunc)(KSelectionWatcher*, xcb_window_t) = reinterpret_cast<void (*)(KSelectionWatcher*, xcb_window_t)>(slot);
    KSelectionWatcher::connect(self,
                               static_cast<void (KSelectionWatcher::*)(xcb_window_t)>(&KSelectionWatcher::newOwner),
                               [self, slotFunc](xcb_window_t owner) {
                                   xcb_window_t sigval1 = owner;
                                   slotFunc(self, sigval1);
                               });
}

void KSelectionWatcher_LostOwner(KSelectionWatcher* self) {
    self->lostOwner();
}

void KSelectionWatcher_Connect_LostOwner(KSelectionWatcher* self, intptr_t slot) {
    void (*slotFunc)(KSelectionWatcher*) = reinterpret_cast<void (*)(KSelectionWatcher*)>(slot);
    KSelectionWatcher::connect(self,
                               static_cast<void (KSelectionWatcher::*)()>(&KSelectionWatcher::lostOwner),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

// Base class handler implementation
QMetaObject* KSelectionWatcher_SuperMetaObject(const KSelectionWatcher* self) {
    return (QMetaObject*)self->KSelectionWatcher::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnMetaObject(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self)))
        vkselectionwatcher->kselectionwatcher_metaobject_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSelectionWatcher_SuperMetacast(KSelectionWatcher* self, const char* param1) {
    return self->KSelectionWatcher::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnMetacast(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_metacast_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSelectionWatcher_SuperMetacall(KSelectionWatcher* self, int param1, int param2, void** param3) {
    return self->KSelectionWatcher::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnMetacall(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_metacall_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionWatcher_Event(KSelectionWatcher* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KSelectionWatcher_SuperEvent(KSelectionWatcher* self, QEvent* event) {
    return self->KSelectionWatcher::event(event);
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnEvent(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_event_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_Event_Callback>(slot);
}

// Derived class handler implementation
bool KSelectionWatcher_EventFilter(KSelectionWatcher* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSelectionWatcher_SuperEventFilter(KSelectionWatcher* self, QObject* watched, QEvent* event) {
    return self->KSelectionWatcher::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnEventFilter(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_eventfilter_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSelectionWatcher_TimerEvent(KSelectionWatcher* self, QTimerEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher) {
        vkselectionwatcher->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectionWatcher::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionWatcher_SuperTimerEvent(KSelectionWatcher* self, QTimerEvent* event) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self)) {
        vkselectionwatcher->KSelectionWatcher::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectionWatcher::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnTimerEvent(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_timerevent_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectionWatcher_ChildEvent(KSelectionWatcher* self, QChildEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher) {
        vkselectionwatcher->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectionWatcher::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionWatcher_SuperChildEvent(KSelectionWatcher* self, QChildEvent* event) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self)) {
        vkselectionwatcher->KSelectionWatcher::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectionWatcher::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnChildEvent(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_childevent_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectionWatcher_CustomEvent(KSelectionWatcher* self, QEvent* event) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher) {
        vkselectionwatcher->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelectionWatcher::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionWatcher_SuperCustomEvent(KSelectionWatcher* self, QEvent* event) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self)) {
        vkselectionwatcher->KSelectionWatcher::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelectionWatcher::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnCustomEvent(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_customevent_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelectionWatcher_ConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher) {
        vkselectionwatcher->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelectionWatcher::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionWatcher_SuperConnectNotify(KSelectionWatcher* self, const QMetaMethod* signal) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self)) {
        vkselectionwatcher->KSelectionWatcher::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelectionWatcher::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnConnectNotify(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_connectnotify_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSelectionWatcher_DisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal) {
    auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self);
    if (vkselectionwatcher) {
        vkselectionwatcher->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelectionWatcher::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelectionWatcher_SuperDisconnectNotify(KSelectionWatcher* self, const QMetaMethod* signal) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self)) {
        vkselectionwatcher->KSelectionWatcher::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelectionWatcher::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelectionWatcher_OnDisconnectNotify(KSelectionWatcher* self, intptr_t slot) {
    if (auto* vkselectionwatcher = dynamic_cast<VirtualKSelectionWatcher*>(self))
        vkselectionwatcher->kselectionwatcher_disconnectnotify_callback = reinterpret_cast<VirtualKSelectionWatcher::KSelectionWatcher_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KSelectionWatcher_Sender(const KSelectionWatcher* self) {
    if (auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self))) {
        return vkselectionwatcher->VirtualKSelectionWatcher::sender();
    } else
        qFatal("Error: Protected method KSelectionWatcher::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelectionWatcher_SenderSignalIndex(const KSelectionWatcher* self) {
    if (auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self))) {
        return vkselectionwatcher->VirtualKSelectionWatcher::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSelectionWatcher::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelectionWatcher_Receivers(const KSelectionWatcher* self, const char* signal) {
    if (auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self))) {
        return vkselectionwatcher->VirtualKSelectionWatcher::receivers(signal);
    } else
        qFatal("Error: Protected method KSelectionWatcher::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelectionWatcher_IsSignalConnected(const KSelectionWatcher* self, const QMetaMethod* signal) {
    if (auto* vkselectionwatcher = const_cast<VirtualKSelectionWatcher*>(dynamic_cast<const VirtualKSelectionWatcher*>(self))) {
        return vkselectionwatcher->VirtualKSelectionWatcher::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSelectionWatcher::isSignalConnected called without a directly constructed type");
}

void KSelectionWatcher_Delete(KSelectionWatcher* self) {
    delete self;
}

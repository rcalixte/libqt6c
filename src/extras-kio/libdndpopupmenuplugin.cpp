#include <KFileItemListProperties>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DndPopupMenuPlugin
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <dndpopupmenuplugin.h>
#include "libdndpopupmenuplugin.hpp"
#include "libdndpopupmenuplugin.hxx"

KIO__DndPopupMenuPlugin* KIO__DndPopupMenuPlugin_New(QObject* parent) {
    return new VirtualKIODndPopupMenuPlugin(parent);
}

QMetaObject* KIO__DndPopupMenuPlugin_MetaObject(const KIO__DndPopupMenuPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__DndPopupMenuPlugin_Metacast(KIO__DndPopupMenuPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__DndPopupMenuPlugin_Metacall(KIO__DndPopupMenuPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_list /* of QAction* */ KIO__DndPopupMenuPlugin_Setup(KIO__DndPopupMenuPlugin* self, const KFileItemListProperties* popupMenuInfo, const QUrl* destination) {
    QList<QAction*> _ret = self->setup(*popupMenuInfo, *destination);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
QMetaObject* KIO__DndPopupMenuPlugin_SuperMetaObject(const KIO__DndPopupMenuPlugin* self) {
    return (QMetaObject*)self->KIO::DndPopupMenuPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnMetaObject(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self)))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_metaobject_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__DndPopupMenuPlugin_SuperMetacast(KIO__DndPopupMenuPlugin* self, const char* param1) {
    return self->KIO::DndPopupMenuPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnMetacast(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_metacast_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__DndPopupMenuPlugin_SuperMetacall(KIO__DndPopupMenuPlugin* self, int param1, int param2, void** param3) {
    return self->KIO::DndPopupMenuPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnMetacall(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_metacall_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnSetup(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_setup_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Setup_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DndPopupMenuPlugin_Event(KIO__DndPopupMenuPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__DndPopupMenuPlugin_SuperEvent(KIO__DndPopupMenuPlugin* self, QEvent* event) {
    return self->KIO::DndPopupMenuPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_event_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__DndPopupMenuPlugin_EventFilter(KIO__DndPopupMenuPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__DndPopupMenuPlugin_SuperEventFilter(KIO__DndPopupMenuPlugin* self, QObject* watched, QEvent* event) {
    return self->KIO::DndPopupMenuPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnEventFilter(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_eventfilter_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_TimerEvent(KIO__DndPopupMenuPlugin* self, QTimerEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin) {
        vkiodndpopupmenuplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_SuperTimerEvent(KIO__DndPopupMenuPlugin* self, QTimerEvent* event) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self)) {
        vkiodndpopupmenuplugin->KIO::DndPopupMenuPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnTimerEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_timerevent_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_ChildEvent(KIO__DndPopupMenuPlugin* self, QChildEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin) {
        vkiodndpopupmenuplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_SuperChildEvent(KIO__DndPopupMenuPlugin* self, QChildEvent* event) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self)) {
        vkiodndpopupmenuplugin->KIO::DndPopupMenuPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnChildEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_childevent_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_CustomEvent(KIO__DndPopupMenuPlugin* self, QEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin) {
        vkiodndpopupmenuplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_SuperCustomEvent(KIO__DndPopupMenuPlugin* self, QEvent* event) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self)) {
        vkiodndpopupmenuplugin->KIO::DndPopupMenuPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnCustomEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_customevent_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_ConnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin) {
        vkiodndpopupmenuplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_SuperConnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self)) {
        vkiodndpopupmenuplugin->KIO::DndPopupMenuPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnConnectNotify(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_connectnotify_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_DisconnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin) {
        vkiodndpopupmenuplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_SuperDisconnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self)) {
        vkiodndpopupmenuplugin->KIO::DndPopupMenuPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::DndPopupMenuPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnDisconnectNotify(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    if (auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self))
        vkiodndpopupmenuplugin->kio__dndpopupmenuplugin_disconnectnotify_callback = reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KIO__DndPopupMenuPlugin_Sender(const KIO__DndPopupMenuPlugin* self) {
    if (auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self))) {
        return vkiodndpopupmenuplugin->VirtualKIODndPopupMenuPlugin::sender();
    } else
        qFatal("Error: Protected method KIO::DndPopupMenuPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__DndPopupMenuPlugin_SenderSignalIndex(const KIO__DndPopupMenuPlugin* self) {
    if (auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self))) {
        return vkiodndpopupmenuplugin->VirtualKIODndPopupMenuPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::DndPopupMenuPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__DndPopupMenuPlugin_Receivers(const KIO__DndPopupMenuPlugin* self, const char* signal) {
    if (auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self))) {
        return vkiodndpopupmenuplugin->VirtualKIODndPopupMenuPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::DndPopupMenuPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__DndPopupMenuPlugin_IsSignalConnected(const KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    if (auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self))) {
        return vkiodndpopupmenuplugin->VirtualKIODndPopupMenuPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::DndPopupMenuPlugin::isSignalConnected called without a directly constructed type");
}

void KIO__DndPopupMenuPlugin_Delete(KIO__DndPopupMenuPlugin* self) {
    delete self;
}

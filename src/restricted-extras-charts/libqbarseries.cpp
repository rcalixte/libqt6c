#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QBarSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qbarseries.h>
#include "libqbarseries.hpp"
#include "libqbarseries.hxx"

QBarSeries* QBarSeries_New() {
    return new VirtualQBarSeries();
}

QBarSeries* QBarSeries_New2(QObject* parent) {
    return new VirtualQBarSeries(parent);
}

QMetaObject* QBarSeries_MetaObject(const QBarSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBarSeries_Metacast(QBarSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBarSeries_Metacall(QBarSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

int QBarSeries_Type(const QBarSeries* self) {
    return static_cast<int>(self->type());
}

// Base class handler implementation
QMetaObject* QBarSeries_SuperMetaObject(const QBarSeries* self) {
    return (QMetaObject*)self->QBarSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnMetaObject(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self)))
        vqbarseries->qbarseries_metaobject_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBarSeries_SuperMetacast(QBarSeries* self, const char* param1) {
    return self->QBarSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnMetacast(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_metacast_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBarSeries_SuperMetacall(QBarSeries* self, int param1, int param2, void** param3) {
    return self->QBarSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnMetacall(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_metacall_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_Metacall_Callback>(slot);
}

// Base class handler implementation
int QBarSeries_SuperType(const QBarSeries* self) {
    return static_cast<int>(self->QBarSeries::type());
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnType(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self)))
        vqbarseries->qbarseries_type_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_Type_Callback>(slot);
}

// Derived class handler implementation
bool QBarSeries_Event(QBarSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBarSeries_SuperEvent(QBarSeries* self, QEvent* event) {
    return self->QBarSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnEvent(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_event_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBarSeries_EventFilter(QBarSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBarSeries_SuperEventFilter(QBarSeries* self, QObject* watched, QEvent* event) {
    return self->QBarSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnEventFilter(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_eventfilter_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBarSeries_TimerEvent(QBarSeries* self, QTimerEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries) {
        vqbarseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarSeries_SuperTimerEvent(QBarSeries* self, QTimerEvent* event) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self)) {
        vqbarseries->QBarSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnTimerEvent(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_timerevent_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarSeries_ChildEvent(QBarSeries* self, QChildEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries) {
        vqbarseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarSeries_SuperChildEvent(QBarSeries* self, QChildEvent* event) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self)) {
        vqbarseries->QBarSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnChildEvent(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_childevent_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarSeries_CustomEvent(QBarSeries* self, QEvent* event) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries) {
        vqbarseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarSeries_SuperCustomEvent(QBarSeries* self, QEvent* event) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self)) {
        vqbarseries->QBarSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnCustomEvent(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_customevent_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarSeries_ConnectNotify(QBarSeries* self, const QMetaMethod* signal) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries) {
        vqbarseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBarSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarSeries_SuperConnectNotify(QBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self)) {
        vqbarseries->QBarSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBarSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnConnectNotify(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_connectnotify_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBarSeries_DisconnectNotify(QBarSeries* self, const QMetaMethod* signal) {
    auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self);
    if (vqbarseries) {
        vqbarseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBarSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarSeries_SuperDisconnectNotify(QBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self)) {
        vqbarseries->QBarSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBarSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarSeries_OnDisconnectNotify(QBarSeries* self, intptr_t slot) {
    if (auto* vqbarseries = dynamic_cast<VirtualQBarSeries*>(self))
        vqbarseries->qbarseries_disconnectnotify_callback = reinterpret_cast<VirtualQBarSeries::QBarSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBarSeries_Sender(const QBarSeries* self) {
    if (auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self))) {
        return vqbarseries->VirtualQBarSeries::sender();
    } else
        qFatal("Error: Protected method QBarSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBarSeries_SenderSignalIndex(const QBarSeries* self) {
    if (auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self))) {
        return vqbarseries->VirtualQBarSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBarSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBarSeries_Receivers(const QBarSeries* self, const char* signal) {
    if (auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self))) {
        return vqbarseries->VirtualQBarSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QBarSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBarSeries_IsSignalConnected(const QBarSeries* self, const QMetaMethod* signal) {
    if (auto* vqbarseries = const_cast<VirtualQBarSeries*>(dynamic_cast<const VirtualQBarSeries*>(self))) {
        return vqbarseries->VirtualQBarSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBarSeries::isSignalConnected called without a directly constructed type");
}

void QBarSeries_Delete(QBarSeries* self) {
    delete self;
}

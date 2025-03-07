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
#include <QObjectCleanupHandler>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qobjectcleanuphandler.h>
#include "libqobjectcleanuphandler.hpp"
#include "libqobjectcleanuphandler.hxx"

QObjectCleanupHandler* QObjectCleanupHandler_new() {
    return new VirtualQObjectCleanupHandler();
}

QMetaObject* QObjectCleanupHandler_MetaObject(const QObjectCleanupHandler* self) {
    return (QMetaObject*)self->metaObject();
}

void* QObjectCleanupHandler_Metacast(QObjectCleanupHandler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QObjectCleanupHandler_Metacall(QObjectCleanupHandler* self, int param1, int param2, void** param3) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObjectCleanupHandler_OnMetacall(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_Metacall_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QObjectCleanupHandler_QBaseMetacall(QObjectCleanupHandler* self, int param1, int param2, void** param3) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_Metacall_IsBase(true);
        return vqobjectcleanuphandler->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QObjectCleanupHandler_Tr(const char* s) {
    QString _ret = QObjectCleanupHandler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object) {
    return self->add(object);
}

void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object) {
    self->remove(object);
}

bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self) {
    return self->isEmpty();
}

void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self) {
    self->clear();
}

libqt_string QObjectCleanupHandler_Tr2(const char* s, const char* c) {
    QString _ret = QObjectCleanupHandler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QObjectCleanupHandler_Tr3(const char* s, const char* c, int n) {
    QString _ret = QObjectCleanupHandler::tr(s, c, static_cast<int>(n));
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
bool QObjectCleanupHandler_Event(QObjectCleanupHandler* self, QEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        return vqobjectcleanuphandler->event(event);
    } else {
        return vqobjectcleanuphandler->event(event);
    }
}

// Base class handler implementation
bool QObjectCleanupHandler_QBaseEvent(QObjectCleanupHandler* self, QEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_Event_IsBase(true);
        return vqobjectcleanuphandler->event(event);
    } else {
        return vqobjectcleanuphandler->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnEvent(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_Event_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QObjectCleanupHandler_EventFilter(QObjectCleanupHandler* self, QObject* watched, QEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        return vqobjectcleanuphandler->eventFilter(watched, event);
    } else {
        return vqobjectcleanuphandler->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QObjectCleanupHandler_QBaseEventFilter(QObjectCleanupHandler* self, QObject* watched, QEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_EventFilter_IsBase(true);
        return vqobjectcleanuphandler->eventFilter(watched, event);
    } else {
        return vqobjectcleanuphandler->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnEventFilter(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_EventFilter_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QObjectCleanupHandler_TimerEvent(QObjectCleanupHandler* self, QTimerEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->timerEvent(event);
    } else {
        vqobjectcleanuphandler->timerEvent(event);
    }
}

// Base class handler implementation
void QObjectCleanupHandler_QBaseTimerEvent(QObjectCleanupHandler* self, QTimerEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_TimerEvent_IsBase(true);
        vqobjectcleanuphandler->timerEvent(event);
    } else {
        vqobjectcleanuphandler->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnTimerEvent(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_TimerEvent_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QObjectCleanupHandler_ChildEvent(QObjectCleanupHandler* self, QChildEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->childEvent(event);
    } else {
        vqobjectcleanuphandler->childEvent(event);
    }
}

// Base class handler implementation
void QObjectCleanupHandler_QBaseChildEvent(QObjectCleanupHandler* self, QChildEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_ChildEvent_IsBase(true);
        vqobjectcleanuphandler->childEvent(event);
    } else {
        vqobjectcleanuphandler->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnChildEvent(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_ChildEvent_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QObjectCleanupHandler_CustomEvent(QObjectCleanupHandler* self, QEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->customEvent(event);
    } else {
        vqobjectcleanuphandler->customEvent(event);
    }
}

// Base class handler implementation
void QObjectCleanupHandler_QBaseCustomEvent(QObjectCleanupHandler* self, QEvent* event) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_CustomEvent_IsBase(true);
        vqobjectcleanuphandler->customEvent(event);
    } else {
        vqobjectcleanuphandler->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnCustomEvent(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_CustomEvent_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QObjectCleanupHandler_ConnectNotify(QObjectCleanupHandler* self, QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->connectNotify(*signal);
    } else {
        vqobjectcleanuphandler->connectNotify(*signal);
    }
}

// Base class handler implementation
void QObjectCleanupHandler_QBaseConnectNotify(QObjectCleanupHandler* self, QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_ConnectNotify_IsBase(true);
        vqobjectcleanuphandler->connectNotify(*signal);
    } else {
        vqobjectcleanuphandler->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnConnectNotify(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_ConnectNotify_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QObjectCleanupHandler_DisconnectNotify(QObjectCleanupHandler* self, QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->disconnectNotify(*signal);
    } else {
        vqobjectcleanuphandler->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QObjectCleanupHandler_QBaseDisconnectNotify(QObjectCleanupHandler* self, QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_DisconnectNotify_IsBase(true);
        vqobjectcleanuphandler->disconnectNotify(*signal);
    } else {
        vqobjectcleanuphandler->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnDisconnectNotify(QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = dynamic_cast<VirtualQObjectCleanupHandler*>(self)) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_DisconnectNotify_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QObjectCleanupHandler_Sender(const QObjectCleanupHandler* self) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        return vqobjectcleanuphandler->sender();
    } else {
        return vqobjectcleanuphandler->sender();
    }
}

// Base class handler implementation
QObject* QObjectCleanupHandler_QBaseSender(const QObjectCleanupHandler* self) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_Sender_IsBase(true);
        return vqobjectcleanuphandler->sender();
    } else {
        return vqobjectcleanuphandler->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnSender(const QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_Sender_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QObjectCleanupHandler_SenderSignalIndex(const QObjectCleanupHandler* self) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        return vqobjectcleanuphandler->senderSignalIndex();
    } else {
        return vqobjectcleanuphandler->senderSignalIndex();
    }
}

// Base class handler implementation
int QObjectCleanupHandler_QBaseSenderSignalIndex(const QObjectCleanupHandler* self) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_SenderSignalIndex_IsBase(true);
        return vqobjectcleanuphandler->senderSignalIndex();
    } else {
        return vqobjectcleanuphandler->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnSenderSignalIndex(const QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_SenderSignalIndex_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QObjectCleanupHandler_Receivers(const QObjectCleanupHandler* self, const char* signal) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        return vqobjectcleanuphandler->receivers(signal);
    } else {
        return vqobjectcleanuphandler->receivers(signal);
    }
}

// Base class handler implementation
int QObjectCleanupHandler_QBaseReceivers(const QObjectCleanupHandler* self, const char* signal) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_Receivers_IsBase(true);
        return vqobjectcleanuphandler->receivers(signal);
    } else {
        return vqobjectcleanuphandler->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnReceivers(const QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_Receivers_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QObjectCleanupHandler_IsSignalConnected(const QObjectCleanupHandler* self, QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        return vqobjectcleanuphandler->isSignalConnected(*signal);
    } else {
        return vqobjectcleanuphandler->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QObjectCleanupHandler_QBaseIsSignalConnected(const QObjectCleanupHandler* self, QMetaMethod* signal) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_IsSignalConnected_IsBase(true);
        return vqobjectcleanuphandler->isSignalConnected(*signal);
    } else {
        return vqobjectcleanuphandler->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObjectCleanupHandler_OnIsSignalConnected(const QObjectCleanupHandler* self, intptr_t slot) {
    if (auto* vqobjectcleanuphandler = const_cast<VirtualQObjectCleanupHandler*>(dynamic_cast<const VirtualQObjectCleanupHandler*>(self))) {
        vqobjectcleanuphandler->setQObjectCleanupHandler_IsSignalConnected_Callback(reinterpret_cast<VirtualQObjectCleanupHandler::QObjectCleanupHandler_IsSignalConnected_Callback>(slot));
    }
}

void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self) {
    delete self;
}

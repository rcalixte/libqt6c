#include <QAnyStringView>
#include <QAudioEngine>
#include <QAudioListener>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QQuaternion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QVector3D>
#include <qaudiolistener.h>
#include "libqaudiolistener.hpp"
#include "libqaudiolistener.hxx"

QAudioListener* QAudioListener_new(QAudioEngine* engine) {
    return new VirtualQAudioListener(engine);
}

void QAudioListener_SetPosition(QAudioListener* self, QVector3D* pos) {
    self->setPosition(*pos);
}

QVector3D* QAudioListener_Position(const QAudioListener* self) {
    return new QVector3D(self->position());
}

void QAudioListener_SetRotation(QAudioListener* self, QQuaternion* q) {
    self->setRotation(*q);
}

QQuaternion* QAudioListener_Rotation(const QAudioListener* self) {
    return new QQuaternion(self->rotation());
}

QAudioEngine* QAudioListener_Engine(const QAudioListener* self) {
    return self->engine();
}

QMetaObject* QAudioListener_MetaObject(const QAudioListener* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioListener_Metacast(QAudioListener* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioListener_Metacall(QAudioListener* self, int param1, int param2, void** param3) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAudioListener_OnMetacall(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_Metacall_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAudioListener_QBaseMetacall(QAudioListener* self, int param1, int param2, void** param3) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_Metacall_IsBase(true);
        return vqaudiolistener->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Derived class handler implementation
bool QAudioListener_Event(QAudioListener* self, QEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        return vqaudiolistener->event(event);
    } else {
        return vqaudiolistener->event(event);
    }
}

// Base class handler implementation
bool QAudioListener_QBaseEvent(QAudioListener* self, QEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_Event_IsBase(true);
        return vqaudiolistener->event(event);
    } else {
        return vqaudiolistener->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnEvent(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_Event_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioListener_EventFilter(QAudioListener* self, QObject* watched, QEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        return vqaudiolistener->eventFilter(watched, event);
    } else {
        return vqaudiolistener->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioListener_QBaseEventFilter(QAudioListener* self, QObject* watched, QEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_EventFilter_IsBase(true);
        return vqaudiolistener->eventFilter(watched, event);
    } else {
        return vqaudiolistener->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnEventFilter(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_EventFilter_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_TimerEvent(QAudioListener* self, QTimerEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->timerEvent(event);
    } else {
        vqaudiolistener->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioListener_QBaseTimerEvent(QAudioListener* self, QTimerEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_TimerEvent_IsBase(true);
        vqaudiolistener->timerEvent(event);
    } else {
        vqaudiolistener->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnTimerEvent(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_TimerEvent_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_ChildEvent(QAudioListener* self, QChildEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->childEvent(event);
    } else {
        vqaudiolistener->childEvent(event);
    }
}

// Base class handler implementation
void QAudioListener_QBaseChildEvent(QAudioListener* self, QChildEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_ChildEvent_IsBase(true);
        vqaudiolistener->childEvent(event);
    } else {
        vqaudiolistener->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnChildEvent(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_ChildEvent_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_CustomEvent(QAudioListener* self, QEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->customEvent(event);
    } else {
        vqaudiolistener->customEvent(event);
    }
}

// Base class handler implementation
void QAudioListener_QBaseCustomEvent(QAudioListener* self, QEvent* event) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_CustomEvent_IsBase(true);
        vqaudiolistener->customEvent(event);
    } else {
        vqaudiolistener->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnCustomEvent(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_CustomEvent_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_ConnectNotify(QAudioListener* self, QMetaMethod* signal) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->connectNotify(*signal);
    } else {
        vqaudiolistener->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioListener_QBaseConnectNotify(QAudioListener* self, QMetaMethod* signal) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_ConnectNotify_IsBase(true);
        vqaudiolistener->connectNotify(*signal);
    } else {
        vqaudiolistener->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnConnectNotify(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioListener_DisconnectNotify(QAudioListener* self, QMetaMethod* signal) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->disconnectNotify(*signal);
    } else {
        vqaudiolistener->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioListener_QBaseDisconnectNotify(QAudioListener* self, QMetaMethod* signal) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_DisconnectNotify_IsBase(true);
        vqaudiolistener->disconnectNotify(*signal);
    } else {
        vqaudiolistener->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnDisconnectNotify(QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = dynamic_cast<VirtualQAudioListener*>(self)) {
        vqaudiolistener->setQAudioListener_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioListener_Sender(const QAudioListener* self) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        return vqaudiolistener->sender();
    } else {
        return vqaudiolistener->sender();
    }
}

// Base class handler implementation
QObject* QAudioListener_QBaseSender(const QAudioListener* self) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        vqaudiolistener->setQAudioListener_Sender_IsBase(true);
        return vqaudiolistener->sender();
    } else {
        return vqaudiolistener->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnSender(const QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        vqaudiolistener->setQAudioListener_Sender_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioListener_SenderSignalIndex(const QAudioListener* self) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        return vqaudiolistener->senderSignalIndex();
    } else {
        return vqaudiolistener->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioListener_QBaseSenderSignalIndex(const QAudioListener* self) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        vqaudiolistener->setQAudioListener_SenderSignalIndex_IsBase(true);
        return vqaudiolistener->senderSignalIndex();
    } else {
        return vqaudiolistener->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnSenderSignalIndex(const QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        vqaudiolistener->setQAudioListener_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioListener_Receivers(const QAudioListener* self, const char* signal) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        return vqaudiolistener->receivers(signal);
    } else {
        return vqaudiolistener->receivers(signal);
    }
}

// Base class handler implementation
int QAudioListener_QBaseReceivers(const QAudioListener* self, const char* signal) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        vqaudiolistener->setQAudioListener_Receivers_IsBase(true);
        return vqaudiolistener->receivers(signal);
    } else {
        return vqaudiolistener->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnReceivers(const QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        vqaudiolistener->setQAudioListener_Receivers_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioListener_IsSignalConnected(const QAudioListener* self, QMetaMethod* signal) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        return vqaudiolistener->isSignalConnected(*signal);
    } else {
        return vqaudiolistener->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioListener_QBaseIsSignalConnected(const QAudioListener* self, QMetaMethod* signal) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        vqaudiolistener->setQAudioListener_IsSignalConnected_IsBase(true);
        return vqaudiolistener->isSignalConnected(*signal);
    } else {
        return vqaudiolistener->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioListener_OnIsSignalConnected(const QAudioListener* self, intptr_t slot) {
    if (auto* vqaudiolistener = const_cast<VirtualQAudioListener*>(dynamic_cast<const VirtualQAudioListener*>(self))) {
        vqaudiolistener->setQAudioListener_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioListener::QAudioListener_IsSignalConnected_Callback>(slot));
    }
}

void QAudioListener_Delete(QAudioListener* self) {
    delete self;
}

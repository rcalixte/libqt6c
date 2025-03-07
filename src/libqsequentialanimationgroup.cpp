#include <QAbstractAnimation>
#include <QAnimationGroup>
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
#include <QPauseAnimation>
#include <QSequentialAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qsequentialanimationgroup.h>
#include "libqsequentialanimationgroup.hpp"
#include "libqsequentialanimationgroup.hxx"

QSequentialAnimationGroup* QSequentialAnimationGroup_new() {
    return new VirtualQSequentialAnimationGroup();
}

QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent) {
    return new VirtualQSequentialAnimationGroup(parent);
}

QMetaObject* QSequentialAnimationGroup_MetaObject(const QSequentialAnimationGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSequentialAnimationGroup_Metacast(QSequentialAnimationGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSequentialAnimationGroup_Metacall(QSequentialAnimationGroup* self, int param1, int param2, void** param3) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSequentialAnimationGroup_OnMetacall(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Metacall_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSequentialAnimationGroup_QBaseMetacall(QSequentialAnimationGroup* self, int param1, int param2, void** param3) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Metacall_IsBase(true);
        return vqsequentialanimationgroup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSequentialAnimationGroup_Tr(const char* s) {
    QString _ret = QSequentialAnimationGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs) {
    return self->addPause(static_cast<int>(msecs));
}

QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs) {
    return self->insertPause(static_cast<int>(index), static_cast<int>(msecs));
}

QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self) {
    return self->currentAnimation();
}

void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current) {
    self->currentAnimationChanged(current);
}

void QSequentialAnimationGroup_Connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot) {
    void (*slotFunc)(QSequentialAnimationGroup*, QAbstractAnimation*) = reinterpret_cast<void (*)(QSequentialAnimationGroup*, QAbstractAnimation*)>(slot);
    QSequentialAnimationGroup::connect(self, &QSequentialAnimationGroup::currentAnimationChanged, [self, slotFunc](QAbstractAnimation* current) {
        QAbstractAnimation* sigval1 = current;
        slotFunc(self, sigval1);
    });
}

libqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c) {
    QString _ret = QSequentialAnimationGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSequentialAnimationGroup::tr(s, c, static_cast<int>(n));
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
int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->duration();
    } else {
        return vqsequentialanimationgroup->duration();
    }
}

// Base class handler implementation
int QSequentialAnimationGroup_QBaseDuration(const QSequentialAnimationGroup* self) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Duration_IsBase(true);
        return vqsequentialanimationgroup->duration();
    } else {
        return vqsequentialanimationgroup->duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnDuration(const QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Duration_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSequentialAnimationGroup_Event(QSequentialAnimationGroup* self, QEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        return vqsequentialanimationgroup->event(event);
    } else {
        return vqsequentialanimationgroup->event(event);
    }
}

// Base class handler implementation
bool QSequentialAnimationGroup_QBaseEvent(QSequentialAnimationGroup* self, QEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Event_IsBase(true);
        return vqsequentialanimationgroup->event(event);
    } else {
        return vqsequentialanimationgroup->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Event_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateCurrentTime(QSequentialAnimationGroup* self, int param1) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->updateCurrentTime(static_cast<int>(param1));
    } else {
        vqsequentialanimationgroup->updateCurrentTime(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateCurrentTime(QSequentialAnimationGroup* self, int param1) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateCurrentTime_IsBase(true);
        vqsequentialanimationgroup->updateCurrentTime(static_cast<int>(param1));
    } else {
        vqsequentialanimationgroup->updateCurrentTime(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateCurrentTime(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateState(QSequentialAnimationGroup* self, int newState, int oldState) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateState(QSequentialAnimationGroup* self, int newState, int oldState) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateState_IsBase(true);
        vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqsequentialanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateState(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateState_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_UpdateDirection(QSequentialAnimationGroup* self, int direction) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseUpdateDirection(QSequentialAnimationGroup* self, int direction) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateDirection_IsBase(true);
        vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqsequentialanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnUpdateDirection(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_UpdateDirection_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSequentialAnimationGroup_EventFilter(QSequentialAnimationGroup* self, QObject* watched, QEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        return vqsequentialanimationgroup->eventFilter(watched, event);
    } else {
        return vqsequentialanimationgroup->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSequentialAnimationGroup_QBaseEventFilter(QSequentialAnimationGroup* self, QObject* watched, QEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_EventFilter_IsBase(true);
        return vqsequentialanimationgroup->eventFilter(watched, event);
    } else {
        return vqsequentialanimationgroup->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnEventFilter(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_EventFilter_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_TimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->timerEvent(event);
    } else {
        vqsequentialanimationgroup->timerEvent(event);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseTimerEvent(QSequentialAnimationGroup* self, QTimerEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_TimerEvent_IsBase(true);
        vqsequentialanimationgroup->timerEvent(event);
    } else {
        vqsequentialanimationgroup->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnTimerEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_TimerEvent_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_ChildEvent(QSequentialAnimationGroup* self, QChildEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->childEvent(event);
    } else {
        vqsequentialanimationgroup->childEvent(event);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseChildEvent(QSequentialAnimationGroup* self, QChildEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_ChildEvent_IsBase(true);
        vqsequentialanimationgroup->childEvent(event);
    } else {
        vqsequentialanimationgroup->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnChildEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_ChildEvent_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_CustomEvent(QSequentialAnimationGroup* self, QEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->customEvent(event);
    } else {
        vqsequentialanimationgroup->customEvent(event);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseCustomEvent(QSequentialAnimationGroup* self, QEvent* event) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_CustomEvent_IsBase(true);
        vqsequentialanimationgroup->customEvent(event);
    } else {
        vqsequentialanimationgroup->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnCustomEvent(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_CustomEvent_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_ConnectNotify(QSequentialAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->connectNotify(*signal);
    } else {
        vqsequentialanimationgroup->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseConnectNotify(QSequentialAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_ConnectNotify_IsBase(true);
        vqsequentialanimationgroup->connectNotify(*signal);
    } else {
        vqsequentialanimationgroup->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnConnectNotify(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_ConnectNotify_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSequentialAnimationGroup_DisconnectNotify(QSequentialAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->disconnectNotify(*signal);
    } else {
        vqsequentialanimationgroup->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSequentialAnimationGroup_QBaseDisconnectNotify(QSequentialAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_DisconnectNotify_IsBase(true);
        vqsequentialanimationgroup->disconnectNotify(*signal);
    } else {
        vqsequentialanimationgroup->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnDisconnectNotify(QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = dynamic_cast<VirtualQSequentialAnimationGroup*>(self)) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_DisconnectNotify_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSequentialAnimationGroup_Sender(const QSequentialAnimationGroup* self) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->sender();
    } else {
        return vqsequentialanimationgroup->sender();
    }
}

// Base class handler implementation
QObject* QSequentialAnimationGroup_QBaseSender(const QSequentialAnimationGroup* self) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Sender_IsBase(true);
        return vqsequentialanimationgroup->sender();
    } else {
        return vqsequentialanimationgroup->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnSender(const QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Sender_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSequentialAnimationGroup_SenderSignalIndex(const QSequentialAnimationGroup* self) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->senderSignalIndex();
    } else {
        return vqsequentialanimationgroup->senderSignalIndex();
    }
}

// Base class handler implementation
int QSequentialAnimationGroup_QBaseSenderSignalIndex(const QSequentialAnimationGroup* self) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_SenderSignalIndex_IsBase(true);
        return vqsequentialanimationgroup->senderSignalIndex();
    } else {
        return vqsequentialanimationgroup->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnSenderSignalIndex(const QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSequentialAnimationGroup_Receivers(const QSequentialAnimationGroup* self, const char* signal) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->receivers(signal);
    } else {
        return vqsequentialanimationgroup->receivers(signal);
    }
}

// Base class handler implementation
int QSequentialAnimationGroup_QBaseReceivers(const QSequentialAnimationGroup* self, const char* signal) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Receivers_IsBase(true);
        return vqsequentialanimationgroup->receivers(signal);
    } else {
        return vqsequentialanimationgroup->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnReceivers(const QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_Receivers_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSequentialAnimationGroup_IsSignalConnected(const QSequentialAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        return vqsequentialanimationgroup->isSignalConnected(*signal);
    } else {
        return vqsequentialanimationgroup->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSequentialAnimationGroup_QBaseIsSignalConnected(const QSequentialAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_IsSignalConnected_IsBase(true);
        return vqsequentialanimationgroup->isSignalConnected(*signal);
    } else {
        return vqsequentialanimationgroup->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSequentialAnimationGroup_OnIsSignalConnected(const QSequentialAnimationGroup* self, intptr_t slot) {
    if (auto* vqsequentialanimationgroup = const_cast<VirtualQSequentialAnimationGroup*>(dynamic_cast<const VirtualQSequentialAnimationGroup*>(self))) {
        vqsequentialanimationgroup->setQSequentialAnimationGroup_IsSignalConnected_Callback(reinterpret_cast<VirtualQSequentialAnimationGroup::QSequentialAnimationGroup_IsSignalConnected_Callback>(slot));
    }
}

void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self) {
    delete self;
}

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
#include <QParallelAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qparallelanimationgroup.h>
#include "libqparallelanimationgroup.hpp"
#include "libqparallelanimationgroup.hxx"

QParallelAnimationGroup* QParallelAnimationGroup_new() {
    return new VirtualQParallelAnimationGroup();
}

QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent) {
    return new VirtualQParallelAnimationGroup(parent);
}

QMetaObject* QParallelAnimationGroup_MetaObject(const QParallelAnimationGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QParallelAnimationGroup_Metacast(QParallelAnimationGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QParallelAnimationGroup_Metacall(QParallelAnimationGroup* self, int param1, int param2, void** param3) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QParallelAnimationGroup_OnMetacall(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Metacall_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QParallelAnimationGroup_QBaseMetacall(QParallelAnimationGroup* self, int param1, int param2, void** param3) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Metacall_IsBase(true);
        return vqparallelanimationgroup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QParallelAnimationGroup_Tr(const char* s) {
    QString _ret = QParallelAnimationGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QParallelAnimationGroup_Tr2(const char* s, const char* c) {
    QString _ret = QParallelAnimationGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QParallelAnimationGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QParallelAnimationGroup::tr(s, c, static_cast<int>(n));
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
int QParallelAnimationGroup_Duration(const QParallelAnimationGroup* self) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->duration();
    } else {
        return vqparallelanimationgroup->duration();
    }
}

// Base class handler implementation
int QParallelAnimationGroup_QBaseDuration(const QParallelAnimationGroup* self) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Duration_IsBase(true);
        return vqparallelanimationgroup->duration();
    } else {
        return vqparallelanimationgroup->duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnDuration(const QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Duration_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
bool QParallelAnimationGroup_Event(QParallelAnimationGroup* self, QEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        return vqparallelanimationgroup->event(event);
    } else {
        return vqparallelanimationgroup->event(event);
    }
}

// Base class handler implementation
bool QParallelAnimationGroup_QBaseEvent(QParallelAnimationGroup* self, QEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Event_IsBase(true);
        return vqparallelanimationgroup->event(event);
    } else {
        return vqparallelanimationgroup->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnEvent(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Event_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateCurrentTime(QParallelAnimationGroup* self, int currentTime) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        vqparallelanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateCurrentTime(QParallelAnimationGroup* self, int currentTime) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateCurrentTime_IsBase(true);
        vqparallelanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        vqparallelanimationgroup->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateCurrentTime(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateState(QParallelAnimationGroup* self, int newState, int oldState) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateState(QParallelAnimationGroup* self, int newState, int oldState) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateState_IsBase(true);
        vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqparallelanimationgroup->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateState(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateState_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_UpdateDirection(QParallelAnimationGroup* self, int direction) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseUpdateDirection(QParallelAnimationGroup* self, int direction) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateDirection_IsBase(true);
        vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqparallelanimationgroup->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnUpdateDirection(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_UpdateDirection_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QParallelAnimationGroup_EventFilter(QParallelAnimationGroup* self, QObject* watched, QEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        return vqparallelanimationgroup->eventFilter(watched, event);
    } else {
        return vqparallelanimationgroup->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QParallelAnimationGroup_QBaseEventFilter(QParallelAnimationGroup* self, QObject* watched, QEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_EventFilter_IsBase(true);
        return vqparallelanimationgroup->eventFilter(watched, event);
    } else {
        return vqparallelanimationgroup->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnEventFilter(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_EventFilter_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_TimerEvent(QParallelAnimationGroup* self, QTimerEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->timerEvent(event);
    } else {
        vqparallelanimationgroup->timerEvent(event);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseTimerEvent(QParallelAnimationGroup* self, QTimerEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_TimerEvent_IsBase(true);
        vqparallelanimationgroup->timerEvent(event);
    } else {
        vqparallelanimationgroup->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnTimerEvent(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_TimerEvent_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_ChildEvent(QParallelAnimationGroup* self, QChildEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->childEvent(event);
    } else {
        vqparallelanimationgroup->childEvent(event);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseChildEvent(QParallelAnimationGroup* self, QChildEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_ChildEvent_IsBase(true);
        vqparallelanimationgroup->childEvent(event);
    } else {
        vqparallelanimationgroup->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnChildEvent(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_ChildEvent_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_CustomEvent(QParallelAnimationGroup* self, QEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->customEvent(event);
    } else {
        vqparallelanimationgroup->customEvent(event);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseCustomEvent(QParallelAnimationGroup* self, QEvent* event) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_CustomEvent_IsBase(true);
        vqparallelanimationgroup->customEvent(event);
    } else {
        vqparallelanimationgroup->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnCustomEvent(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_CustomEvent_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_ConnectNotify(QParallelAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->connectNotify(*signal);
    } else {
        vqparallelanimationgroup->connectNotify(*signal);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseConnectNotify(QParallelAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_ConnectNotify_IsBase(true);
        vqparallelanimationgroup->connectNotify(*signal);
    } else {
        vqparallelanimationgroup->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnConnectNotify(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_ConnectNotify_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QParallelAnimationGroup_DisconnectNotify(QParallelAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->disconnectNotify(*signal);
    } else {
        vqparallelanimationgroup->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QParallelAnimationGroup_QBaseDisconnectNotify(QParallelAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_DisconnectNotify_IsBase(true);
        vqparallelanimationgroup->disconnectNotify(*signal);
    } else {
        vqparallelanimationgroup->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnDisconnectNotify(QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = dynamic_cast<VirtualQParallelAnimationGroup*>(self)) {
        vqparallelanimationgroup->setQParallelAnimationGroup_DisconnectNotify_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QParallelAnimationGroup_Sender(const QParallelAnimationGroup* self) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->sender();
    } else {
        return vqparallelanimationgroup->sender();
    }
}

// Base class handler implementation
QObject* QParallelAnimationGroup_QBaseSender(const QParallelAnimationGroup* self) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Sender_IsBase(true);
        return vqparallelanimationgroup->sender();
    } else {
        return vqparallelanimationgroup->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnSender(const QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Sender_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QParallelAnimationGroup_SenderSignalIndex(const QParallelAnimationGroup* self) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->senderSignalIndex();
    } else {
        return vqparallelanimationgroup->senderSignalIndex();
    }
}

// Base class handler implementation
int QParallelAnimationGroup_QBaseSenderSignalIndex(const QParallelAnimationGroup* self) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_SenderSignalIndex_IsBase(true);
        return vqparallelanimationgroup->senderSignalIndex();
    } else {
        return vqparallelanimationgroup->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnSenderSignalIndex(const QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QParallelAnimationGroup_Receivers(const QParallelAnimationGroup* self, const char* signal) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->receivers(signal);
    } else {
        return vqparallelanimationgroup->receivers(signal);
    }
}

// Base class handler implementation
int QParallelAnimationGroup_QBaseReceivers(const QParallelAnimationGroup* self, const char* signal) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Receivers_IsBase(true);
        return vqparallelanimationgroup->receivers(signal);
    } else {
        return vqparallelanimationgroup->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnReceivers(const QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_Receivers_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QParallelAnimationGroup_IsSignalConnected(const QParallelAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        return vqparallelanimationgroup->isSignalConnected(*signal);
    } else {
        return vqparallelanimationgroup->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QParallelAnimationGroup_QBaseIsSignalConnected(const QParallelAnimationGroup* self, QMetaMethod* signal) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_IsSignalConnected_IsBase(true);
        return vqparallelanimationgroup->isSignalConnected(*signal);
    } else {
        return vqparallelanimationgroup->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QParallelAnimationGroup_OnIsSignalConnected(const QParallelAnimationGroup* self, intptr_t slot) {
    if (auto* vqparallelanimationgroup = const_cast<VirtualQParallelAnimationGroup*>(dynamic_cast<const VirtualQParallelAnimationGroup*>(self))) {
        vqparallelanimationgroup->setQParallelAnimationGroup_IsSignalConnected_Callback(reinterpret_cast<VirtualQParallelAnimationGroup::QParallelAnimationGroup_IsSignalConnected_Callback>(slot));
    }
}

void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self) {
    delete self;
}

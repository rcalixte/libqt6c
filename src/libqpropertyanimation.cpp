#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPair>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QVariantAnimation>
#include <qpropertyanimation.h>
#include "libqpropertyanimation.hpp"
#include "libqpropertyanimation.hxx"

QPropertyAnimation* QPropertyAnimation_new() {
    return new VirtualQPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, libqt_string propertyName) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    return new VirtualQPropertyAnimation(target, propertyName_QByteArray);
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
    return new VirtualQPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, libqt_string propertyName, QObject* parent) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    return new VirtualQPropertyAnimation(target, propertyName_QByteArray, parent);
}

QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPropertyAnimation_Metacast(QPropertyAnimation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPropertyAnimation_Metacall(QPropertyAnimation* self, int param1, int param2, void** param3) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPropertyAnimation_OnMetacall(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_Metacall_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPropertyAnimation_QBaseMetacall(QPropertyAnimation* self, int param1, int param2, void** param3) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_Metacall_IsBase(true);
        return vqpropertyanimation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPropertyAnimation_Tr(const char* s) {
    QString _ret = QPropertyAnimation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self) {
    return self->targetObject();
}

void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target) {
    self->setTargetObject(target);
}

libqt_string QPropertyAnimation_PropertyName(const QPropertyAnimation* self) {
    QByteArray _qb = self->propertyName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, libqt_string propertyName) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    self->setPropertyName(propertyName_QByteArray);
}

libqt_string QPropertyAnimation_Tr2(const char* s, const char* c) {
    QString _ret = QPropertyAnimation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPropertyAnimation_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPropertyAnimation::tr(s, c, static_cast<int>(n));
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
bool QPropertyAnimation_Event(QPropertyAnimation* self, QEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        return vqpropertyanimation->event(event);
    } else {
        return vqpropertyanimation->event(event);
    }
}

// Base class handler implementation
bool QPropertyAnimation_QBaseEvent(QPropertyAnimation* self, QEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_Event_IsBase(true);
        return vqpropertyanimation->event(event);
    } else {
        return vqpropertyanimation->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnEvent(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_Event_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_UpdateCurrentValue(QPropertyAnimation* self, QVariant* value) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->updateCurrentValue(*value);
    } else {
        vqpropertyanimation->updateCurrentValue(*value);
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseUpdateCurrentValue(QPropertyAnimation* self, QVariant* value) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_UpdateCurrentValue_IsBase(true);
        vqpropertyanimation->updateCurrentValue(*value);
    } else {
        vqpropertyanimation->updateCurrentValue(*value);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateCurrentValue(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_UpdateCurrentValue_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateCurrentValue_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_UpdateState(QPropertyAnimation* self, int newState, int oldState) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqpropertyanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseUpdateState(QPropertyAnimation* self, int newState, int oldState) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_UpdateState_IsBase(true);
        vqpropertyanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqpropertyanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateState(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_UpdateState_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
int QPropertyAnimation_Duration(const QPropertyAnimation* self) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        return vqpropertyanimation->duration();
    } else {
        return vqpropertyanimation->duration();
    }
}

// Base class handler implementation
int QPropertyAnimation_QBaseDuration(const QPropertyAnimation* self) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_Duration_IsBase(true);
        return vqpropertyanimation->duration();
    } else {
        return vqpropertyanimation->duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnDuration(const QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_Duration_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_UpdateCurrentTime(QPropertyAnimation* self, int param1) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->updateCurrentTime(static_cast<int>(param1));
    } else {
        vqpropertyanimation->updateCurrentTime(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseUpdateCurrentTime(QPropertyAnimation* self, int param1) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_UpdateCurrentTime_IsBase(true);
        vqpropertyanimation->updateCurrentTime(static_cast<int>(param1));
    } else {
        vqpropertyanimation->updateCurrentTime(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateCurrentTime(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPropertyAnimation_Interpolated(const QPropertyAnimation* self, QVariant* from, QVariant* to, double progress) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        return new QVariant(vqpropertyanimation->interpolated(*from, *to, static_cast<qreal>(progress)));
    }
    return {};
}

// Base class handler implementation
QVariant* QPropertyAnimation_QBaseInterpolated(const QPropertyAnimation* self, QVariant* from, QVariant* to, double progress) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_Interpolated_IsBase(true);
        return new QVariant(vqpropertyanimation->interpolated(*from, *to, static_cast<qreal>(progress)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnInterpolated(const QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_Interpolated_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Interpolated_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_UpdateDirection(QPropertyAnimation* self, int direction) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqpropertyanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseUpdateDirection(QPropertyAnimation* self, int direction) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_UpdateDirection_IsBase(true);
        vqpropertyanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqpropertyanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnUpdateDirection(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_UpdateDirection_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPropertyAnimation_EventFilter(QPropertyAnimation* self, QObject* watched, QEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        return vqpropertyanimation->eventFilter(watched, event);
    } else {
        return vqpropertyanimation->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPropertyAnimation_QBaseEventFilter(QPropertyAnimation* self, QObject* watched, QEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_EventFilter_IsBase(true);
        return vqpropertyanimation->eventFilter(watched, event);
    } else {
        return vqpropertyanimation->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnEventFilter(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_EventFilter_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_TimerEvent(QPropertyAnimation* self, QTimerEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->timerEvent(event);
    } else {
        vqpropertyanimation->timerEvent(event);
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseTimerEvent(QPropertyAnimation* self, QTimerEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_TimerEvent_IsBase(true);
        vqpropertyanimation->timerEvent(event);
    } else {
        vqpropertyanimation->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnTimerEvent(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_TimerEvent_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_ChildEvent(QPropertyAnimation* self, QChildEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->childEvent(event);
    } else {
        vqpropertyanimation->childEvent(event);
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseChildEvent(QPropertyAnimation* self, QChildEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_ChildEvent_IsBase(true);
        vqpropertyanimation->childEvent(event);
    } else {
        vqpropertyanimation->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnChildEvent(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_ChildEvent_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_CustomEvent(QPropertyAnimation* self, QEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->customEvent(event);
    } else {
        vqpropertyanimation->customEvent(event);
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseCustomEvent(QPropertyAnimation* self, QEvent* event) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_CustomEvent_IsBase(true);
        vqpropertyanimation->customEvent(event);
    } else {
        vqpropertyanimation->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnCustomEvent(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_CustomEvent_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_ConnectNotify(QPropertyAnimation* self, QMetaMethod* signal) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->connectNotify(*signal);
    } else {
        vqpropertyanimation->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseConnectNotify(QPropertyAnimation* self, QMetaMethod* signal) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_ConnectNotify_IsBase(true);
        vqpropertyanimation->connectNotify(*signal);
    } else {
        vqpropertyanimation->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnConnectNotify(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_ConnectNotify_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPropertyAnimation_DisconnectNotify(QPropertyAnimation* self, QMetaMethod* signal) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->disconnectNotify(*signal);
    } else {
        vqpropertyanimation->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPropertyAnimation_QBaseDisconnectNotify(QPropertyAnimation* self, QMetaMethod* signal) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_DisconnectNotify_IsBase(true);
        vqpropertyanimation->disconnectNotify(*signal);
    } else {
        vqpropertyanimation->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnDisconnectNotify(QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = dynamic_cast<VirtualQPropertyAnimation*>(self)) {
        vqpropertyanimation->setQPropertyAnimation_DisconnectNotify_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPropertyAnimation_Sender(const QPropertyAnimation* self) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        return vqpropertyanimation->sender();
    } else {
        return vqpropertyanimation->sender();
    }
}

// Base class handler implementation
QObject* QPropertyAnimation_QBaseSender(const QPropertyAnimation* self) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_Sender_IsBase(true);
        return vqpropertyanimation->sender();
    } else {
        return vqpropertyanimation->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnSender(const QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_Sender_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPropertyAnimation_SenderSignalIndex(const QPropertyAnimation* self) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        return vqpropertyanimation->senderSignalIndex();
    } else {
        return vqpropertyanimation->senderSignalIndex();
    }
}

// Base class handler implementation
int QPropertyAnimation_QBaseSenderSignalIndex(const QPropertyAnimation* self) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_SenderSignalIndex_IsBase(true);
        return vqpropertyanimation->senderSignalIndex();
    } else {
        return vqpropertyanimation->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnSenderSignalIndex(const QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPropertyAnimation_Receivers(const QPropertyAnimation* self, const char* signal) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        return vqpropertyanimation->receivers(signal);
    } else {
        return vqpropertyanimation->receivers(signal);
    }
}

// Base class handler implementation
int QPropertyAnimation_QBaseReceivers(const QPropertyAnimation* self, const char* signal) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_Receivers_IsBase(true);
        return vqpropertyanimation->receivers(signal);
    } else {
        return vqpropertyanimation->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnReceivers(const QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_Receivers_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPropertyAnimation_IsSignalConnected(const QPropertyAnimation* self, QMetaMethod* signal) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        return vqpropertyanimation->isSignalConnected(*signal);
    } else {
        return vqpropertyanimation->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPropertyAnimation_QBaseIsSignalConnected(const QPropertyAnimation* self, QMetaMethod* signal) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_IsSignalConnected_IsBase(true);
        return vqpropertyanimation->isSignalConnected(*signal);
    } else {
        return vqpropertyanimation->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPropertyAnimation_OnIsSignalConnected(const QPropertyAnimation* self, intptr_t slot) {
    if (auto* vqpropertyanimation = const_cast<VirtualQPropertyAnimation*>(dynamic_cast<const VirtualQPropertyAnimation*>(self))) {
        vqpropertyanimation->setQPropertyAnimation_IsSignalConnected_Callback(reinterpret_cast<VirtualQPropertyAnimation::QPropertyAnimation_IsSignalConnected_Callback>(slot));
    }
}

void QPropertyAnimation_Delete(QPropertyAnimation* self) {
    delete self;
}

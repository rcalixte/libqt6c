#include <QAbstractAnimation>
#include <QAnimationDriver>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractanimation.h>
#include "libqabstractanimation.hpp"
#include "libqabstractanimation.hxx"

QAbstractAnimation* QAbstractAnimation_new() {
    return new VirtualQAbstractAnimation();
}

QAbstractAnimation* QAbstractAnimation_new2(QObject* parent) {
    return new VirtualQAbstractAnimation(parent);
}

QMetaObject* QAbstractAnimation_MetaObject(const QAbstractAnimation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractAnimation_Metacast(QAbstractAnimation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractAnimation_Metacall(QAbstractAnimation* self, int param1, int param2, void** param3) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractAnimation_OnMetacall(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_Metacall_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractAnimation_QBaseMetacall(QAbstractAnimation* self, int param1, int param2, void** param3) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_Metacall_IsBase(true);
        return vqabstractanimation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractAnimation_Tr(const char* s) {
    QString _ret = QAbstractAnimation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAbstractAnimation_State(const QAbstractAnimation* self) {
    return static_cast<int>(self->state());
}

QAnimationGroup* QAbstractAnimation_Group(const QAbstractAnimation* self) {
    return self->group();
}

int QAbstractAnimation_Direction(const QAbstractAnimation* self) {
    return static_cast<int>(self->direction());
}

void QAbstractAnimation_SetDirection(QAbstractAnimation* self, int direction) {
    self->setDirection(static_cast<QAbstractAnimation::Direction>(direction));
}

int QAbstractAnimation_CurrentTime(const QAbstractAnimation* self) {
    return self->currentTime();
}

int QAbstractAnimation_CurrentLoopTime(const QAbstractAnimation* self) {
    return self->currentLoopTime();
}

int QAbstractAnimation_LoopCount(const QAbstractAnimation* self) {
    return self->loopCount();
}

void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount) {
    self->setLoopCount(static_cast<int>(loopCount));
}

int QAbstractAnimation_CurrentLoop(const QAbstractAnimation* self) {
    return self->currentLoop();
}

int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self) {
    return self->totalDuration();
}

void QAbstractAnimation_Finished(QAbstractAnimation* self) {
    self->finished();
}

void QAbstractAnimation_Connect_Finished(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*) = reinterpret_cast<void (*)(QAbstractAnimation*)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState) {
    self->stateChanged(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}

void QAbstractAnimation_Connect_StateChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int, int)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::stateChanged, [self, slotFunc](QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
        int sigval1 = static_cast<int>(newState);
        int sigval2 = static_cast<int>(oldState);
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop) {
    self->currentLoopChanged(static_cast<int>(currentLoop));
}

void QAbstractAnimation_Connect_CurrentLoopChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::currentLoopChanged, [self, slotFunc](int currentLoop) {
        int sigval1 = currentLoop;
        slotFunc(self, sigval1);
    });
}

void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1) {
    self->directionChanged(static_cast<QAbstractAnimation::Direction>(param1));
}

void QAbstractAnimation_Connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot) {
    void (*slotFunc)(QAbstractAnimation*, int) = reinterpret_cast<void (*)(QAbstractAnimation*, int)>(slot);
    QAbstractAnimation::connect(self, &QAbstractAnimation::directionChanged, [self, slotFunc](QAbstractAnimation::Direction param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QAbstractAnimation_Start(QAbstractAnimation* self) {
    self->start();
}

void QAbstractAnimation_Pause(QAbstractAnimation* self) {
    self->pause();
}

void QAbstractAnimation_Resume(QAbstractAnimation* self) {
    self->resume();
}

void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused) {
    self->setPaused(paused);
}

void QAbstractAnimation_Stop(QAbstractAnimation* self) {
    self->stop();
}

void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs) {
    self->setCurrentTime(static_cast<int>(msecs));
}

libqt_string QAbstractAnimation_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractAnimation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractAnimation_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractAnimation::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractAnimation_Start1(QAbstractAnimation* self, int policy) {
    self->start(static_cast<QAbstractAnimation::DeletionPolicy>(policy));
}

// Derived class handler implementation
int QAbstractAnimation_Duration(const QAbstractAnimation* self) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->duration();
    } else {
        return vqabstractanimation->duration();
    }
}

// Base class handler implementation
int QAbstractAnimation_QBaseDuration(const QAbstractAnimation* self) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_Duration_IsBase(true);
        return vqabstractanimation->duration();
    } else {
        return vqabstractanimation->duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnDuration(const QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_Duration_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractAnimation_Event(QAbstractAnimation* self, QEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        return vqabstractanimation->event(event);
    } else {
        return vqabstractanimation->event(event);
    }
}

// Base class handler implementation
bool QAbstractAnimation_QBaseEvent(QAbstractAnimation* self, QEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_Event_IsBase(true);
        return vqabstractanimation->event(event);
    } else {
        return vqabstractanimation->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnEvent(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_Event_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_UpdateCurrentTime(QAbstractAnimation* self, int currentTime) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        vqabstractanimation->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateCurrentTime(QAbstractAnimation* self, int currentTime) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_UpdateCurrentTime_IsBase(true);
        vqabstractanimation->updateCurrentTime(static_cast<int>(currentTime));
    } else {
        vqabstractanimation->updateCurrentTime(static_cast<int>(currentTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateCurrentTime(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_UpdateState(QAbstractAnimation* self, int newState, int oldState) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateState(QAbstractAnimation* self, int newState, int oldState) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_UpdateState_IsBase(true);
        vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqabstractanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateState(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_UpdateState_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_UpdateDirection(QAbstractAnimation* self, int direction) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseUpdateDirection(QAbstractAnimation* self, int direction) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_UpdateDirection_IsBase(true);
        vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqabstractanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnUpdateDirection(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_UpdateDirection_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractAnimation_EventFilter(QAbstractAnimation* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        return vqabstractanimation->eventFilter(watched, event);
    } else {
        return vqabstractanimation->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractAnimation_QBaseEventFilter(QAbstractAnimation* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_EventFilter_IsBase(true);
        return vqabstractanimation->eventFilter(watched, event);
    } else {
        return vqabstractanimation->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnEventFilter(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_EventFilter_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_TimerEvent(QAbstractAnimation* self, QTimerEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->timerEvent(event);
    } else {
        vqabstractanimation->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseTimerEvent(QAbstractAnimation* self, QTimerEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_TimerEvent_IsBase(true);
        vqabstractanimation->timerEvent(event);
    } else {
        vqabstractanimation->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnTimerEvent(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_ChildEvent(QAbstractAnimation* self, QChildEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->childEvent(event);
    } else {
        vqabstractanimation->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseChildEvent(QAbstractAnimation* self, QChildEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_ChildEvent_IsBase(true);
        vqabstractanimation->childEvent(event);
    } else {
        vqabstractanimation->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnChildEvent(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_CustomEvent(QAbstractAnimation* self, QEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->customEvent(event);
    } else {
        vqabstractanimation->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseCustomEvent(QAbstractAnimation* self, QEvent* event) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_CustomEvent_IsBase(true);
        vqabstractanimation->customEvent(event);
    } else {
        vqabstractanimation->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnCustomEvent(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_ConnectNotify(QAbstractAnimation* self, QMetaMethod* signal) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->connectNotify(*signal);
    } else {
        vqabstractanimation->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseConnectNotify(QAbstractAnimation* self, QMetaMethod* signal) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_ConnectNotify_IsBase(true);
        vqabstractanimation->connectNotify(*signal);
    } else {
        vqabstractanimation->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnConnectNotify(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractAnimation_DisconnectNotify(QAbstractAnimation* self, QMetaMethod* signal) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->disconnectNotify(*signal);
    } else {
        vqabstractanimation->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractAnimation_QBaseDisconnectNotify(QAbstractAnimation* self, QMetaMethod* signal) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_DisconnectNotify_IsBase(true);
        vqabstractanimation->disconnectNotify(*signal);
    } else {
        vqabstractanimation->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnDisconnectNotify(QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = dynamic_cast<VirtualQAbstractAnimation*>(self)) {
        vqabstractanimation->setQAbstractAnimation_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractAnimation_Sender(const QAbstractAnimation* self) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->sender();
    } else {
        return vqabstractanimation->sender();
    }
}

// Base class handler implementation
QObject* QAbstractAnimation_QBaseSender(const QAbstractAnimation* self) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_Sender_IsBase(true);
        return vqabstractanimation->sender();
    } else {
        return vqabstractanimation->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnSender(const QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_Sender_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractAnimation_SenderSignalIndex(const QAbstractAnimation* self) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->senderSignalIndex();
    } else {
        return vqabstractanimation->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractAnimation_QBaseSenderSignalIndex(const QAbstractAnimation* self) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_SenderSignalIndex_IsBase(true);
        return vqabstractanimation->senderSignalIndex();
    } else {
        return vqabstractanimation->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnSenderSignalIndex(const QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractAnimation_Receivers(const QAbstractAnimation* self, const char* signal) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->receivers(signal);
    } else {
        return vqabstractanimation->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractAnimation_QBaseReceivers(const QAbstractAnimation* self, const char* signal) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_Receivers_IsBase(true);
        return vqabstractanimation->receivers(signal);
    } else {
        return vqabstractanimation->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnReceivers(const QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_Receivers_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractAnimation_IsSignalConnected(const QAbstractAnimation* self, QMetaMethod* signal) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        return vqabstractanimation->isSignalConnected(*signal);
    } else {
        return vqabstractanimation->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractAnimation_QBaseIsSignalConnected(const QAbstractAnimation* self, QMetaMethod* signal) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_IsSignalConnected_IsBase(true);
        return vqabstractanimation->isSignalConnected(*signal);
    } else {
        return vqabstractanimation->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractAnimation_OnIsSignalConnected(const QAbstractAnimation* self, intptr_t slot) {
    if (auto* vqabstractanimation = const_cast<VirtualQAbstractAnimation*>(dynamic_cast<const VirtualQAbstractAnimation*>(self))) {
        vqabstractanimation->setQAbstractAnimation_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractAnimation::QAbstractAnimation_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractAnimation_Delete(QAbstractAnimation* self) {
    delete self;
}

QAnimationDriver* QAnimationDriver_new() {
    return new VirtualQAnimationDriver();
}

QAnimationDriver* QAnimationDriver_new2(QObject* parent) {
    return new VirtualQAnimationDriver(parent);
}

QMetaObject* QAnimationDriver_MetaObject(const QAnimationDriver* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAnimationDriver_Metacast(QAnimationDriver* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAnimationDriver_Metacall(QAnimationDriver* self, int param1, int param2, void** param3) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAnimationDriver_OnMetacall(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Metacall_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAnimationDriver_QBaseMetacall(QAnimationDriver* self, int param1, int param2, void** param3) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Metacall_IsBase(true);
        return vqanimationdriver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAnimationDriver_Tr(const char* s) {
    QString _ret = QAnimationDriver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAnimationDriver_Install(QAnimationDriver* self) {
    self->install();
}

void QAnimationDriver_Uninstall(QAnimationDriver* self) {
    self->uninstall();
}

bool QAnimationDriver_IsRunning(const QAnimationDriver* self) {
    return self->isRunning();
}

void QAnimationDriver_Started(QAnimationDriver* self) {
    self->started();
}

void QAnimationDriver_Connect_Started(QAnimationDriver* self, intptr_t slot) {
    void (*slotFunc)(QAnimationDriver*) = reinterpret_cast<void (*)(QAnimationDriver*)>(slot);
    QAnimationDriver::connect(self, &QAnimationDriver::started, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAnimationDriver_Stopped(QAnimationDriver* self) {
    self->stopped();
}

void QAnimationDriver_Connect_Stopped(QAnimationDriver* self, intptr_t slot) {
    void (*slotFunc)(QAnimationDriver*) = reinterpret_cast<void (*)(QAnimationDriver*)>(slot);
    QAnimationDriver::connect(self, &QAnimationDriver::stopped, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAnimationDriver_Tr2(const char* s, const char* c) {
    QString _ret = QAnimationDriver::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAnimationDriver_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAnimationDriver::tr(s, c, static_cast<int>(n));
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
void QAnimationDriver_Advance(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->advance();
    } else {
        vqanimationdriver->advance();
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseAdvance(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Advance_IsBase(true);
        vqanimationdriver->advance();
    } else {
        vqanimationdriver->advance();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnAdvance(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Advance_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
long long QAnimationDriver_Elapsed(const QAnimationDriver* self) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return static_cast<long long>(vqanimationdriver->elapsed());
    } else {
        return static_cast<long long>(vqanimationdriver->elapsed());
    }
}

// Base class handler implementation
long long QAnimationDriver_QBaseElapsed(const QAnimationDriver* self) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_Elapsed_IsBase(true);
        return static_cast<long long>(vqanimationdriver->elapsed());
    } else {
        return static_cast<long long>(vqanimationdriver->elapsed());
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnElapsed(const QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_Elapsed_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Elapsed_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_Start(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->start();
    } else {
        vqanimationdriver->start();
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseStart(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Start_IsBase(true);
        vqanimationdriver->start();
    } else {
        vqanimationdriver->start();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnStart(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Start_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Start_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_Stop(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->stop();
    } else {
        vqanimationdriver->stop();
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseStop(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Stop_IsBase(true);
        vqanimationdriver->stop();
    } else {
        vqanimationdriver->stop();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnStop(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Stop_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Stop_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAnimationDriver_Event(QAnimationDriver* self, QEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        return vqanimationdriver->event(event);
    } else {
        return vqanimationdriver->event(event);
    }
}

// Base class handler implementation
bool QAnimationDriver_QBaseEvent(QAnimationDriver* self, QEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Event_IsBase(true);
        return vqanimationdriver->event(event);
    } else {
        return vqanimationdriver->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnEvent(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_Event_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAnimationDriver_EventFilter(QAnimationDriver* self, QObject* watched, QEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        return vqanimationdriver->eventFilter(watched, event);
    } else {
        return vqanimationdriver->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAnimationDriver_QBaseEventFilter(QAnimationDriver* self, QObject* watched, QEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_EventFilter_IsBase(true);
        return vqanimationdriver->eventFilter(watched, event);
    } else {
        return vqanimationdriver->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnEventFilter(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_EventFilter_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_TimerEvent(QAnimationDriver* self, QTimerEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->timerEvent(event);
    } else {
        vqanimationdriver->timerEvent(event);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseTimerEvent(QAnimationDriver* self, QTimerEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_TimerEvent_IsBase(true);
        vqanimationdriver->timerEvent(event);
    } else {
        vqanimationdriver->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnTimerEvent(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_TimerEvent_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_ChildEvent(QAnimationDriver* self, QChildEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->childEvent(event);
    } else {
        vqanimationdriver->childEvent(event);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseChildEvent(QAnimationDriver* self, QChildEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_ChildEvent_IsBase(true);
        vqanimationdriver->childEvent(event);
    } else {
        vqanimationdriver->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnChildEvent(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_ChildEvent_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_CustomEvent(QAnimationDriver* self, QEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->customEvent(event);
    } else {
        vqanimationdriver->customEvent(event);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseCustomEvent(QAnimationDriver* self, QEvent* event) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_CustomEvent_IsBase(true);
        vqanimationdriver->customEvent(event);
    } else {
        vqanimationdriver->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnCustomEvent(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_CustomEvent_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_ConnectNotify(QAnimationDriver* self, QMetaMethod* signal) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->connectNotify(*signal);
    } else {
        vqanimationdriver->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseConnectNotify(QAnimationDriver* self, QMetaMethod* signal) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_ConnectNotify_IsBase(true);
        vqanimationdriver->connectNotify(*signal);
    } else {
        vqanimationdriver->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnConnectNotify(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_ConnectNotify_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_DisconnectNotify(QAnimationDriver* self, QMetaMethod* signal) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->disconnectNotify(*signal);
    } else {
        vqanimationdriver->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseDisconnectNotify(QAnimationDriver* self, QMetaMethod* signal) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_DisconnectNotify_IsBase(true);
        vqanimationdriver->disconnectNotify(*signal);
    } else {
        vqanimationdriver->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnDisconnectNotify(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_DisconnectNotify_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAnimationDriver_AdvanceAnimation(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->advanceAnimation();
    } else {
        vqanimationdriver->advanceAnimation();
    }
}

// Base class handler implementation
void QAnimationDriver_QBaseAdvanceAnimation(QAnimationDriver* self) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_AdvanceAnimation_IsBase(true);
        vqanimationdriver->advanceAnimation();
    } else {
        vqanimationdriver->advanceAnimation();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnAdvanceAnimation(QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = dynamic_cast<VirtualQAnimationDriver*>(self)) {
        vqanimationdriver->setQAnimationDriver_AdvanceAnimation_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_AdvanceAnimation_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAnimationDriver_Sender(const QAnimationDriver* self) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return vqanimationdriver->sender();
    } else {
        return vqanimationdriver->sender();
    }
}

// Base class handler implementation
QObject* QAnimationDriver_QBaseSender(const QAnimationDriver* self) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_Sender_IsBase(true);
        return vqanimationdriver->sender();
    } else {
        return vqanimationdriver->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnSender(const QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_Sender_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAnimationDriver_SenderSignalIndex(const QAnimationDriver* self) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return vqanimationdriver->senderSignalIndex();
    } else {
        return vqanimationdriver->senderSignalIndex();
    }
}

// Base class handler implementation
int QAnimationDriver_QBaseSenderSignalIndex(const QAnimationDriver* self) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_SenderSignalIndex_IsBase(true);
        return vqanimationdriver->senderSignalIndex();
    } else {
        return vqanimationdriver->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnSenderSignalIndex(const QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAnimationDriver_Receivers(const QAnimationDriver* self, const char* signal) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return vqanimationdriver->receivers(signal);
    } else {
        return vqanimationdriver->receivers(signal);
    }
}

// Base class handler implementation
int QAnimationDriver_QBaseReceivers(const QAnimationDriver* self, const char* signal) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_Receivers_IsBase(true);
        return vqanimationdriver->receivers(signal);
    } else {
        return vqanimationdriver->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnReceivers(const QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_Receivers_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAnimationDriver_IsSignalConnected(const QAnimationDriver* self, QMetaMethod* signal) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        return vqanimationdriver->isSignalConnected(*signal);
    } else {
        return vqanimationdriver->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAnimationDriver_QBaseIsSignalConnected(const QAnimationDriver* self, QMetaMethod* signal) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_IsSignalConnected_IsBase(true);
        return vqanimationdriver->isSignalConnected(*signal);
    } else {
        return vqanimationdriver->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAnimationDriver_OnIsSignalConnected(const QAnimationDriver* self, intptr_t slot) {
    if (auto* vqanimationdriver = const_cast<VirtualQAnimationDriver*>(dynamic_cast<const VirtualQAnimationDriver*>(self))) {
        vqanimationdriver->setQAnimationDriver_IsSignalConnected_Callback(reinterpret_cast<VirtualQAnimationDriver::QAnimationDriver_IsSignalConnected_Callback>(slot));
    }
}

void QAnimationDriver_Delete(QAnimationDriver* self) {
    delete self;
}

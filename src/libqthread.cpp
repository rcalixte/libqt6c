#include <QAbstractEventDispatcher>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QDeadlineTimer>
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
#include <qthread.h>
#include "libqthread.hpp"
#include "libqthread.hxx"

QThread* QThread_new() {
    return new VirtualQThread();
}

QThread* QThread_new2(QObject* parent) {
    return new VirtualQThread(parent);
}

QMetaObject* QThread_MetaObject(const QThread* self) {
    return (QMetaObject*)self->metaObject();
}

void* QThread_Metacast(QThread* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QThread_Metacall(QThread* self, int param1, int param2, void** param3) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QThread_OnMetacall(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_Metacall_Callback(reinterpret_cast<VirtualQThread::QThread_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QThread_QBaseMetacall(QThread* self, int param1, int param2, void** param3) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_Metacall_IsBase(true);
        return vqthread->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QThread_Tr(const char* s) {
    QString _ret = QThread::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void* QThread_CurrentThreadId() {
    return static_cast<void*>(QThread::currentThreadId());
}

QThread* QThread_CurrentThread() {
    return QThread::currentThread();
}

int QThread_IdealThreadCount() {
    return QThread::idealThreadCount();
}

void QThread_YieldCurrentThread() {
    QThread::yieldCurrentThread();
}

void QThread_SetPriority(QThread* self, int priority) {
    self->setPriority(static_cast<QThread::Priority>(priority));
}

int QThread_Priority(const QThread* self) {
    return static_cast<int>(self->priority());
}

bool QThread_IsFinished(const QThread* self) {
    return self->isFinished();
}

bool QThread_IsRunning(const QThread* self) {
    return self->isRunning();
}

void QThread_RequestInterruption(QThread* self) {
    self->requestInterruption();
}

bool QThread_IsInterruptionRequested(const QThread* self) {
    return self->isInterruptionRequested();
}

void QThread_SetStackSize(QThread* self, unsigned int stackSize) {
    self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThread_StackSize(const QThread* self) {
    return static_cast<unsigned int>(self->stackSize());
}

QAbstractEventDispatcher* QThread_EventDispatcher(const QThread* self) {
    return self->eventDispatcher();
}

void QThread_SetEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher) {
    self->setEventDispatcher(eventDispatcher);
}

int QThread_LoopLevel(const QThread* self) {
    return self->loopLevel();
}

void QThread_Start(QThread* self) {
    self->start();
}

void QThread_Terminate(QThread* self) {
    self->terminate();
}

void QThread_Exit(QThread* self) {
    self->exit();
}

void QThread_Quit(QThread* self) {
    self->quit();
}

bool QThread_Wait(QThread* self) {
    return self->wait();
}

bool QThread_WaitWithTime(QThread* self, unsigned long time) {
    return self->wait(static_cast<unsigned long>(time));
}

void QThread_Sleep(unsigned long param1) {
    QThread::sleep(static_cast<unsigned long>(param1));
}

void QThread_Msleep(unsigned long param1) {
    QThread::msleep(static_cast<unsigned long>(param1));
}

void QThread_Usleep(unsigned long param1) {
    QThread::usleep(static_cast<unsigned long>(param1));
}

libqt_string QThread_Tr2(const char* s, const char* c) {
    QString _ret = QThread::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QThread_Tr3(const char* s, const char* c, int n) {
    QString _ret = QThread::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QThread_Start1(QThread* self, int param1) {
    self->start(static_cast<QThread::Priority>(param1));
}

void QThread_Exit1(QThread* self, int retcode) {
    self->exit(static_cast<int>(retcode));
}

bool QThread_Wait1(QThread* self, QDeadlineTimer* deadline) {
    return self->wait(*deadline);
}

// Derived class handler implementation
bool QThread_Event(QThread* self, QEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        return vqthread->event(event);
    } else {
        return vqthread->event(event);
    }
}

// Base class handler implementation
bool QThread_QBaseEvent(QThread* self, QEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_Event_IsBase(true);
        return vqthread->event(event);
    } else {
        return vqthread->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnEvent(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_Event_Callback(reinterpret_cast<VirtualQThread::QThread_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QThread_Run(QThread* self) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->run();
    } else {
        vqthread->run();
    }
}

// Base class handler implementation
void QThread_QBaseRun(QThread* self) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_Run_IsBase(true);
        vqthread->run();
    } else {
        vqthread->run();
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnRun(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_Run_Callback(reinterpret_cast<VirtualQThread::QThread_Run_Callback>(slot));
    }
}

// Derived class handler implementation
bool QThread_EventFilter(QThread* self, QObject* watched, QEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        return vqthread->eventFilter(watched, event);
    } else {
        return vqthread->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QThread_QBaseEventFilter(QThread* self, QObject* watched, QEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_EventFilter_IsBase(true);
        return vqthread->eventFilter(watched, event);
    } else {
        return vqthread->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnEventFilter(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_EventFilter_Callback(reinterpret_cast<VirtualQThread::QThread_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QThread_TimerEvent(QThread* self, QTimerEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->timerEvent(event);
    } else {
        vqthread->timerEvent(event);
    }
}

// Base class handler implementation
void QThread_QBaseTimerEvent(QThread* self, QTimerEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_TimerEvent_IsBase(true);
        vqthread->timerEvent(event);
    } else {
        vqthread->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnTimerEvent(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_TimerEvent_Callback(reinterpret_cast<VirtualQThread::QThread_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QThread_ChildEvent(QThread* self, QChildEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->childEvent(event);
    } else {
        vqthread->childEvent(event);
    }
}

// Base class handler implementation
void QThread_QBaseChildEvent(QThread* self, QChildEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_ChildEvent_IsBase(true);
        vqthread->childEvent(event);
    } else {
        vqthread->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnChildEvent(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_ChildEvent_Callback(reinterpret_cast<VirtualQThread::QThread_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QThread_CustomEvent(QThread* self, QEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->customEvent(event);
    } else {
        vqthread->customEvent(event);
    }
}

// Base class handler implementation
void QThread_QBaseCustomEvent(QThread* self, QEvent* event) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_CustomEvent_IsBase(true);
        vqthread->customEvent(event);
    } else {
        vqthread->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnCustomEvent(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_CustomEvent_Callback(reinterpret_cast<VirtualQThread::QThread_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QThread_ConnectNotify(QThread* self, QMetaMethod* signal) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->connectNotify(*signal);
    } else {
        vqthread->connectNotify(*signal);
    }
}

// Base class handler implementation
void QThread_QBaseConnectNotify(QThread* self, QMetaMethod* signal) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_ConnectNotify_IsBase(true);
        vqthread->connectNotify(*signal);
    } else {
        vqthread->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnConnectNotify(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_ConnectNotify_Callback(reinterpret_cast<VirtualQThread::QThread_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QThread_DisconnectNotify(QThread* self, QMetaMethod* signal) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->disconnectNotify(*signal);
    } else {
        vqthread->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QThread_QBaseDisconnectNotify(QThread* self, QMetaMethod* signal) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_DisconnectNotify_IsBase(true);
        vqthread->disconnectNotify(*signal);
    } else {
        vqthread->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnDisconnectNotify(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_DisconnectNotify_Callback(reinterpret_cast<VirtualQThread::QThread_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QThread_Exec(QThread* self) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        return vqthread->exec();
    } else {
        return vqthread->exec();
    }
}

// Base class handler implementation
int QThread_QBaseExec(QThread* self) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_Exec_IsBase(true);
        return vqthread->exec();
    } else {
        return vqthread->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnExec(QThread* self, intptr_t slot) {
    if (auto* vqthread = dynamic_cast<VirtualQThread*>(self)) {
        vqthread->setQThread_Exec_Callback(reinterpret_cast<VirtualQThread::QThread_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QThread_Sender(const QThread* self) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        return vqthread->sender();
    } else {
        return vqthread->sender();
    }
}

// Base class handler implementation
QObject* QThread_QBaseSender(const QThread* self) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        vqthread->setQThread_Sender_IsBase(true);
        return vqthread->sender();
    } else {
        return vqthread->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnSender(const QThread* self, intptr_t slot) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        vqthread->setQThread_Sender_Callback(reinterpret_cast<VirtualQThread::QThread_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QThread_SenderSignalIndex(const QThread* self) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        return vqthread->senderSignalIndex();
    } else {
        return vqthread->senderSignalIndex();
    }
}

// Base class handler implementation
int QThread_QBaseSenderSignalIndex(const QThread* self) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        vqthread->setQThread_SenderSignalIndex_IsBase(true);
        return vqthread->senderSignalIndex();
    } else {
        return vqthread->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnSenderSignalIndex(const QThread* self, intptr_t slot) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        vqthread->setQThread_SenderSignalIndex_Callback(reinterpret_cast<VirtualQThread::QThread_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QThread_Receivers(const QThread* self, const char* signal) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        return vqthread->receivers(signal);
    } else {
        return vqthread->receivers(signal);
    }
}

// Base class handler implementation
int QThread_QBaseReceivers(const QThread* self, const char* signal) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        vqthread->setQThread_Receivers_IsBase(true);
        return vqthread->receivers(signal);
    } else {
        return vqthread->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnReceivers(const QThread* self, intptr_t slot) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        vqthread->setQThread_Receivers_Callback(reinterpret_cast<VirtualQThread::QThread_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QThread_IsSignalConnected(const QThread* self, QMetaMethod* signal) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        return vqthread->isSignalConnected(*signal);
    } else {
        return vqthread->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QThread_QBaseIsSignalConnected(const QThread* self, QMetaMethod* signal) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        vqthread->setQThread_IsSignalConnected_IsBase(true);
        return vqthread->isSignalConnected(*signal);
    } else {
        return vqthread->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QThread_OnIsSignalConnected(const QThread* self, intptr_t slot) {
    if (auto* vqthread = const_cast<VirtualQThread*>(dynamic_cast<const VirtualQThread*>(self))) {
        vqthread->setQThread_IsSignalConnected_Callback(reinterpret_cast<VirtualQThread::QThread_IsSignalConnected_Callback>(slot));
    }
}

void QThread_Delete(QThread* self) {
    delete self;
}

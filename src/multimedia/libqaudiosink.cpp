#include <QAnyStringView>
#include <QAudioDevice>
#include <QAudioFormat>
#include <QAudioSink>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
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
#include <qaudiosink.h>
#include "libqaudiosink.hpp"
#include "libqaudiosink.hxx"

QAudioSink* QAudioSink_new() {
    return new VirtualQAudioSink();
}

QAudioSink* QAudioSink_new2(QAudioDevice* audioDeviceInfo) {
    return new VirtualQAudioSink(*audioDeviceInfo);
}

QAudioSink* QAudioSink_new3(QAudioFormat* format) {
    return new VirtualQAudioSink(*format);
}

QAudioSink* QAudioSink_new4(QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioSink(*format, parent);
}

QAudioSink* QAudioSink_new5(QAudioDevice* audioDeviceInfo, QAudioFormat* format) {
    return new VirtualQAudioSink(*audioDeviceInfo, *format);
}

QAudioSink* QAudioSink_new6(QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
    return new VirtualQAudioSink(*audioDeviceInfo, *format, parent);
}

QMetaObject* QAudioSink_MetaObject(const QAudioSink* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioSink_Metacast(QAudioSink* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioSink_Metacall(QAudioSink* self, int param1, int param2, void** param3) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAudioSink_OnMetacall(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_Metacall_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAudioSink_QBaseMetacall(QAudioSink* self, int param1, int param2, void** param3) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_Metacall_IsBase(true);
        return vqaudiosink->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAudioSink_Tr(const char* s) {
    QString _ret = QAudioSink::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QAudioSink_IsNull(const QAudioSink* self) {
    return self->isNull();
}

QAudioFormat* QAudioSink_Format(const QAudioSink* self) {
    return new QAudioFormat(self->format());
}

void QAudioSink_Start(QAudioSink* self, QIODevice* device) {
    self->start(device);
}

QIODevice* QAudioSink_Start2(QAudioSink* self) {
    return self->start();
}

void QAudioSink_Stop(QAudioSink* self) {
    self->stop();
}

void QAudioSink_Reset(QAudioSink* self) {
    self->reset();
}

void QAudioSink_Suspend(QAudioSink* self) {
    self->suspend();
}

void QAudioSink_Resume(QAudioSink* self) {
    self->resume();
}

void QAudioSink_SetBufferSize(QAudioSink* self, ptrdiff_t bytes) {
    self->setBufferSize((qsizetype)(bytes));
}

ptrdiff_t QAudioSink_BufferSize(const QAudioSink* self) {
    return static_cast<ptrdiff_t>(self->bufferSize());
}

ptrdiff_t QAudioSink_BytesFree(const QAudioSink* self) {
    return static_cast<ptrdiff_t>(self->bytesFree());
}

long long QAudioSink_ProcessedUSecs(const QAudioSink* self) {
    return static_cast<long long>(self->processedUSecs());
}

long long QAudioSink_ElapsedUSecs(const QAudioSink* self) {
    return static_cast<long long>(self->elapsedUSecs());
}

int QAudioSink_Error(const QAudioSink* self) {
    return static_cast<int>(self->error());
}

int QAudioSink_State(const QAudioSink* self) {
    return static_cast<int>(self->state());
}

void QAudioSink_SetVolume(QAudioSink* self, double volume) {
    self->setVolume(static_cast<double>(volume));
}

double QAudioSink_Volume(const QAudioSink* self) {
    return static_cast<double>(self->volume());
}

void QAudioSink_StateChanged(QAudioSink* self, int state) {
    self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioSink_Connect_StateChanged(QAudioSink* self, intptr_t slot) {
    void (*slotFunc)(QAudioSink*, int) = reinterpret_cast<void (*)(QAudioSink*, int)>(slot);
    QAudioSink::connect(self, &QAudioSink::stateChanged, [self, slotFunc](QAudio::State state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

libqt_string QAudioSink_Tr2(const char* s, const char* c) {
    QString _ret = QAudioSink::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAudioSink_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAudioSink::tr(s, c, static_cast<int>(n));
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
bool QAudioSink_Event(QAudioSink* self, QEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        return vqaudiosink->event(event);
    } else {
        return vqaudiosink->event(event);
    }
}

// Base class handler implementation
bool QAudioSink_QBaseEvent(QAudioSink* self, QEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_Event_IsBase(true);
        return vqaudiosink->event(event);
    } else {
        return vqaudiosink->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnEvent(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_Event_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioSink_EventFilter(QAudioSink* self, QObject* watched, QEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        return vqaudiosink->eventFilter(watched, event);
    } else {
        return vqaudiosink->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioSink_QBaseEventFilter(QAudioSink* self, QObject* watched, QEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_EventFilter_IsBase(true);
        return vqaudiosink->eventFilter(watched, event);
    } else {
        return vqaudiosink->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnEventFilter(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_EventFilter_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSink_TimerEvent(QAudioSink* self, QTimerEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->timerEvent(event);
    } else {
        vqaudiosink->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioSink_QBaseTimerEvent(QAudioSink* self, QTimerEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_TimerEvent_IsBase(true);
        vqaudiosink->timerEvent(event);
    } else {
        vqaudiosink->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnTimerEvent(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_TimerEvent_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSink_ChildEvent(QAudioSink* self, QChildEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->childEvent(event);
    } else {
        vqaudiosink->childEvent(event);
    }
}

// Base class handler implementation
void QAudioSink_QBaseChildEvent(QAudioSink* self, QChildEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_ChildEvent_IsBase(true);
        vqaudiosink->childEvent(event);
    } else {
        vqaudiosink->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnChildEvent(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_ChildEvent_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSink_CustomEvent(QAudioSink* self, QEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->customEvent(event);
    } else {
        vqaudiosink->customEvent(event);
    }
}

// Base class handler implementation
void QAudioSink_QBaseCustomEvent(QAudioSink* self, QEvent* event) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_CustomEvent_IsBase(true);
        vqaudiosink->customEvent(event);
    } else {
        vqaudiosink->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnCustomEvent(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_CustomEvent_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSink_ConnectNotify(QAudioSink* self, QMetaMethod* signal) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->connectNotify(*signal);
    } else {
        vqaudiosink->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioSink_QBaseConnectNotify(QAudioSink* self, QMetaMethod* signal) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_ConnectNotify_IsBase(true);
        vqaudiosink->connectNotify(*signal);
    } else {
        vqaudiosink->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnConnectNotify(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioSink_DisconnectNotify(QAudioSink* self, QMetaMethod* signal) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->disconnectNotify(*signal);
    } else {
        vqaudiosink->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioSink_QBaseDisconnectNotify(QAudioSink* self, QMetaMethod* signal) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_DisconnectNotify_IsBase(true);
        vqaudiosink->disconnectNotify(*signal);
    } else {
        vqaudiosink->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnDisconnectNotify(QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = dynamic_cast<VirtualQAudioSink*>(self)) {
        vqaudiosink->setQAudioSink_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioSink_Sender(const QAudioSink* self) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        return vqaudiosink->sender();
    } else {
        return vqaudiosink->sender();
    }
}

// Base class handler implementation
QObject* QAudioSink_QBaseSender(const QAudioSink* self) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        vqaudiosink->setQAudioSink_Sender_IsBase(true);
        return vqaudiosink->sender();
    } else {
        return vqaudiosink->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnSender(const QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        vqaudiosink->setQAudioSink_Sender_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioSink_SenderSignalIndex(const QAudioSink* self) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        return vqaudiosink->senderSignalIndex();
    } else {
        return vqaudiosink->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioSink_QBaseSenderSignalIndex(const QAudioSink* self) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        vqaudiosink->setQAudioSink_SenderSignalIndex_IsBase(true);
        return vqaudiosink->senderSignalIndex();
    } else {
        return vqaudiosink->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnSenderSignalIndex(const QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        vqaudiosink->setQAudioSink_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioSink_Receivers(const QAudioSink* self, const char* signal) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        return vqaudiosink->receivers(signal);
    } else {
        return vqaudiosink->receivers(signal);
    }
}

// Base class handler implementation
int QAudioSink_QBaseReceivers(const QAudioSink* self, const char* signal) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        vqaudiosink->setQAudioSink_Receivers_IsBase(true);
        return vqaudiosink->receivers(signal);
    } else {
        return vqaudiosink->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnReceivers(const QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        vqaudiosink->setQAudioSink_Receivers_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioSink_IsSignalConnected(const QAudioSink* self, QMetaMethod* signal) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        return vqaudiosink->isSignalConnected(*signal);
    } else {
        return vqaudiosink->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioSink_QBaseIsSignalConnected(const QAudioSink* self, QMetaMethod* signal) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        vqaudiosink->setQAudioSink_IsSignalConnected_IsBase(true);
        return vqaudiosink->isSignalConnected(*signal);
    } else {
        return vqaudiosink->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioSink_OnIsSignalConnected(const QAudioSink* self, intptr_t slot) {
    if (auto* vqaudiosink = const_cast<VirtualQAudioSink*>(dynamic_cast<const VirtualQAudioSink*>(self))) {
        vqaudiosink->setQAudioSink_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioSink::QAudioSink_IsSignalConnected_Callback>(slot));
    }
}

void QAudioSink_Delete(QAudioSink* self) {
    delete self;
}

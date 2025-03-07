#include <QAmbientSound>
#include <QAnyStringView>
#include <QAudioEngine>
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
#include <QUrl>
#include <QVariant>
#include <qambientsound.h>
#include "libqambientsound.hpp"
#include "libqambientsound.hxx"

QAmbientSound* QAmbientSound_new(QAudioEngine* engine) {
    return new VirtualQAmbientSound(engine);
}

QMetaObject* QAmbientSound_MetaObject(const QAmbientSound* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAmbientSound_Metacast(QAmbientSound* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAmbientSound_Metacall(QAmbientSound* self, int param1, int param2, void** param3) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAmbientSound_OnMetacall(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_Metacall_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAmbientSound_QBaseMetacall(QAmbientSound* self, int param1, int param2, void** param3) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_Metacall_IsBase(true);
        return vqambientsound->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAmbientSound_Tr(const char* s) {
    QString _ret = QAmbientSound::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAmbientSound_SetSource(QAmbientSound* self, QUrl* url) {
    self->setSource(*url);
}

QUrl* QAmbientSound_Source(const QAmbientSound* self) {
    return new QUrl(self->source());
}

int QAmbientSound_Loops(const QAmbientSound* self) {
    return self->loops();
}

void QAmbientSound_SetLoops(QAmbientSound* self, int loops) {
    self->setLoops(static_cast<int>(loops));
}

bool QAmbientSound_AutoPlay(const QAmbientSound* self) {
    return self->autoPlay();
}

void QAmbientSound_SetAutoPlay(QAmbientSound* self, bool autoPlay) {
    self->setAutoPlay(autoPlay);
}

void QAmbientSound_SetVolume(QAmbientSound* self, float volume) {
    self->setVolume(static_cast<float>(volume));
}

float QAmbientSound_Volume(const QAmbientSound* self) {
    return self->volume();
}

QAudioEngine* QAmbientSound_Engine(const QAmbientSound* self) {
    return self->engine();
}

void QAmbientSound_SourceChanged(QAmbientSound* self) {
    self->sourceChanged();
}

void QAmbientSound_Connect_SourceChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::sourceChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAmbientSound_LoopsChanged(QAmbientSound* self) {
    self->loopsChanged();
}

void QAmbientSound_Connect_LoopsChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::loopsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAmbientSound_AutoPlayChanged(QAmbientSound* self) {
    self->autoPlayChanged();
}

void QAmbientSound_Connect_AutoPlayChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::autoPlayChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAmbientSound_VolumeChanged(QAmbientSound* self) {
    self->volumeChanged();
}

void QAmbientSound_Connect_VolumeChanged(QAmbientSound* self, intptr_t slot) {
    void (*slotFunc)(QAmbientSound*) = reinterpret_cast<void (*)(QAmbientSound*)>(slot);
    QAmbientSound::connect(self, &QAmbientSound::volumeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAmbientSound_Play(QAmbientSound* self) {
    self->play();
}

void QAmbientSound_Pause(QAmbientSound* self) {
    self->pause();
}

void QAmbientSound_Stop(QAmbientSound* self) {
    self->stop();
}

libqt_string QAmbientSound_Tr2(const char* s, const char* c) {
    QString _ret = QAmbientSound::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAmbientSound_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAmbientSound::tr(s, c, static_cast<int>(n));
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
bool QAmbientSound_Event(QAmbientSound* self, QEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        return vqambientsound->event(event);
    } else {
        return vqambientsound->event(event);
    }
}

// Base class handler implementation
bool QAmbientSound_QBaseEvent(QAmbientSound* self, QEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_Event_IsBase(true);
        return vqambientsound->event(event);
    } else {
        return vqambientsound->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnEvent(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_Event_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAmbientSound_EventFilter(QAmbientSound* self, QObject* watched, QEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        return vqambientsound->eventFilter(watched, event);
    } else {
        return vqambientsound->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAmbientSound_QBaseEventFilter(QAmbientSound* self, QObject* watched, QEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_EventFilter_IsBase(true);
        return vqambientsound->eventFilter(watched, event);
    } else {
        return vqambientsound->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnEventFilter(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_EventFilter_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_TimerEvent(QAmbientSound* self, QTimerEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->timerEvent(event);
    } else {
        vqambientsound->timerEvent(event);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseTimerEvent(QAmbientSound* self, QTimerEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_TimerEvent_IsBase(true);
        vqambientsound->timerEvent(event);
    } else {
        vqambientsound->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnTimerEvent(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_TimerEvent_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_ChildEvent(QAmbientSound* self, QChildEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->childEvent(event);
    } else {
        vqambientsound->childEvent(event);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseChildEvent(QAmbientSound* self, QChildEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_ChildEvent_IsBase(true);
        vqambientsound->childEvent(event);
    } else {
        vqambientsound->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnChildEvent(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_ChildEvent_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_CustomEvent(QAmbientSound* self, QEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->customEvent(event);
    } else {
        vqambientsound->customEvent(event);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseCustomEvent(QAmbientSound* self, QEvent* event) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_CustomEvent_IsBase(true);
        vqambientsound->customEvent(event);
    } else {
        vqambientsound->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnCustomEvent(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_CustomEvent_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_ConnectNotify(QAmbientSound* self, QMetaMethod* signal) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->connectNotify(*signal);
    } else {
        vqambientsound->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseConnectNotify(QAmbientSound* self, QMetaMethod* signal) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_ConnectNotify_IsBase(true);
        vqambientsound->connectNotify(*signal);
    } else {
        vqambientsound->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnConnectNotify(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_ConnectNotify_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAmbientSound_DisconnectNotify(QAmbientSound* self, QMetaMethod* signal) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->disconnectNotify(*signal);
    } else {
        vqambientsound->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAmbientSound_QBaseDisconnectNotify(QAmbientSound* self, QMetaMethod* signal) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_DisconnectNotify_IsBase(true);
        vqambientsound->disconnectNotify(*signal);
    } else {
        vqambientsound->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnDisconnectNotify(QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = dynamic_cast<VirtualQAmbientSound*>(self)) {
        vqambientsound->setQAmbientSound_DisconnectNotify_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAmbientSound_Sender(const QAmbientSound* self) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        return vqambientsound->sender();
    } else {
        return vqambientsound->sender();
    }
}

// Base class handler implementation
QObject* QAmbientSound_QBaseSender(const QAmbientSound* self) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        vqambientsound->setQAmbientSound_Sender_IsBase(true);
        return vqambientsound->sender();
    } else {
        return vqambientsound->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnSender(const QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        vqambientsound->setQAmbientSound_Sender_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAmbientSound_SenderSignalIndex(const QAmbientSound* self) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        return vqambientsound->senderSignalIndex();
    } else {
        return vqambientsound->senderSignalIndex();
    }
}

// Base class handler implementation
int QAmbientSound_QBaseSenderSignalIndex(const QAmbientSound* self) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        vqambientsound->setQAmbientSound_SenderSignalIndex_IsBase(true);
        return vqambientsound->senderSignalIndex();
    } else {
        return vqambientsound->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnSenderSignalIndex(const QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        vqambientsound->setQAmbientSound_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAmbientSound_Receivers(const QAmbientSound* self, const char* signal) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        return vqambientsound->receivers(signal);
    } else {
        return vqambientsound->receivers(signal);
    }
}

// Base class handler implementation
int QAmbientSound_QBaseReceivers(const QAmbientSound* self, const char* signal) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        vqambientsound->setQAmbientSound_Receivers_IsBase(true);
        return vqambientsound->receivers(signal);
    } else {
        return vqambientsound->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnReceivers(const QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        vqambientsound->setQAmbientSound_Receivers_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAmbientSound_IsSignalConnected(const QAmbientSound* self, QMetaMethod* signal) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        return vqambientsound->isSignalConnected(*signal);
    } else {
        return vqambientsound->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAmbientSound_QBaseIsSignalConnected(const QAmbientSound* self, QMetaMethod* signal) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        vqambientsound->setQAmbientSound_IsSignalConnected_IsBase(true);
        return vqambientsound->isSignalConnected(*signal);
    } else {
        return vqambientsound->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAmbientSound_OnIsSignalConnected(const QAmbientSound* self, intptr_t slot) {
    if (auto* vqambientsound = const_cast<VirtualQAmbientSound*>(dynamic_cast<const VirtualQAmbientSound*>(self))) {
        vqambientsound->setQAmbientSound_IsSignalConnected_Callback(reinterpret_cast<VirtualQAmbientSound::QAmbientSound_IsSignalConnected_Callback>(slot));
    }
}

void QAmbientSound_Delete(QAmbientSound* self) {
    delete self;
}

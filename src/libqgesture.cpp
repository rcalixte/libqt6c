#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QGesture>
#include <QGestureEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPanGesture>
#include <QPinchGesture>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSwipeGesture>
#include <QTapAndHoldGesture>
#include <QTapGesture>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgesture.h>
#include "libqgesture.hpp"
#include "libqgesture.hxx"

QGesture* QGesture_new() {
    return new VirtualQGesture();
}

QGesture* QGesture_new2(QObject* parent) {
    return new VirtualQGesture(parent);
}

QMetaObject* QGesture_MetaObject(const QGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGesture_Metacast(QGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGesture_Metacall(QGesture* self, int param1, int param2, void** param3) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGesture_OnMetacall(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_Metacall_Callback(reinterpret_cast<VirtualQGesture::QGesture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGesture_QBaseMetacall(QGesture* self, int param1, int param2, void** param3) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_Metacall_IsBase(true);
        return vqgesture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGesture_Tr(const char* s) {
    QString _ret = QGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QGesture_GestureType(const QGesture* self) {
    return static_cast<int>(self->gestureType());
}

int QGesture_State(const QGesture* self) {
    return static_cast<int>(self->state());
}

QPointF* QGesture_HotSpot(const QGesture* self) {
    return new QPointF(self->hotSpot());
}

void QGesture_SetHotSpot(QGesture* self, QPointF* value) {
    self->setHotSpot(*value);
}

bool QGesture_HasHotSpot(const QGesture* self) {
    return self->hasHotSpot();
}

void QGesture_UnsetHotSpot(QGesture* self) {
    self->unsetHotSpot();
}

void QGesture_SetGestureCancelPolicy(QGesture* self, int policy) {
    self->setGestureCancelPolicy(static_cast<QGesture::GestureCancelPolicy>(policy));
}

int QGesture_GestureCancelPolicy(const QGesture* self) {
    return static_cast<int>(self->gestureCancelPolicy());
}

libqt_string QGesture_Tr2(const char* s, const char* c) {
    QString _ret = QGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGesture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGesture::tr(s, c, static_cast<int>(n));
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
bool QGesture_Event(QGesture* self, QEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        return vqgesture->event(event);
    } else {
        return vqgesture->event(event);
    }
}

// Base class handler implementation
bool QGesture_QBaseEvent(QGesture* self, QEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_Event_IsBase(true);
        return vqgesture->event(event);
    } else {
        return vqgesture->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnEvent(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_Event_Callback(reinterpret_cast<VirtualQGesture::QGesture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGesture_EventFilter(QGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        return vqgesture->eventFilter(watched, event);
    } else {
        return vqgesture->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGesture_QBaseEventFilter(QGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_EventFilter_IsBase(true);
        return vqgesture->eventFilter(watched, event);
    } else {
        return vqgesture->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnEventFilter(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_EventFilter_Callback(reinterpret_cast<VirtualQGesture::QGesture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGesture_TimerEvent(QGesture* self, QTimerEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->timerEvent(event);
    } else {
        vqgesture->timerEvent(event);
    }
}

// Base class handler implementation
void QGesture_QBaseTimerEvent(QGesture* self, QTimerEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_TimerEvent_IsBase(true);
        vqgesture->timerEvent(event);
    } else {
        vqgesture->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnTimerEvent(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_TimerEvent_Callback(reinterpret_cast<VirtualQGesture::QGesture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGesture_ChildEvent(QGesture* self, QChildEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->childEvent(event);
    } else {
        vqgesture->childEvent(event);
    }
}

// Base class handler implementation
void QGesture_QBaseChildEvent(QGesture* self, QChildEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_ChildEvent_IsBase(true);
        vqgesture->childEvent(event);
    } else {
        vqgesture->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnChildEvent(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_ChildEvent_Callback(reinterpret_cast<VirtualQGesture::QGesture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGesture_CustomEvent(QGesture* self, QEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->customEvent(event);
    } else {
        vqgesture->customEvent(event);
    }
}

// Base class handler implementation
void QGesture_QBaseCustomEvent(QGesture* self, QEvent* event) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_CustomEvent_IsBase(true);
        vqgesture->customEvent(event);
    } else {
        vqgesture->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnCustomEvent(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_CustomEvent_Callback(reinterpret_cast<VirtualQGesture::QGesture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGesture_ConnectNotify(QGesture* self, QMetaMethod* signal) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->connectNotify(*signal);
    } else {
        vqgesture->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGesture_QBaseConnectNotify(QGesture* self, QMetaMethod* signal) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_ConnectNotify_IsBase(true);
        vqgesture->connectNotify(*signal);
    } else {
        vqgesture->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnConnectNotify(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_ConnectNotify_Callback(reinterpret_cast<VirtualQGesture::QGesture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGesture_DisconnectNotify(QGesture* self, QMetaMethod* signal) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->disconnectNotify(*signal);
    } else {
        vqgesture->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGesture_QBaseDisconnectNotify(QGesture* self, QMetaMethod* signal) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_DisconnectNotify_IsBase(true);
        vqgesture->disconnectNotify(*signal);
    } else {
        vqgesture->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnDisconnectNotify(QGesture* self, intptr_t slot) {
    if (auto* vqgesture = dynamic_cast<VirtualQGesture*>(self)) {
        vqgesture->setQGesture_DisconnectNotify_Callback(reinterpret_cast<VirtualQGesture::QGesture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGesture_Sender(const QGesture* self) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        return vqgesture->sender();
    } else {
        return vqgesture->sender();
    }
}

// Base class handler implementation
QObject* QGesture_QBaseSender(const QGesture* self) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        vqgesture->setQGesture_Sender_IsBase(true);
        return vqgesture->sender();
    } else {
        return vqgesture->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnSender(const QGesture* self, intptr_t slot) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        vqgesture->setQGesture_Sender_Callback(reinterpret_cast<VirtualQGesture::QGesture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGesture_SenderSignalIndex(const QGesture* self) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        return vqgesture->senderSignalIndex();
    } else {
        return vqgesture->senderSignalIndex();
    }
}

// Base class handler implementation
int QGesture_QBaseSenderSignalIndex(const QGesture* self) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        vqgesture->setQGesture_SenderSignalIndex_IsBase(true);
        return vqgesture->senderSignalIndex();
    } else {
        return vqgesture->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnSenderSignalIndex(const QGesture* self, intptr_t slot) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        vqgesture->setQGesture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGesture::QGesture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGesture_Receivers(const QGesture* self, const char* signal) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        return vqgesture->receivers(signal);
    } else {
        return vqgesture->receivers(signal);
    }
}

// Base class handler implementation
int QGesture_QBaseReceivers(const QGesture* self, const char* signal) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        vqgesture->setQGesture_Receivers_IsBase(true);
        return vqgesture->receivers(signal);
    } else {
        return vqgesture->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnReceivers(const QGesture* self, intptr_t slot) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        vqgesture->setQGesture_Receivers_Callback(reinterpret_cast<VirtualQGesture::QGesture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGesture_IsSignalConnected(const QGesture* self, QMetaMethod* signal) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        return vqgesture->isSignalConnected(*signal);
    } else {
        return vqgesture->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGesture_QBaseIsSignalConnected(const QGesture* self, QMetaMethod* signal) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        vqgesture->setQGesture_IsSignalConnected_IsBase(true);
        return vqgesture->isSignalConnected(*signal);
    } else {
        return vqgesture->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGesture_OnIsSignalConnected(const QGesture* self, intptr_t slot) {
    if (auto* vqgesture = const_cast<VirtualQGesture*>(dynamic_cast<const VirtualQGesture*>(self))) {
        vqgesture->setQGesture_IsSignalConnected_Callback(reinterpret_cast<VirtualQGesture::QGesture_IsSignalConnected_Callback>(slot));
    }
}

void QGesture_Delete(QGesture* self) {
    delete self;
}

QPanGesture* QPanGesture_new() {
    return new VirtualQPanGesture();
}

QPanGesture* QPanGesture_new2(QObject* parent) {
    return new VirtualQPanGesture(parent);
}

QMetaObject* QPanGesture_MetaObject(const QPanGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPanGesture_Metacast(QPanGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPanGesture_Metacall(QPanGesture* self, int param1, int param2, void** param3) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPanGesture_OnMetacall(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_Metacall_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPanGesture_QBaseMetacall(QPanGesture* self, int param1, int param2, void** param3) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_Metacall_IsBase(true);
        return vqpangesture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPanGesture_Tr(const char* s) {
    QString _ret = QPanGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPointF* QPanGesture_LastOffset(const QPanGesture* self) {
    return new QPointF(self->lastOffset());
}

QPointF* QPanGesture_Offset(const QPanGesture* self) {
    return new QPointF(self->offset());
}

QPointF* QPanGesture_Delta(const QPanGesture* self) {
    return new QPointF(self->delta());
}

double QPanGesture_Acceleration(const QPanGesture* self) {
    return static_cast<double>(self->acceleration());
}

void QPanGesture_SetLastOffset(QPanGesture* self, QPointF* value) {
    self->setLastOffset(*value);
}

void QPanGesture_SetOffset(QPanGesture* self, QPointF* value) {
    self->setOffset(*value);
}

void QPanGesture_SetAcceleration(QPanGesture* self, double value) {
    self->setAcceleration(static_cast<qreal>(value));
}

libqt_string QPanGesture_Tr2(const char* s, const char* c) {
    QString _ret = QPanGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPanGesture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPanGesture::tr(s, c, static_cast<int>(n));
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
bool QPanGesture_Event(QPanGesture* self, QEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        return vqpangesture->event(event);
    } else {
        return vqpangesture->event(event);
    }
}

// Base class handler implementation
bool QPanGesture_QBaseEvent(QPanGesture* self, QEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_Event_IsBase(true);
        return vqpangesture->event(event);
    } else {
        return vqpangesture->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnEvent(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_Event_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPanGesture_EventFilter(QPanGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        return vqpangesture->eventFilter(watched, event);
    } else {
        return vqpangesture->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPanGesture_QBaseEventFilter(QPanGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_EventFilter_IsBase(true);
        return vqpangesture->eventFilter(watched, event);
    } else {
        return vqpangesture->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnEventFilter(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_EventFilter_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPanGesture_TimerEvent(QPanGesture* self, QTimerEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->timerEvent(event);
    } else {
        vqpangesture->timerEvent(event);
    }
}

// Base class handler implementation
void QPanGesture_QBaseTimerEvent(QPanGesture* self, QTimerEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_TimerEvent_IsBase(true);
        vqpangesture->timerEvent(event);
    } else {
        vqpangesture->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnTimerEvent(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_TimerEvent_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPanGesture_ChildEvent(QPanGesture* self, QChildEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->childEvent(event);
    } else {
        vqpangesture->childEvent(event);
    }
}

// Base class handler implementation
void QPanGesture_QBaseChildEvent(QPanGesture* self, QChildEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_ChildEvent_IsBase(true);
        vqpangesture->childEvent(event);
    } else {
        vqpangesture->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnChildEvent(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_ChildEvent_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPanGesture_CustomEvent(QPanGesture* self, QEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->customEvent(event);
    } else {
        vqpangesture->customEvent(event);
    }
}

// Base class handler implementation
void QPanGesture_QBaseCustomEvent(QPanGesture* self, QEvent* event) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_CustomEvent_IsBase(true);
        vqpangesture->customEvent(event);
    } else {
        vqpangesture->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnCustomEvent(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_CustomEvent_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPanGesture_ConnectNotify(QPanGesture* self, QMetaMethod* signal) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->connectNotify(*signal);
    } else {
        vqpangesture->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPanGesture_QBaseConnectNotify(QPanGesture* self, QMetaMethod* signal) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_ConnectNotify_IsBase(true);
        vqpangesture->connectNotify(*signal);
    } else {
        vqpangesture->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnConnectNotify(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_ConnectNotify_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPanGesture_DisconnectNotify(QPanGesture* self, QMetaMethod* signal) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->disconnectNotify(*signal);
    } else {
        vqpangesture->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPanGesture_QBaseDisconnectNotify(QPanGesture* self, QMetaMethod* signal) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_DisconnectNotify_IsBase(true);
        vqpangesture->disconnectNotify(*signal);
    } else {
        vqpangesture->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnDisconnectNotify(QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = dynamic_cast<VirtualQPanGesture*>(self)) {
        vqpangesture->setQPanGesture_DisconnectNotify_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPanGesture_Sender(const QPanGesture* self) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        return vqpangesture->sender();
    } else {
        return vqpangesture->sender();
    }
}

// Base class handler implementation
QObject* QPanGesture_QBaseSender(const QPanGesture* self) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        vqpangesture->setQPanGesture_Sender_IsBase(true);
        return vqpangesture->sender();
    } else {
        return vqpangesture->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnSender(const QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        vqpangesture->setQPanGesture_Sender_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPanGesture_SenderSignalIndex(const QPanGesture* self) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        return vqpangesture->senderSignalIndex();
    } else {
        return vqpangesture->senderSignalIndex();
    }
}

// Base class handler implementation
int QPanGesture_QBaseSenderSignalIndex(const QPanGesture* self) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        vqpangesture->setQPanGesture_SenderSignalIndex_IsBase(true);
        return vqpangesture->senderSignalIndex();
    } else {
        return vqpangesture->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnSenderSignalIndex(const QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        vqpangesture->setQPanGesture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPanGesture_Receivers(const QPanGesture* self, const char* signal) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        return vqpangesture->receivers(signal);
    } else {
        return vqpangesture->receivers(signal);
    }
}

// Base class handler implementation
int QPanGesture_QBaseReceivers(const QPanGesture* self, const char* signal) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        vqpangesture->setQPanGesture_Receivers_IsBase(true);
        return vqpangesture->receivers(signal);
    } else {
        return vqpangesture->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnReceivers(const QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        vqpangesture->setQPanGesture_Receivers_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPanGesture_IsSignalConnected(const QPanGesture* self, QMetaMethod* signal) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        return vqpangesture->isSignalConnected(*signal);
    } else {
        return vqpangesture->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPanGesture_QBaseIsSignalConnected(const QPanGesture* self, QMetaMethod* signal) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        vqpangesture->setQPanGesture_IsSignalConnected_IsBase(true);
        return vqpangesture->isSignalConnected(*signal);
    } else {
        return vqpangesture->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPanGesture_OnIsSignalConnected(const QPanGesture* self, intptr_t slot) {
    if (auto* vqpangesture = const_cast<VirtualQPanGesture*>(dynamic_cast<const VirtualQPanGesture*>(self))) {
        vqpangesture->setQPanGesture_IsSignalConnected_Callback(reinterpret_cast<VirtualQPanGesture::QPanGesture_IsSignalConnected_Callback>(slot));
    }
}

void QPanGesture_Delete(QPanGesture* self) {
    delete self;
}

QPinchGesture* QPinchGesture_new() {
    return new VirtualQPinchGesture();
}

QPinchGesture* QPinchGesture_new2(QObject* parent) {
    return new VirtualQPinchGesture(parent);
}

QMetaObject* QPinchGesture_MetaObject(const QPinchGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPinchGesture_Metacast(QPinchGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPinchGesture_Metacall(QPinchGesture* self, int param1, int param2, void** param3) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPinchGesture_OnMetacall(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_Metacall_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPinchGesture_QBaseMetacall(QPinchGesture* self, int param1, int param2, void** param3) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_Metacall_IsBase(true);
        return vqpinchgesture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPinchGesture_Tr(const char* s) {
    QString _ret = QPinchGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QPinchGesture_TotalChangeFlags(const QPinchGesture* self) {
    return static_cast<int>(self->totalChangeFlags());
}

void QPinchGesture_SetTotalChangeFlags(QPinchGesture* self, int value) {
    self->setTotalChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

int QPinchGesture_ChangeFlags(const QPinchGesture* self) {
    return static_cast<int>(self->changeFlags());
}

void QPinchGesture_SetChangeFlags(QPinchGesture* self, int value) {
    self->setChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

QPointF* QPinchGesture_StartCenterPoint(const QPinchGesture* self) {
    return new QPointF(self->startCenterPoint());
}

QPointF* QPinchGesture_LastCenterPoint(const QPinchGesture* self) {
    return new QPointF(self->lastCenterPoint());
}

QPointF* QPinchGesture_CenterPoint(const QPinchGesture* self) {
    return new QPointF(self->centerPoint());
}

void QPinchGesture_SetStartCenterPoint(QPinchGesture* self, QPointF* value) {
    self->setStartCenterPoint(*value);
}

void QPinchGesture_SetLastCenterPoint(QPinchGesture* self, QPointF* value) {
    self->setLastCenterPoint(*value);
}

void QPinchGesture_SetCenterPoint(QPinchGesture* self, QPointF* value) {
    self->setCenterPoint(*value);
}

double QPinchGesture_TotalScaleFactor(const QPinchGesture* self) {
    return static_cast<double>(self->totalScaleFactor());
}

double QPinchGesture_LastScaleFactor(const QPinchGesture* self) {
    return static_cast<double>(self->lastScaleFactor());
}

double QPinchGesture_ScaleFactor(const QPinchGesture* self) {
    return static_cast<double>(self->scaleFactor());
}

void QPinchGesture_SetTotalScaleFactor(QPinchGesture* self, double value) {
    self->setTotalScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_SetLastScaleFactor(QPinchGesture* self, double value) {
    self->setLastScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_SetScaleFactor(QPinchGesture* self, double value) {
    self->setScaleFactor(static_cast<qreal>(value));
}

double QPinchGesture_TotalRotationAngle(const QPinchGesture* self) {
    return static_cast<double>(self->totalRotationAngle());
}

double QPinchGesture_LastRotationAngle(const QPinchGesture* self) {
    return static_cast<double>(self->lastRotationAngle());
}

double QPinchGesture_RotationAngle(const QPinchGesture* self) {
    return static_cast<double>(self->rotationAngle());
}

void QPinchGesture_SetTotalRotationAngle(QPinchGesture* self, double value) {
    self->setTotalRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_SetLastRotationAngle(QPinchGesture* self, double value) {
    self->setLastRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_SetRotationAngle(QPinchGesture* self, double value) {
    self->setRotationAngle(static_cast<qreal>(value));
}

libqt_string QPinchGesture_Tr2(const char* s, const char* c) {
    QString _ret = QPinchGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPinchGesture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPinchGesture::tr(s, c, static_cast<int>(n));
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
bool QPinchGesture_Event(QPinchGesture* self, QEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        return vqpinchgesture->event(event);
    } else {
        return vqpinchgesture->event(event);
    }
}

// Base class handler implementation
bool QPinchGesture_QBaseEvent(QPinchGesture* self, QEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_Event_IsBase(true);
        return vqpinchgesture->event(event);
    } else {
        return vqpinchgesture->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnEvent(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_Event_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPinchGesture_EventFilter(QPinchGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        return vqpinchgesture->eventFilter(watched, event);
    } else {
        return vqpinchgesture->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPinchGesture_QBaseEventFilter(QPinchGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_EventFilter_IsBase(true);
        return vqpinchgesture->eventFilter(watched, event);
    } else {
        return vqpinchgesture->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnEventFilter(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_EventFilter_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPinchGesture_TimerEvent(QPinchGesture* self, QTimerEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->timerEvent(event);
    } else {
        vqpinchgesture->timerEvent(event);
    }
}

// Base class handler implementation
void QPinchGesture_QBaseTimerEvent(QPinchGesture* self, QTimerEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_TimerEvent_IsBase(true);
        vqpinchgesture->timerEvent(event);
    } else {
        vqpinchgesture->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnTimerEvent(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_TimerEvent_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPinchGesture_ChildEvent(QPinchGesture* self, QChildEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->childEvent(event);
    } else {
        vqpinchgesture->childEvent(event);
    }
}

// Base class handler implementation
void QPinchGesture_QBaseChildEvent(QPinchGesture* self, QChildEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_ChildEvent_IsBase(true);
        vqpinchgesture->childEvent(event);
    } else {
        vqpinchgesture->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnChildEvent(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_ChildEvent_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPinchGesture_CustomEvent(QPinchGesture* self, QEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->customEvent(event);
    } else {
        vqpinchgesture->customEvent(event);
    }
}

// Base class handler implementation
void QPinchGesture_QBaseCustomEvent(QPinchGesture* self, QEvent* event) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_CustomEvent_IsBase(true);
        vqpinchgesture->customEvent(event);
    } else {
        vqpinchgesture->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnCustomEvent(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_CustomEvent_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPinchGesture_ConnectNotify(QPinchGesture* self, QMetaMethod* signal) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->connectNotify(*signal);
    } else {
        vqpinchgesture->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPinchGesture_QBaseConnectNotify(QPinchGesture* self, QMetaMethod* signal) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_ConnectNotify_IsBase(true);
        vqpinchgesture->connectNotify(*signal);
    } else {
        vqpinchgesture->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnConnectNotify(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_ConnectNotify_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPinchGesture_DisconnectNotify(QPinchGesture* self, QMetaMethod* signal) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->disconnectNotify(*signal);
    } else {
        vqpinchgesture->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPinchGesture_QBaseDisconnectNotify(QPinchGesture* self, QMetaMethod* signal) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_DisconnectNotify_IsBase(true);
        vqpinchgesture->disconnectNotify(*signal);
    } else {
        vqpinchgesture->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnDisconnectNotify(QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = dynamic_cast<VirtualQPinchGesture*>(self)) {
        vqpinchgesture->setQPinchGesture_DisconnectNotify_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPinchGesture_Sender(const QPinchGesture* self) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        return vqpinchgesture->sender();
    } else {
        return vqpinchgesture->sender();
    }
}

// Base class handler implementation
QObject* QPinchGesture_QBaseSender(const QPinchGesture* self) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        vqpinchgesture->setQPinchGesture_Sender_IsBase(true);
        return vqpinchgesture->sender();
    } else {
        return vqpinchgesture->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnSender(const QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        vqpinchgesture->setQPinchGesture_Sender_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPinchGesture_SenderSignalIndex(const QPinchGesture* self) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        return vqpinchgesture->senderSignalIndex();
    } else {
        return vqpinchgesture->senderSignalIndex();
    }
}

// Base class handler implementation
int QPinchGesture_QBaseSenderSignalIndex(const QPinchGesture* self) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        vqpinchgesture->setQPinchGesture_SenderSignalIndex_IsBase(true);
        return vqpinchgesture->senderSignalIndex();
    } else {
        return vqpinchgesture->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnSenderSignalIndex(const QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        vqpinchgesture->setQPinchGesture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPinchGesture_Receivers(const QPinchGesture* self, const char* signal) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        return vqpinchgesture->receivers(signal);
    } else {
        return vqpinchgesture->receivers(signal);
    }
}

// Base class handler implementation
int QPinchGesture_QBaseReceivers(const QPinchGesture* self, const char* signal) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        vqpinchgesture->setQPinchGesture_Receivers_IsBase(true);
        return vqpinchgesture->receivers(signal);
    } else {
        return vqpinchgesture->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnReceivers(const QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        vqpinchgesture->setQPinchGesture_Receivers_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPinchGesture_IsSignalConnected(const QPinchGesture* self, QMetaMethod* signal) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        return vqpinchgesture->isSignalConnected(*signal);
    } else {
        return vqpinchgesture->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPinchGesture_QBaseIsSignalConnected(const QPinchGesture* self, QMetaMethod* signal) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        vqpinchgesture->setQPinchGesture_IsSignalConnected_IsBase(true);
        return vqpinchgesture->isSignalConnected(*signal);
    } else {
        return vqpinchgesture->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPinchGesture_OnIsSignalConnected(const QPinchGesture* self, intptr_t slot) {
    if (auto* vqpinchgesture = const_cast<VirtualQPinchGesture*>(dynamic_cast<const VirtualQPinchGesture*>(self))) {
        vqpinchgesture->setQPinchGesture_IsSignalConnected_Callback(reinterpret_cast<VirtualQPinchGesture::QPinchGesture_IsSignalConnected_Callback>(slot));
    }
}

void QPinchGesture_Delete(QPinchGesture* self) {
    delete self;
}

QSwipeGesture* QSwipeGesture_new() {
    return new VirtualQSwipeGesture();
}

QSwipeGesture* QSwipeGesture_new2(QObject* parent) {
    return new VirtualQSwipeGesture(parent);
}

QMetaObject* QSwipeGesture_MetaObject(const QSwipeGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSwipeGesture_Metacast(QSwipeGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSwipeGesture_Metacall(QSwipeGesture* self, int param1, int param2, void** param3) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSwipeGesture_OnMetacall(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_Metacall_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSwipeGesture_QBaseMetacall(QSwipeGesture* self, int param1, int param2, void** param3) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_Metacall_IsBase(true);
        return vqswipegesture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSwipeGesture_Tr(const char* s) {
    QString _ret = QSwipeGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QSwipeGesture_HorizontalDirection(const QSwipeGesture* self) {
    return static_cast<int>(self->horizontalDirection());
}

int QSwipeGesture_VerticalDirection(const QSwipeGesture* self) {
    return static_cast<int>(self->verticalDirection());
}

double QSwipeGesture_SwipeAngle(const QSwipeGesture* self) {
    return static_cast<double>(self->swipeAngle());
}

void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value) {
    self->setSwipeAngle(static_cast<qreal>(value));
}

libqt_string QSwipeGesture_Tr2(const char* s, const char* c) {
    QString _ret = QSwipeGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSwipeGesture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSwipeGesture::tr(s, c, static_cast<int>(n));
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
bool QSwipeGesture_Event(QSwipeGesture* self, QEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        return vqswipegesture->event(event);
    } else {
        return vqswipegesture->event(event);
    }
}

// Base class handler implementation
bool QSwipeGesture_QBaseEvent(QSwipeGesture* self, QEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_Event_IsBase(true);
        return vqswipegesture->event(event);
    } else {
        return vqswipegesture->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnEvent(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_Event_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSwipeGesture_EventFilter(QSwipeGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        return vqswipegesture->eventFilter(watched, event);
    } else {
        return vqswipegesture->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSwipeGesture_QBaseEventFilter(QSwipeGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_EventFilter_IsBase(true);
        return vqswipegesture->eventFilter(watched, event);
    } else {
        return vqswipegesture->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnEventFilter(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_EventFilter_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSwipeGesture_TimerEvent(QSwipeGesture* self, QTimerEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->timerEvent(event);
    } else {
        vqswipegesture->timerEvent(event);
    }
}

// Base class handler implementation
void QSwipeGesture_QBaseTimerEvent(QSwipeGesture* self, QTimerEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_TimerEvent_IsBase(true);
        vqswipegesture->timerEvent(event);
    } else {
        vqswipegesture->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnTimerEvent(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_TimerEvent_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSwipeGesture_ChildEvent(QSwipeGesture* self, QChildEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->childEvent(event);
    } else {
        vqswipegesture->childEvent(event);
    }
}

// Base class handler implementation
void QSwipeGesture_QBaseChildEvent(QSwipeGesture* self, QChildEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_ChildEvent_IsBase(true);
        vqswipegesture->childEvent(event);
    } else {
        vqswipegesture->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnChildEvent(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_ChildEvent_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSwipeGesture_CustomEvent(QSwipeGesture* self, QEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->customEvent(event);
    } else {
        vqswipegesture->customEvent(event);
    }
}

// Base class handler implementation
void QSwipeGesture_QBaseCustomEvent(QSwipeGesture* self, QEvent* event) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_CustomEvent_IsBase(true);
        vqswipegesture->customEvent(event);
    } else {
        vqswipegesture->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnCustomEvent(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_CustomEvent_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSwipeGesture_ConnectNotify(QSwipeGesture* self, QMetaMethod* signal) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->connectNotify(*signal);
    } else {
        vqswipegesture->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSwipeGesture_QBaseConnectNotify(QSwipeGesture* self, QMetaMethod* signal) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_ConnectNotify_IsBase(true);
        vqswipegesture->connectNotify(*signal);
    } else {
        vqswipegesture->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnConnectNotify(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_ConnectNotify_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSwipeGesture_DisconnectNotify(QSwipeGesture* self, QMetaMethod* signal) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->disconnectNotify(*signal);
    } else {
        vqswipegesture->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSwipeGesture_QBaseDisconnectNotify(QSwipeGesture* self, QMetaMethod* signal) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_DisconnectNotify_IsBase(true);
        vqswipegesture->disconnectNotify(*signal);
    } else {
        vqswipegesture->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnDisconnectNotify(QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = dynamic_cast<VirtualQSwipeGesture*>(self)) {
        vqswipegesture->setQSwipeGesture_DisconnectNotify_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSwipeGesture_Sender(const QSwipeGesture* self) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        return vqswipegesture->sender();
    } else {
        return vqswipegesture->sender();
    }
}

// Base class handler implementation
QObject* QSwipeGesture_QBaseSender(const QSwipeGesture* self) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        vqswipegesture->setQSwipeGesture_Sender_IsBase(true);
        return vqswipegesture->sender();
    } else {
        return vqswipegesture->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnSender(const QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        vqswipegesture->setQSwipeGesture_Sender_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSwipeGesture_SenderSignalIndex(const QSwipeGesture* self) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        return vqswipegesture->senderSignalIndex();
    } else {
        return vqswipegesture->senderSignalIndex();
    }
}

// Base class handler implementation
int QSwipeGesture_QBaseSenderSignalIndex(const QSwipeGesture* self) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        vqswipegesture->setQSwipeGesture_SenderSignalIndex_IsBase(true);
        return vqswipegesture->senderSignalIndex();
    } else {
        return vqswipegesture->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnSenderSignalIndex(const QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        vqswipegesture->setQSwipeGesture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSwipeGesture_Receivers(const QSwipeGesture* self, const char* signal) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        return vqswipegesture->receivers(signal);
    } else {
        return vqswipegesture->receivers(signal);
    }
}

// Base class handler implementation
int QSwipeGesture_QBaseReceivers(const QSwipeGesture* self, const char* signal) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        vqswipegesture->setQSwipeGesture_Receivers_IsBase(true);
        return vqswipegesture->receivers(signal);
    } else {
        return vqswipegesture->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnReceivers(const QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        vqswipegesture->setQSwipeGesture_Receivers_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSwipeGesture_IsSignalConnected(const QSwipeGesture* self, QMetaMethod* signal) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        return vqswipegesture->isSignalConnected(*signal);
    } else {
        return vqswipegesture->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSwipeGesture_QBaseIsSignalConnected(const QSwipeGesture* self, QMetaMethod* signal) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        vqswipegesture->setQSwipeGesture_IsSignalConnected_IsBase(true);
        return vqswipegesture->isSignalConnected(*signal);
    } else {
        return vqswipegesture->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSwipeGesture_OnIsSignalConnected(const QSwipeGesture* self, intptr_t slot) {
    if (auto* vqswipegesture = const_cast<VirtualQSwipeGesture*>(dynamic_cast<const VirtualQSwipeGesture*>(self))) {
        vqswipegesture->setQSwipeGesture_IsSignalConnected_Callback(reinterpret_cast<VirtualQSwipeGesture::QSwipeGesture_IsSignalConnected_Callback>(slot));
    }
}

void QSwipeGesture_Delete(QSwipeGesture* self) {
    delete self;
}

QTapGesture* QTapGesture_new() {
    return new VirtualQTapGesture();
}

QTapGesture* QTapGesture_new2(QObject* parent) {
    return new VirtualQTapGesture(parent);
}

QMetaObject* QTapGesture_MetaObject(const QTapGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTapGesture_Metacast(QTapGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTapGesture_Metacall(QTapGesture* self, int param1, int param2, void** param3) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTapGesture_OnMetacall(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_Metacall_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTapGesture_QBaseMetacall(QTapGesture* self, int param1, int param2, void** param3) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_Metacall_IsBase(true);
        return vqtapgesture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTapGesture_Tr(const char* s) {
    QString _ret = QTapGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPointF* QTapGesture_Position(const QTapGesture* self) {
    return new QPointF(self->position());
}

void QTapGesture_SetPosition(QTapGesture* self, QPointF* pos) {
    self->setPosition(*pos);
}

libqt_string QTapGesture_Tr2(const char* s, const char* c) {
    QString _ret = QTapGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTapGesture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTapGesture::tr(s, c, static_cast<int>(n));
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
bool QTapGesture_Event(QTapGesture* self, QEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        return vqtapgesture->event(event);
    } else {
        return vqtapgesture->event(event);
    }
}

// Base class handler implementation
bool QTapGesture_QBaseEvent(QTapGesture* self, QEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_Event_IsBase(true);
        return vqtapgesture->event(event);
    } else {
        return vqtapgesture->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnEvent(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_Event_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTapGesture_EventFilter(QTapGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        return vqtapgesture->eventFilter(watched, event);
    } else {
        return vqtapgesture->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTapGesture_QBaseEventFilter(QTapGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_EventFilter_IsBase(true);
        return vqtapgesture->eventFilter(watched, event);
    } else {
        return vqtapgesture->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnEventFilter(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_EventFilter_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapGesture_TimerEvent(QTapGesture* self, QTimerEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->timerEvent(event);
    } else {
        vqtapgesture->timerEvent(event);
    }
}

// Base class handler implementation
void QTapGesture_QBaseTimerEvent(QTapGesture* self, QTimerEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_TimerEvent_IsBase(true);
        vqtapgesture->timerEvent(event);
    } else {
        vqtapgesture->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnTimerEvent(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_TimerEvent_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapGesture_ChildEvent(QTapGesture* self, QChildEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->childEvent(event);
    } else {
        vqtapgesture->childEvent(event);
    }
}

// Base class handler implementation
void QTapGesture_QBaseChildEvent(QTapGesture* self, QChildEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_ChildEvent_IsBase(true);
        vqtapgesture->childEvent(event);
    } else {
        vqtapgesture->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnChildEvent(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_ChildEvent_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapGesture_CustomEvent(QTapGesture* self, QEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->customEvent(event);
    } else {
        vqtapgesture->customEvent(event);
    }
}

// Base class handler implementation
void QTapGesture_QBaseCustomEvent(QTapGesture* self, QEvent* event) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_CustomEvent_IsBase(true);
        vqtapgesture->customEvent(event);
    } else {
        vqtapgesture->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnCustomEvent(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_CustomEvent_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapGesture_ConnectNotify(QTapGesture* self, QMetaMethod* signal) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->connectNotify(*signal);
    } else {
        vqtapgesture->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTapGesture_QBaseConnectNotify(QTapGesture* self, QMetaMethod* signal) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_ConnectNotify_IsBase(true);
        vqtapgesture->connectNotify(*signal);
    } else {
        vqtapgesture->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnConnectNotify(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_ConnectNotify_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapGesture_DisconnectNotify(QTapGesture* self, QMetaMethod* signal) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->disconnectNotify(*signal);
    } else {
        vqtapgesture->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTapGesture_QBaseDisconnectNotify(QTapGesture* self, QMetaMethod* signal) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_DisconnectNotify_IsBase(true);
        vqtapgesture->disconnectNotify(*signal);
    } else {
        vqtapgesture->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnDisconnectNotify(QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = dynamic_cast<VirtualQTapGesture*>(self)) {
        vqtapgesture->setQTapGesture_DisconnectNotify_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTapGesture_Sender(const QTapGesture* self) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        return vqtapgesture->sender();
    } else {
        return vqtapgesture->sender();
    }
}

// Base class handler implementation
QObject* QTapGesture_QBaseSender(const QTapGesture* self) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        vqtapgesture->setQTapGesture_Sender_IsBase(true);
        return vqtapgesture->sender();
    } else {
        return vqtapgesture->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnSender(const QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        vqtapgesture->setQTapGesture_Sender_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTapGesture_SenderSignalIndex(const QTapGesture* self) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        return vqtapgesture->senderSignalIndex();
    } else {
        return vqtapgesture->senderSignalIndex();
    }
}

// Base class handler implementation
int QTapGesture_QBaseSenderSignalIndex(const QTapGesture* self) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        vqtapgesture->setQTapGesture_SenderSignalIndex_IsBase(true);
        return vqtapgesture->senderSignalIndex();
    } else {
        return vqtapgesture->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnSenderSignalIndex(const QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        vqtapgesture->setQTapGesture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTapGesture_Receivers(const QTapGesture* self, const char* signal) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        return vqtapgesture->receivers(signal);
    } else {
        return vqtapgesture->receivers(signal);
    }
}

// Base class handler implementation
int QTapGesture_QBaseReceivers(const QTapGesture* self, const char* signal) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        vqtapgesture->setQTapGesture_Receivers_IsBase(true);
        return vqtapgesture->receivers(signal);
    } else {
        return vqtapgesture->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnReceivers(const QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        vqtapgesture->setQTapGesture_Receivers_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTapGesture_IsSignalConnected(const QTapGesture* self, QMetaMethod* signal) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        return vqtapgesture->isSignalConnected(*signal);
    } else {
        return vqtapgesture->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTapGesture_QBaseIsSignalConnected(const QTapGesture* self, QMetaMethod* signal) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        vqtapgesture->setQTapGesture_IsSignalConnected_IsBase(true);
        return vqtapgesture->isSignalConnected(*signal);
    } else {
        return vqtapgesture->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapGesture_OnIsSignalConnected(const QTapGesture* self, intptr_t slot) {
    if (auto* vqtapgesture = const_cast<VirtualQTapGesture*>(dynamic_cast<const VirtualQTapGesture*>(self))) {
        vqtapgesture->setQTapGesture_IsSignalConnected_Callback(reinterpret_cast<VirtualQTapGesture::QTapGesture_IsSignalConnected_Callback>(slot));
    }
}

void QTapGesture_Delete(QTapGesture* self) {
    delete self;
}

QTapAndHoldGesture* QTapAndHoldGesture_new() {
    return new VirtualQTapAndHoldGesture();
}

QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent) {
    return new VirtualQTapAndHoldGesture(parent);
}

QMetaObject* QTapAndHoldGesture_MetaObject(const QTapAndHoldGesture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTapAndHoldGesture_Metacast(QTapAndHoldGesture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTapAndHoldGesture_Metacall(QTapAndHoldGesture* self, int param1, int param2, void** param3) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTapAndHoldGesture_OnMetacall(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_Metacall_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTapAndHoldGesture_QBaseMetacall(QTapAndHoldGesture* self, int param1, int param2, void** param3) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_Metacall_IsBase(true);
        return vqtapandholdgesture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTapAndHoldGesture_Tr(const char* s) {
    QString _ret = QTapAndHoldGesture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPointF* QTapAndHoldGesture_Position(const QTapAndHoldGesture* self) {
    return new QPointF(self->position());
}

void QTapAndHoldGesture_SetPosition(QTapAndHoldGesture* self, QPointF* pos) {
    self->setPosition(*pos);
}

void QTapAndHoldGesture_SetTimeout(int msecs) {
    QTapAndHoldGesture::setTimeout(static_cast<int>(msecs));
}

int QTapAndHoldGesture_Timeout() {
    return QTapAndHoldGesture::timeout();
}

libqt_string QTapAndHoldGesture_Tr2(const char* s, const char* c) {
    QString _ret = QTapAndHoldGesture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTapAndHoldGesture_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTapAndHoldGesture::tr(s, c, static_cast<int>(n));
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
bool QTapAndHoldGesture_Event(QTapAndHoldGesture* self, QEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        return vqtapandholdgesture->event(event);
    } else {
        return vqtapandholdgesture->event(event);
    }
}

// Base class handler implementation
bool QTapAndHoldGesture_QBaseEvent(QTapAndHoldGesture* self, QEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_Event_IsBase(true);
        return vqtapandholdgesture->event(event);
    } else {
        return vqtapandholdgesture->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnEvent(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_Event_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTapAndHoldGesture_EventFilter(QTapAndHoldGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        return vqtapandholdgesture->eventFilter(watched, event);
    } else {
        return vqtapandholdgesture->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTapAndHoldGesture_QBaseEventFilter(QTapAndHoldGesture* self, QObject* watched, QEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_EventFilter_IsBase(true);
        return vqtapandholdgesture->eventFilter(watched, event);
    } else {
        return vqtapandholdgesture->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnEventFilter(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_EventFilter_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapAndHoldGesture_TimerEvent(QTapAndHoldGesture* self, QTimerEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->timerEvent(event);
    } else {
        vqtapandholdgesture->timerEvent(event);
    }
}

// Base class handler implementation
void QTapAndHoldGesture_QBaseTimerEvent(QTapAndHoldGesture* self, QTimerEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_TimerEvent_IsBase(true);
        vqtapandholdgesture->timerEvent(event);
    } else {
        vqtapandholdgesture->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnTimerEvent(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_TimerEvent_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapAndHoldGesture_ChildEvent(QTapAndHoldGesture* self, QChildEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->childEvent(event);
    } else {
        vqtapandholdgesture->childEvent(event);
    }
}

// Base class handler implementation
void QTapAndHoldGesture_QBaseChildEvent(QTapAndHoldGesture* self, QChildEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_ChildEvent_IsBase(true);
        vqtapandholdgesture->childEvent(event);
    } else {
        vqtapandholdgesture->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnChildEvent(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_ChildEvent_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapAndHoldGesture_CustomEvent(QTapAndHoldGesture* self, QEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->customEvent(event);
    } else {
        vqtapandholdgesture->customEvent(event);
    }
}

// Base class handler implementation
void QTapAndHoldGesture_QBaseCustomEvent(QTapAndHoldGesture* self, QEvent* event) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_CustomEvent_IsBase(true);
        vqtapandholdgesture->customEvent(event);
    } else {
        vqtapandholdgesture->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnCustomEvent(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_CustomEvent_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapAndHoldGesture_ConnectNotify(QTapAndHoldGesture* self, QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->connectNotify(*signal);
    } else {
        vqtapandholdgesture->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTapAndHoldGesture_QBaseConnectNotify(QTapAndHoldGesture* self, QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_ConnectNotify_IsBase(true);
        vqtapandholdgesture->connectNotify(*signal);
    } else {
        vqtapandholdgesture->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnConnectNotify(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_ConnectNotify_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTapAndHoldGesture_DisconnectNotify(QTapAndHoldGesture* self, QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->disconnectNotify(*signal);
    } else {
        vqtapandholdgesture->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTapAndHoldGesture_QBaseDisconnectNotify(QTapAndHoldGesture* self, QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_DisconnectNotify_IsBase(true);
        vqtapandholdgesture->disconnectNotify(*signal);
    } else {
        vqtapandholdgesture->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnDisconnectNotify(QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = dynamic_cast<VirtualQTapAndHoldGesture*>(self)) {
        vqtapandholdgesture->setQTapAndHoldGesture_DisconnectNotify_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTapAndHoldGesture_Sender(const QTapAndHoldGesture* self) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        return vqtapandholdgesture->sender();
    } else {
        return vqtapandholdgesture->sender();
    }
}

// Base class handler implementation
QObject* QTapAndHoldGesture_QBaseSender(const QTapAndHoldGesture* self) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        vqtapandholdgesture->setQTapAndHoldGesture_Sender_IsBase(true);
        return vqtapandholdgesture->sender();
    } else {
        return vqtapandholdgesture->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnSender(const QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        vqtapandholdgesture->setQTapAndHoldGesture_Sender_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTapAndHoldGesture_SenderSignalIndex(const QTapAndHoldGesture* self) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        return vqtapandholdgesture->senderSignalIndex();
    } else {
        return vqtapandholdgesture->senderSignalIndex();
    }
}

// Base class handler implementation
int QTapAndHoldGesture_QBaseSenderSignalIndex(const QTapAndHoldGesture* self) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        vqtapandholdgesture->setQTapAndHoldGesture_SenderSignalIndex_IsBase(true);
        return vqtapandholdgesture->senderSignalIndex();
    } else {
        return vqtapandholdgesture->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnSenderSignalIndex(const QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        vqtapandholdgesture->setQTapAndHoldGesture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTapAndHoldGesture_Receivers(const QTapAndHoldGesture* self, const char* signal) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        return vqtapandholdgesture->receivers(signal);
    } else {
        return vqtapandholdgesture->receivers(signal);
    }
}

// Base class handler implementation
int QTapAndHoldGesture_QBaseReceivers(const QTapAndHoldGesture* self, const char* signal) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        vqtapandholdgesture->setQTapAndHoldGesture_Receivers_IsBase(true);
        return vqtapandholdgesture->receivers(signal);
    } else {
        return vqtapandholdgesture->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnReceivers(const QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        vqtapandholdgesture->setQTapAndHoldGesture_Receivers_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTapAndHoldGesture_IsSignalConnected(const QTapAndHoldGesture* self, QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        return vqtapandholdgesture->isSignalConnected(*signal);
    } else {
        return vqtapandholdgesture->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTapAndHoldGesture_QBaseIsSignalConnected(const QTapAndHoldGesture* self, QMetaMethod* signal) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        vqtapandholdgesture->setQTapAndHoldGesture_IsSignalConnected_IsBase(true);
        return vqtapandholdgesture->isSignalConnected(*signal);
    } else {
        return vqtapandholdgesture->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTapAndHoldGesture_OnIsSignalConnected(const QTapAndHoldGesture* self, intptr_t slot) {
    if (auto* vqtapandholdgesture = const_cast<VirtualQTapAndHoldGesture*>(dynamic_cast<const VirtualQTapAndHoldGesture*>(self))) {
        vqtapandholdgesture->setQTapAndHoldGesture_IsSignalConnected_Callback(reinterpret_cast<VirtualQTapAndHoldGesture::QTapAndHoldGesture_IsSignalConnected_Callback>(slot));
    }
}

void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self) {
    delete self;
}

QGestureEvent* QGestureEvent_new(libqt_list /* of QGesture* */ gestures) {
    QList<QGesture*> gestures_QList;
    gestures_QList.reserve(gestures.len);
    QGesture** gestures_arr = static_cast<QGesture**>(gestures.data.ptr);
    for (size_t i = 0; i < gestures.len; ++i) {
        gestures_QList.push_back(gestures_arr[i]);
    }
    return new VirtualQGestureEvent(gestures_QList);
}

QGestureEvent* QGestureEvent_new2(QGestureEvent* param1) {
    return new VirtualQGestureEvent(*param1);
}

libqt_list /* of QGesture* */ QGestureEvent_Gestures(const QGestureEvent* self) {
    QList<QGesture*> _ret = self->gestures();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QGesture* QGestureEvent_Gesture(const QGestureEvent* self, int typeVal) {
    return self->gesture(static_cast<Qt::GestureType>(typeVal));
}

libqt_list /* of QGesture* */ QGestureEvent_ActiveGestures(const QGestureEvent* self) {
    QList<QGesture*> _ret = self->activeGestures();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGesture* */ QGestureEvent_CanceledGestures(const QGestureEvent* self) {
    QList<QGesture*> _ret = self->canceledGestures();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QGestureEvent_Accept(QGestureEvent* self, QGesture* param1) {
    self->accept(param1);
}

void QGestureEvent_Ignore(QGestureEvent* self, QGesture* param1) {
    self->ignore(param1);
}

bool QGestureEvent_IsAccepted(const QGestureEvent* self, QGesture* param1) {
    return self->isAccepted(param1);
}

void QGestureEvent_SetAccepted2(QGestureEvent* self, int param1, bool param2) {
    self->setAccepted(static_cast<Qt::GestureType>(param1), param2);
}

void QGestureEvent_AcceptWithQtGestureType(QGestureEvent* self, int param1) {
    self->accept(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_IgnoreWithQtGestureType(QGestureEvent* self, int param1) {
    self->ignore(static_cast<Qt::GestureType>(param1));
}

bool QGestureEvent_IsAcceptedWithQtGestureType(const QGestureEvent* self, int param1) {
    return self->isAccepted(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QGestureEvent_Widget(const QGestureEvent* self) {
    return self->widget();
}

QPointF* QGestureEvent_MapToGraphicsScene(const QGestureEvent* self, QPointF* gesturePoint) {
    return new QPointF(self->mapToGraphicsScene(*gesturePoint));
}

// Derived class handler implementation
void QGestureEvent_SetAccepted(QGestureEvent* self, bool accepted) {
    if (auto* vqgestureevent = dynamic_cast<VirtualQGestureEvent*>(self)) {
        vqgestureevent->setAccepted(accepted);
    } else {
        vqgestureevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QGestureEvent_QBaseSetAccepted(QGestureEvent* self, bool accepted) {
    if (auto* vqgestureevent = dynamic_cast<VirtualQGestureEvent*>(self)) {
        vqgestureevent->setQGestureEvent_SetAccepted_IsBase(true);
        vqgestureevent->setAccepted(accepted);
    } else {
        vqgestureevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QGestureEvent_OnSetAccepted(QGestureEvent* self, intptr_t slot) {
    if (auto* vqgestureevent = dynamic_cast<VirtualQGestureEvent*>(self)) {
        vqgestureevent->setQGestureEvent_SetAccepted_Callback(reinterpret_cast<VirtualQGestureEvent::QGestureEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QGestureEvent_Clone(const QGestureEvent* self) {
    if (auto* vqgestureevent = const_cast<VirtualQGestureEvent*>(dynamic_cast<const VirtualQGestureEvent*>(self))) {
        return vqgestureevent->clone();
    } else {
        return vqgestureevent->clone();
    }
}

// Base class handler implementation
QEvent* QGestureEvent_QBaseClone(const QGestureEvent* self) {
    if (auto* vqgestureevent = const_cast<VirtualQGestureEvent*>(dynamic_cast<const VirtualQGestureEvent*>(self))) {
        vqgestureevent->setQGestureEvent_Clone_IsBase(true);
        return vqgestureevent->clone();
    } else {
        return vqgestureevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QGestureEvent_OnClone(const QGestureEvent* self, intptr_t slot) {
    if (auto* vqgestureevent = const_cast<VirtualQGestureEvent*>(dynamic_cast<const VirtualQGestureEvent*>(self))) {
        vqgestureevent->setQGestureEvent_Clone_Callback(reinterpret_cast<VirtualQGestureEvent::QGestureEvent_Clone_Callback>(slot));
    }
}

void QGestureEvent_Delete(QGestureEvent* self) {
    delete self;
}

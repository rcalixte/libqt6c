#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHttpMultiPart>
#include <QHttpPart>
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
#include <qhttpmultipart.h>
#include "libqhttpmultipart.hpp"
#include "libqhttpmultipart.hxx"

QHttpPart* QHttpPart_new() {
    return new QHttpPart();
}

QHttpPart* QHttpPart_new2(QHttpPart* other) {
    return new QHttpPart(*other);
}

void QHttpPart_OperatorAssign(QHttpPart* self, QHttpPart* other) {
    self->operator=(*other);
}

void QHttpPart_Swap(QHttpPart* self, QHttpPart* other) {
    self->swap(*other);
}

bool QHttpPart_OperatorEqual(const QHttpPart* self, QHttpPart* other) {
    return (*self == *other);
}

bool QHttpPart_OperatorNotEqual(const QHttpPart* self, QHttpPart* other) {
    return (*self != *other);
}

void QHttpPart_SetHeader(QHttpPart* self, int header, QVariant* value) {
    self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

void QHttpPart_SetRawHeader(QHttpPart* self, libqt_string headerName, libqt_string headerValue) {
    QByteArray headerName_QByteArray(headerName.data, headerName.len);
    QByteArray headerValue_QByteArray(headerValue.data, headerValue.len);
    self->setRawHeader(headerName_QByteArray, headerValue_QByteArray);
}

void QHttpPart_SetBody(QHttpPart* self, libqt_string body) {
    QByteArray body_QByteArray(body.data, body.len);
    self->setBody(body_QByteArray);
}

void QHttpPart_SetBodyDevice(QHttpPart* self, QIODevice* device) {
    self->setBodyDevice(device);
}

void QHttpPart_Delete(QHttpPart* self) {
    delete self;
}

QHttpMultiPart* QHttpMultiPart_new() {
    return new VirtualQHttpMultiPart();
}

QHttpMultiPart* QHttpMultiPart_new2(int contentType) {
    return new VirtualQHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType));
}

QHttpMultiPart* QHttpMultiPart_new3(QObject* parent) {
    return new VirtualQHttpMultiPart(parent);
}

QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent) {
    return new VirtualQHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType), parent);
}

QMetaObject* QHttpMultiPart_MetaObject(const QHttpMultiPart* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHttpMultiPart_Metacast(QHttpMultiPart* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHttpMultiPart_Metacall(QHttpMultiPart* self, int param1, int param2, void** param3) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHttpMultiPart_OnMetacall(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_Metacall_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHttpMultiPart_QBaseMetacall(QHttpMultiPart* self, int param1, int param2, void** param3) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_Metacall_IsBase(true);
        return vqhttpmultipart->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHttpMultiPart_Tr(const char* s) {
    QString _ret = QHttpMultiPart::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QHttpMultiPart_Append(QHttpMultiPart* self, QHttpPart* httpPart) {
    self->append(*httpPart);
}

void QHttpMultiPart_SetContentType(QHttpMultiPart* self, int contentType) {
    self->setContentType(static_cast<QHttpMultiPart::ContentType>(contentType));
}

libqt_string QHttpMultiPart_Boundary(const QHttpMultiPart* self) {
    QByteArray _qb = self->boundary();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QHttpMultiPart_SetBoundary(QHttpMultiPart* self, libqt_string boundary) {
    QByteArray boundary_QByteArray(boundary.data, boundary.len);
    self->setBoundary(boundary_QByteArray);
}

libqt_string QHttpMultiPart_Tr2(const char* s, const char* c) {
    QString _ret = QHttpMultiPart::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHttpMultiPart_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHttpMultiPart::tr(s, c, static_cast<int>(n));
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
bool QHttpMultiPart_Event(QHttpMultiPart* self, QEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        return vqhttpmultipart->event(event);
    } else {
        return vqhttpmultipart->event(event);
    }
}

// Base class handler implementation
bool QHttpMultiPart_QBaseEvent(QHttpMultiPart* self, QEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_Event_IsBase(true);
        return vqhttpmultipart->event(event);
    } else {
        return vqhttpmultipart->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnEvent(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_Event_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHttpMultiPart_EventFilter(QHttpMultiPart* self, QObject* watched, QEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        return vqhttpmultipart->eventFilter(watched, event);
    } else {
        return vqhttpmultipart->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHttpMultiPart_QBaseEventFilter(QHttpMultiPart* self, QObject* watched, QEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_EventFilter_IsBase(true);
        return vqhttpmultipart->eventFilter(watched, event);
    } else {
        return vqhttpmultipart->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnEventFilter(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_EventFilter_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHttpMultiPart_TimerEvent(QHttpMultiPart* self, QTimerEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->timerEvent(event);
    } else {
        vqhttpmultipart->timerEvent(event);
    }
}

// Base class handler implementation
void QHttpMultiPart_QBaseTimerEvent(QHttpMultiPart* self, QTimerEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_TimerEvent_IsBase(true);
        vqhttpmultipart->timerEvent(event);
    } else {
        vqhttpmultipart->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnTimerEvent(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_TimerEvent_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHttpMultiPart_ChildEvent(QHttpMultiPart* self, QChildEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->childEvent(event);
    } else {
        vqhttpmultipart->childEvent(event);
    }
}

// Base class handler implementation
void QHttpMultiPart_QBaseChildEvent(QHttpMultiPart* self, QChildEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_ChildEvent_IsBase(true);
        vqhttpmultipart->childEvent(event);
    } else {
        vqhttpmultipart->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnChildEvent(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_ChildEvent_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHttpMultiPart_CustomEvent(QHttpMultiPart* self, QEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->customEvent(event);
    } else {
        vqhttpmultipart->customEvent(event);
    }
}

// Base class handler implementation
void QHttpMultiPart_QBaseCustomEvent(QHttpMultiPart* self, QEvent* event) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_CustomEvent_IsBase(true);
        vqhttpmultipart->customEvent(event);
    } else {
        vqhttpmultipart->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnCustomEvent(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_CustomEvent_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHttpMultiPart_ConnectNotify(QHttpMultiPart* self, QMetaMethod* signal) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->connectNotify(*signal);
    } else {
        vqhttpmultipart->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHttpMultiPart_QBaseConnectNotify(QHttpMultiPart* self, QMetaMethod* signal) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_ConnectNotify_IsBase(true);
        vqhttpmultipart->connectNotify(*signal);
    } else {
        vqhttpmultipart->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnConnectNotify(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_ConnectNotify_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHttpMultiPart_DisconnectNotify(QHttpMultiPart* self, QMetaMethod* signal) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->disconnectNotify(*signal);
    } else {
        vqhttpmultipart->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHttpMultiPart_QBaseDisconnectNotify(QHttpMultiPart* self, QMetaMethod* signal) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_DisconnectNotify_IsBase(true);
        vqhttpmultipart->disconnectNotify(*signal);
    } else {
        vqhttpmultipart->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnDisconnectNotify(QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = dynamic_cast<VirtualQHttpMultiPart*>(self)) {
        vqhttpmultipart->setQHttpMultiPart_DisconnectNotify_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHttpMultiPart_Sender(const QHttpMultiPart* self) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        return vqhttpmultipart->sender();
    } else {
        return vqhttpmultipart->sender();
    }
}

// Base class handler implementation
QObject* QHttpMultiPart_QBaseSender(const QHttpMultiPart* self) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        vqhttpmultipart->setQHttpMultiPart_Sender_IsBase(true);
        return vqhttpmultipart->sender();
    } else {
        return vqhttpmultipart->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnSender(const QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        vqhttpmultipart->setQHttpMultiPart_Sender_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHttpMultiPart_SenderSignalIndex(const QHttpMultiPart* self) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        return vqhttpmultipart->senderSignalIndex();
    } else {
        return vqhttpmultipart->senderSignalIndex();
    }
}

// Base class handler implementation
int QHttpMultiPart_QBaseSenderSignalIndex(const QHttpMultiPart* self) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        vqhttpmultipart->setQHttpMultiPart_SenderSignalIndex_IsBase(true);
        return vqhttpmultipart->senderSignalIndex();
    } else {
        return vqhttpmultipart->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnSenderSignalIndex(const QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        vqhttpmultipart->setQHttpMultiPart_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHttpMultiPart_Receivers(const QHttpMultiPart* self, const char* signal) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        return vqhttpmultipart->receivers(signal);
    } else {
        return vqhttpmultipart->receivers(signal);
    }
}

// Base class handler implementation
int QHttpMultiPart_QBaseReceivers(const QHttpMultiPart* self, const char* signal) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        vqhttpmultipart->setQHttpMultiPart_Receivers_IsBase(true);
        return vqhttpmultipart->receivers(signal);
    } else {
        return vqhttpmultipart->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnReceivers(const QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        vqhttpmultipart->setQHttpMultiPart_Receivers_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHttpMultiPart_IsSignalConnected(const QHttpMultiPart* self, QMetaMethod* signal) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        return vqhttpmultipart->isSignalConnected(*signal);
    } else {
        return vqhttpmultipart->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHttpMultiPart_QBaseIsSignalConnected(const QHttpMultiPart* self, QMetaMethod* signal) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        vqhttpmultipart->setQHttpMultiPart_IsSignalConnected_IsBase(true);
        return vqhttpmultipart->isSignalConnected(*signal);
    } else {
        return vqhttpmultipart->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHttpMultiPart_OnIsSignalConnected(const QHttpMultiPart* self, intptr_t slot) {
    if (auto* vqhttpmultipart = const_cast<VirtualQHttpMultiPart*>(dynamic_cast<const VirtualQHttpMultiPart*>(self))) {
        vqhttpmultipart->setQHttpMultiPart_IsSignalConnected_Callback(reinterpret_cast<VirtualQHttpMultiPart::QHttpMultiPart_IsSignalConnected_Callback>(slot));
    }
}

void QHttpMultiPart_Delete(QHttpMultiPart* self) {
    delete self;
}

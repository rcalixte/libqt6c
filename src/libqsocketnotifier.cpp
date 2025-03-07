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
#include <QSocketDescriptor>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qsocketnotifier.h>
#include "libqsocketnotifier.hpp"
#include "libqsocketnotifier.hxx"

QSocketNotifier* QSocketNotifier_new(int param1) {
    return new VirtualQSocketNotifier(static_cast<QSocketNotifier::Type>(param1));
}

QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2) {
    return new VirtualQSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new3(int param1, QObject* parent) {
    return new VirtualQSocketNotifier(static_cast<QSocketNotifier::Type>(param1), parent);
}

QSocketNotifier* QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent) {
    return new VirtualQSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2), parent);
}

QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSocketNotifier_Metacast(QSocketNotifier* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSocketNotifier_Metacall(QSocketNotifier* self, int param1, int param2, void** param3) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSocketNotifier_OnMetacall(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_Metacall_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSocketNotifier_QBaseMetacall(QSocketNotifier* self, int param1, int param2, void** param3) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_Metacall_IsBase(true);
        return vqsocketnotifier->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSocketNotifier_Tr(const char* s) {
    QString _ret = QSocketNotifier::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSocketNotifier_SetSocket(QSocketNotifier* self, intptr_t socket) {
    self->setSocket((qintptr)(socket));
}

intptr_t QSocketNotifier_Socket(const QSocketNotifier* self) {
    qintptr _ret = self->socket();
    return (intptr_t)(_ret);
}

int QSocketNotifier_Type(const QSocketNotifier* self) {
    return static_cast<int>(self->type());
}

bool QSocketNotifier_IsValid(const QSocketNotifier* self) {
    return self->isValid();
}

bool QSocketNotifier_IsEnabled(const QSocketNotifier* self) {
    return self->isEnabled();
}

void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled) {
    self->setEnabled(enabled);
}

libqt_string QSocketNotifier_Tr2(const char* s, const char* c) {
    QString _ret = QSocketNotifier::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
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
bool QSocketNotifier_Event(QSocketNotifier* self, QEvent* param1) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        return vqsocketnotifier->event(param1);
    } else {
        return vqsocketnotifier->event(param1);
    }
}

// Base class handler implementation
bool QSocketNotifier_QBaseEvent(QSocketNotifier* self, QEvent* param1) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_Event_IsBase(true);
        return vqsocketnotifier->event(param1);
    } else {
        return vqsocketnotifier->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnEvent(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_Event_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSocketNotifier_EventFilter(QSocketNotifier* self, QObject* watched, QEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        return vqsocketnotifier->eventFilter(watched, event);
    } else {
        return vqsocketnotifier->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSocketNotifier_QBaseEventFilter(QSocketNotifier* self, QObject* watched, QEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_EventFilter_IsBase(true);
        return vqsocketnotifier->eventFilter(watched, event);
    } else {
        return vqsocketnotifier->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnEventFilter(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_EventFilter_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSocketNotifier_TimerEvent(QSocketNotifier* self, QTimerEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->timerEvent(event);
    } else {
        vqsocketnotifier->timerEvent(event);
    }
}

// Base class handler implementation
void QSocketNotifier_QBaseTimerEvent(QSocketNotifier* self, QTimerEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_TimerEvent_IsBase(true);
        vqsocketnotifier->timerEvent(event);
    } else {
        vqsocketnotifier->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnTimerEvent(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_TimerEvent_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSocketNotifier_ChildEvent(QSocketNotifier* self, QChildEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->childEvent(event);
    } else {
        vqsocketnotifier->childEvent(event);
    }
}

// Base class handler implementation
void QSocketNotifier_QBaseChildEvent(QSocketNotifier* self, QChildEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_ChildEvent_IsBase(true);
        vqsocketnotifier->childEvent(event);
    } else {
        vqsocketnotifier->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnChildEvent(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_ChildEvent_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSocketNotifier_CustomEvent(QSocketNotifier* self, QEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->customEvent(event);
    } else {
        vqsocketnotifier->customEvent(event);
    }
}

// Base class handler implementation
void QSocketNotifier_QBaseCustomEvent(QSocketNotifier* self, QEvent* event) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_CustomEvent_IsBase(true);
        vqsocketnotifier->customEvent(event);
    } else {
        vqsocketnotifier->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnCustomEvent(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_CustomEvent_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSocketNotifier_ConnectNotify(QSocketNotifier* self, QMetaMethod* signal) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->connectNotify(*signal);
    } else {
        vqsocketnotifier->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSocketNotifier_QBaseConnectNotify(QSocketNotifier* self, QMetaMethod* signal) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_ConnectNotify_IsBase(true);
        vqsocketnotifier->connectNotify(*signal);
    } else {
        vqsocketnotifier->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnConnectNotify(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_ConnectNotify_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSocketNotifier_DisconnectNotify(QSocketNotifier* self, QMetaMethod* signal) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->disconnectNotify(*signal);
    } else {
        vqsocketnotifier->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSocketNotifier_QBaseDisconnectNotify(QSocketNotifier* self, QMetaMethod* signal) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_DisconnectNotify_IsBase(true);
        vqsocketnotifier->disconnectNotify(*signal);
    } else {
        vqsocketnotifier->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnDisconnectNotify(QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = dynamic_cast<VirtualQSocketNotifier*>(self)) {
        vqsocketnotifier->setQSocketNotifier_DisconnectNotify_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSocketNotifier_Sender(const QSocketNotifier* self) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        return vqsocketnotifier->sender();
    } else {
        return vqsocketnotifier->sender();
    }
}

// Base class handler implementation
QObject* QSocketNotifier_QBaseSender(const QSocketNotifier* self) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        vqsocketnotifier->setQSocketNotifier_Sender_IsBase(true);
        return vqsocketnotifier->sender();
    } else {
        return vqsocketnotifier->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnSender(const QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        vqsocketnotifier->setQSocketNotifier_Sender_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSocketNotifier_SenderSignalIndex(const QSocketNotifier* self) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        return vqsocketnotifier->senderSignalIndex();
    } else {
        return vqsocketnotifier->senderSignalIndex();
    }
}

// Base class handler implementation
int QSocketNotifier_QBaseSenderSignalIndex(const QSocketNotifier* self) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        vqsocketnotifier->setQSocketNotifier_SenderSignalIndex_IsBase(true);
        return vqsocketnotifier->senderSignalIndex();
    } else {
        return vqsocketnotifier->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnSenderSignalIndex(const QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        vqsocketnotifier->setQSocketNotifier_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSocketNotifier_Receivers(const QSocketNotifier* self, const char* signal) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        return vqsocketnotifier->receivers(signal);
    } else {
        return vqsocketnotifier->receivers(signal);
    }
}

// Base class handler implementation
int QSocketNotifier_QBaseReceivers(const QSocketNotifier* self, const char* signal) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        vqsocketnotifier->setQSocketNotifier_Receivers_IsBase(true);
        return vqsocketnotifier->receivers(signal);
    } else {
        return vqsocketnotifier->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnReceivers(const QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        vqsocketnotifier->setQSocketNotifier_Receivers_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSocketNotifier_IsSignalConnected(const QSocketNotifier* self, QMetaMethod* signal) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        return vqsocketnotifier->isSignalConnected(*signal);
    } else {
        return vqsocketnotifier->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSocketNotifier_QBaseIsSignalConnected(const QSocketNotifier* self, QMetaMethod* signal) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        vqsocketnotifier->setQSocketNotifier_IsSignalConnected_IsBase(true);
        return vqsocketnotifier->isSignalConnected(*signal);
    } else {
        return vqsocketnotifier->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSocketNotifier_OnIsSignalConnected(const QSocketNotifier* self, intptr_t slot) {
    if (auto* vqsocketnotifier = const_cast<VirtualQSocketNotifier*>(dynamic_cast<const VirtualQSocketNotifier*>(self))) {
        vqsocketnotifier->setQSocketNotifier_IsSignalConnected_Callback(reinterpret_cast<VirtualQSocketNotifier::QSocketNotifier_IsSignalConnected_Callback>(slot));
    }
}

void QSocketNotifier_Delete(QSocketNotifier* self) {
    delete self;
}

QSocketDescriptor* QSocketDescriptor_new(QSocketDescriptor* other) {
    return new QSocketDescriptor(*other);
}

QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* other) {
    return new QSocketDescriptor(std::move(*other));
}

QSocketDescriptor* QSocketDescriptor_new3() {
    return new QSocketDescriptor();
}

QSocketDescriptor* QSocketDescriptor_new4(QSocketDescriptor* param1) {
    return new QSocketDescriptor(*param1);
}

QSocketDescriptor* QSocketDescriptor_new5(int descriptor) {
#ifdef Q_OS_LINUX
    return new QSocketDescriptor(static_cast<QSocketDescriptor::DescriptorType>(descriptor));
#else
    return nullptr;
#endif
}

void QSocketDescriptor_CopyAssign(QSocketDescriptor* self, QSocketDescriptor* other) {
    *self = *other;
}

void QSocketDescriptor_MoveAssign(QSocketDescriptor* self, QSocketDescriptor* other) {
    *self = std::move(*other);
}

int QSocketDescriptor_ToInt(const QSocketDescriptor* self) {
#ifdef Q_OS_LINUX
    return static_cast<int>(self->operator int());
#else
    int _ret_invalidOS;
    return _ret_invalidOS;
#endif
}

bool QSocketDescriptor_IsValid(const QSocketDescriptor* self) {
    return self->isValid();
}

void QSocketDescriptor_Delete(QSocketDescriptor* self) {
    delete self;
}

#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QJsonObject>
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
#include <QWebChannelAbstractTransport>
#include <qwebchannelabstracttransport.h>
#include "libqwebchannelabstracttransport.hpp"
#include "libqwebchannelabstracttransport.hxx"

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new() {
    return new VirtualQWebChannelAbstractTransport();
}

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new2(QObject* parent) {
    return new VirtualQWebChannelAbstractTransport(parent);
}

QMetaObject* QWebChannelAbstractTransport_MetaObject(const QWebChannelAbstractTransport* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebChannelAbstractTransport_Metacast(QWebChannelAbstractTransport* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebChannelAbstractTransport_Metacall(QWebChannelAbstractTransport* self, int param1, int param2, void** param3) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWebChannelAbstractTransport_OnMetacall(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Metacall_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWebChannelAbstractTransport_QBaseMetacall(QWebChannelAbstractTransport* self, int param1, int param2, void** param3) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Metacall_IsBase(true);
        return vqwebchannelabstracttransport->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWebChannelAbstractTransport_Tr(const char* s) {
    QString _ret = QWebChannelAbstractTransport::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebChannelAbstractTransport_MessageReceived(QWebChannelAbstractTransport* self, QJsonObject* message, QWebChannelAbstractTransport* transport) {
    self->messageReceived(*message, transport);
}

void QWebChannelAbstractTransport_Connect_MessageReceived(QWebChannelAbstractTransport* self, intptr_t slot) {
    void (*slotFunc)(QWebChannelAbstractTransport*, QJsonObject*, QWebChannelAbstractTransport*) = reinterpret_cast<void (*)(QWebChannelAbstractTransport*, QJsonObject*, QWebChannelAbstractTransport*)>(slot);
    QWebChannelAbstractTransport::connect(self, &QWebChannelAbstractTransport::messageReceived, [self, slotFunc](const QJsonObject& message, QWebChannelAbstractTransport* transport) {
        const QJsonObject& message_ret = message;
        // Cast returned reference into pointer
        QJsonObject* sigval1 = const_cast<QJsonObject*>(&message_ret);
        QWebChannelAbstractTransport* sigval2 = transport;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QWebChannelAbstractTransport_Tr2(const char* s, const char* c) {
    QString _ret = QWebChannelAbstractTransport::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebChannelAbstractTransport_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebChannelAbstractTransport::tr(s, c, static_cast<int>(n));
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
void QWebChannelAbstractTransport_SendMessage(QWebChannelAbstractTransport* self, QJsonObject* message) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->sendMessage(*message);
    } else {
        vqwebchannelabstracttransport->sendMessage(*message);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseSendMessage(QWebChannelAbstractTransport* self, QJsonObject* message) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SendMessage_IsBase(true);
        vqwebchannelabstracttransport->sendMessage(*message);
    } else {
        vqwebchannelabstracttransport->sendMessage(*message);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnSendMessage(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SendMessage_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_SendMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebChannelAbstractTransport_Event(QWebChannelAbstractTransport* self, QEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        return vqwebchannelabstracttransport->event(event);
    } else {
        return vqwebchannelabstracttransport->event(event);
    }
}

// Base class handler implementation
bool QWebChannelAbstractTransport_QBaseEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Event_IsBase(true);
        return vqwebchannelabstracttransport->event(event);
    } else {
        return vqwebchannelabstracttransport->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Event_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebChannelAbstractTransport_EventFilter(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        return vqwebchannelabstracttransport->eventFilter(watched, event);
    } else {
        return vqwebchannelabstracttransport->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebChannelAbstractTransport_QBaseEventFilter(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_EventFilter_IsBase(true);
        return vqwebchannelabstracttransport->eventFilter(watched, event);
    } else {
        return vqwebchannelabstracttransport->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnEventFilter(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_EventFilter_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_TimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->timerEvent(event);
    } else {
        vqwebchannelabstracttransport->timerEvent(event);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseTimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_TimerEvent_IsBase(true);
        vqwebchannelabstracttransport->timerEvent(event);
    } else {
        vqwebchannelabstracttransport->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnTimerEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_TimerEvent_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_ChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->childEvent(event);
    } else {
        vqwebchannelabstracttransport->childEvent(event);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_ChildEvent_IsBase(true);
        vqwebchannelabstracttransport->childEvent(event);
    } else {
        vqwebchannelabstracttransport->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnChildEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_ChildEvent_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_CustomEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->customEvent(event);
    } else {
        vqwebchannelabstracttransport->customEvent(event);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseCustomEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_CustomEvent_IsBase(true);
        vqwebchannelabstracttransport->customEvent(event);
    } else {
        vqwebchannelabstracttransport->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnCustomEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_CustomEvent_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_ConnectNotify(QWebChannelAbstractTransport* self, QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->connectNotify(*signal);
    } else {
        vqwebchannelabstracttransport->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseConnectNotify(QWebChannelAbstractTransport* self, QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_ConnectNotify_IsBase(true);
        vqwebchannelabstracttransport->connectNotify(*signal);
    } else {
        vqwebchannelabstracttransport->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnConnectNotify(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_ConnectNotify_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_DisconnectNotify(QWebChannelAbstractTransport* self, QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->disconnectNotify(*signal);
    } else {
        vqwebchannelabstracttransport->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseDisconnectNotify(QWebChannelAbstractTransport* self, QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_DisconnectNotify_IsBase(true);
        vqwebchannelabstracttransport->disconnectNotify(*signal);
    } else {
        vqwebchannelabstracttransport->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnDisconnectNotify(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebChannelAbstractTransport_Sender(const QWebChannelAbstractTransport* self) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        return vqwebchannelabstracttransport->sender();
    } else {
        return vqwebchannelabstracttransport->sender();
    }
}

// Base class handler implementation
QObject* QWebChannelAbstractTransport_QBaseSender(const QWebChannelAbstractTransport* self) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Sender_IsBase(true);
        return vqwebchannelabstracttransport->sender();
    } else {
        return vqwebchannelabstracttransport->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnSender(const QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Sender_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebChannelAbstractTransport_SenderSignalIndex(const QWebChannelAbstractTransport* self) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        return vqwebchannelabstracttransport->senderSignalIndex();
    } else {
        return vqwebchannelabstracttransport->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebChannelAbstractTransport_QBaseSenderSignalIndex(const QWebChannelAbstractTransport* self) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SenderSignalIndex_IsBase(true);
        return vqwebchannelabstracttransport->senderSignalIndex();
    } else {
        return vqwebchannelabstracttransport->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnSenderSignalIndex(const QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebChannelAbstractTransport_Receivers(const QWebChannelAbstractTransport* self, const char* signal) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        return vqwebchannelabstracttransport->receivers(signal);
    } else {
        return vqwebchannelabstracttransport->receivers(signal);
    }
}

// Base class handler implementation
int QWebChannelAbstractTransport_QBaseReceivers(const QWebChannelAbstractTransport* self, const char* signal) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Receivers_IsBase(true);
        return vqwebchannelabstracttransport->receivers(signal);
    } else {
        return vqwebchannelabstracttransport->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnReceivers(const QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Receivers_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebChannelAbstractTransport_IsSignalConnected(const QWebChannelAbstractTransport* self, QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        return vqwebchannelabstracttransport->isSignalConnected(*signal);
    } else {
        return vqwebchannelabstracttransport->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebChannelAbstractTransport_QBaseIsSignalConnected(const QWebChannelAbstractTransport* self, QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_IsSignalConnected_IsBase(true);
        return vqwebchannelabstracttransport->isSignalConnected(*signal);
    } else {
        return vqwebchannelabstracttransport->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnIsSignalConnected(const QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_IsSignalConnected_Callback>(slot));
    }
}

void QWebChannelAbstractTransport_Delete(QWebChannelAbstractTransport* self) {
    delete self;
}

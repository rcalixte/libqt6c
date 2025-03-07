#include <QAction>
#include <QActionGroup>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
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
#include <qactiongroup.h>
#include "libqactiongroup.hpp"
#include "libqactiongroup.hxx"

QActionGroup* QActionGroup_new(QObject* parent) {
    return new VirtualQActionGroup(parent);
}

QMetaObject* QActionGroup_MetaObject(const QActionGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QActionGroup_Metacast(QActionGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QActionGroup_Metacall(QActionGroup* self, int param1, int param2, void** param3) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QActionGroup_OnMetacall(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_Metacall_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QActionGroup_QBaseMetacall(QActionGroup* self, int param1, int param2, void** param3) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_Metacall_IsBase(true);
        return vqactiongroup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QActionGroup_Tr(const char* s) {
    QString _ret = QActionGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a) {
    return self->addAction(a);
}

QAction* QActionGroup_AddActionWithText(QActionGroup* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(text_QString);
}

QAction* QActionGroup_AddAction2(QActionGroup* self, QIcon* icon, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(*icon, text_QString);
}

void QActionGroup_RemoveAction(QActionGroup* self, QAction* a) {
    self->removeAction(a);
}

libqt_list /* of QAction* */ QActionGroup_Actions(const QActionGroup* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QAction* QActionGroup_CheckedAction(const QActionGroup* self) {
    return self->checkedAction();
}

bool QActionGroup_IsExclusive(const QActionGroup* self) {
    return self->isExclusive();
}

bool QActionGroup_IsEnabled(const QActionGroup* self) {
    return self->isEnabled();
}

bool QActionGroup_IsVisible(const QActionGroup* self) {
    return self->isVisible();
}

int QActionGroup_ExclusionPolicy(const QActionGroup* self) {
    return static_cast<int>(self->exclusionPolicy());
}

void QActionGroup_SetEnabled(QActionGroup* self, bool enabled) {
    self->setEnabled(enabled);
}

void QActionGroup_SetDisabled(QActionGroup* self, bool b) {
    self->setDisabled(b);
}

void QActionGroup_SetVisible(QActionGroup* self, bool visible) {
    self->setVisible(visible);
}

void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive) {
    self->setExclusive(exclusive);
}

void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy) {
    self->setExclusionPolicy(static_cast<QActionGroup::ExclusionPolicy>(policy));
}

void QActionGroup_Triggered(QActionGroup* self, QAction* param1) {
    self->triggered(param1);
}

void QActionGroup_Connect_Triggered(QActionGroup* self, intptr_t slot) {
    void (*slotFunc)(QActionGroup*, QAction*) = reinterpret_cast<void (*)(QActionGroup*, QAction*)>(slot);
    QActionGroup::connect(self, &QActionGroup::triggered, [self, slotFunc](QAction* param1) {
        QAction* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QActionGroup_Hovered(QActionGroup* self, QAction* param1) {
    self->hovered(param1);
}

void QActionGroup_Connect_Hovered(QActionGroup* self, intptr_t slot) {
    void (*slotFunc)(QActionGroup*, QAction*) = reinterpret_cast<void (*)(QActionGroup*, QAction*)>(slot);
    QActionGroup::connect(self, &QActionGroup::hovered, [self, slotFunc](QAction* param1) {
        QAction* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string QActionGroup_Tr2(const char* s, const char* c) {
    QString _ret = QActionGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QActionGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QActionGroup::tr(s, c, static_cast<int>(n));
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
bool QActionGroup_Event(QActionGroup* self, QEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        return vqactiongroup->event(event);
    } else {
        return vqactiongroup->event(event);
    }
}

// Base class handler implementation
bool QActionGroup_QBaseEvent(QActionGroup* self, QEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_Event_IsBase(true);
        return vqactiongroup->event(event);
    } else {
        return vqactiongroup->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnEvent(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_Event_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QActionGroup_EventFilter(QActionGroup* self, QObject* watched, QEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        return vqactiongroup->eventFilter(watched, event);
    } else {
        return vqactiongroup->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QActionGroup_QBaseEventFilter(QActionGroup* self, QObject* watched, QEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_EventFilter_IsBase(true);
        return vqactiongroup->eventFilter(watched, event);
    } else {
        return vqactiongroup->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnEventFilter(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_EventFilter_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QActionGroup_TimerEvent(QActionGroup* self, QTimerEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->timerEvent(event);
    } else {
        vqactiongroup->timerEvent(event);
    }
}

// Base class handler implementation
void QActionGroup_QBaseTimerEvent(QActionGroup* self, QTimerEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_TimerEvent_IsBase(true);
        vqactiongroup->timerEvent(event);
    } else {
        vqactiongroup->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnTimerEvent(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_TimerEvent_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QActionGroup_ChildEvent(QActionGroup* self, QChildEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->childEvent(event);
    } else {
        vqactiongroup->childEvent(event);
    }
}

// Base class handler implementation
void QActionGroup_QBaseChildEvent(QActionGroup* self, QChildEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_ChildEvent_IsBase(true);
        vqactiongroup->childEvent(event);
    } else {
        vqactiongroup->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnChildEvent(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_ChildEvent_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QActionGroup_CustomEvent(QActionGroup* self, QEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->customEvent(event);
    } else {
        vqactiongroup->customEvent(event);
    }
}

// Base class handler implementation
void QActionGroup_QBaseCustomEvent(QActionGroup* self, QEvent* event) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_CustomEvent_IsBase(true);
        vqactiongroup->customEvent(event);
    } else {
        vqactiongroup->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnCustomEvent(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_CustomEvent_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QActionGroup_ConnectNotify(QActionGroup* self, QMetaMethod* signal) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->connectNotify(*signal);
    } else {
        vqactiongroup->connectNotify(*signal);
    }
}

// Base class handler implementation
void QActionGroup_QBaseConnectNotify(QActionGroup* self, QMetaMethod* signal) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_ConnectNotify_IsBase(true);
        vqactiongroup->connectNotify(*signal);
    } else {
        vqactiongroup->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnConnectNotify(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_ConnectNotify_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QActionGroup_DisconnectNotify(QActionGroup* self, QMetaMethod* signal) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->disconnectNotify(*signal);
    } else {
        vqactiongroup->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QActionGroup_QBaseDisconnectNotify(QActionGroup* self, QMetaMethod* signal) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_DisconnectNotify_IsBase(true);
        vqactiongroup->disconnectNotify(*signal);
    } else {
        vqactiongroup->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnDisconnectNotify(QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = dynamic_cast<VirtualQActionGroup*>(self)) {
        vqactiongroup->setQActionGroup_DisconnectNotify_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QActionGroup_Sender(const QActionGroup* self) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        return vqactiongroup->sender();
    } else {
        return vqactiongroup->sender();
    }
}

// Base class handler implementation
QObject* QActionGroup_QBaseSender(const QActionGroup* self) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        vqactiongroup->setQActionGroup_Sender_IsBase(true);
        return vqactiongroup->sender();
    } else {
        return vqactiongroup->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnSender(const QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        vqactiongroup->setQActionGroup_Sender_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QActionGroup_SenderSignalIndex(const QActionGroup* self) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        return vqactiongroup->senderSignalIndex();
    } else {
        return vqactiongroup->senderSignalIndex();
    }
}

// Base class handler implementation
int QActionGroup_QBaseSenderSignalIndex(const QActionGroup* self) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        vqactiongroup->setQActionGroup_SenderSignalIndex_IsBase(true);
        return vqactiongroup->senderSignalIndex();
    } else {
        return vqactiongroup->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnSenderSignalIndex(const QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        vqactiongroup->setQActionGroup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QActionGroup_Receivers(const QActionGroup* self, const char* signal) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        return vqactiongroup->receivers(signal);
    } else {
        return vqactiongroup->receivers(signal);
    }
}

// Base class handler implementation
int QActionGroup_QBaseReceivers(const QActionGroup* self, const char* signal) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        vqactiongroup->setQActionGroup_Receivers_IsBase(true);
        return vqactiongroup->receivers(signal);
    } else {
        return vqactiongroup->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnReceivers(const QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        vqactiongroup->setQActionGroup_Receivers_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QActionGroup_IsSignalConnected(const QActionGroup* self, QMetaMethod* signal) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        return vqactiongroup->isSignalConnected(*signal);
    } else {
        return vqactiongroup->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QActionGroup_QBaseIsSignalConnected(const QActionGroup* self, QMetaMethod* signal) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        vqactiongroup->setQActionGroup_IsSignalConnected_IsBase(true);
        return vqactiongroup->isSignalConnected(*signal);
    } else {
        return vqactiongroup->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QActionGroup_OnIsSignalConnected(const QActionGroup* self, intptr_t slot) {
    if (auto* vqactiongroup = const_cast<VirtualQActionGroup*>(dynamic_cast<const VirtualQActionGroup*>(self))) {
        vqactiongroup->setQActionGroup_IsSignalConnected_Callback(reinterpret_cast<VirtualQActionGroup::QActionGroup_IsSignalConnected_Callback>(slot));
    }
}

void QActionGroup_Delete(QActionGroup* self) {
    delete self;
}

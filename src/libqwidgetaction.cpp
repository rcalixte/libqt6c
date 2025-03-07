#include <QAction>
#include <QActionGroup>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QKeySequence>
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
#include <QWidget>
#include <QWidgetAction>
#include <qwidgetaction.h>
#include "libqwidgetaction.hpp"
#include "libqwidgetaction.hxx"

QWidgetAction* QWidgetAction_new(QObject* parent) {
    return new VirtualQWidgetAction(parent);
}

QMetaObject* QWidgetAction_MetaObject(const QWidgetAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWidgetAction_Metacast(QWidgetAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWidgetAction_Metacall(QWidgetAction* self, int param1, int param2, void** param3) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWidgetAction_OnMetacall(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_Metacall_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWidgetAction_QBaseMetacall(QWidgetAction* self, int param1, int param2, void** param3) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_Metacall_IsBase(true);
        return vqwidgetaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWidgetAction_Tr(const char* s) {
    QString _ret = QWidgetAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w) {
    self->setDefaultWidget(w);
}

QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self) {
    return self->defaultWidget();
}

QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent) {
    return self->requestWidget(parent);
}

void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget) {
    self->releaseWidget(widget);
}

libqt_string QWidgetAction_Tr2(const char* s, const char* c) {
    QString _ret = QWidgetAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWidgetAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWidgetAction::tr(s, c, static_cast<int>(n));
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
bool QWidgetAction_Event(QWidgetAction* self, QEvent* param1) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        return vqwidgetaction->event(param1);
    } else {
        return vqwidgetaction->event(param1);
    }
}

// Base class handler implementation
bool QWidgetAction_QBaseEvent(QWidgetAction* self, QEvent* param1) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_Event_IsBase(true);
        return vqwidgetaction->event(param1);
    } else {
        return vqwidgetaction->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnEvent(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_Event_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidgetAction_EventFilter(QWidgetAction* self, QObject* param1, QEvent* param2) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        return vqwidgetaction->eventFilter(param1, param2);
    } else {
        return vqwidgetaction->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QWidgetAction_QBaseEventFilter(QWidgetAction* self, QObject* param1, QEvent* param2) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_EventFilter_IsBase(true);
        return vqwidgetaction->eventFilter(param1, param2);
    } else {
        return vqwidgetaction->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnEventFilter(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_EventFilter_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QWidgetAction_CreateWidget(QWidgetAction* self, QWidget* parent) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        return vqwidgetaction->createWidget(parent);
    } else {
        return vqwidgetaction->createWidget(parent);
    }
}

// Base class handler implementation
QWidget* QWidgetAction_QBaseCreateWidget(QWidgetAction* self, QWidget* parent) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_CreateWidget_IsBase(true);
        return vqwidgetaction->createWidget(parent);
    } else {
        return vqwidgetaction->createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnCreateWidget(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_CreateWidget_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetAction_DeleteWidget(QWidgetAction* self, QWidget* widget) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->deleteWidget(widget);
    } else {
        vqwidgetaction->deleteWidget(widget);
    }
}

// Base class handler implementation
void QWidgetAction_QBaseDeleteWidget(QWidgetAction* self, QWidget* widget) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_DeleteWidget_IsBase(true);
        vqwidgetaction->deleteWidget(widget);
    } else {
        vqwidgetaction->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnDeleteWidget(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_DeleteWidget_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetAction_TimerEvent(QWidgetAction* self, QTimerEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->timerEvent(event);
    } else {
        vqwidgetaction->timerEvent(event);
    }
}

// Base class handler implementation
void QWidgetAction_QBaseTimerEvent(QWidgetAction* self, QTimerEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_TimerEvent_IsBase(true);
        vqwidgetaction->timerEvent(event);
    } else {
        vqwidgetaction->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnTimerEvent(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_TimerEvent_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetAction_ChildEvent(QWidgetAction* self, QChildEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->childEvent(event);
    } else {
        vqwidgetaction->childEvent(event);
    }
}

// Base class handler implementation
void QWidgetAction_QBaseChildEvent(QWidgetAction* self, QChildEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_ChildEvent_IsBase(true);
        vqwidgetaction->childEvent(event);
    } else {
        vqwidgetaction->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnChildEvent(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_ChildEvent_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetAction_CustomEvent(QWidgetAction* self, QEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->customEvent(event);
    } else {
        vqwidgetaction->customEvent(event);
    }
}

// Base class handler implementation
void QWidgetAction_QBaseCustomEvent(QWidgetAction* self, QEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_CustomEvent_IsBase(true);
        vqwidgetaction->customEvent(event);
    } else {
        vqwidgetaction->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnCustomEvent(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_CustomEvent_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetAction_ConnectNotify(QWidgetAction* self, QMetaMethod* signal) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->connectNotify(*signal);
    } else {
        vqwidgetaction->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWidgetAction_QBaseConnectNotify(QWidgetAction* self, QMetaMethod* signal) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_ConnectNotify_IsBase(true);
        vqwidgetaction->connectNotify(*signal);
    } else {
        vqwidgetaction->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnConnectNotify(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_ConnectNotify_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetAction_DisconnectNotify(QWidgetAction* self, QMetaMethod* signal) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->disconnectNotify(*signal);
    } else {
        vqwidgetaction->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWidgetAction_QBaseDisconnectNotify(QWidgetAction* self, QMetaMethod* signal) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_DisconnectNotify_IsBase(true);
        vqwidgetaction->disconnectNotify(*signal);
    } else {
        vqwidgetaction->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnDisconnectNotify(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->setQWidgetAction_DisconnectNotify_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ QWidgetAction_CreatedWidgets(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        QList<QWidget*> _ret = vqwidgetaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = vqwidgetaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ QWidgetAction_QBaseCreatedWidgets(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vqwidgetaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = vqwidgetaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnCreatedWidgets(const QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_CreatedWidgets_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWidgetAction_Sender(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        return vqwidgetaction->sender();
    } else {
        return vqwidgetaction->sender();
    }
}

// Base class handler implementation
QObject* QWidgetAction_QBaseSender(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_Sender_IsBase(true);
        return vqwidgetaction->sender();
    } else {
        return vqwidgetaction->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnSender(const QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_Sender_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetAction_SenderSignalIndex(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        return vqwidgetaction->senderSignalIndex();
    } else {
        return vqwidgetaction->senderSignalIndex();
    }
}

// Base class handler implementation
int QWidgetAction_QBaseSenderSignalIndex(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_SenderSignalIndex_IsBase(true);
        return vqwidgetaction->senderSignalIndex();
    } else {
        return vqwidgetaction->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnSenderSignalIndex(const QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetAction_Receivers(const QWidgetAction* self, const char* signal) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        return vqwidgetaction->receivers(signal);
    } else {
        return vqwidgetaction->receivers(signal);
    }
}

// Base class handler implementation
int QWidgetAction_QBaseReceivers(const QWidgetAction* self, const char* signal) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_Receivers_IsBase(true);
        return vqwidgetaction->receivers(signal);
    } else {
        return vqwidgetaction->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnReceivers(const QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_Receivers_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidgetAction_IsSignalConnected(const QWidgetAction* self, QMetaMethod* signal) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        return vqwidgetaction->isSignalConnected(*signal);
    } else {
        return vqwidgetaction->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWidgetAction_QBaseIsSignalConnected(const QWidgetAction* self, QMetaMethod* signal) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_IsSignalConnected_IsBase(true);
        return vqwidgetaction->isSignalConnected(*signal);
    } else {
        return vqwidgetaction->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnIsSignalConnected(const QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        vqwidgetaction->setQWidgetAction_IsSignalConnected_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_IsSignalConnected_Callback>(slot));
    }
}

void QWidgetAction_Delete(QWidgetAction* self) {
    delete self;
}

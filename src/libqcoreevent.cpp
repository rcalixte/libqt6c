#include <QByteArray>
#include <QChildEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include <qcoreevent.h>
#include "libqcoreevent.hpp"
#include "libqcoreevent.hxx"

QEvent* QEvent_new(int typeVal) {
    return new VirtualQEvent(static_cast<QEvent::Type>(typeVal));
}

int QEvent_Type(const QEvent* self) {
    return static_cast<int>(self->type());
}

bool QEvent_Spontaneous(const QEvent* self) {
    return self->spontaneous();
}

bool QEvent_IsAccepted(const QEvent* self) {
    return self->isAccepted();
}

void QEvent_Accept(QEvent* self) {
    self->accept();
}

void QEvent_Ignore(QEvent* self) {
    self->ignore();
}

bool QEvent_IsInputEvent(const QEvent* self) {
    return self->isInputEvent();
}

bool QEvent_IsPointerEvent(const QEvent* self) {
    return self->isPointerEvent();
}

bool QEvent_IsSinglePointEvent(const QEvent* self) {
    return self->isSinglePointEvent();
}

int QEvent_RegisterEventType() {
    return QEvent::registerEventType();
}

int QEvent_RegisterEventType1(int hint) {
    return QEvent::registerEventType(static_cast<int>(hint));
}

// Derived class handler implementation
void QEvent_SetAccepted(QEvent* self, bool accepted) {
    if (auto* vqevent = dynamic_cast<VirtualQEvent*>(self)) {
        vqevent->setAccepted(accepted);
    } else {
        vqevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QEvent_QBaseSetAccepted(QEvent* self, bool accepted) {
    if (auto* vqevent = dynamic_cast<VirtualQEvent*>(self)) {
        vqevent->setQEvent_SetAccepted_IsBase(true);
        vqevent->setAccepted(accepted);
    } else {
        vqevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QEvent_OnSetAccepted(QEvent* self, intptr_t slot) {
    if (auto* vqevent = dynamic_cast<VirtualQEvent*>(self)) {
        vqevent->setQEvent_SetAccepted_Callback(reinterpret_cast<VirtualQEvent::QEvent_SetAccepted_Callback>(slot));
    }
}

// Derived class handler implementation
QEvent* QEvent_Clone(const QEvent* self) {
    if (auto* vqevent = const_cast<VirtualQEvent*>(dynamic_cast<const VirtualQEvent*>(self))) {
        return vqevent->clone();
    } else {
        return vqevent->clone();
    }
}

// Base class handler implementation
QEvent* QEvent_QBaseClone(const QEvent* self) {
    if (auto* vqevent = const_cast<VirtualQEvent*>(dynamic_cast<const VirtualQEvent*>(self))) {
        vqevent->setQEvent_Clone_IsBase(true);
        return vqevent->clone();
    } else {
        return vqevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QEvent_OnClone(const QEvent* self, intptr_t slot) {
    if (auto* vqevent = const_cast<VirtualQEvent*>(dynamic_cast<const VirtualQEvent*>(self))) {
        vqevent->setQEvent_Clone_Callback(reinterpret_cast<VirtualQEvent::QEvent_Clone_Callback>(slot));
    }
}

void QEvent_Delete(QEvent* self) {
    delete self;
}

QTimerEvent* QTimerEvent_new(int timerId) {
    return new VirtualQTimerEvent(static_cast<int>(timerId));
}

int QTimerEvent_TimerId(const QTimerEvent* self) {
    return self->timerId();
}

// Derived class handler implementation
QTimerEvent* QTimerEvent_Clone(const QTimerEvent* self) {
    if (auto* vqtimerevent = const_cast<VirtualQTimerEvent*>(dynamic_cast<const VirtualQTimerEvent*>(self))) {
        return vqtimerevent->clone();
    } else {
        return vqtimerevent->clone();
    }
}

// Base class handler implementation
QTimerEvent* QTimerEvent_QBaseClone(const QTimerEvent* self) {
    if (auto* vqtimerevent = const_cast<VirtualQTimerEvent*>(dynamic_cast<const VirtualQTimerEvent*>(self))) {
        vqtimerevent->setQTimerEvent_Clone_IsBase(true);
        return vqtimerevent->clone();
    } else {
        return vqtimerevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTimerEvent_OnClone(const QTimerEvent* self, intptr_t slot) {
    if (auto* vqtimerevent = const_cast<VirtualQTimerEvent*>(dynamic_cast<const VirtualQTimerEvent*>(self))) {
        vqtimerevent->setQTimerEvent_Clone_Callback(reinterpret_cast<VirtualQTimerEvent::QTimerEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QTimerEvent_SetAccepted(QTimerEvent* self, bool accepted) {
    if (auto* vqtimerevent = dynamic_cast<VirtualQTimerEvent*>(self)) {
        vqtimerevent->setAccepted(accepted);
    } else {
        vqtimerevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QTimerEvent_QBaseSetAccepted(QTimerEvent* self, bool accepted) {
    if (auto* vqtimerevent = dynamic_cast<VirtualQTimerEvent*>(self)) {
        vqtimerevent->setQTimerEvent_SetAccepted_IsBase(true);
        vqtimerevent->setAccepted(accepted);
    } else {
        vqtimerevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QTimerEvent_OnSetAccepted(QTimerEvent* self, intptr_t slot) {
    if (auto* vqtimerevent = dynamic_cast<VirtualQTimerEvent*>(self)) {
        vqtimerevent->setQTimerEvent_SetAccepted_Callback(reinterpret_cast<VirtualQTimerEvent::QTimerEvent_SetAccepted_Callback>(slot));
    }
}

void QTimerEvent_Delete(QTimerEvent* self) {
    delete self;
}

QChildEvent* QChildEvent_new(int typeVal, QObject* child) {
    return new VirtualQChildEvent(static_cast<QEvent::Type>(typeVal), child);
}

QObject* QChildEvent_Child(const QChildEvent* self) {
    return self->child();
}

bool QChildEvent_Added(const QChildEvent* self) {
    return self->added();
}

bool QChildEvent_Polished(const QChildEvent* self) {
    return self->polished();
}

bool QChildEvent_Removed(const QChildEvent* self) {
    return self->removed();
}

// Derived class handler implementation
QChildEvent* QChildEvent_Clone(const QChildEvent* self) {
    if (auto* vqchildevent = const_cast<VirtualQChildEvent*>(dynamic_cast<const VirtualQChildEvent*>(self))) {
        return vqchildevent->clone();
    } else {
        return vqchildevent->clone();
    }
}

// Base class handler implementation
QChildEvent* QChildEvent_QBaseClone(const QChildEvent* self) {
    if (auto* vqchildevent = const_cast<VirtualQChildEvent*>(dynamic_cast<const VirtualQChildEvent*>(self))) {
        vqchildevent->setQChildEvent_Clone_IsBase(true);
        return vqchildevent->clone();
    } else {
        return vqchildevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QChildEvent_OnClone(const QChildEvent* self, intptr_t slot) {
    if (auto* vqchildevent = const_cast<VirtualQChildEvent*>(dynamic_cast<const VirtualQChildEvent*>(self))) {
        vqchildevent->setQChildEvent_Clone_Callback(reinterpret_cast<VirtualQChildEvent::QChildEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QChildEvent_SetAccepted(QChildEvent* self, bool accepted) {
    if (auto* vqchildevent = dynamic_cast<VirtualQChildEvent*>(self)) {
        vqchildevent->setAccepted(accepted);
    } else {
        vqchildevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QChildEvent_QBaseSetAccepted(QChildEvent* self, bool accepted) {
    if (auto* vqchildevent = dynamic_cast<VirtualQChildEvent*>(self)) {
        vqchildevent->setQChildEvent_SetAccepted_IsBase(true);
        vqchildevent->setAccepted(accepted);
    } else {
        vqchildevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QChildEvent_OnSetAccepted(QChildEvent* self, intptr_t slot) {
    if (auto* vqchildevent = dynamic_cast<VirtualQChildEvent*>(self)) {
        vqchildevent->setQChildEvent_SetAccepted_Callback(reinterpret_cast<VirtualQChildEvent::QChildEvent_SetAccepted_Callback>(slot));
    }
}

void QChildEvent_Delete(QChildEvent* self) {
    delete self;
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return new VirtualQDynamicPropertyChangeEvent(name_QByteArray);
}

libqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self) {
    QByteArray _qb = self->propertyName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_Clone(const QDynamicPropertyChangeEvent* self) {
    if (auto* vqdynamicpropertychangeevent = const_cast<VirtualQDynamicPropertyChangeEvent*>(dynamic_cast<const VirtualQDynamicPropertyChangeEvent*>(self))) {
        return vqdynamicpropertychangeevent->clone();
    } else {
        return vqdynamicpropertychangeevent->clone();
    }
}

// Base class handler implementation
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_QBaseClone(const QDynamicPropertyChangeEvent* self) {
    if (auto* vqdynamicpropertychangeevent = const_cast<VirtualQDynamicPropertyChangeEvent*>(dynamic_cast<const VirtualQDynamicPropertyChangeEvent*>(self))) {
        vqdynamicpropertychangeevent->setQDynamicPropertyChangeEvent_Clone_IsBase(true);
        return vqdynamicpropertychangeevent->clone();
    } else {
        return vqdynamicpropertychangeevent->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QDynamicPropertyChangeEvent_OnClone(const QDynamicPropertyChangeEvent* self, intptr_t slot) {
    if (auto* vqdynamicpropertychangeevent = const_cast<VirtualQDynamicPropertyChangeEvent*>(dynamic_cast<const VirtualQDynamicPropertyChangeEvent*>(self))) {
        vqdynamicpropertychangeevent->setQDynamicPropertyChangeEvent_Clone_Callback(reinterpret_cast<VirtualQDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
void QDynamicPropertyChangeEvent_SetAccepted(QDynamicPropertyChangeEvent* self, bool accepted) {
    if (auto* vqdynamicpropertychangeevent = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>(self)) {
        vqdynamicpropertychangeevent->setAccepted(accepted);
    } else {
        vqdynamicpropertychangeevent->setAccepted(accepted);
    }
}

// Base class handler implementation
void QDynamicPropertyChangeEvent_QBaseSetAccepted(QDynamicPropertyChangeEvent* self, bool accepted) {
    if (auto* vqdynamicpropertychangeevent = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>(self)) {
        vqdynamicpropertychangeevent->setQDynamicPropertyChangeEvent_SetAccepted_IsBase(true);
        vqdynamicpropertychangeevent->setAccepted(accepted);
    } else {
        vqdynamicpropertychangeevent->setAccepted(accepted);
    }
}

// Auxiliary method to allow providing re-implementation
void QDynamicPropertyChangeEvent_OnSetAccepted(QDynamicPropertyChangeEvent* self, intptr_t slot) {
    if (auto* vqdynamicpropertychangeevent = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>(self)) {
        vqdynamicpropertychangeevent->setQDynamicPropertyChangeEvent_SetAccepted_Callback(reinterpret_cast<VirtualQDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent_SetAccepted_Callback>(slot));
    }
}

void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self) {
    delete self;
}

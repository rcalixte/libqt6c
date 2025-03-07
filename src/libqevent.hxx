#pragma once
#ifndef SRCC_LIBVIRTUALQEVENT_H
#define SRCC_LIBVIRTUALQEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QInputEvent so that we can call protected methods
class VirtualQInputEvent : public QInputEvent {

  public:
    // Virtual class public types (including callbacks)
    using QInputEvent_Clone_Callback = QInputEvent* (*)();
    using QInputEvent_SetTimestamp_Callback = void (*)(QInputEvent*, quint64);
    using QInputEvent_SetAccepted_Callback = void (*)(QInputEvent*, bool);

  protected:
    // Instance callback storage
    QInputEvent_Clone_Callback qinputevent_clone_callback = nullptr;
    QInputEvent_SetTimestamp_Callback qinputevent_settimestamp_callback = nullptr;
    QInputEvent_SetAccepted_Callback qinputevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qinputevent_clone_isbase = false;
    mutable bool qinputevent_settimestamp_isbase = false;
    mutable bool qinputevent_setaccepted_isbase = false;

  public:
    VirtualQInputEvent(QEvent::Type typeVal, const QInputDevice* m_dev) : QInputEvent(typeVal, m_dev){};
    VirtualQInputEvent(QEvent::Type typeVal, const QInputDevice* m_dev, Qt::KeyboardModifiers modifiers) : QInputEvent(typeVal, m_dev, modifiers){};

    ~VirtualQInputEvent() {
        qinputevent_clone_callback = nullptr;
        qinputevent_settimestamp_callback = nullptr;
        qinputevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQInputEvent_Clone_Callback(QInputEvent_Clone_Callback cb) { qinputevent_clone_callback = cb; }
    void setQInputEvent_SetTimestamp_Callback(QInputEvent_SetTimestamp_Callback cb) { qinputevent_settimestamp_callback = cb; }
    void setQInputEvent_SetAccepted_Callback(QInputEvent_SetAccepted_Callback cb) { qinputevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQInputEvent_Clone_IsBase(bool value) const { qinputevent_clone_isbase = value; }
    void setQInputEvent_SetTimestamp_IsBase(bool value) const { qinputevent_settimestamp_isbase = value; }
    void setQInputEvent_SetAccepted_IsBase(bool value) const { qinputevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QInputEvent* clone() const override {
        if (qinputevent_clone_isbase) {
            qinputevent_clone_isbase = false;
            return QInputEvent::clone();
        } else if (qinputevent_clone_callback != nullptr) {
            return qinputevent_clone_callback();
        } else {
            return QInputEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qinputevent_settimestamp_isbase) {
            qinputevent_settimestamp_isbase = false;
            QInputEvent::setTimestamp(timestamp);
        } else if (qinputevent_settimestamp_callback != nullptr) {
            qinputevent_settimestamp_callback(this, timestamp);
        } else {
            QInputEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputevent_setaccepted_isbase) {
            qinputevent_setaccepted_isbase = false;
            QInputEvent::setAccepted(accepted);
        } else if (qinputevent_setaccepted_callback != nullptr) {
            qinputevent_setaccepted_callback(this, accepted);
        } else {
            QInputEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QPointerEvent so that we can call protected methods
class VirtualQPointerEvent : public QPointerEvent {

  public:
    // Virtual class public types (including callbacks)
    using QPointerEvent_Clone_Callback = QPointerEvent* (*)();
    using QPointerEvent_SetTimestamp_Callback = void (*)(QPointerEvent*, quint64);
    using QPointerEvent_IsBeginEvent_Callback = bool (*)();
    using QPointerEvent_IsUpdateEvent_Callback = bool (*)();
    using QPointerEvent_IsEndEvent_Callback = bool (*)();
    using QPointerEvent_SetAccepted_Callback = void (*)(QPointerEvent*, bool);

  protected:
    // Instance callback storage
    QPointerEvent_Clone_Callback qpointerevent_clone_callback = nullptr;
    QPointerEvent_SetTimestamp_Callback qpointerevent_settimestamp_callback = nullptr;
    QPointerEvent_IsBeginEvent_Callback qpointerevent_isbeginevent_callback = nullptr;
    QPointerEvent_IsUpdateEvent_Callback qpointerevent_isupdateevent_callback = nullptr;
    QPointerEvent_IsEndEvent_Callback qpointerevent_isendevent_callback = nullptr;
    QPointerEvent_SetAccepted_Callback qpointerevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qpointerevent_clone_isbase = false;
    mutable bool qpointerevent_settimestamp_isbase = false;
    mutable bool qpointerevent_isbeginevent_isbase = false;
    mutable bool qpointerevent_isupdateevent_isbase = false;
    mutable bool qpointerevent_isendevent_isbase = false;
    mutable bool qpointerevent_setaccepted_isbase = false;

  public:
    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev) : QPointerEvent(typeVal, dev){};
    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers) : QPointerEvent(typeVal, dev, modifiers){};
    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& points) : QPointerEvent(typeVal, dev, modifiers, points){};

    ~VirtualQPointerEvent() {
        qpointerevent_clone_callback = nullptr;
        qpointerevent_settimestamp_callback = nullptr;
        qpointerevent_isbeginevent_callback = nullptr;
        qpointerevent_isupdateevent_callback = nullptr;
        qpointerevent_isendevent_callback = nullptr;
        qpointerevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQPointerEvent_Clone_Callback(QPointerEvent_Clone_Callback cb) { qpointerevent_clone_callback = cb; }
    void setQPointerEvent_SetTimestamp_Callback(QPointerEvent_SetTimestamp_Callback cb) { qpointerevent_settimestamp_callback = cb; }
    void setQPointerEvent_IsBeginEvent_Callback(QPointerEvent_IsBeginEvent_Callback cb) { qpointerevent_isbeginevent_callback = cb; }
    void setQPointerEvent_IsUpdateEvent_Callback(QPointerEvent_IsUpdateEvent_Callback cb) { qpointerevent_isupdateevent_callback = cb; }
    void setQPointerEvent_IsEndEvent_Callback(QPointerEvent_IsEndEvent_Callback cb) { qpointerevent_isendevent_callback = cb; }
    void setQPointerEvent_SetAccepted_Callback(QPointerEvent_SetAccepted_Callback cb) { qpointerevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQPointerEvent_Clone_IsBase(bool value) const { qpointerevent_clone_isbase = value; }
    void setQPointerEvent_SetTimestamp_IsBase(bool value) const { qpointerevent_settimestamp_isbase = value; }
    void setQPointerEvent_IsBeginEvent_IsBase(bool value) const { qpointerevent_isbeginevent_isbase = value; }
    void setQPointerEvent_IsUpdateEvent_IsBase(bool value) const { qpointerevent_isupdateevent_isbase = value; }
    void setQPointerEvent_IsEndEvent_IsBase(bool value) const { qpointerevent_isendevent_isbase = value; }
    void setQPointerEvent_SetAccepted_IsBase(bool value) const { qpointerevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPointerEvent* clone() const override {
        if (qpointerevent_clone_isbase) {
            qpointerevent_clone_isbase = false;
            return QPointerEvent::clone();
        } else if (qpointerevent_clone_callback != nullptr) {
            return qpointerevent_clone_callback();
        } else {
            return QPointerEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qpointerevent_settimestamp_isbase) {
            qpointerevent_settimestamp_isbase = false;
            QPointerEvent::setTimestamp(timestamp);
        } else if (qpointerevent_settimestamp_callback != nullptr) {
            qpointerevent_settimestamp_callback(this, timestamp);
        } else {
            QPointerEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qpointerevent_isbeginevent_isbase) {
            qpointerevent_isbeginevent_isbase = false;
            return QPointerEvent::isBeginEvent();
        } else if (qpointerevent_isbeginevent_callback != nullptr) {
            return qpointerevent_isbeginevent_callback();
        } else {
            return QPointerEvent::isBeginEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qpointerevent_isupdateevent_isbase) {
            qpointerevent_isupdateevent_isbase = false;
            return QPointerEvent::isUpdateEvent();
        } else if (qpointerevent_isupdateevent_callback != nullptr) {
            return qpointerevent_isupdateevent_callback();
        } else {
            return QPointerEvent::isUpdateEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qpointerevent_isendevent_isbase) {
            qpointerevent_isendevent_isbase = false;
            return QPointerEvent::isEndEvent();
        } else if (qpointerevent_isendevent_callback != nullptr) {
            return qpointerevent_isendevent_callback();
        } else {
            return QPointerEvent::isEndEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qpointerevent_setaccepted_isbase) {
            qpointerevent_setaccepted_isbase = false;
            QPointerEvent::setAccepted(accepted);
        } else if (qpointerevent_setaccepted_callback != nullptr) {
            qpointerevent_setaccepted_callback(this, accepted);
        } else {
            QPointerEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QEnterEvent so that we can call protected methods
class VirtualQEnterEvent : public QEnterEvent {

  public:
    // Virtual class public types (including callbacks)
    using QEnterEvent_Clone_Callback = QEnterEvent* (*)();
    using QEnterEvent_IsBeginEvent_Callback = bool (*)();
    using QEnterEvent_IsUpdateEvent_Callback = bool (*)();
    using QEnterEvent_IsEndEvent_Callback = bool (*)();
    using QEnterEvent_SetTimestamp_Callback = void (*)(QEnterEvent*, quint64);
    using QEnterEvent_SetAccepted_Callback = void (*)(QEnterEvent*, bool);

  protected:
    // Instance callback storage
    QEnterEvent_Clone_Callback qenterevent_clone_callback = nullptr;
    QEnterEvent_IsBeginEvent_Callback qenterevent_isbeginevent_callback = nullptr;
    QEnterEvent_IsUpdateEvent_Callback qenterevent_isupdateevent_callback = nullptr;
    QEnterEvent_IsEndEvent_Callback qenterevent_isendevent_callback = nullptr;
    QEnterEvent_SetTimestamp_Callback qenterevent_settimestamp_callback = nullptr;
    QEnterEvent_SetAccepted_Callback qenterevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qenterevent_clone_isbase = false;
    mutable bool qenterevent_isbeginevent_isbase = false;
    mutable bool qenterevent_isupdateevent_isbase = false;
    mutable bool qenterevent_isendevent_isbase = false;
    mutable bool qenterevent_settimestamp_isbase = false;
    mutable bool qenterevent_setaccepted_isbase = false;

  public:
    VirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos) : QEnterEvent(localPos, scenePos, globalPos){};
    VirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, const QPointingDevice* device) : QEnterEvent(localPos, scenePos, globalPos, device){};

    ~VirtualQEnterEvent() {
        qenterevent_clone_callback = nullptr;
        qenterevent_isbeginevent_callback = nullptr;
        qenterevent_isupdateevent_callback = nullptr;
        qenterevent_isendevent_callback = nullptr;
        qenterevent_settimestamp_callback = nullptr;
        qenterevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQEnterEvent_Clone_Callback(QEnterEvent_Clone_Callback cb) { qenterevent_clone_callback = cb; }
    void setQEnterEvent_IsBeginEvent_Callback(QEnterEvent_IsBeginEvent_Callback cb) { qenterevent_isbeginevent_callback = cb; }
    void setQEnterEvent_IsUpdateEvent_Callback(QEnterEvent_IsUpdateEvent_Callback cb) { qenterevent_isupdateevent_callback = cb; }
    void setQEnterEvent_IsEndEvent_Callback(QEnterEvent_IsEndEvent_Callback cb) { qenterevent_isendevent_callback = cb; }
    void setQEnterEvent_SetTimestamp_Callback(QEnterEvent_SetTimestamp_Callback cb) { qenterevent_settimestamp_callback = cb; }
    void setQEnterEvent_SetAccepted_Callback(QEnterEvent_SetAccepted_Callback cb) { qenterevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQEnterEvent_Clone_IsBase(bool value) const { qenterevent_clone_isbase = value; }
    void setQEnterEvent_IsBeginEvent_IsBase(bool value) const { qenterevent_isbeginevent_isbase = value; }
    void setQEnterEvent_IsUpdateEvent_IsBase(bool value) const { qenterevent_isupdateevent_isbase = value; }
    void setQEnterEvent_IsEndEvent_IsBase(bool value) const { qenterevent_isendevent_isbase = value; }
    void setQEnterEvent_SetTimestamp_IsBase(bool value) const { qenterevent_settimestamp_isbase = value; }
    void setQEnterEvent_SetAccepted_IsBase(bool value) const { qenterevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QEnterEvent* clone() const override {
        if (qenterevent_clone_isbase) {
            qenterevent_clone_isbase = false;
            return QEnterEvent::clone();
        } else if (qenterevent_clone_callback != nullptr) {
            return qenterevent_clone_callback();
        } else {
            return QEnterEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qenterevent_isbeginevent_isbase) {
            qenterevent_isbeginevent_isbase = false;
            return QEnterEvent::isBeginEvent();
        } else if (qenterevent_isbeginevent_callback != nullptr) {
            return qenterevent_isbeginevent_callback();
        } else {
            return QEnterEvent::isBeginEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qenterevent_isupdateevent_isbase) {
            qenterevent_isupdateevent_isbase = false;
            return QEnterEvent::isUpdateEvent();
        } else if (qenterevent_isupdateevent_callback != nullptr) {
            return qenterevent_isupdateevent_callback();
        } else {
            return QEnterEvent::isUpdateEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qenterevent_isendevent_isbase) {
            qenterevent_isendevent_isbase = false;
            return QEnterEvent::isEndEvent();
        } else if (qenterevent_isendevent_callback != nullptr) {
            return qenterevent_isendevent_callback();
        } else {
            return QEnterEvent::isEndEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qenterevent_settimestamp_isbase) {
            qenterevent_settimestamp_isbase = false;
            QEnterEvent::setTimestamp(timestamp);
        } else if (qenterevent_settimestamp_callback != nullptr) {
            qenterevent_settimestamp_callback(this, timestamp);
        } else {
            QEnterEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qenterevent_setaccepted_isbase) {
            qenterevent_setaccepted_isbase = false;
            QEnterEvent::setAccepted(accepted);
        } else if (qenterevent_setaccepted_callback != nullptr) {
            qenterevent_setaccepted_callback(this, accepted);
        } else {
            QEnterEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QMouseEvent so that we can call protected methods
class VirtualQMouseEvent : public QMouseEvent {

  public:
    // Virtual class public types (including callbacks)
    using QMouseEvent_Clone_Callback = QMouseEvent* (*)();
    using QMouseEvent_IsBeginEvent_Callback = bool (*)();
    using QMouseEvent_IsUpdateEvent_Callback = bool (*)();
    using QMouseEvent_IsEndEvent_Callback = bool (*)();
    using QMouseEvent_SetTimestamp_Callback = void (*)(QMouseEvent*, quint64);
    using QMouseEvent_SetAccepted_Callback = void (*)(QMouseEvent*, bool);

  protected:
    // Instance callback storage
    QMouseEvent_Clone_Callback qmouseevent_clone_callback = nullptr;
    QMouseEvent_IsBeginEvent_Callback qmouseevent_isbeginevent_callback = nullptr;
    QMouseEvent_IsUpdateEvent_Callback qmouseevent_isupdateevent_callback = nullptr;
    QMouseEvent_IsEndEvent_Callback qmouseevent_isendevent_callback = nullptr;
    QMouseEvent_SetTimestamp_Callback qmouseevent_settimestamp_callback = nullptr;
    QMouseEvent_SetAccepted_Callback qmouseevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qmouseevent_clone_isbase = false;
    mutable bool qmouseevent_isbeginevent_isbase = false;
    mutable bool qmouseevent_isupdateevent_isbase = false;
    mutable bool qmouseevent_isendevent_isbase = false;
    mutable bool qmouseevent_settimestamp_isbase = false;
    mutable bool qmouseevent_setaccepted_isbase = false;

  public:
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, button, buttons, modifiers){};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, globalPos, button, buttons, modifiers){};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers){};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::MouseEventSource source) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, source){};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, button, buttons, modifiers, device){};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, globalPos, button, buttons, modifiers, device){};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, device){};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::MouseEventSource source, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, source, device){};

    ~VirtualQMouseEvent() {
        qmouseevent_clone_callback = nullptr;
        qmouseevent_isbeginevent_callback = nullptr;
        qmouseevent_isupdateevent_callback = nullptr;
        qmouseevent_isendevent_callback = nullptr;
        qmouseevent_settimestamp_callback = nullptr;
        qmouseevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQMouseEvent_Clone_Callback(QMouseEvent_Clone_Callback cb) { qmouseevent_clone_callback = cb; }
    void setQMouseEvent_IsBeginEvent_Callback(QMouseEvent_IsBeginEvent_Callback cb) { qmouseevent_isbeginevent_callback = cb; }
    void setQMouseEvent_IsUpdateEvent_Callback(QMouseEvent_IsUpdateEvent_Callback cb) { qmouseevent_isupdateevent_callback = cb; }
    void setQMouseEvent_IsEndEvent_Callback(QMouseEvent_IsEndEvent_Callback cb) { qmouseevent_isendevent_callback = cb; }
    void setQMouseEvent_SetTimestamp_Callback(QMouseEvent_SetTimestamp_Callback cb) { qmouseevent_settimestamp_callback = cb; }
    void setQMouseEvent_SetAccepted_Callback(QMouseEvent_SetAccepted_Callback cb) { qmouseevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQMouseEvent_Clone_IsBase(bool value) const { qmouseevent_clone_isbase = value; }
    void setQMouseEvent_IsBeginEvent_IsBase(bool value) const { qmouseevent_isbeginevent_isbase = value; }
    void setQMouseEvent_IsUpdateEvent_IsBase(bool value) const { qmouseevent_isupdateevent_isbase = value; }
    void setQMouseEvent_IsEndEvent_IsBase(bool value) const { qmouseevent_isendevent_isbase = value; }
    void setQMouseEvent_SetTimestamp_IsBase(bool value) const { qmouseevent_settimestamp_isbase = value; }
    void setQMouseEvent_SetAccepted_IsBase(bool value) const { qmouseevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QMouseEvent* clone() const override {
        if (qmouseevent_clone_isbase) {
            qmouseevent_clone_isbase = false;
            return QMouseEvent::clone();
        } else if (qmouseevent_clone_callback != nullptr) {
            return qmouseevent_clone_callback();
        } else {
            return QMouseEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qmouseevent_isbeginevent_isbase) {
            qmouseevent_isbeginevent_isbase = false;
            return QMouseEvent::isBeginEvent();
        } else if (qmouseevent_isbeginevent_callback != nullptr) {
            return qmouseevent_isbeginevent_callback();
        } else {
            return QMouseEvent::isBeginEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qmouseevent_isupdateevent_isbase) {
            qmouseevent_isupdateevent_isbase = false;
            return QMouseEvent::isUpdateEvent();
        } else if (qmouseevent_isupdateevent_callback != nullptr) {
            return qmouseevent_isupdateevent_callback();
        } else {
            return QMouseEvent::isUpdateEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qmouseevent_isendevent_isbase) {
            qmouseevent_isendevent_isbase = false;
            return QMouseEvent::isEndEvent();
        } else if (qmouseevent_isendevent_callback != nullptr) {
            return qmouseevent_isendevent_callback();
        } else {
            return QMouseEvent::isEndEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qmouseevent_settimestamp_isbase) {
            qmouseevent_settimestamp_isbase = false;
            QMouseEvent::setTimestamp(timestamp);
        } else if (qmouseevent_settimestamp_callback != nullptr) {
            qmouseevent_settimestamp_callback(this, timestamp);
        } else {
            QMouseEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qmouseevent_setaccepted_isbase) {
            qmouseevent_setaccepted_isbase = false;
            QMouseEvent::setAccepted(accepted);
        } else if (qmouseevent_setaccepted_callback != nullptr) {
            qmouseevent_setaccepted_callback(this, accepted);
        } else {
            QMouseEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QHoverEvent so that we can call protected methods
class VirtualQHoverEvent : public QHoverEvent {

  public:
    // Virtual class public types (including callbacks)
    using QHoverEvent_Clone_Callback = QHoverEvent* (*)();
    using QHoverEvent_IsUpdateEvent_Callback = bool (*)();
    using QHoverEvent_IsBeginEvent_Callback = bool (*)();
    using QHoverEvent_IsEndEvent_Callback = bool (*)();
    using QHoverEvent_SetTimestamp_Callback = void (*)(QHoverEvent*, quint64);
    using QHoverEvent_SetAccepted_Callback = void (*)(QHoverEvent*, bool);

  protected:
    // Instance callback storage
    QHoverEvent_Clone_Callback qhoverevent_clone_callback = nullptr;
    QHoverEvent_IsUpdateEvent_Callback qhoverevent_isupdateevent_callback = nullptr;
    QHoverEvent_IsBeginEvent_Callback qhoverevent_isbeginevent_callback = nullptr;
    QHoverEvent_IsEndEvent_Callback qhoverevent_isendevent_callback = nullptr;
    QHoverEvent_SetTimestamp_Callback qhoverevent_settimestamp_callback = nullptr;
    QHoverEvent_SetAccepted_Callback qhoverevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qhoverevent_clone_isbase = false;
    mutable bool qhoverevent_isupdateevent_isbase = false;
    mutable bool qhoverevent_isbeginevent_isbase = false;
    mutable bool qhoverevent_isendevent_isbase = false;
    mutable bool qhoverevent_settimestamp_isbase = false;
    mutable bool qhoverevent_setaccepted_isbase = false;

  public:
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos) : QHoverEvent(typeVal, scenePos, globalPos, oldPos){};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos) : QHoverEvent(typeVal, pos, oldPos){};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers) : QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers){};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers, device){};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers) : QHoverEvent(typeVal, pos, oldPos, modifiers){};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QHoverEvent(typeVal, pos, oldPos, modifiers, device){};

    ~VirtualQHoverEvent() {
        qhoverevent_clone_callback = nullptr;
        qhoverevent_isupdateevent_callback = nullptr;
        qhoverevent_isbeginevent_callback = nullptr;
        qhoverevent_isendevent_callback = nullptr;
        qhoverevent_settimestamp_callback = nullptr;
        qhoverevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQHoverEvent_Clone_Callback(QHoverEvent_Clone_Callback cb) { qhoverevent_clone_callback = cb; }
    void setQHoverEvent_IsUpdateEvent_Callback(QHoverEvent_IsUpdateEvent_Callback cb) { qhoverevent_isupdateevent_callback = cb; }
    void setQHoverEvent_IsBeginEvent_Callback(QHoverEvent_IsBeginEvent_Callback cb) { qhoverevent_isbeginevent_callback = cb; }
    void setQHoverEvent_IsEndEvent_Callback(QHoverEvent_IsEndEvent_Callback cb) { qhoverevent_isendevent_callback = cb; }
    void setQHoverEvent_SetTimestamp_Callback(QHoverEvent_SetTimestamp_Callback cb) { qhoverevent_settimestamp_callback = cb; }
    void setQHoverEvent_SetAccepted_Callback(QHoverEvent_SetAccepted_Callback cb) { qhoverevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQHoverEvent_Clone_IsBase(bool value) const { qhoverevent_clone_isbase = value; }
    void setQHoverEvent_IsUpdateEvent_IsBase(bool value) const { qhoverevent_isupdateevent_isbase = value; }
    void setQHoverEvent_IsBeginEvent_IsBase(bool value) const { qhoverevent_isbeginevent_isbase = value; }
    void setQHoverEvent_IsEndEvent_IsBase(bool value) const { qhoverevent_isendevent_isbase = value; }
    void setQHoverEvent_SetTimestamp_IsBase(bool value) const { qhoverevent_settimestamp_isbase = value; }
    void setQHoverEvent_SetAccepted_IsBase(bool value) const { qhoverevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QHoverEvent* clone() const override {
        if (qhoverevent_clone_isbase) {
            qhoverevent_clone_isbase = false;
            return QHoverEvent::clone();
        } else if (qhoverevent_clone_callback != nullptr) {
            return qhoverevent_clone_callback();
        } else {
            return QHoverEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qhoverevent_isupdateevent_isbase) {
            qhoverevent_isupdateevent_isbase = false;
            return QHoverEvent::isUpdateEvent();
        } else if (qhoverevent_isupdateevent_callback != nullptr) {
            return qhoverevent_isupdateevent_callback();
        } else {
            return QHoverEvent::isUpdateEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qhoverevent_isbeginevent_isbase) {
            qhoverevent_isbeginevent_isbase = false;
            return QHoverEvent::isBeginEvent();
        } else if (qhoverevent_isbeginevent_callback != nullptr) {
            return qhoverevent_isbeginevent_callback();
        } else {
            return QHoverEvent::isBeginEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qhoverevent_isendevent_isbase) {
            qhoverevent_isendevent_isbase = false;
            return QHoverEvent::isEndEvent();
        } else if (qhoverevent_isendevent_callback != nullptr) {
            return qhoverevent_isendevent_callback();
        } else {
            return QHoverEvent::isEndEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qhoverevent_settimestamp_isbase) {
            qhoverevent_settimestamp_isbase = false;
            QHoverEvent::setTimestamp(timestamp);
        } else if (qhoverevent_settimestamp_callback != nullptr) {
            qhoverevent_settimestamp_callback(this, timestamp);
        } else {
            QHoverEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhoverevent_setaccepted_isbase) {
            qhoverevent_setaccepted_isbase = false;
            QHoverEvent::setAccepted(accepted);
        } else if (qhoverevent_setaccepted_callback != nullptr) {
            qhoverevent_setaccepted_callback(this, accepted);
        } else {
            QHoverEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QWheelEvent so that we can call protected methods
class VirtualQWheelEvent : public QWheelEvent {

  public:
    // Virtual class public types (including callbacks)
    using QWheelEvent_Clone_Callback = QWheelEvent* (*)();
    using QWheelEvent_IsBeginEvent_Callback = bool (*)();
    using QWheelEvent_IsUpdateEvent_Callback = bool (*)();
    using QWheelEvent_IsEndEvent_Callback = bool (*)();
    using QWheelEvent_SetTimestamp_Callback = void (*)(QWheelEvent*, quint64);
    using QWheelEvent_SetAccepted_Callback = void (*)(QWheelEvent*, bool);

  protected:
    // Instance callback storage
    QWheelEvent_Clone_Callback qwheelevent_clone_callback = nullptr;
    QWheelEvent_IsBeginEvent_Callback qwheelevent_isbeginevent_callback = nullptr;
    QWheelEvent_IsUpdateEvent_Callback qwheelevent_isupdateevent_callback = nullptr;
    QWheelEvent_IsEndEvent_Callback qwheelevent_isendevent_callback = nullptr;
    QWheelEvent_SetTimestamp_Callback qwheelevent_settimestamp_callback = nullptr;
    QWheelEvent_SetAccepted_Callback qwheelevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qwheelevent_clone_isbase = false;
    mutable bool qwheelevent_isbeginevent_isbase = false;
    mutable bool qwheelevent_isupdateevent_isbase = false;
    mutable bool qwheelevent_isendevent_isbase = false;
    mutable bool qwheelevent_settimestamp_isbase = false;
    mutable bool qwheelevent_setaccepted_isbase = false;

  public:
    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted){};
    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source){};
    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice* device) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source, device){};

    ~VirtualQWheelEvent() {
        qwheelevent_clone_callback = nullptr;
        qwheelevent_isbeginevent_callback = nullptr;
        qwheelevent_isupdateevent_callback = nullptr;
        qwheelevent_isendevent_callback = nullptr;
        qwheelevent_settimestamp_callback = nullptr;
        qwheelevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQWheelEvent_Clone_Callback(QWheelEvent_Clone_Callback cb) { qwheelevent_clone_callback = cb; }
    void setQWheelEvent_IsBeginEvent_Callback(QWheelEvent_IsBeginEvent_Callback cb) { qwheelevent_isbeginevent_callback = cb; }
    void setQWheelEvent_IsUpdateEvent_Callback(QWheelEvent_IsUpdateEvent_Callback cb) { qwheelevent_isupdateevent_callback = cb; }
    void setQWheelEvent_IsEndEvent_Callback(QWheelEvent_IsEndEvent_Callback cb) { qwheelevent_isendevent_callback = cb; }
    void setQWheelEvent_SetTimestamp_Callback(QWheelEvent_SetTimestamp_Callback cb) { qwheelevent_settimestamp_callback = cb; }
    void setQWheelEvent_SetAccepted_Callback(QWheelEvent_SetAccepted_Callback cb) { qwheelevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQWheelEvent_Clone_IsBase(bool value) const { qwheelevent_clone_isbase = value; }
    void setQWheelEvent_IsBeginEvent_IsBase(bool value) const { qwheelevent_isbeginevent_isbase = value; }
    void setQWheelEvent_IsUpdateEvent_IsBase(bool value) const { qwheelevent_isupdateevent_isbase = value; }
    void setQWheelEvent_IsEndEvent_IsBase(bool value) const { qwheelevent_isendevent_isbase = value; }
    void setQWheelEvent_SetTimestamp_IsBase(bool value) const { qwheelevent_settimestamp_isbase = value; }
    void setQWheelEvent_SetAccepted_IsBase(bool value) const { qwheelevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWheelEvent* clone() const override {
        if (qwheelevent_clone_isbase) {
            qwheelevent_clone_isbase = false;
            return QWheelEvent::clone();
        } else if (qwheelevent_clone_callback != nullptr) {
            return qwheelevent_clone_callback();
        } else {
            return QWheelEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qwheelevent_isbeginevent_isbase) {
            qwheelevent_isbeginevent_isbase = false;
            return QWheelEvent::isBeginEvent();
        } else if (qwheelevent_isbeginevent_callback != nullptr) {
            return qwheelevent_isbeginevent_callback();
        } else {
            return QWheelEvent::isBeginEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qwheelevent_isupdateevent_isbase) {
            qwheelevent_isupdateevent_isbase = false;
            return QWheelEvent::isUpdateEvent();
        } else if (qwheelevent_isupdateevent_callback != nullptr) {
            return qwheelevent_isupdateevent_callback();
        } else {
            return QWheelEvent::isUpdateEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qwheelevent_isendevent_isbase) {
            qwheelevent_isendevent_isbase = false;
            return QWheelEvent::isEndEvent();
        } else if (qwheelevent_isendevent_callback != nullptr) {
            return qwheelevent_isendevent_callback();
        } else {
            return QWheelEvent::isEndEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qwheelevent_settimestamp_isbase) {
            qwheelevent_settimestamp_isbase = false;
            QWheelEvent::setTimestamp(timestamp);
        } else if (qwheelevent_settimestamp_callback != nullptr) {
            qwheelevent_settimestamp_callback(this, timestamp);
        } else {
            QWheelEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwheelevent_setaccepted_isbase) {
            qwheelevent_setaccepted_isbase = false;
            QWheelEvent::setAccepted(accepted);
        } else if (qwheelevent_setaccepted_callback != nullptr) {
            qwheelevent_setaccepted_callback(this, accepted);
        } else {
            QWheelEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QTabletEvent so that we can call protected methods
class VirtualQTabletEvent : public QTabletEvent {

  public:
    // Virtual class public types (including callbacks)
    using QTabletEvent_Clone_Callback = QTabletEvent* (*)();
    using QTabletEvent_IsBeginEvent_Callback = bool (*)();
    using QTabletEvent_IsUpdateEvent_Callback = bool (*)();
    using QTabletEvent_IsEndEvent_Callback = bool (*)();
    using QTabletEvent_SetTimestamp_Callback = void (*)(QTabletEvent*, quint64);
    using QTabletEvent_SetAccepted_Callback = void (*)(QTabletEvent*, bool);

  protected:
    // Instance callback storage
    QTabletEvent_Clone_Callback qtabletevent_clone_callback = nullptr;
    QTabletEvent_IsBeginEvent_Callback qtabletevent_isbeginevent_callback = nullptr;
    QTabletEvent_IsUpdateEvent_Callback qtabletevent_isupdateevent_callback = nullptr;
    QTabletEvent_IsEndEvent_Callback qtabletevent_isendevent_callback = nullptr;
    QTabletEvent_SetTimestamp_Callback qtabletevent_settimestamp_callback = nullptr;
    QTabletEvent_SetAccepted_Callback qtabletevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qtabletevent_clone_isbase = false;
    mutable bool qtabletevent_isbeginevent_isbase = false;
    mutable bool qtabletevent_isupdateevent_isbase = false;
    mutable bool qtabletevent_isendevent_isbase = false;
    mutable bool qtabletevent_settimestamp_isbase = false;
    mutable bool qtabletevent_setaccepted_isbase = false;

  public:
    VirtualQTabletEvent(QEvent::Type t, const QPointingDevice* device, const QPointF& pos, const QPointF& globalPos, qreal pressure, float xTilt, float yTilt, float tangentialPressure, qreal rotation, float z, Qt::KeyboardModifiers keyState, Qt::MouseButton button, Qt::MouseButtons buttons) : QTabletEvent(t, device, pos, globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, button, buttons){};

    ~VirtualQTabletEvent() {
        qtabletevent_clone_callback = nullptr;
        qtabletevent_isbeginevent_callback = nullptr;
        qtabletevent_isupdateevent_callback = nullptr;
        qtabletevent_isendevent_callback = nullptr;
        qtabletevent_settimestamp_callback = nullptr;
        qtabletevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQTabletEvent_Clone_Callback(QTabletEvent_Clone_Callback cb) { qtabletevent_clone_callback = cb; }
    void setQTabletEvent_IsBeginEvent_Callback(QTabletEvent_IsBeginEvent_Callback cb) { qtabletevent_isbeginevent_callback = cb; }
    void setQTabletEvent_IsUpdateEvent_Callback(QTabletEvent_IsUpdateEvent_Callback cb) { qtabletevent_isupdateevent_callback = cb; }
    void setQTabletEvent_IsEndEvent_Callback(QTabletEvent_IsEndEvent_Callback cb) { qtabletevent_isendevent_callback = cb; }
    void setQTabletEvent_SetTimestamp_Callback(QTabletEvent_SetTimestamp_Callback cb) { qtabletevent_settimestamp_callback = cb; }
    void setQTabletEvent_SetAccepted_Callback(QTabletEvent_SetAccepted_Callback cb) { qtabletevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQTabletEvent_Clone_IsBase(bool value) const { qtabletevent_clone_isbase = value; }
    void setQTabletEvent_IsBeginEvent_IsBase(bool value) const { qtabletevent_isbeginevent_isbase = value; }
    void setQTabletEvent_IsUpdateEvent_IsBase(bool value) const { qtabletevent_isupdateevent_isbase = value; }
    void setQTabletEvent_IsEndEvent_IsBase(bool value) const { qtabletevent_isendevent_isbase = value; }
    void setQTabletEvent_SetTimestamp_IsBase(bool value) const { qtabletevent_settimestamp_isbase = value; }
    void setQTabletEvent_SetAccepted_IsBase(bool value) const { qtabletevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QTabletEvent* clone() const override {
        if (qtabletevent_clone_isbase) {
            qtabletevent_clone_isbase = false;
            return QTabletEvent::clone();
        } else if (qtabletevent_clone_callback != nullptr) {
            return qtabletevent_clone_callback();
        } else {
            return QTabletEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qtabletevent_isbeginevent_isbase) {
            qtabletevent_isbeginevent_isbase = false;
            return QTabletEvent::isBeginEvent();
        } else if (qtabletevent_isbeginevent_callback != nullptr) {
            return qtabletevent_isbeginevent_callback();
        } else {
            return QTabletEvent::isBeginEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qtabletevent_isupdateevent_isbase) {
            qtabletevent_isupdateevent_isbase = false;
            return QTabletEvent::isUpdateEvent();
        } else if (qtabletevent_isupdateevent_callback != nullptr) {
            return qtabletevent_isupdateevent_callback();
        } else {
            return QTabletEvent::isUpdateEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qtabletevent_isendevent_isbase) {
            qtabletevent_isendevent_isbase = false;
            return QTabletEvent::isEndEvent();
        } else if (qtabletevent_isendevent_callback != nullptr) {
            return qtabletevent_isendevent_callback();
        } else {
            return QTabletEvent::isEndEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qtabletevent_settimestamp_isbase) {
            qtabletevent_settimestamp_isbase = false;
            QTabletEvent::setTimestamp(timestamp);
        } else if (qtabletevent_settimestamp_callback != nullptr) {
            qtabletevent_settimestamp_callback(this, timestamp);
        } else {
            QTabletEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtabletevent_setaccepted_isbase) {
            qtabletevent_setaccepted_isbase = false;
            QTabletEvent::setAccepted(accepted);
        } else if (qtabletevent_setaccepted_callback != nullptr) {
            qtabletevent_setaccepted_callback(this, accepted);
        } else {
            QTabletEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QNativeGestureEvent so that we can call protected methods
class VirtualQNativeGestureEvent : public QNativeGestureEvent {

  public:
    // Virtual class public types (including callbacks)
    using QNativeGestureEvent_Clone_Callback = QNativeGestureEvent* (*)();
    using QNativeGestureEvent_IsBeginEvent_Callback = bool (*)();
    using QNativeGestureEvent_IsUpdateEvent_Callback = bool (*)();
    using QNativeGestureEvent_IsEndEvent_Callback = bool (*)();
    using QNativeGestureEvent_SetTimestamp_Callback = void (*)(QNativeGestureEvent*, quint64);
    using QNativeGestureEvent_SetAccepted_Callback = void (*)(QNativeGestureEvent*, bool);

  protected:
    // Instance callback storage
    QNativeGestureEvent_Clone_Callback qnativegestureevent_clone_callback = nullptr;
    QNativeGestureEvent_IsBeginEvent_Callback qnativegestureevent_isbeginevent_callback = nullptr;
    QNativeGestureEvent_IsUpdateEvent_Callback qnativegestureevent_isupdateevent_callback = nullptr;
    QNativeGestureEvent_IsEndEvent_Callback qnativegestureevent_isendevent_callback = nullptr;
    QNativeGestureEvent_SetTimestamp_Callback qnativegestureevent_settimestamp_callback = nullptr;
    QNativeGestureEvent_SetAccepted_Callback qnativegestureevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qnativegestureevent_clone_isbase = false;
    mutable bool qnativegestureevent_isbeginevent_isbase = false;
    mutable bool qnativegestureevent_isupdateevent_isbase = false;
    mutable bool qnativegestureevent_isendevent_isbase = false;
    mutable bool qnativegestureevent_settimestamp_isbase = false;
    mutable bool qnativegestureevent_setaccepted_isbase = false;

  public:
    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, quint64 sequenceId, quint64 intArgument) : QNativeGestureEvent(typeVal, dev, localPos, scenePos, globalPos, value, sequenceId, intArgument){};
    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, int fingerCount, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, const QPointF& delta) : QNativeGestureEvent(typeVal, dev, fingerCount, localPos, scenePos, globalPos, value, delta){};
    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, int fingerCount, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, const QPointF& delta, quint64 sequenceId) : QNativeGestureEvent(typeVal, dev, fingerCount, localPos, scenePos, globalPos, value, delta, sequenceId){};

    ~VirtualQNativeGestureEvent() {
        qnativegestureevent_clone_callback = nullptr;
        qnativegestureevent_isbeginevent_callback = nullptr;
        qnativegestureevent_isupdateevent_callback = nullptr;
        qnativegestureevent_isendevent_callback = nullptr;
        qnativegestureevent_settimestamp_callback = nullptr;
        qnativegestureevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQNativeGestureEvent_Clone_Callback(QNativeGestureEvent_Clone_Callback cb) { qnativegestureevent_clone_callback = cb; }
    void setQNativeGestureEvent_IsBeginEvent_Callback(QNativeGestureEvent_IsBeginEvent_Callback cb) { qnativegestureevent_isbeginevent_callback = cb; }
    void setQNativeGestureEvent_IsUpdateEvent_Callback(QNativeGestureEvent_IsUpdateEvent_Callback cb) { qnativegestureevent_isupdateevent_callback = cb; }
    void setQNativeGestureEvent_IsEndEvent_Callback(QNativeGestureEvent_IsEndEvent_Callback cb) { qnativegestureevent_isendevent_callback = cb; }
    void setQNativeGestureEvent_SetTimestamp_Callback(QNativeGestureEvent_SetTimestamp_Callback cb) { qnativegestureevent_settimestamp_callback = cb; }
    void setQNativeGestureEvent_SetAccepted_Callback(QNativeGestureEvent_SetAccepted_Callback cb) { qnativegestureevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQNativeGestureEvent_Clone_IsBase(bool value) const { qnativegestureevent_clone_isbase = value; }
    void setQNativeGestureEvent_IsBeginEvent_IsBase(bool value) const { qnativegestureevent_isbeginevent_isbase = value; }
    void setQNativeGestureEvent_IsUpdateEvent_IsBase(bool value) const { qnativegestureevent_isupdateevent_isbase = value; }
    void setQNativeGestureEvent_IsEndEvent_IsBase(bool value) const { qnativegestureevent_isendevent_isbase = value; }
    void setQNativeGestureEvent_SetTimestamp_IsBase(bool value) const { qnativegestureevent_settimestamp_isbase = value; }
    void setQNativeGestureEvent_SetAccepted_IsBase(bool value) const { qnativegestureevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QNativeGestureEvent* clone() const override {
        if (qnativegestureevent_clone_isbase) {
            qnativegestureevent_clone_isbase = false;
            return QNativeGestureEvent::clone();
        } else if (qnativegestureevent_clone_callback != nullptr) {
            return qnativegestureevent_clone_callback();
        } else {
            return QNativeGestureEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qnativegestureevent_isbeginevent_isbase) {
            qnativegestureevent_isbeginevent_isbase = false;
            return QNativeGestureEvent::isBeginEvent();
        } else if (qnativegestureevent_isbeginevent_callback != nullptr) {
            return qnativegestureevent_isbeginevent_callback();
        } else {
            return QNativeGestureEvent::isBeginEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qnativegestureevent_isupdateevent_isbase) {
            qnativegestureevent_isupdateevent_isbase = false;
            return QNativeGestureEvent::isUpdateEvent();
        } else if (qnativegestureevent_isupdateevent_callback != nullptr) {
            return qnativegestureevent_isupdateevent_callback();
        } else {
            return QNativeGestureEvent::isUpdateEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qnativegestureevent_isendevent_isbase) {
            qnativegestureevent_isendevent_isbase = false;
            return QNativeGestureEvent::isEndEvent();
        } else if (qnativegestureevent_isendevent_callback != nullptr) {
            return qnativegestureevent_isendevent_callback();
        } else {
            return QNativeGestureEvent::isEndEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qnativegestureevent_settimestamp_isbase) {
            qnativegestureevent_settimestamp_isbase = false;
            QNativeGestureEvent::setTimestamp(timestamp);
        } else if (qnativegestureevent_settimestamp_callback != nullptr) {
            qnativegestureevent_settimestamp_callback(this, timestamp);
        } else {
            QNativeGestureEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qnativegestureevent_setaccepted_isbase) {
            qnativegestureevent_setaccepted_isbase = false;
            QNativeGestureEvent::setAccepted(accepted);
        } else if (qnativegestureevent_setaccepted_callback != nullptr) {
            qnativegestureevent_setaccepted_callback(this, accepted);
        } else {
            QNativeGestureEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QKeyEvent so that we can call protected methods
class VirtualQKeyEvent : public QKeyEvent {

  public:
    // Virtual class public types (including callbacks)
    using QKeyEvent_Clone_Callback = QKeyEvent* (*)();
    using QKeyEvent_SetTimestamp_Callback = void (*)(QKeyEvent*, quint64);
    using QKeyEvent_SetAccepted_Callback = void (*)(QKeyEvent*, bool);

  protected:
    // Instance callback storage
    QKeyEvent_Clone_Callback qkeyevent_clone_callback = nullptr;
    QKeyEvent_SetTimestamp_Callback qkeyevent_settimestamp_callback = nullptr;
    QKeyEvent_SetAccepted_Callback qkeyevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qkeyevent_clone_isbase = false;
    mutable bool qkeyevent_settimestamp_isbase = false;
    mutable bool qkeyevent_setaccepted_isbase = false;

  public:
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers) : QKeyEvent(typeVal, key, modifiers){};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers){};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text) : QKeyEvent(typeVal, key, modifiers, text){};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text, bool autorep) : QKeyEvent(typeVal, key, modifiers, text, autorep){};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text, bool autorep, quint16 count) : QKeyEvent(typeVal, key, modifiers, text, autorep, count){};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text){};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep){};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep, quint16 count) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count){};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep, quint16 count, const QInputDevice* device) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count, device){};

    ~VirtualQKeyEvent() {
        qkeyevent_clone_callback = nullptr;
        qkeyevent_settimestamp_callback = nullptr;
        qkeyevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQKeyEvent_Clone_Callback(QKeyEvent_Clone_Callback cb) { qkeyevent_clone_callback = cb; }
    void setQKeyEvent_SetTimestamp_Callback(QKeyEvent_SetTimestamp_Callback cb) { qkeyevent_settimestamp_callback = cb; }
    void setQKeyEvent_SetAccepted_Callback(QKeyEvent_SetAccepted_Callback cb) { qkeyevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQKeyEvent_Clone_IsBase(bool value) const { qkeyevent_clone_isbase = value; }
    void setQKeyEvent_SetTimestamp_IsBase(bool value) const { qkeyevent_settimestamp_isbase = value; }
    void setQKeyEvent_SetAccepted_IsBase(bool value) const { qkeyevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QKeyEvent* clone() const override {
        if (qkeyevent_clone_isbase) {
            qkeyevent_clone_isbase = false;
            return QKeyEvent::clone();
        } else if (qkeyevent_clone_callback != nullptr) {
            return qkeyevent_clone_callback();
        } else {
            return QKeyEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qkeyevent_settimestamp_isbase) {
            qkeyevent_settimestamp_isbase = false;
            QKeyEvent::setTimestamp(timestamp);
        } else if (qkeyevent_settimestamp_callback != nullptr) {
            qkeyevent_settimestamp_callback(this, timestamp);
        } else {
            QKeyEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qkeyevent_setaccepted_isbase) {
            qkeyevent_setaccepted_isbase = false;
            QKeyEvent::setAccepted(accepted);
        } else if (qkeyevent_setaccepted_callback != nullptr) {
            qkeyevent_setaccepted_callback(this, accepted);
        } else {
            QKeyEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QFocusEvent so that we can call protected methods
class VirtualQFocusEvent : public QFocusEvent {

  public:
    // Virtual class public types (including callbacks)
    using QFocusEvent_Clone_Callback = QFocusEvent* (*)();
    using QFocusEvent_SetAccepted_Callback = void (*)(QFocusEvent*, bool);

  protected:
    // Instance callback storage
    QFocusEvent_Clone_Callback qfocusevent_clone_callback = nullptr;
    QFocusEvent_SetAccepted_Callback qfocusevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qfocusevent_clone_isbase = false;
    mutable bool qfocusevent_setaccepted_isbase = false;

  public:
    VirtualQFocusEvent(QEvent::Type typeVal) : QFocusEvent(typeVal){};
    VirtualQFocusEvent(QEvent::Type typeVal, Qt::FocusReason reason) : QFocusEvent(typeVal, reason){};

    ~VirtualQFocusEvent() {
        qfocusevent_clone_callback = nullptr;
        qfocusevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQFocusEvent_Clone_Callback(QFocusEvent_Clone_Callback cb) { qfocusevent_clone_callback = cb; }
    void setQFocusEvent_SetAccepted_Callback(QFocusEvent_SetAccepted_Callback cb) { qfocusevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQFocusEvent_Clone_IsBase(bool value) const { qfocusevent_clone_isbase = value; }
    void setQFocusEvent_SetAccepted_IsBase(bool value) const { qfocusevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QFocusEvent* clone() const override {
        if (qfocusevent_clone_isbase) {
            qfocusevent_clone_isbase = false;
            return QFocusEvent::clone();
        } else if (qfocusevent_clone_callback != nullptr) {
            return qfocusevent_clone_callback();
        } else {
            return QFocusEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qfocusevent_setaccepted_isbase) {
            qfocusevent_setaccepted_isbase = false;
            QFocusEvent::setAccepted(accepted);
        } else if (qfocusevent_setaccepted_callback != nullptr) {
            qfocusevent_setaccepted_callback(this, accepted);
        } else {
            QFocusEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QPaintEvent so that we can call protected methods
class VirtualQPaintEvent : public QPaintEvent {

  public:
    // Virtual class public types (including callbacks)
    using QPaintEvent_Clone_Callback = QPaintEvent* (*)();
    using QPaintEvent_SetAccepted_Callback = void (*)(QPaintEvent*, bool);

  protected:
    // Instance callback storage
    QPaintEvent_Clone_Callback qpaintevent_clone_callback = nullptr;
    QPaintEvent_SetAccepted_Callback qpaintevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qpaintevent_clone_isbase = false;
    mutable bool qpaintevent_setaccepted_isbase = false;

  public:
    VirtualQPaintEvent(const QRegion& paintRegion) : QPaintEvent(paintRegion){};
    VirtualQPaintEvent(const QRect& paintRect) : QPaintEvent(paintRect){};

    ~VirtualQPaintEvent() {
        qpaintevent_clone_callback = nullptr;
        qpaintevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQPaintEvent_Clone_Callback(QPaintEvent_Clone_Callback cb) { qpaintevent_clone_callback = cb; }
    void setQPaintEvent_SetAccepted_Callback(QPaintEvent_SetAccepted_Callback cb) { qpaintevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQPaintEvent_Clone_IsBase(bool value) const { qpaintevent_clone_isbase = value; }
    void setQPaintEvent_SetAccepted_IsBase(bool value) const { qpaintevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEvent* clone() const override {
        if (qpaintevent_clone_isbase) {
            qpaintevent_clone_isbase = false;
            return QPaintEvent::clone();
        } else if (qpaintevent_clone_callback != nullptr) {
            return qpaintevent_clone_callback();
        } else {
            return QPaintEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qpaintevent_setaccepted_isbase) {
            qpaintevent_setaccepted_isbase = false;
            QPaintEvent::setAccepted(accepted);
        } else if (qpaintevent_setaccepted_callback != nullptr) {
            qpaintevent_setaccepted_callback(this, accepted);
        } else {
            QPaintEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QMoveEvent so that we can call protected methods
class VirtualQMoveEvent : public QMoveEvent {

  public:
    // Virtual class public types (including callbacks)
    using QMoveEvent_Clone_Callback = QMoveEvent* (*)();
    using QMoveEvent_SetAccepted_Callback = void (*)(QMoveEvent*, bool);

  protected:
    // Instance callback storage
    QMoveEvent_Clone_Callback qmoveevent_clone_callback = nullptr;
    QMoveEvent_SetAccepted_Callback qmoveevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qmoveevent_clone_isbase = false;
    mutable bool qmoveevent_setaccepted_isbase = false;

  public:
    VirtualQMoveEvent(const QPoint& pos, const QPoint& oldPos) : QMoveEvent(pos, oldPos){};

    ~VirtualQMoveEvent() {
        qmoveevent_clone_callback = nullptr;
        qmoveevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQMoveEvent_Clone_Callback(QMoveEvent_Clone_Callback cb) { qmoveevent_clone_callback = cb; }
    void setQMoveEvent_SetAccepted_Callback(QMoveEvent_SetAccepted_Callback cb) { qmoveevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQMoveEvent_Clone_IsBase(bool value) const { qmoveevent_clone_isbase = value; }
    void setQMoveEvent_SetAccepted_IsBase(bool value) const { qmoveevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QMoveEvent* clone() const override {
        if (qmoveevent_clone_isbase) {
            qmoveevent_clone_isbase = false;
            return QMoveEvent::clone();
        } else if (qmoveevent_clone_callback != nullptr) {
            return qmoveevent_clone_callback();
        } else {
            return QMoveEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qmoveevent_setaccepted_isbase) {
            qmoveevent_setaccepted_isbase = false;
            QMoveEvent::setAccepted(accepted);
        } else if (qmoveevent_setaccepted_callback != nullptr) {
            qmoveevent_setaccepted_callback(this, accepted);
        } else {
            QMoveEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QExposeEvent so that we can call protected methods
class VirtualQExposeEvent : public QExposeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QExposeEvent_Clone_Callback = QExposeEvent* (*)();
    using QExposeEvent_SetAccepted_Callback = void (*)(QExposeEvent*, bool);

  protected:
    // Instance callback storage
    QExposeEvent_Clone_Callback qexposeevent_clone_callback = nullptr;
    QExposeEvent_SetAccepted_Callback qexposeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qexposeevent_clone_isbase = false;
    mutable bool qexposeevent_setaccepted_isbase = false;

  public:
    VirtualQExposeEvent(const QRegion& m_region) : QExposeEvent(m_region){};

    ~VirtualQExposeEvent() {
        qexposeevent_clone_callback = nullptr;
        qexposeevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQExposeEvent_Clone_Callback(QExposeEvent_Clone_Callback cb) { qexposeevent_clone_callback = cb; }
    void setQExposeEvent_SetAccepted_Callback(QExposeEvent_SetAccepted_Callback cb) { qexposeevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQExposeEvent_Clone_IsBase(bool value) const { qexposeevent_clone_isbase = value; }
    void setQExposeEvent_SetAccepted_IsBase(bool value) const { qexposeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QExposeEvent* clone() const override {
        if (qexposeevent_clone_isbase) {
            qexposeevent_clone_isbase = false;
            return QExposeEvent::clone();
        } else if (qexposeevent_clone_callback != nullptr) {
            return qexposeevent_clone_callback();
        } else {
            return QExposeEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qexposeevent_setaccepted_isbase) {
            qexposeevent_setaccepted_isbase = false;
            QExposeEvent::setAccepted(accepted);
        } else if (qexposeevent_setaccepted_callback != nullptr) {
            qexposeevent_setaccepted_callback(this, accepted);
        } else {
            QExposeEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QPlatformSurfaceEvent so that we can call protected methods
class VirtualQPlatformSurfaceEvent : public QPlatformSurfaceEvent {

  public:
    // Virtual class public types (including callbacks)
    using QPlatformSurfaceEvent_Clone_Callback = QPlatformSurfaceEvent* (*)();
    using QPlatformSurfaceEvent_SetAccepted_Callback = void (*)(QPlatformSurfaceEvent*, bool);

  protected:
    // Instance callback storage
    QPlatformSurfaceEvent_Clone_Callback qplatformsurfaceevent_clone_callback = nullptr;
    QPlatformSurfaceEvent_SetAccepted_Callback qplatformsurfaceevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qplatformsurfaceevent_clone_isbase = false;
    mutable bool qplatformsurfaceevent_setaccepted_isbase = false;

  public:
    VirtualQPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) : QPlatformSurfaceEvent(surfaceEventType){};

    ~VirtualQPlatformSurfaceEvent() {
        qplatformsurfaceevent_clone_callback = nullptr;
        qplatformsurfaceevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQPlatformSurfaceEvent_Clone_Callback(QPlatformSurfaceEvent_Clone_Callback cb) { qplatformsurfaceevent_clone_callback = cb; }
    void setQPlatformSurfaceEvent_SetAccepted_Callback(QPlatformSurfaceEvent_SetAccepted_Callback cb) { qplatformsurfaceevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQPlatformSurfaceEvent_Clone_IsBase(bool value) const { qplatformsurfaceevent_clone_isbase = value; }
    void setQPlatformSurfaceEvent_SetAccepted_IsBase(bool value) const { qplatformsurfaceevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPlatformSurfaceEvent* clone() const override {
        if (qplatformsurfaceevent_clone_isbase) {
            qplatformsurfaceevent_clone_isbase = false;
            return QPlatformSurfaceEvent::clone();
        } else if (qplatformsurfaceevent_clone_callback != nullptr) {
            return qplatformsurfaceevent_clone_callback();
        } else {
            return QPlatformSurfaceEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qplatformsurfaceevent_setaccepted_isbase) {
            qplatformsurfaceevent_setaccepted_isbase = false;
            QPlatformSurfaceEvent::setAccepted(accepted);
        } else if (qplatformsurfaceevent_setaccepted_callback != nullptr) {
            qplatformsurfaceevent_setaccepted_callback(this, accepted);
        } else {
            QPlatformSurfaceEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QResizeEvent so that we can call protected methods
class VirtualQResizeEvent : public QResizeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QResizeEvent_Clone_Callback = QResizeEvent* (*)();
    using QResizeEvent_SetAccepted_Callback = void (*)(QResizeEvent*, bool);

  protected:
    // Instance callback storage
    QResizeEvent_Clone_Callback qresizeevent_clone_callback = nullptr;
    QResizeEvent_SetAccepted_Callback qresizeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qresizeevent_clone_isbase = false;
    mutable bool qresizeevent_setaccepted_isbase = false;

  public:
    VirtualQResizeEvent(const QSize& size, const QSize& oldSize) : QResizeEvent(size, oldSize){};

    ~VirtualQResizeEvent() {
        qresizeevent_clone_callback = nullptr;
        qresizeevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQResizeEvent_Clone_Callback(QResizeEvent_Clone_Callback cb) { qresizeevent_clone_callback = cb; }
    void setQResizeEvent_SetAccepted_Callback(QResizeEvent_SetAccepted_Callback cb) { qresizeevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQResizeEvent_Clone_IsBase(bool value) const { qresizeevent_clone_isbase = value; }
    void setQResizeEvent_SetAccepted_IsBase(bool value) const { qresizeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QResizeEvent* clone() const override {
        if (qresizeevent_clone_isbase) {
            qresizeevent_clone_isbase = false;
            return QResizeEvent::clone();
        } else if (qresizeevent_clone_callback != nullptr) {
            return qresizeevent_clone_callback();
        } else {
            return QResizeEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qresizeevent_setaccepted_isbase) {
            qresizeevent_setaccepted_isbase = false;
            QResizeEvent::setAccepted(accepted);
        } else if (qresizeevent_setaccepted_callback != nullptr) {
            qresizeevent_setaccepted_callback(this, accepted);
        } else {
            QResizeEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QCloseEvent so that we can call protected methods
class VirtualQCloseEvent : public QCloseEvent {

  public:
    // Virtual class public types (including callbacks)
    using QCloseEvent_Clone_Callback = QCloseEvent* (*)();
    using QCloseEvent_SetAccepted_Callback = void (*)(QCloseEvent*, bool);

  protected:
    // Instance callback storage
    QCloseEvent_Clone_Callback qcloseevent_clone_callback = nullptr;
    QCloseEvent_SetAccepted_Callback qcloseevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qcloseevent_clone_isbase = false;
    mutable bool qcloseevent_setaccepted_isbase = false;

  public:
    VirtualQCloseEvent() : QCloseEvent(){};

    ~VirtualQCloseEvent() {
        qcloseevent_clone_callback = nullptr;
        qcloseevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQCloseEvent_Clone_Callback(QCloseEvent_Clone_Callback cb) { qcloseevent_clone_callback = cb; }
    void setQCloseEvent_SetAccepted_Callback(QCloseEvent_SetAccepted_Callback cb) { qcloseevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQCloseEvent_Clone_IsBase(bool value) const { qcloseevent_clone_isbase = value; }
    void setQCloseEvent_SetAccepted_IsBase(bool value) const { qcloseevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QCloseEvent* clone() const override {
        if (qcloseevent_clone_isbase) {
            qcloseevent_clone_isbase = false;
            return QCloseEvent::clone();
        } else if (qcloseevent_clone_callback != nullptr) {
            return qcloseevent_clone_callback();
        } else {
            return QCloseEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qcloseevent_setaccepted_isbase) {
            qcloseevent_setaccepted_isbase = false;
            QCloseEvent::setAccepted(accepted);
        } else if (qcloseevent_setaccepted_callback != nullptr) {
            qcloseevent_setaccepted_callback(this, accepted);
        } else {
            QCloseEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QIconDragEvent so that we can call protected methods
class VirtualQIconDragEvent : public QIconDragEvent {

  public:
    // Virtual class public types (including callbacks)
    using QIconDragEvent_Clone_Callback = QIconDragEvent* (*)();
    using QIconDragEvent_SetAccepted_Callback = void (*)(QIconDragEvent*, bool);

  protected:
    // Instance callback storage
    QIconDragEvent_Clone_Callback qicondragevent_clone_callback = nullptr;
    QIconDragEvent_SetAccepted_Callback qicondragevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qicondragevent_clone_isbase = false;
    mutable bool qicondragevent_setaccepted_isbase = false;

  public:
    VirtualQIconDragEvent() : QIconDragEvent(){};

    ~VirtualQIconDragEvent() {
        qicondragevent_clone_callback = nullptr;
        qicondragevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQIconDragEvent_Clone_Callback(QIconDragEvent_Clone_Callback cb) { qicondragevent_clone_callback = cb; }
    void setQIconDragEvent_SetAccepted_Callback(QIconDragEvent_SetAccepted_Callback cb) { qicondragevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQIconDragEvent_Clone_IsBase(bool value) const { qicondragevent_clone_isbase = value; }
    void setQIconDragEvent_SetAccepted_IsBase(bool value) const { qicondragevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QIconDragEvent* clone() const override {
        if (qicondragevent_clone_isbase) {
            qicondragevent_clone_isbase = false;
            return QIconDragEvent::clone();
        } else if (qicondragevent_clone_callback != nullptr) {
            return qicondragevent_clone_callback();
        } else {
            return QIconDragEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qicondragevent_setaccepted_isbase) {
            qicondragevent_setaccepted_isbase = false;
            QIconDragEvent::setAccepted(accepted);
        } else if (qicondragevent_setaccepted_callback != nullptr) {
            qicondragevent_setaccepted_callback(this, accepted);
        } else {
            QIconDragEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QShowEvent so that we can call protected methods
class VirtualQShowEvent : public QShowEvent {

  public:
    // Virtual class public types (including callbacks)
    using QShowEvent_Clone_Callback = QShowEvent* (*)();
    using QShowEvent_SetAccepted_Callback = void (*)(QShowEvent*, bool);

  protected:
    // Instance callback storage
    QShowEvent_Clone_Callback qshowevent_clone_callback = nullptr;
    QShowEvent_SetAccepted_Callback qshowevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qshowevent_clone_isbase = false;
    mutable bool qshowevent_setaccepted_isbase = false;

  public:
    VirtualQShowEvent() : QShowEvent(){};

    ~VirtualQShowEvent() {
        qshowevent_clone_callback = nullptr;
        qshowevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQShowEvent_Clone_Callback(QShowEvent_Clone_Callback cb) { qshowevent_clone_callback = cb; }
    void setQShowEvent_SetAccepted_Callback(QShowEvent_SetAccepted_Callback cb) { qshowevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQShowEvent_Clone_IsBase(bool value) const { qshowevent_clone_isbase = value; }
    void setQShowEvent_SetAccepted_IsBase(bool value) const { qshowevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QShowEvent* clone() const override {
        if (qshowevent_clone_isbase) {
            qshowevent_clone_isbase = false;
            return QShowEvent::clone();
        } else if (qshowevent_clone_callback != nullptr) {
            return qshowevent_clone_callback();
        } else {
            return QShowEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qshowevent_setaccepted_isbase) {
            qshowevent_setaccepted_isbase = false;
            QShowEvent::setAccepted(accepted);
        } else if (qshowevent_setaccepted_callback != nullptr) {
            qshowevent_setaccepted_callback(this, accepted);
        } else {
            QShowEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QHideEvent so that we can call protected methods
class VirtualQHideEvent : public QHideEvent {

  public:
    // Virtual class public types (including callbacks)
    using QHideEvent_Clone_Callback = QHideEvent* (*)();
    using QHideEvent_SetAccepted_Callback = void (*)(QHideEvent*, bool);

  protected:
    // Instance callback storage
    QHideEvent_Clone_Callback qhideevent_clone_callback = nullptr;
    QHideEvent_SetAccepted_Callback qhideevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qhideevent_clone_isbase = false;
    mutable bool qhideevent_setaccepted_isbase = false;

  public:
    VirtualQHideEvent() : QHideEvent(){};

    ~VirtualQHideEvent() {
        qhideevent_clone_callback = nullptr;
        qhideevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQHideEvent_Clone_Callback(QHideEvent_Clone_Callback cb) { qhideevent_clone_callback = cb; }
    void setQHideEvent_SetAccepted_Callback(QHideEvent_SetAccepted_Callback cb) { qhideevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQHideEvent_Clone_IsBase(bool value) const { qhideevent_clone_isbase = value; }
    void setQHideEvent_SetAccepted_IsBase(bool value) const { qhideevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QHideEvent* clone() const override {
        if (qhideevent_clone_isbase) {
            qhideevent_clone_isbase = false;
            return QHideEvent::clone();
        } else if (qhideevent_clone_callback != nullptr) {
            return qhideevent_clone_callback();
        } else {
            return QHideEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhideevent_setaccepted_isbase) {
            qhideevent_setaccepted_isbase = false;
            QHideEvent::setAccepted(accepted);
        } else if (qhideevent_setaccepted_callback != nullptr) {
            qhideevent_setaccepted_callback(this, accepted);
        } else {
            QHideEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QContextMenuEvent so that we can call protected methods
class VirtualQContextMenuEvent : public QContextMenuEvent {

  public:
    // Virtual class public types (including callbacks)
    using QContextMenuEvent_Clone_Callback = QContextMenuEvent* (*)();
    using QContextMenuEvent_SetTimestamp_Callback = void (*)(QContextMenuEvent*, quint64);
    using QContextMenuEvent_SetAccepted_Callback = void (*)(QContextMenuEvent*, bool);

  protected:
    // Instance callback storage
    QContextMenuEvent_Clone_Callback qcontextmenuevent_clone_callback = nullptr;
    QContextMenuEvent_SetTimestamp_Callback qcontextmenuevent_settimestamp_callback = nullptr;
    QContextMenuEvent_SetAccepted_Callback qcontextmenuevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qcontextmenuevent_clone_isbase = false;
    mutable bool qcontextmenuevent_settimestamp_isbase = false;
    mutable bool qcontextmenuevent_setaccepted_isbase = false;

  public:
    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos, const QPoint& globalPos) : QContextMenuEvent(reason, pos, globalPos){};
    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos) : QContextMenuEvent(reason, pos){};
    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos, const QPoint& globalPos, Qt::KeyboardModifiers modifiers) : QContextMenuEvent(reason, pos, globalPos, modifiers){};

    ~VirtualQContextMenuEvent() {
        qcontextmenuevent_clone_callback = nullptr;
        qcontextmenuevent_settimestamp_callback = nullptr;
        qcontextmenuevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQContextMenuEvent_Clone_Callback(QContextMenuEvent_Clone_Callback cb) { qcontextmenuevent_clone_callback = cb; }
    void setQContextMenuEvent_SetTimestamp_Callback(QContextMenuEvent_SetTimestamp_Callback cb) { qcontextmenuevent_settimestamp_callback = cb; }
    void setQContextMenuEvent_SetAccepted_Callback(QContextMenuEvent_SetAccepted_Callback cb) { qcontextmenuevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQContextMenuEvent_Clone_IsBase(bool value) const { qcontextmenuevent_clone_isbase = value; }
    void setQContextMenuEvent_SetTimestamp_IsBase(bool value) const { qcontextmenuevent_settimestamp_isbase = value; }
    void setQContextMenuEvent_SetAccepted_IsBase(bool value) const { qcontextmenuevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QContextMenuEvent* clone() const override {
        if (qcontextmenuevent_clone_isbase) {
            qcontextmenuevent_clone_isbase = false;
            return QContextMenuEvent::clone();
        } else if (qcontextmenuevent_clone_callback != nullptr) {
            return qcontextmenuevent_clone_callback();
        } else {
            return QContextMenuEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qcontextmenuevent_settimestamp_isbase) {
            qcontextmenuevent_settimestamp_isbase = false;
            QContextMenuEvent::setTimestamp(timestamp);
        } else if (qcontextmenuevent_settimestamp_callback != nullptr) {
            qcontextmenuevent_settimestamp_callback(this, timestamp);
        } else {
            QContextMenuEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qcontextmenuevent_setaccepted_isbase) {
            qcontextmenuevent_setaccepted_isbase = false;
            QContextMenuEvent::setAccepted(accepted);
        } else if (qcontextmenuevent_setaccepted_callback != nullptr) {
            qcontextmenuevent_setaccepted_callback(this, accepted);
        } else {
            QContextMenuEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QInputMethodEvent so that we can call protected methods
class VirtualQInputMethodEvent : public QInputMethodEvent {

  public:
    // Virtual class public types (including callbacks)
    using QInputMethodEvent_Clone_Callback = QInputMethodEvent* (*)();
    using QInputMethodEvent_SetAccepted_Callback = void (*)(QInputMethodEvent*, bool);

  protected:
    // Instance callback storage
    QInputMethodEvent_Clone_Callback qinputmethodevent_clone_callback = nullptr;
    QInputMethodEvent_SetAccepted_Callback qinputmethodevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qinputmethodevent_clone_isbase = false;
    mutable bool qinputmethodevent_setaccepted_isbase = false;

  public:
    VirtualQInputMethodEvent() : QInputMethodEvent(){};
    VirtualQInputMethodEvent(const QString& preeditText, const QList<QInputMethodEvent::Attribute>& attributes) : QInputMethodEvent(preeditText, attributes){};

    ~VirtualQInputMethodEvent() {
        qinputmethodevent_clone_callback = nullptr;
        qinputmethodevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQInputMethodEvent_Clone_Callback(QInputMethodEvent_Clone_Callback cb) { qinputmethodevent_clone_callback = cb; }
    void setQInputMethodEvent_SetAccepted_Callback(QInputMethodEvent_SetAccepted_Callback cb) { qinputmethodevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQInputMethodEvent_Clone_IsBase(bool value) const { qinputmethodevent_clone_isbase = value; }
    void setQInputMethodEvent_SetAccepted_IsBase(bool value) const { qinputmethodevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QInputMethodEvent* clone() const override {
        if (qinputmethodevent_clone_isbase) {
            qinputmethodevent_clone_isbase = false;
            return QInputMethodEvent::clone();
        } else if (qinputmethodevent_clone_callback != nullptr) {
            return qinputmethodevent_clone_callback();
        } else {
            return QInputMethodEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputmethodevent_setaccepted_isbase) {
            qinputmethodevent_setaccepted_isbase = false;
            QInputMethodEvent::setAccepted(accepted);
        } else if (qinputmethodevent_setaccepted_callback != nullptr) {
            qinputmethodevent_setaccepted_callback(this, accepted);
        } else {
            QInputMethodEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QInputMethodQueryEvent so that we can call protected methods
class VirtualQInputMethodQueryEvent : public QInputMethodQueryEvent {

  public:
    // Virtual class public types (including callbacks)
    using QInputMethodQueryEvent_Clone_Callback = QInputMethodQueryEvent* (*)();
    using QInputMethodQueryEvent_SetAccepted_Callback = void (*)(QInputMethodQueryEvent*, bool);

  protected:
    // Instance callback storage
    QInputMethodQueryEvent_Clone_Callback qinputmethodqueryevent_clone_callback = nullptr;
    QInputMethodQueryEvent_SetAccepted_Callback qinputmethodqueryevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qinputmethodqueryevent_clone_isbase = false;
    mutable bool qinputmethodqueryevent_setaccepted_isbase = false;

  public:
    VirtualQInputMethodQueryEvent(Qt::InputMethodQueries queries) : QInputMethodQueryEvent(queries){};

    ~VirtualQInputMethodQueryEvent() {
        qinputmethodqueryevent_clone_callback = nullptr;
        qinputmethodqueryevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQInputMethodQueryEvent_Clone_Callback(QInputMethodQueryEvent_Clone_Callback cb) { qinputmethodqueryevent_clone_callback = cb; }
    void setQInputMethodQueryEvent_SetAccepted_Callback(QInputMethodQueryEvent_SetAccepted_Callback cb) { qinputmethodqueryevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQInputMethodQueryEvent_Clone_IsBase(bool value) const { qinputmethodqueryevent_clone_isbase = value; }
    void setQInputMethodQueryEvent_SetAccepted_IsBase(bool value) const { qinputmethodqueryevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QInputMethodQueryEvent* clone() const override {
        if (qinputmethodqueryevent_clone_isbase) {
            qinputmethodqueryevent_clone_isbase = false;
            return QInputMethodQueryEvent::clone();
        } else if (qinputmethodqueryevent_clone_callback != nullptr) {
            return qinputmethodqueryevent_clone_callback();
        } else {
            return QInputMethodQueryEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputmethodqueryevent_setaccepted_isbase) {
            qinputmethodqueryevent_setaccepted_isbase = false;
            QInputMethodQueryEvent::setAccepted(accepted);
        } else if (qinputmethodqueryevent_setaccepted_callback != nullptr) {
            qinputmethodqueryevent_setaccepted_callback(this, accepted);
        } else {
            QInputMethodQueryEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QDropEvent so that we can call protected methods
class VirtualQDropEvent : public QDropEvent {

  public:
    // Virtual class public types (including callbacks)
    using QDropEvent_Clone_Callback = QDropEvent* (*)();
    using QDropEvent_SetAccepted_Callback = void (*)(QDropEvent*, bool);

  protected:
    // Instance callback storage
    QDropEvent_Clone_Callback qdropevent_clone_callback = nullptr;
    QDropEvent_SetAccepted_Callback qdropevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qdropevent_clone_isbase = false;
    mutable bool qdropevent_setaccepted_isbase = false;

  public:
    VirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDropEvent(pos, actions, data, buttons, modifiers){};
    VirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type typeVal) : QDropEvent(pos, actions, data, buttons, modifiers, typeVal){};

    ~VirtualQDropEvent() {
        qdropevent_clone_callback = nullptr;
        qdropevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQDropEvent_Clone_Callback(QDropEvent_Clone_Callback cb) { qdropevent_clone_callback = cb; }
    void setQDropEvent_SetAccepted_Callback(QDropEvent_SetAccepted_Callback cb) { qdropevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQDropEvent_Clone_IsBase(bool value) const { qdropevent_clone_isbase = value; }
    void setQDropEvent_SetAccepted_IsBase(bool value) const { qdropevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDropEvent* clone() const override {
        if (qdropevent_clone_isbase) {
            qdropevent_clone_isbase = false;
            return QDropEvent::clone();
        } else if (qdropevent_clone_callback != nullptr) {
            return qdropevent_clone_callback();
        } else {
            return QDropEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdropevent_setaccepted_isbase) {
            qdropevent_setaccepted_isbase = false;
            QDropEvent::setAccepted(accepted);
        } else if (qdropevent_setaccepted_callback != nullptr) {
            qdropevent_setaccepted_callback(this, accepted);
        } else {
            QDropEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QDragMoveEvent so that we can call protected methods
class VirtualQDragMoveEvent : public QDragMoveEvent {

  public:
    // Virtual class public types (including callbacks)
    using QDragMoveEvent_Clone_Callback = QDragMoveEvent* (*)();
    using QDragMoveEvent_SetAccepted_Callback = void (*)(QDragMoveEvent*, bool);

  protected:
    // Instance callback storage
    QDragMoveEvent_Clone_Callback qdragmoveevent_clone_callback = nullptr;
    QDragMoveEvent_SetAccepted_Callback qdragmoveevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qdragmoveevent_clone_isbase = false;
    mutable bool qdragmoveevent_setaccepted_isbase = false;

  public:
    VirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDragMoveEvent(pos, actions, data, buttons, modifiers){};
    VirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type typeVal) : QDragMoveEvent(pos, actions, data, buttons, modifiers, typeVal){};

    ~VirtualQDragMoveEvent() {
        qdragmoveevent_clone_callback = nullptr;
        qdragmoveevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQDragMoveEvent_Clone_Callback(QDragMoveEvent_Clone_Callback cb) { qdragmoveevent_clone_callback = cb; }
    void setQDragMoveEvent_SetAccepted_Callback(QDragMoveEvent_SetAccepted_Callback cb) { qdragmoveevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQDragMoveEvent_Clone_IsBase(bool value) const { qdragmoveevent_clone_isbase = value; }
    void setQDragMoveEvent_SetAccepted_IsBase(bool value) const { qdragmoveevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDragMoveEvent* clone() const override {
        if (qdragmoveevent_clone_isbase) {
            qdragmoveevent_clone_isbase = false;
            return QDragMoveEvent::clone();
        } else if (qdragmoveevent_clone_callback != nullptr) {
            return qdragmoveevent_clone_callback();
        } else {
            return QDragMoveEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragmoveevent_setaccepted_isbase) {
            qdragmoveevent_setaccepted_isbase = false;
            QDragMoveEvent::setAccepted(accepted);
        } else if (qdragmoveevent_setaccepted_callback != nullptr) {
            qdragmoveevent_setaccepted_callback(this, accepted);
        } else {
            QDragMoveEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QDragEnterEvent so that we can call protected methods
class VirtualQDragEnterEvent : public QDragEnterEvent {

  public:
    // Virtual class public types (including callbacks)
    using QDragEnterEvent_Clone_Callback = QDragEnterEvent* (*)();
    using QDragEnterEvent_SetAccepted_Callback = void (*)(QDragEnterEvent*, bool);

  protected:
    // Instance callback storage
    QDragEnterEvent_Clone_Callback qdragenterevent_clone_callback = nullptr;
    QDragEnterEvent_SetAccepted_Callback qdragenterevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qdragenterevent_clone_isbase = false;
    mutable bool qdragenterevent_setaccepted_isbase = false;

  public:
    VirtualQDragEnterEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDragEnterEvent(pos, actions, data, buttons, modifiers){};

    ~VirtualQDragEnterEvent() {
        qdragenterevent_clone_callback = nullptr;
        qdragenterevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQDragEnterEvent_Clone_Callback(QDragEnterEvent_Clone_Callback cb) { qdragenterevent_clone_callback = cb; }
    void setQDragEnterEvent_SetAccepted_Callback(QDragEnterEvent_SetAccepted_Callback cb) { qdragenterevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQDragEnterEvent_Clone_IsBase(bool value) const { qdragenterevent_clone_isbase = value; }
    void setQDragEnterEvent_SetAccepted_IsBase(bool value) const { qdragenterevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDragEnterEvent* clone() const override {
        if (qdragenterevent_clone_isbase) {
            qdragenterevent_clone_isbase = false;
            return QDragEnterEvent::clone();
        } else if (qdragenterevent_clone_callback != nullptr) {
            return qdragenterevent_clone_callback();
        } else {
            return QDragEnterEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragenterevent_setaccepted_isbase) {
            qdragenterevent_setaccepted_isbase = false;
            QDragEnterEvent::setAccepted(accepted);
        } else if (qdragenterevent_setaccepted_callback != nullptr) {
            qdragenterevent_setaccepted_callback(this, accepted);
        } else {
            QDragEnterEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QDragLeaveEvent so that we can call protected methods
class VirtualQDragLeaveEvent : public QDragLeaveEvent {

  public:
    // Virtual class public types (including callbacks)
    using QDragLeaveEvent_Clone_Callback = QDragLeaveEvent* (*)();
    using QDragLeaveEvent_SetAccepted_Callback = void (*)(QDragLeaveEvent*, bool);

  protected:
    // Instance callback storage
    QDragLeaveEvent_Clone_Callback qdragleaveevent_clone_callback = nullptr;
    QDragLeaveEvent_SetAccepted_Callback qdragleaveevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qdragleaveevent_clone_isbase = false;
    mutable bool qdragleaveevent_setaccepted_isbase = false;

  public:
    VirtualQDragLeaveEvent() : QDragLeaveEvent(){};

    ~VirtualQDragLeaveEvent() {
        qdragleaveevent_clone_callback = nullptr;
        qdragleaveevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQDragLeaveEvent_Clone_Callback(QDragLeaveEvent_Clone_Callback cb) { qdragleaveevent_clone_callback = cb; }
    void setQDragLeaveEvent_SetAccepted_Callback(QDragLeaveEvent_SetAccepted_Callback cb) { qdragleaveevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQDragLeaveEvent_Clone_IsBase(bool value) const { qdragleaveevent_clone_isbase = value; }
    void setQDragLeaveEvent_SetAccepted_IsBase(bool value) const { qdragleaveevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDragLeaveEvent* clone() const override {
        if (qdragleaveevent_clone_isbase) {
            qdragleaveevent_clone_isbase = false;
            return QDragLeaveEvent::clone();
        } else if (qdragleaveevent_clone_callback != nullptr) {
            return qdragleaveevent_clone_callback();
        } else {
            return QDragLeaveEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragleaveevent_setaccepted_isbase) {
            qdragleaveevent_setaccepted_isbase = false;
            QDragLeaveEvent::setAccepted(accepted);
        } else if (qdragleaveevent_setaccepted_callback != nullptr) {
            qdragleaveevent_setaccepted_callback(this, accepted);
        } else {
            QDragLeaveEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QHelpEvent so that we can call protected methods
class VirtualQHelpEvent : public QHelpEvent {

  public:
    // Virtual class public types (including callbacks)
    using QHelpEvent_Clone_Callback = QHelpEvent* (*)();
    using QHelpEvent_SetAccepted_Callback = void (*)(QHelpEvent*, bool);

  protected:
    // Instance callback storage
    QHelpEvent_Clone_Callback qhelpevent_clone_callback = nullptr;
    QHelpEvent_SetAccepted_Callback qhelpevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qhelpevent_clone_isbase = false;
    mutable bool qhelpevent_setaccepted_isbase = false;

  public:
    VirtualQHelpEvent(QEvent::Type typeVal, const QPoint& pos, const QPoint& globalPos) : QHelpEvent(typeVal, pos, globalPos){};

    ~VirtualQHelpEvent() {
        qhelpevent_clone_callback = nullptr;
        qhelpevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQHelpEvent_Clone_Callback(QHelpEvent_Clone_Callback cb) { qhelpevent_clone_callback = cb; }
    void setQHelpEvent_SetAccepted_Callback(QHelpEvent_SetAccepted_Callback cb) { qhelpevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQHelpEvent_Clone_IsBase(bool value) const { qhelpevent_clone_isbase = value; }
    void setQHelpEvent_SetAccepted_IsBase(bool value) const { qhelpevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QHelpEvent* clone() const override {
        if (qhelpevent_clone_isbase) {
            qhelpevent_clone_isbase = false;
            return QHelpEvent::clone();
        } else if (qhelpevent_clone_callback != nullptr) {
            return qhelpevent_clone_callback();
        } else {
            return QHelpEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhelpevent_setaccepted_isbase) {
            qhelpevent_setaccepted_isbase = false;
            QHelpEvent::setAccepted(accepted);
        } else if (qhelpevent_setaccepted_callback != nullptr) {
            qhelpevent_setaccepted_callback(this, accepted);
        } else {
            QHelpEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QStatusTipEvent so that we can call protected methods
class VirtualQStatusTipEvent : public QStatusTipEvent {

  public:
    // Virtual class public types (including callbacks)
    using QStatusTipEvent_Clone_Callback = QStatusTipEvent* (*)();
    using QStatusTipEvent_SetAccepted_Callback = void (*)(QStatusTipEvent*, bool);

  protected:
    // Instance callback storage
    QStatusTipEvent_Clone_Callback qstatustipevent_clone_callback = nullptr;
    QStatusTipEvent_SetAccepted_Callback qstatustipevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qstatustipevent_clone_isbase = false;
    mutable bool qstatustipevent_setaccepted_isbase = false;

  public:
    VirtualQStatusTipEvent(const QString& tip) : QStatusTipEvent(tip){};

    ~VirtualQStatusTipEvent() {
        qstatustipevent_clone_callback = nullptr;
        qstatustipevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQStatusTipEvent_Clone_Callback(QStatusTipEvent_Clone_Callback cb) { qstatustipevent_clone_callback = cb; }
    void setQStatusTipEvent_SetAccepted_Callback(QStatusTipEvent_SetAccepted_Callback cb) { qstatustipevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQStatusTipEvent_Clone_IsBase(bool value) const { qstatustipevent_clone_isbase = value; }
    void setQStatusTipEvent_SetAccepted_IsBase(bool value) const { qstatustipevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QStatusTipEvent* clone() const override {
        if (qstatustipevent_clone_isbase) {
            qstatustipevent_clone_isbase = false;
            return QStatusTipEvent::clone();
        } else if (qstatustipevent_clone_callback != nullptr) {
            return qstatustipevent_clone_callback();
        } else {
            return QStatusTipEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qstatustipevent_setaccepted_isbase) {
            qstatustipevent_setaccepted_isbase = false;
            QStatusTipEvent::setAccepted(accepted);
        } else if (qstatustipevent_setaccepted_callback != nullptr) {
            qstatustipevent_setaccepted_callback(this, accepted);
        } else {
            QStatusTipEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QWhatsThisClickedEvent so that we can call protected methods
class VirtualQWhatsThisClickedEvent : public QWhatsThisClickedEvent {

  public:
    // Virtual class public types (including callbacks)
    using QWhatsThisClickedEvent_Clone_Callback = QWhatsThisClickedEvent* (*)();
    using QWhatsThisClickedEvent_SetAccepted_Callback = void (*)(QWhatsThisClickedEvent*, bool);

  protected:
    // Instance callback storage
    QWhatsThisClickedEvent_Clone_Callback qwhatsthisclickedevent_clone_callback = nullptr;
    QWhatsThisClickedEvent_SetAccepted_Callback qwhatsthisclickedevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qwhatsthisclickedevent_clone_isbase = false;
    mutable bool qwhatsthisclickedevent_setaccepted_isbase = false;

  public:
    VirtualQWhatsThisClickedEvent(const QString& href) : QWhatsThisClickedEvent(href){};

    ~VirtualQWhatsThisClickedEvent() {
        qwhatsthisclickedevent_clone_callback = nullptr;
        qwhatsthisclickedevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQWhatsThisClickedEvent_Clone_Callback(QWhatsThisClickedEvent_Clone_Callback cb) { qwhatsthisclickedevent_clone_callback = cb; }
    void setQWhatsThisClickedEvent_SetAccepted_Callback(QWhatsThisClickedEvent_SetAccepted_Callback cb) { qwhatsthisclickedevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQWhatsThisClickedEvent_Clone_IsBase(bool value) const { qwhatsthisclickedevent_clone_isbase = value; }
    void setQWhatsThisClickedEvent_SetAccepted_IsBase(bool value) const { qwhatsthisclickedevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWhatsThisClickedEvent* clone() const override {
        if (qwhatsthisclickedevent_clone_isbase) {
            qwhatsthisclickedevent_clone_isbase = false;
            return QWhatsThisClickedEvent::clone();
        } else if (qwhatsthisclickedevent_clone_callback != nullptr) {
            return qwhatsthisclickedevent_clone_callback();
        } else {
            return QWhatsThisClickedEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwhatsthisclickedevent_setaccepted_isbase) {
            qwhatsthisclickedevent_setaccepted_isbase = false;
            QWhatsThisClickedEvent::setAccepted(accepted);
        } else if (qwhatsthisclickedevent_setaccepted_callback != nullptr) {
            qwhatsthisclickedevent_setaccepted_callback(this, accepted);
        } else {
            QWhatsThisClickedEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QActionEvent so that we can call protected methods
class VirtualQActionEvent : public QActionEvent {

  public:
    // Virtual class public types (including callbacks)
    using QActionEvent_Clone_Callback = QActionEvent* (*)();
    using QActionEvent_SetAccepted_Callback = void (*)(QActionEvent*, bool);

  protected:
    // Instance callback storage
    QActionEvent_Clone_Callback qactionevent_clone_callback = nullptr;
    QActionEvent_SetAccepted_Callback qactionevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qactionevent_clone_isbase = false;
    mutable bool qactionevent_setaccepted_isbase = false;

  public:
    VirtualQActionEvent(int typeVal, QAction* action) : QActionEvent(typeVal, action){};
    VirtualQActionEvent(int typeVal, QAction* action, QAction* before) : QActionEvent(typeVal, action, before){};

    ~VirtualQActionEvent() {
        qactionevent_clone_callback = nullptr;
        qactionevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQActionEvent_Clone_Callback(QActionEvent_Clone_Callback cb) { qactionevent_clone_callback = cb; }
    void setQActionEvent_SetAccepted_Callback(QActionEvent_SetAccepted_Callback cb) { qactionevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQActionEvent_Clone_IsBase(bool value) const { qactionevent_clone_isbase = value; }
    void setQActionEvent_SetAccepted_IsBase(bool value) const { qactionevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QActionEvent* clone() const override {
        if (qactionevent_clone_isbase) {
            qactionevent_clone_isbase = false;
            return QActionEvent::clone();
        } else if (qactionevent_clone_callback != nullptr) {
            return qactionevent_clone_callback();
        } else {
            return QActionEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qactionevent_setaccepted_isbase) {
            qactionevent_setaccepted_isbase = false;
            QActionEvent::setAccepted(accepted);
        } else if (qactionevent_setaccepted_callback != nullptr) {
            qactionevent_setaccepted_callback(this, accepted);
        } else {
            QActionEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QFileOpenEvent so that we can call protected methods
class VirtualQFileOpenEvent : public QFileOpenEvent {

  public:
    // Virtual class public types (including callbacks)
    using QFileOpenEvent_Clone_Callback = QFileOpenEvent* (*)();
    using QFileOpenEvent_SetAccepted_Callback = void (*)(QFileOpenEvent*, bool);

  protected:
    // Instance callback storage
    QFileOpenEvent_Clone_Callback qfileopenevent_clone_callback = nullptr;
    QFileOpenEvent_SetAccepted_Callback qfileopenevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qfileopenevent_clone_isbase = false;
    mutable bool qfileopenevent_setaccepted_isbase = false;

  public:
    VirtualQFileOpenEvent(const QString& file) : QFileOpenEvent(file){};
    VirtualQFileOpenEvent(const QUrl& url) : QFileOpenEvent(url){};

    ~VirtualQFileOpenEvent() {
        qfileopenevent_clone_callback = nullptr;
        qfileopenevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQFileOpenEvent_Clone_Callback(QFileOpenEvent_Clone_Callback cb) { qfileopenevent_clone_callback = cb; }
    void setQFileOpenEvent_SetAccepted_Callback(QFileOpenEvent_SetAccepted_Callback cb) { qfileopenevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQFileOpenEvent_Clone_IsBase(bool value) const { qfileopenevent_clone_isbase = value; }
    void setQFileOpenEvent_SetAccepted_IsBase(bool value) const { qfileopenevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QFileOpenEvent* clone() const override {
        if (qfileopenevent_clone_isbase) {
            qfileopenevent_clone_isbase = false;
            return QFileOpenEvent::clone();
        } else if (qfileopenevent_clone_callback != nullptr) {
            return qfileopenevent_clone_callback();
        } else {
            return QFileOpenEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qfileopenevent_setaccepted_isbase) {
            qfileopenevent_setaccepted_isbase = false;
            QFileOpenEvent::setAccepted(accepted);
        } else if (qfileopenevent_setaccepted_callback != nullptr) {
            qfileopenevent_setaccepted_callback(this, accepted);
        } else {
            QFileOpenEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QToolBarChangeEvent so that we can call protected methods
class VirtualQToolBarChangeEvent : public QToolBarChangeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QToolBarChangeEvent_Clone_Callback = QToolBarChangeEvent* (*)();
    using QToolBarChangeEvent_SetAccepted_Callback = void (*)(QToolBarChangeEvent*, bool);

  protected:
    // Instance callback storage
    QToolBarChangeEvent_Clone_Callback qtoolbarchangeevent_clone_callback = nullptr;
    QToolBarChangeEvent_SetAccepted_Callback qtoolbarchangeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qtoolbarchangeevent_clone_isbase = false;
    mutable bool qtoolbarchangeevent_setaccepted_isbase = false;

  public:
    VirtualQToolBarChangeEvent(bool t) : QToolBarChangeEvent(t){};

    ~VirtualQToolBarChangeEvent() {
        qtoolbarchangeevent_clone_callback = nullptr;
        qtoolbarchangeevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQToolBarChangeEvent_Clone_Callback(QToolBarChangeEvent_Clone_Callback cb) { qtoolbarchangeevent_clone_callback = cb; }
    void setQToolBarChangeEvent_SetAccepted_Callback(QToolBarChangeEvent_SetAccepted_Callback cb) { qtoolbarchangeevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQToolBarChangeEvent_Clone_IsBase(bool value) const { qtoolbarchangeevent_clone_isbase = value; }
    void setQToolBarChangeEvent_SetAccepted_IsBase(bool value) const { qtoolbarchangeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QToolBarChangeEvent* clone() const override {
        if (qtoolbarchangeevent_clone_isbase) {
            qtoolbarchangeevent_clone_isbase = false;
            return QToolBarChangeEvent::clone();
        } else if (qtoolbarchangeevent_clone_callback != nullptr) {
            return qtoolbarchangeevent_clone_callback();
        } else {
            return QToolBarChangeEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtoolbarchangeevent_setaccepted_isbase) {
            qtoolbarchangeevent_setaccepted_isbase = false;
            QToolBarChangeEvent::setAccepted(accepted);
        } else if (qtoolbarchangeevent_setaccepted_callback != nullptr) {
            qtoolbarchangeevent_setaccepted_callback(this, accepted);
        } else {
            QToolBarChangeEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QShortcutEvent so that we can call protected methods
class VirtualQShortcutEvent : public QShortcutEvent {

  public:
    // Virtual class public types (including callbacks)
    using QShortcutEvent_Clone_Callback = QShortcutEvent* (*)();
    using QShortcutEvent_SetAccepted_Callback = void (*)(QShortcutEvent*, bool);

  protected:
    // Instance callback storage
    QShortcutEvent_Clone_Callback qshortcutevent_clone_callback = nullptr;
    QShortcutEvent_SetAccepted_Callback qshortcutevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qshortcutevent_clone_isbase = false;
    mutable bool qshortcutevent_setaccepted_isbase = false;

  public:
    VirtualQShortcutEvent(const QKeySequence& key, int id) : QShortcutEvent(key, id){};
    VirtualQShortcutEvent(const QKeySequence& key, int id, bool ambiguous) : QShortcutEvent(key, id, ambiguous){};

    ~VirtualQShortcutEvent() {
        qshortcutevent_clone_callback = nullptr;
        qshortcutevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQShortcutEvent_Clone_Callback(QShortcutEvent_Clone_Callback cb) { qshortcutevent_clone_callback = cb; }
    void setQShortcutEvent_SetAccepted_Callback(QShortcutEvent_SetAccepted_Callback cb) { qshortcutevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQShortcutEvent_Clone_IsBase(bool value) const { qshortcutevent_clone_isbase = value; }
    void setQShortcutEvent_SetAccepted_IsBase(bool value) const { qshortcutevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QShortcutEvent* clone() const override {
        if (qshortcutevent_clone_isbase) {
            qshortcutevent_clone_isbase = false;
            return QShortcutEvent::clone();
        } else if (qshortcutevent_clone_callback != nullptr) {
            return qshortcutevent_clone_callback();
        } else {
            return QShortcutEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qshortcutevent_setaccepted_isbase) {
            qshortcutevent_setaccepted_isbase = false;
            QShortcutEvent::setAccepted(accepted);
        } else if (qshortcutevent_setaccepted_callback != nullptr) {
            qshortcutevent_setaccepted_callback(this, accepted);
        } else {
            QShortcutEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QWindowStateChangeEvent so that we can call protected methods
class VirtualQWindowStateChangeEvent : public QWindowStateChangeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QWindowStateChangeEvent_Clone_Callback = QWindowStateChangeEvent* (*)();
    using QWindowStateChangeEvent_SetAccepted_Callback = void (*)(QWindowStateChangeEvent*, bool);

  protected:
    // Instance callback storage
    QWindowStateChangeEvent_Clone_Callback qwindowstatechangeevent_clone_callback = nullptr;
    QWindowStateChangeEvent_SetAccepted_Callback qwindowstatechangeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qwindowstatechangeevent_clone_isbase = false;
    mutable bool qwindowstatechangeevent_setaccepted_isbase = false;

  public:
    VirtualQWindowStateChangeEvent(Qt::WindowStates oldState) : QWindowStateChangeEvent(oldState){};
    VirtualQWindowStateChangeEvent(Qt::WindowStates oldState, bool isOverride) : QWindowStateChangeEvent(oldState, isOverride){};

    ~VirtualQWindowStateChangeEvent() {
        qwindowstatechangeevent_clone_callback = nullptr;
        qwindowstatechangeevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQWindowStateChangeEvent_Clone_Callback(QWindowStateChangeEvent_Clone_Callback cb) { qwindowstatechangeevent_clone_callback = cb; }
    void setQWindowStateChangeEvent_SetAccepted_Callback(QWindowStateChangeEvent_SetAccepted_Callback cb) { qwindowstatechangeevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQWindowStateChangeEvent_Clone_IsBase(bool value) const { qwindowstatechangeevent_clone_isbase = value; }
    void setQWindowStateChangeEvent_SetAccepted_IsBase(bool value) const { qwindowstatechangeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWindowStateChangeEvent* clone() const override {
        if (qwindowstatechangeevent_clone_isbase) {
            qwindowstatechangeevent_clone_isbase = false;
            return QWindowStateChangeEvent::clone();
        } else if (qwindowstatechangeevent_clone_callback != nullptr) {
            return qwindowstatechangeevent_clone_callback();
        } else {
            return QWindowStateChangeEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwindowstatechangeevent_setaccepted_isbase) {
            qwindowstatechangeevent_setaccepted_isbase = false;
            QWindowStateChangeEvent::setAccepted(accepted);
        } else if (qwindowstatechangeevent_setaccepted_callback != nullptr) {
            qwindowstatechangeevent_setaccepted_callback(this, accepted);
        } else {
            QWindowStateChangeEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QTouchEvent so that we can call protected methods
class VirtualQTouchEvent : public QTouchEvent {

  public:
    // Virtual class public types (including callbacks)
    using QTouchEvent_Clone_Callback = QTouchEvent* (*)();
    using QTouchEvent_IsBeginEvent_Callback = bool (*)();
    using QTouchEvent_IsUpdateEvent_Callback = bool (*)();
    using QTouchEvent_IsEndEvent_Callback = bool (*)();
    using QTouchEvent_SetTimestamp_Callback = void (*)(QTouchEvent*, quint64);
    using QTouchEvent_SetAccepted_Callback = void (*)(QTouchEvent*, bool);

  protected:
    // Instance callback storage
    QTouchEvent_Clone_Callback qtouchevent_clone_callback = nullptr;
    QTouchEvent_IsBeginEvent_Callback qtouchevent_isbeginevent_callback = nullptr;
    QTouchEvent_IsUpdateEvent_Callback qtouchevent_isupdateevent_callback = nullptr;
    QTouchEvent_IsEndEvent_Callback qtouchevent_isendevent_callback = nullptr;
    QTouchEvent_SetTimestamp_Callback qtouchevent_settimestamp_callback = nullptr;
    QTouchEvent_SetAccepted_Callback qtouchevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qtouchevent_clone_isbase = false;
    mutable bool qtouchevent_isbeginevent_isbase = false;
    mutable bool qtouchevent_isupdateevent_isbase = false;
    mutable bool qtouchevent_isendevent_isbase = false;
    mutable bool qtouchevent_settimestamp_isbase = false;
    mutable bool qtouchevent_setaccepted_isbase = false;

  public:
    VirtualQTouchEvent(QEvent::Type eventType) : QTouchEvent(eventType){};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates) : QTouchEvent(eventType, device, modifiers, touchPointStates){};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device) : QTouchEvent(eventType, device){};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers) : QTouchEvent(eventType, device, modifiers){};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& touchPoints) : QTouchEvent(eventType, device, modifiers, touchPoints){};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates, const QList<QEventPoint>& touchPoints) : QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints){};

    ~VirtualQTouchEvent() {
        qtouchevent_clone_callback = nullptr;
        qtouchevent_isbeginevent_callback = nullptr;
        qtouchevent_isupdateevent_callback = nullptr;
        qtouchevent_isendevent_callback = nullptr;
        qtouchevent_settimestamp_callback = nullptr;
        qtouchevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQTouchEvent_Clone_Callback(QTouchEvent_Clone_Callback cb) { qtouchevent_clone_callback = cb; }
    void setQTouchEvent_IsBeginEvent_Callback(QTouchEvent_IsBeginEvent_Callback cb) { qtouchevent_isbeginevent_callback = cb; }
    void setQTouchEvent_IsUpdateEvent_Callback(QTouchEvent_IsUpdateEvent_Callback cb) { qtouchevent_isupdateevent_callback = cb; }
    void setQTouchEvent_IsEndEvent_Callback(QTouchEvent_IsEndEvent_Callback cb) { qtouchevent_isendevent_callback = cb; }
    void setQTouchEvent_SetTimestamp_Callback(QTouchEvent_SetTimestamp_Callback cb) { qtouchevent_settimestamp_callback = cb; }
    void setQTouchEvent_SetAccepted_Callback(QTouchEvent_SetAccepted_Callback cb) { qtouchevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQTouchEvent_Clone_IsBase(bool value) const { qtouchevent_clone_isbase = value; }
    void setQTouchEvent_IsBeginEvent_IsBase(bool value) const { qtouchevent_isbeginevent_isbase = value; }
    void setQTouchEvent_IsUpdateEvent_IsBase(bool value) const { qtouchevent_isupdateevent_isbase = value; }
    void setQTouchEvent_IsEndEvent_IsBase(bool value) const { qtouchevent_isendevent_isbase = value; }
    void setQTouchEvent_SetTimestamp_IsBase(bool value) const { qtouchevent_settimestamp_isbase = value; }
    void setQTouchEvent_SetAccepted_IsBase(bool value) const { qtouchevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QTouchEvent* clone() const override {
        if (qtouchevent_clone_isbase) {
            qtouchevent_clone_isbase = false;
            return QTouchEvent::clone();
        } else if (qtouchevent_clone_callback != nullptr) {
            return qtouchevent_clone_callback();
        } else {
            return QTouchEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qtouchevent_isbeginevent_isbase) {
            qtouchevent_isbeginevent_isbase = false;
            return QTouchEvent::isBeginEvent();
        } else if (qtouchevent_isbeginevent_callback != nullptr) {
            return qtouchevent_isbeginevent_callback();
        } else {
            return QTouchEvent::isBeginEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qtouchevent_isupdateevent_isbase) {
            qtouchevent_isupdateevent_isbase = false;
            return QTouchEvent::isUpdateEvent();
        } else if (qtouchevent_isupdateevent_callback != nullptr) {
            return qtouchevent_isupdateevent_callback();
        } else {
            return QTouchEvent::isUpdateEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qtouchevent_isendevent_isbase) {
            qtouchevent_isendevent_isbase = false;
            return QTouchEvent::isEndEvent();
        } else if (qtouchevent_isendevent_callback != nullptr) {
            return qtouchevent_isendevent_callback();
        } else {
            return QTouchEvent::isEndEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qtouchevent_settimestamp_isbase) {
            qtouchevent_settimestamp_isbase = false;
            QTouchEvent::setTimestamp(timestamp);
        } else if (qtouchevent_settimestamp_callback != nullptr) {
            qtouchevent_settimestamp_callback(this, timestamp);
        } else {
            QTouchEvent::setTimestamp(timestamp);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtouchevent_setaccepted_isbase) {
            qtouchevent_setaccepted_isbase = false;
            QTouchEvent::setAccepted(accepted);
        } else if (qtouchevent_setaccepted_callback != nullptr) {
            qtouchevent_setaccepted_callback(this, accepted);
        } else {
            QTouchEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QScrollPrepareEvent so that we can call protected methods
class VirtualQScrollPrepareEvent : public QScrollPrepareEvent {

  public:
    // Virtual class public types (including callbacks)
    using QScrollPrepareEvent_Clone_Callback = QScrollPrepareEvent* (*)();
    using QScrollPrepareEvent_SetAccepted_Callback = void (*)(QScrollPrepareEvent*, bool);

  protected:
    // Instance callback storage
    QScrollPrepareEvent_Clone_Callback qscrollprepareevent_clone_callback = nullptr;
    QScrollPrepareEvent_SetAccepted_Callback qscrollprepareevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qscrollprepareevent_clone_isbase = false;
    mutable bool qscrollprepareevent_setaccepted_isbase = false;

  public:
    VirtualQScrollPrepareEvent(const QPointF& startPos) : QScrollPrepareEvent(startPos){};

    ~VirtualQScrollPrepareEvent() {
        qscrollprepareevent_clone_callback = nullptr;
        qscrollprepareevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQScrollPrepareEvent_Clone_Callback(QScrollPrepareEvent_Clone_Callback cb) { qscrollprepareevent_clone_callback = cb; }
    void setQScrollPrepareEvent_SetAccepted_Callback(QScrollPrepareEvent_SetAccepted_Callback cb) { qscrollprepareevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQScrollPrepareEvent_Clone_IsBase(bool value) const { qscrollprepareevent_clone_isbase = value; }
    void setQScrollPrepareEvent_SetAccepted_IsBase(bool value) const { qscrollprepareevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QScrollPrepareEvent* clone() const override {
        if (qscrollprepareevent_clone_isbase) {
            qscrollprepareevent_clone_isbase = false;
            return QScrollPrepareEvent::clone();
        } else if (qscrollprepareevent_clone_callback != nullptr) {
            return qscrollprepareevent_clone_callback();
        } else {
            return QScrollPrepareEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscrollprepareevent_setaccepted_isbase) {
            qscrollprepareevent_setaccepted_isbase = false;
            QScrollPrepareEvent::setAccepted(accepted);
        } else if (qscrollprepareevent_setaccepted_callback != nullptr) {
            qscrollprepareevent_setaccepted_callback(this, accepted);
        } else {
            QScrollPrepareEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QScrollEvent so that we can call protected methods
class VirtualQScrollEvent : public QScrollEvent {

  public:
    // Virtual class public types (including callbacks)
    using QScrollEvent_Clone_Callback = QScrollEvent* (*)();
    using QScrollEvent_SetAccepted_Callback = void (*)(QScrollEvent*, bool);

  protected:
    // Instance callback storage
    QScrollEvent_Clone_Callback qscrollevent_clone_callback = nullptr;
    QScrollEvent_SetAccepted_Callback qscrollevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qscrollevent_clone_isbase = false;
    mutable bool qscrollevent_setaccepted_isbase = false;

  public:
    VirtualQScrollEvent(const QPointF& contentPos, const QPointF& overshoot, QScrollEvent::ScrollState scrollState) : QScrollEvent(contentPos, overshoot, scrollState){};

    ~VirtualQScrollEvent() {
        qscrollevent_clone_callback = nullptr;
        qscrollevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQScrollEvent_Clone_Callback(QScrollEvent_Clone_Callback cb) { qscrollevent_clone_callback = cb; }
    void setQScrollEvent_SetAccepted_Callback(QScrollEvent_SetAccepted_Callback cb) { qscrollevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQScrollEvent_Clone_IsBase(bool value) const { qscrollevent_clone_isbase = value; }
    void setQScrollEvent_SetAccepted_IsBase(bool value) const { qscrollevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QScrollEvent* clone() const override {
        if (qscrollevent_clone_isbase) {
            qscrollevent_clone_isbase = false;
            return QScrollEvent::clone();
        } else if (qscrollevent_clone_callback != nullptr) {
            return qscrollevent_clone_callback();
        } else {
            return QScrollEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscrollevent_setaccepted_isbase) {
            qscrollevent_setaccepted_isbase = false;
            QScrollEvent::setAccepted(accepted);
        } else if (qscrollevent_setaccepted_callback != nullptr) {
            qscrollevent_setaccepted_callback(this, accepted);
        } else {
            QScrollEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QScreenOrientationChangeEvent so that we can call protected methods
class VirtualQScreenOrientationChangeEvent : public QScreenOrientationChangeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QScreenOrientationChangeEvent_Clone_Callback = QScreenOrientationChangeEvent* (*)();
    using QScreenOrientationChangeEvent_SetAccepted_Callback = void (*)(QScreenOrientationChangeEvent*, bool);

  protected:
    // Instance callback storage
    QScreenOrientationChangeEvent_Clone_Callback qscreenorientationchangeevent_clone_callback = nullptr;
    QScreenOrientationChangeEvent_SetAccepted_Callback qscreenorientationchangeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qscreenorientationchangeevent_clone_isbase = false;
    mutable bool qscreenorientationchangeevent_setaccepted_isbase = false;

  public:
    VirtualQScreenOrientationChangeEvent(QScreen* screen, Qt::ScreenOrientation orientation) : QScreenOrientationChangeEvent(screen, orientation){};

    ~VirtualQScreenOrientationChangeEvent() {
        qscreenorientationchangeevent_clone_callback = nullptr;
        qscreenorientationchangeevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQScreenOrientationChangeEvent_Clone_Callback(QScreenOrientationChangeEvent_Clone_Callback cb) { qscreenorientationchangeevent_clone_callback = cb; }
    void setQScreenOrientationChangeEvent_SetAccepted_Callback(QScreenOrientationChangeEvent_SetAccepted_Callback cb) { qscreenorientationchangeevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQScreenOrientationChangeEvent_Clone_IsBase(bool value) const { qscreenorientationchangeevent_clone_isbase = value; }
    void setQScreenOrientationChangeEvent_SetAccepted_IsBase(bool value) const { qscreenorientationchangeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QScreenOrientationChangeEvent* clone() const override {
        if (qscreenorientationchangeevent_clone_isbase) {
            qscreenorientationchangeevent_clone_isbase = false;
            return QScreenOrientationChangeEvent::clone();
        } else if (qscreenorientationchangeevent_clone_callback != nullptr) {
            return qscreenorientationchangeevent_clone_callback();
        } else {
            return QScreenOrientationChangeEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscreenorientationchangeevent_setaccepted_isbase) {
            qscreenorientationchangeevent_setaccepted_isbase = false;
            QScreenOrientationChangeEvent::setAccepted(accepted);
        } else if (qscreenorientationchangeevent_setaccepted_callback != nullptr) {
            qscreenorientationchangeevent_setaccepted_callback(this, accepted);
        } else {
            QScreenOrientationChangeEvent::setAccepted(accepted);
        }
    }
};

// This class is a subclass of QApplicationStateChangeEvent so that we can call protected methods
class VirtualQApplicationStateChangeEvent : public QApplicationStateChangeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QApplicationStateChangeEvent_Clone_Callback = QApplicationStateChangeEvent* (*)();
    using QApplicationStateChangeEvent_SetAccepted_Callback = void (*)(QApplicationStateChangeEvent*, bool);

  protected:
    // Instance callback storage
    QApplicationStateChangeEvent_Clone_Callback qapplicationstatechangeevent_clone_callback = nullptr;
    QApplicationStateChangeEvent_SetAccepted_Callback qapplicationstatechangeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qapplicationstatechangeevent_clone_isbase = false;
    mutable bool qapplicationstatechangeevent_setaccepted_isbase = false;

  public:
    VirtualQApplicationStateChangeEvent(Qt::ApplicationState state) : QApplicationStateChangeEvent(state){};

    ~VirtualQApplicationStateChangeEvent() {
        qapplicationstatechangeevent_clone_callback = nullptr;
        qapplicationstatechangeevent_setaccepted_callback = nullptr;
    }

    // Callback setters
    void setQApplicationStateChangeEvent_Clone_Callback(QApplicationStateChangeEvent_Clone_Callback cb) { qapplicationstatechangeevent_clone_callback = cb; }
    void setQApplicationStateChangeEvent_SetAccepted_Callback(QApplicationStateChangeEvent_SetAccepted_Callback cb) { qapplicationstatechangeevent_setaccepted_callback = cb; }

    // Base flag setters
    void setQApplicationStateChangeEvent_Clone_IsBase(bool value) const { qapplicationstatechangeevent_clone_isbase = value; }
    void setQApplicationStateChangeEvent_SetAccepted_IsBase(bool value) const { qapplicationstatechangeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QApplicationStateChangeEvent* clone() const override {
        if (qapplicationstatechangeevent_clone_isbase) {
            qapplicationstatechangeevent_clone_isbase = false;
            return QApplicationStateChangeEvent::clone();
        } else if (qapplicationstatechangeevent_clone_callback != nullptr) {
            return qapplicationstatechangeevent_clone_callback();
        } else {
            return QApplicationStateChangeEvent::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qapplicationstatechangeevent_setaccepted_isbase) {
            qapplicationstatechangeevent_setaccepted_isbase = false;
            QApplicationStateChangeEvent::setAccepted(accepted);
        } else if (qapplicationstatechangeevent_setaccepted_callback != nullptr) {
            qapplicationstatechangeevent_setaccepted_callback(this, accepted);
        } else {
            QApplicationStateChangeEvent::setAccepted(accepted);
        }
    }
};

#endif

#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSSCENEEVENT_H
#define SRCC_LIBVIRTUALQGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsSceneEvent so that we can call protected methods
class VirtualQGraphicsSceneEvent : public QGraphicsSceneEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneEvent_SetAccepted_Callback = void (*)(QGraphicsSceneEvent*, bool);
    using QGraphicsSceneEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneEvent_SetAccepted_Callback qgraphicssceneevent_setaccepted_callback = nullptr;
    QGraphicsSceneEvent_Clone_Callback qgraphicssceneevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicssceneevent_setaccepted_isbase = false;
    mutable bool qgraphicssceneevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneEvent(QEvent::Type typeVal) : QGraphicsSceneEvent(typeVal){};

    ~VirtualQGraphicsSceneEvent() {
        qgraphicssceneevent_setaccepted_callback = nullptr;
        qgraphicssceneevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneEvent_SetAccepted_Callback(QGraphicsSceneEvent_SetAccepted_Callback cb) { qgraphicssceneevent_setaccepted_callback = cb; }
    void setQGraphicsSceneEvent_Clone_Callback(QGraphicsSceneEvent_Clone_Callback cb) { qgraphicssceneevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneEvent_SetAccepted_IsBase(bool value) const { qgraphicssceneevent_setaccepted_isbase = value; }
    void setQGraphicsSceneEvent_Clone_IsBase(bool value) const { qgraphicssceneevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicssceneevent_setaccepted_isbase) {
            qgraphicssceneevent_setaccepted_isbase = false;
            QGraphicsSceneEvent::setAccepted(accepted);
        } else if (qgraphicssceneevent_setaccepted_callback != nullptr) {
            qgraphicssceneevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicssceneevent_clone_isbase) {
            qgraphicssceneevent_clone_isbase = false;
            return QGraphicsSceneEvent::clone();
        } else if (qgraphicssceneevent_clone_callback != nullptr) {
            return qgraphicssceneevent_clone_callback();
        } else {
            return QGraphicsSceneEvent::clone();
        }
    }
};

// This class is a subclass of QGraphicsSceneMouseEvent so that we can call protected methods
class VirtualQGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneMouseEvent_SetAccepted_Callback = void (*)(QGraphicsSceneMouseEvent*, bool);
    using QGraphicsSceneMouseEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneMouseEvent_SetAccepted_Callback qgraphicsscenemouseevent_setaccepted_callback = nullptr;
    QGraphicsSceneMouseEvent_Clone_Callback qgraphicsscenemouseevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenemouseevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenemouseevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneMouseEvent() : QGraphicsSceneMouseEvent(){};
    VirtualQGraphicsSceneMouseEvent(QEvent::Type typeVal) : QGraphicsSceneMouseEvent(typeVal){};

    ~VirtualQGraphicsSceneMouseEvent() {
        qgraphicsscenemouseevent_setaccepted_callback = nullptr;
        qgraphicsscenemouseevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneMouseEvent_SetAccepted_Callback(QGraphicsSceneMouseEvent_SetAccepted_Callback cb) { qgraphicsscenemouseevent_setaccepted_callback = cb; }
    void setQGraphicsSceneMouseEvent_Clone_Callback(QGraphicsSceneMouseEvent_Clone_Callback cb) { qgraphicsscenemouseevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneMouseEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenemouseevent_setaccepted_isbase = value; }
    void setQGraphicsSceneMouseEvent_Clone_IsBase(bool value) const { qgraphicsscenemouseevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenemouseevent_setaccepted_isbase) {
            qgraphicsscenemouseevent_setaccepted_isbase = false;
            QGraphicsSceneMouseEvent::setAccepted(accepted);
        } else if (qgraphicsscenemouseevent_setaccepted_callback != nullptr) {
            qgraphicsscenemouseevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneMouseEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenemouseevent_clone_isbase) {
            qgraphicsscenemouseevent_clone_isbase = false;
            return QGraphicsSceneMouseEvent::clone();
        } else if (qgraphicsscenemouseevent_clone_callback != nullptr) {
            return qgraphicsscenemouseevent_clone_callback();
        } else {
            return QGraphicsSceneMouseEvent::clone();
        }
    }
};

// This class is a subclass of QGraphicsSceneWheelEvent so that we can call protected methods
class VirtualQGraphicsSceneWheelEvent : public QGraphicsSceneWheelEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneWheelEvent_SetAccepted_Callback = void (*)(QGraphicsSceneWheelEvent*, bool);
    using QGraphicsSceneWheelEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneWheelEvent_SetAccepted_Callback qgraphicsscenewheelevent_setaccepted_callback = nullptr;
    QGraphicsSceneWheelEvent_Clone_Callback qgraphicsscenewheelevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenewheelevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenewheelevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneWheelEvent() : QGraphicsSceneWheelEvent(){};
    VirtualQGraphicsSceneWheelEvent(QEvent::Type typeVal) : QGraphicsSceneWheelEvent(typeVal){};

    ~VirtualQGraphicsSceneWheelEvent() {
        qgraphicsscenewheelevent_setaccepted_callback = nullptr;
        qgraphicsscenewheelevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneWheelEvent_SetAccepted_Callback(QGraphicsSceneWheelEvent_SetAccepted_Callback cb) { qgraphicsscenewheelevent_setaccepted_callback = cb; }
    void setQGraphicsSceneWheelEvent_Clone_Callback(QGraphicsSceneWheelEvent_Clone_Callback cb) { qgraphicsscenewheelevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneWheelEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenewheelevent_setaccepted_isbase = value; }
    void setQGraphicsSceneWheelEvent_Clone_IsBase(bool value) const { qgraphicsscenewheelevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenewheelevent_setaccepted_isbase) {
            qgraphicsscenewheelevent_setaccepted_isbase = false;
            QGraphicsSceneWheelEvent::setAccepted(accepted);
        } else if (qgraphicsscenewheelevent_setaccepted_callback != nullptr) {
            qgraphicsscenewheelevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneWheelEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenewheelevent_clone_isbase) {
            qgraphicsscenewheelevent_clone_isbase = false;
            return QGraphicsSceneWheelEvent::clone();
        } else if (qgraphicsscenewheelevent_clone_callback != nullptr) {
            return qgraphicsscenewheelevent_clone_callback();
        } else {
            return QGraphicsSceneWheelEvent::clone();
        }
    }
};

// This class is a subclass of QGraphicsSceneContextMenuEvent so that we can call protected methods
class VirtualQGraphicsSceneContextMenuEvent : public QGraphicsSceneContextMenuEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneContextMenuEvent_SetAccepted_Callback = void (*)(QGraphicsSceneContextMenuEvent*, bool);
    using QGraphicsSceneContextMenuEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneContextMenuEvent_SetAccepted_Callback qgraphicsscenecontextmenuevent_setaccepted_callback = nullptr;
    QGraphicsSceneContextMenuEvent_Clone_Callback qgraphicsscenecontextmenuevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenecontextmenuevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenecontextmenuevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneContextMenuEvent() : QGraphicsSceneContextMenuEvent(){};
    VirtualQGraphicsSceneContextMenuEvent(QEvent::Type typeVal) : QGraphicsSceneContextMenuEvent(typeVal){};

    ~VirtualQGraphicsSceneContextMenuEvent() {
        qgraphicsscenecontextmenuevent_setaccepted_callback = nullptr;
        qgraphicsscenecontextmenuevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneContextMenuEvent_SetAccepted_Callback(QGraphicsSceneContextMenuEvent_SetAccepted_Callback cb) { qgraphicsscenecontextmenuevent_setaccepted_callback = cb; }
    void setQGraphicsSceneContextMenuEvent_Clone_Callback(QGraphicsSceneContextMenuEvent_Clone_Callback cb) { qgraphicsscenecontextmenuevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneContextMenuEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenecontextmenuevent_setaccepted_isbase = value; }
    void setQGraphicsSceneContextMenuEvent_Clone_IsBase(bool value) const { qgraphicsscenecontextmenuevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenecontextmenuevent_setaccepted_isbase) {
            qgraphicsscenecontextmenuevent_setaccepted_isbase = false;
            QGraphicsSceneContextMenuEvent::setAccepted(accepted);
        } else if (qgraphicsscenecontextmenuevent_setaccepted_callback != nullptr) {
            qgraphicsscenecontextmenuevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneContextMenuEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenecontextmenuevent_clone_isbase) {
            qgraphicsscenecontextmenuevent_clone_isbase = false;
            return QGraphicsSceneContextMenuEvent::clone();
        } else if (qgraphicsscenecontextmenuevent_clone_callback != nullptr) {
            return qgraphicsscenecontextmenuevent_clone_callback();
        } else {
            return QGraphicsSceneContextMenuEvent::clone();
        }
    }
};

// This class is a subclass of QGraphicsSceneHoverEvent so that we can call protected methods
class VirtualQGraphicsSceneHoverEvent : public QGraphicsSceneHoverEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneHoverEvent_SetAccepted_Callback = void (*)(QGraphicsSceneHoverEvent*, bool);
    using QGraphicsSceneHoverEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneHoverEvent_SetAccepted_Callback qgraphicsscenehoverevent_setaccepted_callback = nullptr;
    QGraphicsSceneHoverEvent_Clone_Callback qgraphicsscenehoverevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenehoverevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenehoverevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneHoverEvent() : QGraphicsSceneHoverEvent(){};
    VirtualQGraphicsSceneHoverEvent(QEvent::Type typeVal) : QGraphicsSceneHoverEvent(typeVal){};

    ~VirtualQGraphicsSceneHoverEvent() {
        qgraphicsscenehoverevent_setaccepted_callback = nullptr;
        qgraphicsscenehoverevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneHoverEvent_SetAccepted_Callback(QGraphicsSceneHoverEvent_SetAccepted_Callback cb) { qgraphicsscenehoverevent_setaccepted_callback = cb; }
    void setQGraphicsSceneHoverEvent_Clone_Callback(QGraphicsSceneHoverEvent_Clone_Callback cb) { qgraphicsscenehoverevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneHoverEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenehoverevent_setaccepted_isbase = value; }
    void setQGraphicsSceneHoverEvent_Clone_IsBase(bool value) const { qgraphicsscenehoverevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenehoverevent_setaccepted_isbase) {
            qgraphicsscenehoverevent_setaccepted_isbase = false;
            QGraphicsSceneHoverEvent::setAccepted(accepted);
        } else if (qgraphicsscenehoverevent_setaccepted_callback != nullptr) {
            qgraphicsscenehoverevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneHoverEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenehoverevent_clone_isbase) {
            qgraphicsscenehoverevent_clone_isbase = false;
            return QGraphicsSceneHoverEvent::clone();
        } else if (qgraphicsscenehoverevent_clone_callback != nullptr) {
            return qgraphicsscenehoverevent_clone_callback();
        } else {
            return QGraphicsSceneHoverEvent::clone();
        }
    }
};

// This class is a subclass of QGraphicsSceneHelpEvent so that we can call protected methods
class VirtualQGraphicsSceneHelpEvent : public QGraphicsSceneHelpEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneHelpEvent_SetAccepted_Callback = void (*)(QGraphicsSceneHelpEvent*, bool);
    using QGraphicsSceneHelpEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneHelpEvent_SetAccepted_Callback qgraphicsscenehelpevent_setaccepted_callback = nullptr;
    QGraphicsSceneHelpEvent_Clone_Callback qgraphicsscenehelpevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenehelpevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenehelpevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneHelpEvent() : QGraphicsSceneHelpEvent(){};
    VirtualQGraphicsSceneHelpEvent(QEvent::Type typeVal) : QGraphicsSceneHelpEvent(typeVal){};

    ~VirtualQGraphicsSceneHelpEvent() {
        qgraphicsscenehelpevent_setaccepted_callback = nullptr;
        qgraphicsscenehelpevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneHelpEvent_SetAccepted_Callback(QGraphicsSceneHelpEvent_SetAccepted_Callback cb) { qgraphicsscenehelpevent_setaccepted_callback = cb; }
    void setQGraphicsSceneHelpEvent_Clone_Callback(QGraphicsSceneHelpEvent_Clone_Callback cb) { qgraphicsscenehelpevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneHelpEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenehelpevent_setaccepted_isbase = value; }
    void setQGraphicsSceneHelpEvent_Clone_IsBase(bool value) const { qgraphicsscenehelpevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenehelpevent_setaccepted_isbase) {
            qgraphicsscenehelpevent_setaccepted_isbase = false;
            QGraphicsSceneHelpEvent::setAccepted(accepted);
        } else if (qgraphicsscenehelpevent_setaccepted_callback != nullptr) {
            qgraphicsscenehelpevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneHelpEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenehelpevent_clone_isbase) {
            qgraphicsscenehelpevent_clone_isbase = false;
            return QGraphicsSceneHelpEvent::clone();
        } else if (qgraphicsscenehelpevent_clone_callback != nullptr) {
            return qgraphicsscenehelpevent_clone_callback();
        } else {
            return QGraphicsSceneHelpEvent::clone();
        }
    }
};

// This class is a subclass of QGraphicsSceneDragDropEvent so that we can call protected methods
class VirtualQGraphicsSceneDragDropEvent : public QGraphicsSceneDragDropEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneDragDropEvent_SetAccepted_Callback = void (*)(QGraphicsSceneDragDropEvent*, bool);
    using QGraphicsSceneDragDropEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneDragDropEvent_SetAccepted_Callback qgraphicsscenedragdropevent_setaccepted_callback = nullptr;
    QGraphicsSceneDragDropEvent_Clone_Callback qgraphicsscenedragdropevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenedragdropevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenedragdropevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneDragDropEvent() : QGraphicsSceneDragDropEvent(){};
    VirtualQGraphicsSceneDragDropEvent(QEvent::Type typeVal) : QGraphicsSceneDragDropEvent(typeVal){};

    ~VirtualQGraphicsSceneDragDropEvent() {
        qgraphicsscenedragdropevent_setaccepted_callback = nullptr;
        qgraphicsscenedragdropevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneDragDropEvent_SetAccepted_Callback(QGraphicsSceneDragDropEvent_SetAccepted_Callback cb) { qgraphicsscenedragdropevent_setaccepted_callback = cb; }
    void setQGraphicsSceneDragDropEvent_Clone_Callback(QGraphicsSceneDragDropEvent_Clone_Callback cb) { qgraphicsscenedragdropevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneDragDropEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenedragdropevent_setaccepted_isbase = value; }
    void setQGraphicsSceneDragDropEvent_Clone_IsBase(bool value) const { qgraphicsscenedragdropevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenedragdropevent_setaccepted_isbase) {
            qgraphicsscenedragdropevent_setaccepted_isbase = false;
            QGraphicsSceneDragDropEvent::setAccepted(accepted);
        } else if (qgraphicsscenedragdropevent_setaccepted_callback != nullptr) {
            qgraphicsscenedragdropevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneDragDropEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenedragdropevent_clone_isbase) {
            qgraphicsscenedragdropevent_clone_isbase = false;
            return QGraphicsSceneDragDropEvent::clone();
        } else if (qgraphicsscenedragdropevent_clone_callback != nullptr) {
            return qgraphicsscenedragdropevent_clone_callback();
        } else {
            return QGraphicsSceneDragDropEvent::clone();
        }
    }
};

// This class is a subclass of QGraphicsSceneResizeEvent so that we can call protected methods
class VirtualQGraphicsSceneResizeEvent : public QGraphicsSceneResizeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneResizeEvent_SetAccepted_Callback = void (*)(QGraphicsSceneResizeEvent*, bool);
    using QGraphicsSceneResizeEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneResizeEvent_SetAccepted_Callback qgraphicssceneresizeevent_setaccepted_callback = nullptr;
    QGraphicsSceneResizeEvent_Clone_Callback qgraphicssceneresizeevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicssceneresizeevent_setaccepted_isbase = false;
    mutable bool qgraphicssceneresizeevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneResizeEvent() : QGraphicsSceneResizeEvent(){};

    ~VirtualQGraphicsSceneResizeEvent() {
        qgraphicssceneresizeevent_setaccepted_callback = nullptr;
        qgraphicssceneresizeevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneResizeEvent_SetAccepted_Callback(QGraphicsSceneResizeEvent_SetAccepted_Callback cb) { qgraphicssceneresizeevent_setaccepted_callback = cb; }
    void setQGraphicsSceneResizeEvent_Clone_Callback(QGraphicsSceneResizeEvent_Clone_Callback cb) { qgraphicssceneresizeevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneResizeEvent_SetAccepted_IsBase(bool value) const { qgraphicssceneresizeevent_setaccepted_isbase = value; }
    void setQGraphicsSceneResizeEvent_Clone_IsBase(bool value) const { qgraphicssceneresizeevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicssceneresizeevent_setaccepted_isbase) {
            qgraphicssceneresizeevent_setaccepted_isbase = false;
            QGraphicsSceneResizeEvent::setAccepted(accepted);
        } else if (qgraphicssceneresizeevent_setaccepted_callback != nullptr) {
            qgraphicssceneresizeevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneResizeEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicssceneresizeevent_clone_isbase) {
            qgraphicssceneresizeevent_clone_isbase = false;
            return QGraphicsSceneResizeEvent::clone();
        } else if (qgraphicssceneresizeevent_clone_callback != nullptr) {
            return qgraphicssceneresizeevent_clone_callback();
        } else {
            return QGraphicsSceneResizeEvent::clone();
        }
    }
};

// This class is a subclass of QGraphicsSceneMoveEvent so that we can call protected methods
class VirtualQGraphicsSceneMoveEvent : public QGraphicsSceneMoveEvent {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsSceneMoveEvent_SetAccepted_Callback = void (*)(QGraphicsSceneMoveEvent*, bool);
    using QGraphicsSceneMoveEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneMoveEvent_SetAccepted_Callback qgraphicsscenemoveevent_setaccepted_callback = nullptr;
    QGraphicsSceneMoveEvent_Clone_Callback qgraphicsscenemoveevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenemoveevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenemoveevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneMoveEvent() : QGraphicsSceneMoveEvent(){};

    ~VirtualQGraphicsSceneMoveEvent() {
        qgraphicsscenemoveevent_setaccepted_callback = nullptr;
        qgraphicsscenemoveevent_clone_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsSceneMoveEvent_SetAccepted_Callback(QGraphicsSceneMoveEvent_SetAccepted_Callback cb) { qgraphicsscenemoveevent_setaccepted_callback = cb; }
    void setQGraphicsSceneMoveEvent_Clone_Callback(QGraphicsSceneMoveEvent_Clone_Callback cb) { qgraphicsscenemoveevent_clone_callback = cb; }

    // Base flag setters
    void setQGraphicsSceneMoveEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenemoveevent_setaccepted_isbase = value; }
    void setQGraphicsSceneMoveEvent_Clone_IsBase(bool value) const { qgraphicsscenemoveevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenemoveevent_setaccepted_isbase) {
            qgraphicsscenemoveevent_setaccepted_isbase = false;
            QGraphicsSceneMoveEvent::setAccepted(accepted);
        } else if (qgraphicsscenemoveevent_setaccepted_callback != nullptr) {
            qgraphicsscenemoveevent_setaccepted_callback(this, accepted);
        } else {
            QGraphicsSceneMoveEvent::setAccepted(accepted);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenemoveevent_clone_isbase) {
            qgraphicsscenemoveevent_clone_isbase = false;
            return QGraphicsSceneMoveEvent::clone();
        } else if (qgraphicsscenemoveevent_clone_callback != nullptr) {
            return qgraphicsscenemoveevent_clone_callback();
        } else {
            return QGraphicsSceneMoveEvent::clone();
        }
    }
};

#endif

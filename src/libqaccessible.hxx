#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLE_H
#define SRCC_LIBVIRTUALQACCESSIBLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleEvent so that we can call protected methods
class VirtualQAccessibleEvent : public QAccessibleEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleEvent_AccessibleInterface_Callback qaccessibleevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibleevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleEvent(QObject* obj, QAccessible::Event typ) : QAccessibleEvent(obj, typ){};
    VirtualQAccessibleEvent(QAccessibleInterface* iface, QAccessible::Event typ) : QAccessibleEvent(iface, typ){};

    ~VirtualQAccessibleEvent() {
        qaccessibleevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleEvent_AccessibleInterface_Callback(QAccessibleEvent_AccessibleInterface_Callback cb) { qaccessibleevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleEvent_AccessibleInterface_IsBase(bool value) const { qaccessibleevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibleevent_accessibleinterface_isbase) {
            qaccessibleevent_accessibleinterface_isbase = false;
            return QAccessibleEvent::accessibleInterface();
        } else if (qaccessibleevent_accessibleinterface_callback != nullptr) {
            return qaccessibleevent_accessibleinterface_callback();
        } else {
            return QAccessibleEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleStateChangeEvent so that we can call protected methods
class VirtualQAccessibleStateChangeEvent : public QAccessibleStateChangeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleStateChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleStateChangeEvent_AccessibleInterface_Callback qaccessiblestatechangeevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessiblestatechangeevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleStateChangeEvent(QObject* obj, QAccessible::State state) : QAccessibleStateChangeEvent(obj, state){};
    VirtualQAccessibleStateChangeEvent(QAccessibleInterface* iface, QAccessible::State state) : QAccessibleStateChangeEvent(iface, state){};

    ~VirtualQAccessibleStateChangeEvent() {
        qaccessiblestatechangeevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleStateChangeEvent_AccessibleInterface_Callback(QAccessibleStateChangeEvent_AccessibleInterface_Callback cb) { qaccessiblestatechangeevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleStateChangeEvent_AccessibleInterface_IsBase(bool value) const { qaccessiblestatechangeevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessiblestatechangeevent_accessibleinterface_isbase) {
            qaccessiblestatechangeevent_accessibleinterface_isbase = false;
            return QAccessibleStateChangeEvent::accessibleInterface();
        } else if (qaccessiblestatechangeevent_accessibleinterface_callback != nullptr) {
            return qaccessiblestatechangeevent_accessibleinterface_callback();
        } else {
            return QAccessibleStateChangeEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextCursorEvent so that we can call protected methods
class VirtualQAccessibleTextCursorEvent : public QAccessibleTextCursorEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleTextCursorEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextCursorEvent_AccessibleInterface_Callback qaccessibletextcursorevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextcursorevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextCursorEvent(QObject* obj, int cursorPos) : QAccessibleTextCursorEvent(obj, cursorPos){};
    VirtualQAccessibleTextCursorEvent(QAccessibleInterface* iface, int cursorPos) : QAccessibleTextCursorEvent(iface, cursorPos){};

    ~VirtualQAccessibleTextCursorEvent() {
        qaccessibletextcursorevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleTextCursorEvent_AccessibleInterface_Callback(QAccessibleTextCursorEvent_AccessibleInterface_Callback cb) { qaccessibletextcursorevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleTextCursorEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextcursorevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextcursorevent_accessibleinterface_isbase) {
            qaccessibletextcursorevent_accessibleinterface_isbase = false;
            return QAccessibleTextCursorEvent::accessibleInterface();
        } else if (qaccessibletextcursorevent_accessibleinterface_callback != nullptr) {
            return qaccessibletextcursorevent_accessibleinterface_callback();
        } else {
            return QAccessibleTextCursorEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextSelectionEvent so that we can call protected methods
class VirtualQAccessibleTextSelectionEvent : public QAccessibleTextSelectionEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleTextSelectionEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextSelectionEvent_AccessibleInterface_Callback qaccessibletextselectionevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextselectionevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextSelectionEvent(QObject* obj, int start, int end) : QAccessibleTextSelectionEvent(obj, start, end){};
    VirtualQAccessibleTextSelectionEvent(QAccessibleInterface* iface, int start, int end) : QAccessibleTextSelectionEvent(iface, start, end){};

    ~VirtualQAccessibleTextSelectionEvent() {
        qaccessibletextselectionevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleTextSelectionEvent_AccessibleInterface_Callback(QAccessibleTextSelectionEvent_AccessibleInterface_Callback cb) { qaccessibletextselectionevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleTextSelectionEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextselectionevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextselectionevent_accessibleinterface_isbase) {
            qaccessibletextselectionevent_accessibleinterface_isbase = false;
            return QAccessibleTextSelectionEvent::accessibleInterface();
        } else if (qaccessibletextselectionevent_accessibleinterface_callback != nullptr) {
            return qaccessibletextselectionevent_accessibleinterface_callback();
        } else {
            return QAccessibleTextSelectionEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextInsertEvent so that we can call protected methods
class VirtualQAccessibleTextInsertEvent : public QAccessibleTextInsertEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleTextInsertEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextInsertEvent_AccessibleInterface_Callback qaccessibletextinsertevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextinsertevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextInsertEvent(QObject* obj, int position, const QString& text) : QAccessibleTextInsertEvent(obj, position, text){};
    VirtualQAccessibleTextInsertEvent(QAccessibleInterface* iface, int position, const QString& text) : QAccessibleTextInsertEvent(iface, position, text){};

    ~VirtualQAccessibleTextInsertEvent() {
        qaccessibletextinsertevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleTextInsertEvent_AccessibleInterface_Callback(QAccessibleTextInsertEvent_AccessibleInterface_Callback cb) { qaccessibletextinsertevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleTextInsertEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextinsertevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextinsertevent_accessibleinterface_isbase) {
            qaccessibletextinsertevent_accessibleinterface_isbase = false;
            return QAccessibleTextInsertEvent::accessibleInterface();
        } else if (qaccessibletextinsertevent_accessibleinterface_callback != nullptr) {
            return qaccessibletextinsertevent_accessibleinterface_callback();
        } else {
            return QAccessibleTextInsertEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextRemoveEvent so that we can call protected methods
class VirtualQAccessibleTextRemoveEvent : public QAccessibleTextRemoveEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleTextRemoveEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextRemoveEvent_AccessibleInterface_Callback qaccessibletextremoveevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextremoveevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextRemoveEvent(QObject* obj, int position, const QString& text) : QAccessibleTextRemoveEvent(obj, position, text){};
    VirtualQAccessibleTextRemoveEvent(QAccessibleInterface* iface, int position, const QString& text) : QAccessibleTextRemoveEvent(iface, position, text){};

    ~VirtualQAccessibleTextRemoveEvent() {
        qaccessibletextremoveevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleTextRemoveEvent_AccessibleInterface_Callback(QAccessibleTextRemoveEvent_AccessibleInterface_Callback cb) { qaccessibletextremoveevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleTextRemoveEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextremoveevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextremoveevent_accessibleinterface_isbase) {
            qaccessibletextremoveevent_accessibleinterface_isbase = false;
            return QAccessibleTextRemoveEvent::accessibleInterface();
        } else if (qaccessibletextremoveevent_accessibleinterface_callback != nullptr) {
            return qaccessibletextremoveevent_accessibleinterface_callback();
        } else {
            return QAccessibleTextRemoveEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextUpdateEvent so that we can call protected methods
class VirtualQAccessibleTextUpdateEvent : public QAccessibleTextUpdateEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleTextUpdateEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextUpdateEvent_AccessibleInterface_Callback qaccessibletextupdateevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextupdateevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextUpdateEvent(QObject* obj, int position, const QString& oldText, const QString& text) : QAccessibleTextUpdateEvent(obj, position, oldText, text){};
    VirtualQAccessibleTextUpdateEvent(QAccessibleInterface* iface, int position, const QString& oldText, const QString& text) : QAccessibleTextUpdateEvent(iface, position, oldText, text){};

    ~VirtualQAccessibleTextUpdateEvent() {
        qaccessibletextupdateevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleTextUpdateEvent_AccessibleInterface_Callback(QAccessibleTextUpdateEvent_AccessibleInterface_Callback cb) { qaccessibletextupdateevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleTextUpdateEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextupdateevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextupdateevent_accessibleinterface_isbase) {
            qaccessibletextupdateevent_accessibleinterface_isbase = false;
            return QAccessibleTextUpdateEvent::accessibleInterface();
        } else if (qaccessibletextupdateevent_accessibleinterface_callback != nullptr) {
            return qaccessibletextupdateevent_accessibleinterface_callback();
        } else {
            return QAccessibleTextUpdateEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleValueChangeEvent so that we can call protected methods
class VirtualQAccessibleValueChangeEvent : public QAccessibleValueChangeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleValueChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleValueChangeEvent_AccessibleInterface_Callback qaccessiblevaluechangeevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessiblevaluechangeevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleValueChangeEvent(QObject* obj, const QVariant& val) : QAccessibleValueChangeEvent(obj, val){};
    VirtualQAccessibleValueChangeEvent(QAccessibleInterface* iface, const QVariant& val) : QAccessibleValueChangeEvent(iface, val){};

    ~VirtualQAccessibleValueChangeEvent() {
        qaccessiblevaluechangeevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleValueChangeEvent_AccessibleInterface_Callback(QAccessibleValueChangeEvent_AccessibleInterface_Callback cb) { qaccessiblevaluechangeevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleValueChangeEvent_AccessibleInterface_IsBase(bool value) const { qaccessiblevaluechangeevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessiblevaluechangeevent_accessibleinterface_isbase) {
            qaccessiblevaluechangeevent_accessibleinterface_isbase = false;
            return QAccessibleValueChangeEvent::accessibleInterface();
        } else if (qaccessiblevaluechangeevent_accessibleinterface_callback != nullptr) {
            return qaccessiblevaluechangeevent_accessibleinterface_callback();
        } else {
            return QAccessibleValueChangeEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTableModelChangeEvent so that we can call protected methods
class VirtualQAccessibleTableModelChangeEvent : public QAccessibleTableModelChangeEvent {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleTableModelChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTableModelChangeEvent_AccessibleInterface_Callback qaccessibletablemodelchangeevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletablemodelchangeevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTableModelChangeEvent(QObject* obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(obj, changeType){};
    VirtualQAccessibleTableModelChangeEvent(QAccessibleInterface* iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(iface, changeType){};

    ~VirtualQAccessibleTableModelChangeEvent() {
        qaccessibletablemodelchangeevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleTableModelChangeEvent_AccessibleInterface_Callback(QAccessibleTableModelChangeEvent_AccessibleInterface_Callback cb) { qaccessibletablemodelchangeevent_accessibleinterface_callback = cb; }

    // Base flag setters
    void setQAccessibleTableModelChangeEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletablemodelchangeevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletablemodelchangeevent_accessibleinterface_isbase) {
            qaccessibletablemodelchangeevent_accessibleinterface_isbase = false;
            return QAccessibleTableModelChangeEvent::accessibleInterface();
        } else if (qaccessibletablemodelchangeevent_accessibleinterface_callback != nullptr) {
            return qaccessibletablemodelchangeevent_accessibleinterface_callback();
        } else {
            return QAccessibleTableModelChangeEvent::accessibleInterface();
        }
    }
};

#endif

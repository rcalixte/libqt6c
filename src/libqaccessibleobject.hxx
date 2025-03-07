#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLEOBJECT_H
#define SRCC_LIBVIRTUALQACCESSIBLEOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleApplication so that we can call protected methods
class VirtualQAccessibleApplication : public QAccessibleApplication {

  public:
    // Virtual class public types (including callbacks)
    using QAccessibleApplication_Window_Callback = QWindow* (*)();
    using QAccessibleApplication_ChildCount_Callback = int (*)();
    using QAccessibleApplication_IndexOfChild_Callback = int (*)(const QAccessibleApplication*, const QAccessibleInterface*);
    using QAccessibleApplication_FocusChild_Callback = QAccessibleInterface* (*)();
    using QAccessibleApplication_Parent_Callback = QAccessibleInterface* (*)();
    using QAccessibleApplication_Child_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*, int);
    using QAccessibleApplication_Text_Callback = QString (*)(const QAccessibleApplication*, QAccessible::Text);
    using QAccessibleApplication_Role_Callback = QAccessible::Role (*)();
    using QAccessibleApplication_State_Callback = QAccessible::State (*)();
    using QAccessibleApplication_IsValid_Callback = bool (*)();
    using QAccessibleApplication_Object_Callback = QObject* (*)();
    using QAccessibleApplication_Rect_Callback = QRect (*)();
    using QAccessibleApplication_SetText_Callback = void (*)(QAccessibleApplication*, QAccessible::Text, const QString&);
    using QAccessibleApplication_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*, int, int);
    using QAccessibleApplication_Relations_Callback = QList<QPair<QAccessibleInterface*, QAccessible::Relation>> (*)(const QAccessibleApplication*, QAccessible::Relation);
    using QAccessibleApplication_ForegroundColor_Callback = QColor (*)();
    using QAccessibleApplication_BackgroundColor_Callback = QColor (*)();
    using QAccessibleApplication_VirtualHook_Callback = void (*)(QAccessibleApplication*, int, void*);
    using QAccessibleApplication_InterfaceCast_Callback = void* (*)(QAccessibleApplication*, QAccessible::InterfaceType);

  protected:
    // Instance callback storage
    QAccessibleApplication_Window_Callback qaccessibleapplication_window_callback = nullptr;
    QAccessibleApplication_ChildCount_Callback qaccessibleapplication_childcount_callback = nullptr;
    QAccessibleApplication_IndexOfChild_Callback qaccessibleapplication_indexofchild_callback = nullptr;
    QAccessibleApplication_FocusChild_Callback qaccessibleapplication_focuschild_callback = nullptr;
    QAccessibleApplication_Parent_Callback qaccessibleapplication_parent_callback = nullptr;
    QAccessibleApplication_Child_Callback qaccessibleapplication_child_callback = nullptr;
    QAccessibleApplication_Text_Callback qaccessibleapplication_text_callback = nullptr;
    QAccessibleApplication_Role_Callback qaccessibleapplication_role_callback = nullptr;
    QAccessibleApplication_State_Callback qaccessibleapplication_state_callback = nullptr;
    QAccessibleApplication_IsValid_Callback qaccessibleapplication_isvalid_callback = nullptr;
    QAccessibleApplication_Object_Callback qaccessibleapplication_object_callback = nullptr;
    QAccessibleApplication_Rect_Callback qaccessibleapplication_rect_callback = nullptr;
    QAccessibleApplication_SetText_Callback qaccessibleapplication_settext_callback = nullptr;
    QAccessibleApplication_ChildAt_Callback qaccessibleapplication_childat_callback = nullptr;
    QAccessibleApplication_Relations_Callback qaccessibleapplication_relations_callback = nullptr;
    QAccessibleApplication_ForegroundColor_Callback qaccessibleapplication_foregroundcolor_callback = nullptr;
    QAccessibleApplication_BackgroundColor_Callback qaccessibleapplication_backgroundcolor_callback = nullptr;
    QAccessibleApplication_VirtualHook_Callback qaccessibleapplication_virtualhook_callback = nullptr;
    QAccessibleApplication_InterfaceCast_Callback qaccessibleapplication_interfacecast_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibleapplication_window_isbase = false;
    mutable bool qaccessibleapplication_childcount_isbase = false;
    mutable bool qaccessibleapplication_indexofchild_isbase = false;
    mutable bool qaccessibleapplication_focuschild_isbase = false;
    mutable bool qaccessibleapplication_parent_isbase = false;
    mutable bool qaccessibleapplication_child_isbase = false;
    mutable bool qaccessibleapplication_text_isbase = false;
    mutable bool qaccessibleapplication_role_isbase = false;
    mutable bool qaccessibleapplication_state_isbase = false;
    mutable bool qaccessibleapplication_isvalid_isbase = false;
    mutable bool qaccessibleapplication_object_isbase = false;
    mutable bool qaccessibleapplication_rect_isbase = false;
    mutable bool qaccessibleapplication_settext_isbase = false;
    mutable bool qaccessibleapplication_childat_isbase = false;
    mutable bool qaccessibleapplication_relations_isbase = false;
    mutable bool qaccessibleapplication_foregroundcolor_isbase = false;
    mutable bool qaccessibleapplication_backgroundcolor_isbase = false;
    mutable bool qaccessibleapplication_virtualhook_isbase = false;
    mutable bool qaccessibleapplication_interfacecast_isbase = false;

  public:
    VirtualQAccessibleApplication() : QAccessibleApplication(){};

    ~VirtualQAccessibleApplication() {
        qaccessibleapplication_window_callback = nullptr;
        qaccessibleapplication_childcount_callback = nullptr;
        qaccessibleapplication_indexofchild_callback = nullptr;
        qaccessibleapplication_focuschild_callback = nullptr;
        qaccessibleapplication_parent_callback = nullptr;
        qaccessibleapplication_child_callback = nullptr;
        qaccessibleapplication_text_callback = nullptr;
        qaccessibleapplication_role_callback = nullptr;
        qaccessibleapplication_state_callback = nullptr;
        qaccessibleapplication_isvalid_callback = nullptr;
        qaccessibleapplication_object_callback = nullptr;
        qaccessibleapplication_rect_callback = nullptr;
        qaccessibleapplication_settext_callback = nullptr;
        qaccessibleapplication_childat_callback = nullptr;
        qaccessibleapplication_relations_callback = nullptr;
        qaccessibleapplication_foregroundcolor_callback = nullptr;
        qaccessibleapplication_backgroundcolor_callback = nullptr;
        qaccessibleapplication_virtualhook_callback = nullptr;
        qaccessibleapplication_interfacecast_callback = nullptr;
    }

    // Callback setters
    void setQAccessibleApplication_Window_Callback(QAccessibleApplication_Window_Callback cb) { qaccessibleapplication_window_callback = cb; }
    void setQAccessibleApplication_ChildCount_Callback(QAccessibleApplication_ChildCount_Callback cb) { qaccessibleapplication_childcount_callback = cb; }
    void setQAccessibleApplication_IndexOfChild_Callback(QAccessibleApplication_IndexOfChild_Callback cb) { qaccessibleapplication_indexofchild_callback = cb; }
    void setQAccessibleApplication_FocusChild_Callback(QAccessibleApplication_FocusChild_Callback cb) { qaccessibleapplication_focuschild_callback = cb; }
    void setQAccessibleApplication_Parent_Callback(QAccessibleApplication_Parent_Callback cb) { qaccessibleapplication_parent_callback = cb; }
    void setQAccessibleApplication_Child_Callback(QAccessibleApplication_Child_Callback cb) { qaccessibleapplication_child_callback = cb; }
    void setQAccessibleApplication_Text_Callback(QAccessibleApplication_Text_Callback cb) { qaccessibleapplication_text_callback = cb; }
    void setQAccessibleApplication_Role_Callback(QAccessibleApplication_Role_Callback cb) { qaccessibleapplication_role_callback = cb; }
    void setQAccessibleApplication_State_Callback(QAccessibleApplication_State_Callback cb) { qaccessibleapplication_state_callback = cb; }
    void setQAccessibleApplication_IsValid_Callback(QAccessibleApplication_IsValid_Callback cb) { qaccessibleapplication_isvalid_callback = cb; }
    void setQAccessibleApplication_Object_Callback(QAccessibleApplication_Object_Callback cb) { qaccessibleapplication_object_callback = cb; }
    void setQAccessibleApplication_Rect_Callback(QAccessibleApplication_Rect_Callback cb) { qaccessibleapplication_rect_callback = cb; }
    void setQAccessibleApplication_SetText_Callback(QAccessibleApplication_SetText_Callback cb) { qaccessibleapplication_settext_callback = cb; }
    void setQAccessibleApplication_ChildAt_Callback(QAccessibleApplication_ChildAt_Callback cb) { qaccessibleapplication_childat_callback = cb; }
    void setQAccessibleApplication_Relations_Callback(QAccessibleApplication_Relations_Callback cb) { qaccessibleapplication_relations_callback = cb; }
    void setQAccessibleApplication_ForegroundColor_Callback(QAccessibleApplication_ForegroundColor_Callback cb) { qaccessibleapplication_foregroundcolor_callback = cb; }
    void setQAccessibleApplication_BackgroundColor_Callback(QAccessibleApplication_BackgroundColor_Callback cb) { qaccessibleapplication_backgroundcolor_callback = cb; }
    void setQAccessibleApplication_VirtualHook_Callback(QAccessibleApplication_VirtualHook_Callback cb) { qaccessibleapplication_virtualhook_callback = cb; }
    void setQAccessibleApplication_InterfaceCast_Callback(QAccessibleApplication_InterfaceCast_Callback cb) { qaccessibleapplication_interfacecast_callback = cb; }

    // Base flag setters
    void setQAccessibleApplication_Window_IsBase(bool value) const { qaccessibleapplication_window_isbase = value; }
    void setQAccessibleApplication_ChildCount_IsBase(bool value) const { qaccessibleapplication_childcount_isbase = value; }
    void setQAccessibleApplication_IndexOfChild_IsBase(bool value) const { qaccessibleapplication_indexofchild_isbase = value; }
    void setQAccessibleApplication_FocusChild_IsBase(bool value) const { qaccessibleapplication_focuschild_isbase = value; }
    void setQAccessibleApplication_Parent_IsBase(bool value) const { qaccessibleapplication_parent_isbase = value; }
    void setQAccessibleApplication_Child_IsBase(bool value) const { qaccessibleapplication_child_isbase = value; }
    void setQAccessibleApplication_Text_IsBase(bool value) const { qaccessibleapplication_text_isbase = value; }
    void setQAccessibleApplication_Role_IsBase(bool value) const { qaccessibleapplication_role_isbase = value; }
    void setQAccessibleApplication_State_IsBase(bool value) const { qaccessibleapplication_state_isbase = value; }
    void setQAccessibleApplication_IsValid_IsBase(bool value) const { qaccessibleapplication_isvalid_isbase = value; }
    void setQAccessibleApplication_Object_IsBase(bool value) const { qaccessibleapplication_object_isbase = value; }
    void setQAccessibleApplication_Rect_IsBase(bool value) const { qaccessibleapplication_rect_isbase = value; }
    void setQAccessibleApplication_SetText_IsBase(bool value) const { qaccessibleapplication_settext_isbase = value; }
    void setQAccessibleApplication_ChildAt_IsBase(bool value) const { qaccessibleapplication_childat_isbase = value; }
    void setQAccessibleApplication_Relations_IsBase(bool value) const { qaccessibleapplication_relations_isbase = value; }
    void setQAccessibleApplication_ForegroundColor_IsBase(bool value) const { qaccessibleapplication_foregroundcolor_isbase = value; }
    void setQAccessibleApplication_BackgroundColor_IsBase(bool value) const { qaccessibleapplication_backgroundcolor_isbase = value; }
    void setQAccessibleApplication_VirtualHook_IsBase(bool value) const { qaccessibleapplication_virtualhook_isbase = value; }
    void setQAccessibleApplication_InterfaceCast_IsBase(bool value) const { qaccessibleapplication_interfacecast_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWindow* window() const override {
        if (qaccessibleapplication_window_isbase) {
            qaccessibleapplication_window_isbase = false;
            return QAccessibleApplication::window();
        } else if (qaccessibleapplication_window_callback != nullptr) {
            return qaccessibleapplication_window_callback();
        } else {
            return QAccessibleApplication::window();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int childCount() const override {
        if (qaccessibleapplication_childcount_isbase) {
            qaccessibleapplication_childcount_isbase = false;
            return QAccessibleApplication::childCount();
        } else if (qaccessibleapplication_childcount_callback != nullptr) {
            return qaccessibleapplication_childcount_callback();
        } else {
            return QAccessibleApplication::childCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfChild(const QAccessibleInterface* param1) const override {
        if (qaccessibleapplication_indexofchild_isbase) {
            qaccessibleapplication_indexofchild_isbase = false;
            return QAccessibleApplication::indexOfChild(param1);
        } else if (qaccessibleapplication_indexofchild_callback != nullptr) {
            return qaccessibleapplication_indexofchild_callback(this, param1);
        } else {
            return QAccessibleApplication::indexOfChild(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* focusChild() const override {
        if (qaccessibleapplication_focuschild_isbase) {
            qaccessibleapplication_focuschild_isbase = false;
            return QAccessibleApplication::focusChild();
        } else if (qaccessibleapplication_focuschild_callback != nullptr) {
            return qaccessibleapplication_focuschild_callback();
        } else {
            return QAccessibleApplication::focusChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* parent() const override {
        if (qaccessibleapplication_parent_isbase) {
            qaccessibleapplication_parent_isbase = false;
            return QAccessibleApplication::parent();
        } else if (qaccessibleapplication_parent_callback != nullptr) {
            return qaccessibleapplication_parent_callback();
        } else {
            return QAccessibleApplication::parent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* child(int index) const override {
        if (qaccessibleapplication_child_isbase) {
            qaccessibleapplication_child_isbase = false;
            return QAccessibleApplication::child(index);
        } else if (qaccessibleapplication_child_callback != nullptr) {
            return qaccessibleapplication_child_callback(this, index);
        } else {
            return QAccessibleApplication::child(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text(QAccessible::Text t) const override {
        if (qaccessibleapplication_text_isbase) {
            qaccessibleapplication_text_isbase = false;
            return QAccessibleApplication::text(t);
        } else if (qaccessibleapplication_text_callback != nullptr) {
            return qaccessibleapplication_text_callback(this, t);
        } else {
            return QAccessibleApplication::text(t);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::Role role() const override {
        if (qaccessibleapplication_role_isbase) {
            qaccessibleapplication_role_isbase = false;
            return QAccessibleApplication::role();
        } else if (qaccessibleapplication_role_callback != nullptr) {
            return qaccessibleapplication_role_callback();
        } else {
            return QAccessibleApplication::role();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::State state() const override {
        if (qaccessibleapplication_state_isbase) {
            qaccessibleapplication_state_isbase = false;
            return QAccessibleApplication::state();
        } else if (qaccessibleapplication_state_callback != nullptr) {
            return qaccessibleapplication_state_callback();
        } else {
            return QAccessibleApplication::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isValid() const override {
        if (qaccessibleapplication_isvalid_isbase) {
            qaccessibleapplication_isvalid_isbase = false;
            return QAccessibleApplication::isValid();
        } else if (qaccessibleapplication_isvalid_callback != nullptr) {
            return qaccessibleapplication_isvalid_callback();
        } else {
            return QAccessibleApplication::isValid();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        if (qaccessibleapplication_object_isbase) {
            qaccessibleapplication_object_isbase = false;
            return QAccessibleApplication::object();
        } else if (qaccessibleapplication_object_callback != nullptr) {
            return qaccessibleapplication_object_callback();
        } else {
            return QAccessibleApplication::object();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect rect() const override {
        if (qaccessibleapplication_rect_isbase) {
            qaccessibleapplication_rect_isbase = false;
            return QAccessibleApplication::rect();
        } else if (qaccessibleapplication_rect_callback != nullptr) {
            return qaccessibleapplication_rect_callback();
        } else {
            return QAccessibleApplication::rect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(QAccessible::Text t, const QString& text) override {
        if (qaccessibleapplication_settext_isbase) {
            qaccessibleapplication_settext_isbase = false;
            QAccessibleApplication::setText(t, text);
        } else if (qaccessibleapplication_settext_callback != nullptr) {
            qaccessibleapplication_settext_callback(this, t, text);
        } else {
            QAccessibleApplication::setText(t, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* childAt(int x, int y) const override {
        if (qaccessibleapplication_childat_isbase) {
            qaccessibleapplication_childat_isbase = false;
            return QAccessibleApplication::childAt(x, y);
        } else if (qaccessibleapplication_childat_callback != nullptr) {
            return qaccessibleapplication_childat_callback(this, x, y);
        } else {
            return QAccessibleApplication::childAt(x, y);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPair<QAccessibleInterface*, QAccessible::Relation>> relations(QAccessible::Relation match) const override {
        if (qaccessibleapplication_relations_isbase) {
            qaccessibleapplication_relations_isbase = false;
            return QAccessibleApplication::relations(match);
        } else if (qaccessibleapplication_relations_callback != nullptr) {
            return qaccessibleapplication_relations_callback(this, match);
        } else {
            return QAccessibleApplication::relations(match);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor foregroundColor() const override {
        if (qaccessibleapplication_foregroundcolor_isbase) {
            qaccessibleapplication_foregroundcolor_isbase = false;
            return QAccessibleApplication::foregroundColor();
        } else if (qaccessibleapplication_foregroundcolor_callback != nullptr) {
            return qaccessibleapplication_foregroundcolor_callback();
        } else {
            return QAccessibleApplication::foregroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor backgroundColor() const override {
        if (qaccessibleapplication_backgroundcolor_isbase) {
            qaccessibleapplication_backgroundcolor_isbase = false;
            return QAccessibleApplication::backgroundColor();
        } else if (qaccessibleapplication_backgroundcolor_callback != nullptr) {
            return qaccessibleapplication_backgroundcolor_callback();
        } else {
            return QAccessibleApplication::backgroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qaccessibleapplication_virtualhook_isbase) {
            qaccessibleapplication_virtualhook_isbase = false;
            QAccessibleApplication::virtual_hook(id, data);
        } else if (qaccessibleapplication_virtualhook_callback != nullptr) {
            qaccessibleapplication_virtualhook_callback(this, id, data);
        } else {
            QAccessibleApplication::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* interface_cast(QAccessible::InterfaceType param1) override {
        if (qaccessibleapplication_interfacecast_isbase) {
            qaccessibleapplication_interfacecast_isbase = false;
            return QAccessibleApplication::interface_cast(param1);
        } else if (qaccessibleapplication_interfacecast_callback != nullptr) {
            return qaccessibleapplication_interfacecast_callback(this, param1);
        } else {
            return QAccessibleApplication::interface_cast(param1);
        }
    }
};

#endif

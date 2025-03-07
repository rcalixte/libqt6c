#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSLINEARLAYOUT_H
#define SRCC_LIBVIRTUALQGRAPHICSLINEARLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsLinearLayout so that we can call protected methods
class VirtualQGraphicsLinearLayout : public QGraphicsLinearLayout {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsLinearLayout_RemoveAt_Callback = void (*)(QGraphicsLinearLayout*, int);
    using QGraphicsLinearLayout_SetGeometry_Callback = void (*)(QGraphicsLinearLayout*, const QRectF&);
    using QGraphicsLinearLayout_Count_Callback = int (*)();
    using QGraphicsLinearLayout_ItemAt_Callback = QGraphicsLayoutItem* (*)(const QGraphicsLinearLayout*, int);
    using QGraphicsLinearLayout_Invalidate_Callback = void (*)();
    using QGraphicsLinearLayout_SizeHint_Callback = QSizeF (*)(const QGraphicsLinearLayout*, Qt::SizeHint, const QSizeF&);
    using QGraphicsLinearLayout_GetContentsMargins_Callback = void (*)(const QGraphicsLinearLayout*, qreal*, qreal*, qreal*, qreal*);
    using QGraphicsLinearLayout_UpdateGeometry_Callback = void (*)();
    using QGraphicsLinearLayout_WidgetEvent_Callback = void (*)(QGraphicsLinearLayout*, QEvent*);
    using QGraphicsLinearLayout_IsEmpty_Callback = bool (*)();
    using QGraphicsLinearLayout_AddChildLayoutItem_Callback = void (*)(QGraphicsLinearLayout*, QGraphicsLayoutItem*);
    using QGraphicsLinearLayout_SetGraphicsItem_Callback = void (*)(QGraphicsLinearLayout*, QGraphicsItem*);
    using QGraphicsLinearLayout_SetOwnedByLayout_Callback = void (*)(QGraphicsLinearLayout*, bool);

  protected:
    // Instance callback storage
    QGraphicsLinearLayout_RemoveAt_Callback qgraphicslinearlayout_removeat_callback = nullptr;
    QGraphicsLinearLayout_SetGeometry_Callback qgraphicslinearlayout_setgeometry_callback = nullptr;
    QGraphicsLinearLayout_Count_Callback qgraphicslinearlayout_count_callback = nullptr;
    QGraphicsLinearLayout_ItemAt_Callback qgraphicslinearlayout_itemat_callback = nullptr;
    QGraphicsLinearLayout_Invalidate_Callback qgraphicslinearlayout_invalidate_callback = nullptr;
    QGraphicsLinearLayout_SizeHint_Callback qgraphicslinearlayout_sizehint_callback = nullptr;
    QGraphicsLinearLayout_GetContentsMargins_Callback qgraphicslinearlayout_getcontentsmargins_callback = nullptr;
    QGraphicsLinearLayout_UpdateGeometry_Callback qgraphicslinearlayout_updategeometry_callback = nullptr;
    QGraphicsLinearLayout_WidgetEvent_Callback qgraphicslinearlayout_widgetevent_callback = nullptr;
    QGraphicsLinearLayout_IsEmpty_Callback qgraphicslinearlayout_isempty_callback = nullptr;
    QGraphicsLinearLayout_AddChildLayoutItem_Callback qgraphicslinearlayout_addchildlayoutitem_callback = nullptr;
    QGraphicsLinearLayout_SetGraphicsItem_Callback qgraphicslinearlayout_setgraphicsitem_callback = nullptr;
    QGraphicsLinearLayout_SetOwnedByLayout_Callback qgraphicslinearlayout_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicslinearlayout_removeat_isbase = false;
    mutable bool qgraphicslinearlayout_setgeometry_isbase = false;
    mutable bool qgraphicslinearlayout_count_isbase = false;
    mutable bool qgraphicslinearlayout_itemat_isbase = false;
    mutable bool qgraphicslinearlayout_invalidate_isbase = false;
    mutable bool qgraphicslinearlayout_sizehint_isbase = false;
    mutable bool qgraphicslinearlayout_getcontentsmargins_isbase = false;
    mutable bool qgraphicslinearlayout_updategeometry_isbase = false;
    mutable bool qgraphicslinearlayout_widgetevent_isbase = false;
    mutable bool qgraphicslinearlayout_isempty_isbase = false;
    mutable bool qgraphicslinearlayout_addchildlayoutitem_isbase = false;
    mutable bool qgraphicslinearlayout_setgraphicsitem_isbase = false;
    mutable bool qgraphicslinearlayout_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsLinearLayout() : QGraphicsLinearLayout(){};
    VirtualQGraphicsLinearLayout(Qt::Orientation orientation) : QGraphicsLinearLayout(orientation){};
    VirtualQGraphicsLinearLayout(QGraphicsLayoutItem* parent) : QGraphicsLinearLayout(parent){};
    VirtualQGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem* parent) : QGraphicsLinearLayout(orientation, parent){};

    ~VirtualQGraphicsLinearLayout() {
        qgraphicslinearlayout_removeat_callback = nullptr;
        qgraphicslinearlayout_setgeometry_callback = nullptr;
        qgraphicslinearlayout_count_callback = nullptr;
        qgraphicslinearlayout_itemat_callback = nullptr;
        qgraphicslinearlayout_invalidate_callback = nullptr;
        qgraphicslinearlayout_sizehint_callback = nullptr;
        qgraphicslinearlayout_getcontentsmargins_callback = nullptr;
        qgraphicslinearlayout_updategeometry_callback = nullptr;
        qgraphicslinearlayout_widgetevent_callback = nullptr;
        qgraphicslinearlayout_isempty_callback = nullptr;
        qgraphicslinearlayout_addchildlayoutitem_callback = nullptr;
        qgraphicslinearlayout_setgraphicsitem_callback = nullptr;
        qgraphicslinearlayout_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsLinearLayout_RemoveAt_Callback(QGraphicsLinearLayout_RemoveAt_Callback cb) { qgraphicslinearlayout_removeat_callback = cb; }
    void setQGraphicsLinearLayout_SetGeometry_Callback(QGraphicsLinearLayout_SetGeometry_Callback cb) { qgraphicslinearlayout_setgeometry_callback = cb; }
    void setQGraphicsLinearLayout_Count_Callback(QGraphicsLinearLayout_Count_Callback cb) { qgraphicslinearlayout_count_callback = cb; }
    void setQGraphicsLinearLayout_ItemAt_Callback(QGraphicsLinearLayout_ItemAt_Callback cb) { qgraphicslinearlayout_itemat_callback = cb; }
    void setQGraphicsLinearLayout_Invalidate_Callback(QGraphicsLinearLayout_Invalidate_Callback cb) { qgraphicslinearlayout_invalidate_callback = cb; }
    void setQGraphicsLinearLayout_SizeHint_Callback(QGraphicsLinearLayout_SizeHint_Callback cb) { qgraphicslinearlayout_sizehint_callback = cb; }
    void setQGraphicsLinearLayout_GetContentsMargins_Callback(QGraphicsLinearLayout_GetContentsMargins_Callback cb) { qgraphicslinearlayout_getcontentsmargins_callback = cb; }
    void setQGraphicsLinearLayout_UpdateGeometry_Callback(QGraphicsLinearLayout_UpdateGeometry_Callback cb) { qgraphicslinearlayout_updategeometry_callback = cb; }
    void setQGraphicsLinearLayout_WidgetEvent_Callback(QGraphicsLinearLayout_WidgetEvent_Callback cb) { qgraphicslinearlayout_widgetevent_callback = cb; }
    void setQGraphicsLinearLayout_IsEmpty_Callback(QGraphicsLinearLayout_IsEmpty_Callback cb) { qgraphicslinearlayout_isempty_callback = cb; }
    void setQGraphicsLinearLayout_AddChildLayoutItem_Callback(QGraphicsLinearLayout_AddChildLayoutItem_Callback cb) { qgraphicslinearlayout_addchildlayoutitem_callback = cb; }
    void setQGraphicsLinearLayout_SetGraphicsItem_Callback(QGraphicsLinearLayout_SetGraphicsItem_Callback cb) { qgraphicslinearlayout_setgraphicsitem_callback = cb; }
    void setQGraphicsLinearLayout_SetOwnedByLayout_Callback(QGraphicsLinearLayout_SetOwnedByLayout_Callback cb) { qgraphicslinearlayout_setownedbylayout_callback = cb; }

    // Base flag setters
    void setQGraphicsLinearLayout_RemoveAt_IsBase(bool value) const { qgraphicslinearlayout_removeat_isbase = value; }
    void setQGraphicsLinearLayout_SetGeometry_IsBase(bool value) const { qgraphicslinearlayout_setgeometry_isbase = value; }
    void setQGraphicsLinearLayout_Count_IsBase(bool value) const { qgraphicslinearlayout_count_isbase = value; }
    void setQGraphicsLinearLayout_ItemAt_IsBase(bool value) const { qgraphicslinearlayout_itemat_isbase = value; }
    void setQGraphicsLinearLayout_Invalidate_IsBase(bool value) const { qgraphicslinearlayout_invalidate_isbase = value; }
    void setQGraphicsLinearLayout_SizeHint_IsBase(bool value) const { qgraphicslinearlayout_sizehint_isbase = value; }
    void setQGraphicsLinearLayout_GetContentsMargins_IsBase(bool value) const { qgraphicslinearlayout_getcontentsmargins_isbase = value; }
    void setQGraphicsLinearLayout_UpdateGeometry_IsBase(bool value) const { qgraphicslinearlayout_updategeometry_isbase = value; }
    void setQGraphicsLinearLayout_WidgetEvent_IsBase(bool value) const { qgraphicslinearlayout_widgetevent_isbase = value; }
    void setQGraphicsLinearLayout_IsEmpty_IsBase(bool value) const { qgraphicslinearlayout_isempty_isbase = value; }
    void setQGraphicsLinearLayout_AddChildLayoutItem_IsBase(bool value) const { qgraphicslinearlayout_addchildlayoutitem_isbase = value; }
    void setQGraphicsLinearLayout_SetGraphicsItem_IsBase(bool value) const { qgraphicslinearlayout_setgraphicsitem_isbase = value; }
    void setQGraphicsLinearLayout_SetOwnedByLayout_IsBase(bool value) const { qgraphicslinearlayout_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void removeAt(int index) override {
        if (qgraphicslinearlayout_removeat_isbase) {
            qgraphicslinearlayout_removeat_isbase = false;
            QGraphicsLinearLayout::removeAt(index);
        } else if (qgraphicslinearlayout_removeat_callback != nullptr) {
            qgraphicslinearlayout_removeat_callback(this, index);
        } else {
            QGraphicsLinearLayout::removeAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicslinearlayout_setgeometry_isbase) {
            qgraphicslinearlayout_setgeometry_isbase = false;
            QGraphicsLinearLayout::setGeometry(rect);
        } else if (qgraphicslinearlayout_setgeometry_callback != nullptr) {
            qgraphicslinearlayout_setgeometry_callback(this, rect);
        } else {
            QGraphicsLinearLayout::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qgraphicslinearlayout_count_isbase) {
            qgraphicslinearlayout_count_isbase = false;
            return QGraphicsLinearLayout::count();
        } else if (qgraphicslinearlayout_count_callback != nullptr) {
            return qgraphicslinearlayout_count_callback();
        } else {
            return QGraphicsLinearLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QGraphicsLayoutItem* itemAt(int index) const override {
        if (qgraphicslinearlayout_itemat_isbase) {
            qgraphicslinearlayout_itemat_isbase = false;
            return QGraphicsLinearLayout::itemAt(index);
        } else if (qgraphicslinearlayout_itemat_callback != nullptr) {
            return qgraphicslinearlayout_itemat_callback(this, index);
        } else {
            return QGraphicsLinearLayout::itemAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qgraphicslinearlayout_invalidate_isbase) {
            qgraphicslinearlayout_invalidate_isbase = false;
            QGraphicsLinearLayout::invalidate();
        } else if (qgraphicslinearlayout_invalidate_callback != nullptr) {
            qgraphicslinearlayout_invalidate_callback();
        } else {
            QGraphicsLinearLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicslinearlayout_sizehint_isbase) {
            qgraphicslinearlayout_sizehint_isbase = false;
            return QGraphicsLinearLayout::sizeHint(which, constraint);
        } else if (qgraphicslinearlayout_sizehint_callback != nullptr) {
            return qgraphicslinearlayout_sizehint_callback(this, which, constraint);
        } else {
            return QGraphicsLinearLayout::sizeHint(which, constraint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicslinearlayout_getcontentsmargins_isbase) {
            qgraphicslinearlayout_getcontentsmargins_isbase = false;
            QGraphicsLinearLayout::getContentsMargins(left, top, right, bottom);
        } else if (qgraphicslinearlayout_getcontentsmargins_callback != nullptr) {
            qgraphicslinearlayout_getcontentsmargins_callback(this, left, top, right, bottom);
        } else {
            QGraphicsLinearLayout::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicslinearlayout_updategeometry_isbase) {
            qgraphicslinearlayout_updategeometry_isbase = false;
            QGraphicsLinearLayout::updateGeometry();
        } else if (qgraphicslinearlayout_updategeometry_callback != nullptr) {
            qgraphicslinearlayout_updategeometry_callback();
        } else {
            QGraphicsLinearLayout::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void widgetEvent(QEvent* e) override {
        if (qgraphicslinearlayout_widgetevent_isbase) {
            qgraphicslinearlayout_widgetevent_isbase = false;
            QGraphicsLinearLayout::widgetEvent(e);
        } else if (qgraphicslinearlayout_widgetevent_callback != nullptr) {
            qgraphicslinearlayout_widgetevent_callback(this, e);
        } else {
            QGraphicsLinearLayout::widgetEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicslinearlayout_isempty_isbase) {
            qgraphicslinearlayout_isempty_isbase = false;
            return QGraphicsLinearLayout::isEmpty();
        } else if (qgraphicslinearlayout_isempty_callback != nullptr) {
            return qgraphicslinearlayout_isempty_callback();
        } else {
            return QGraphicsLinearLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayoutItem(QGraphicsLayoutItem* layoutItem) {
        if (qgraphicslinearlayout_addchildlayoutitem_isbase) {
            qgraphicslinearlayout_addchildlayoutitem_isbase = false;
            QGraphicsLinearLayout::addChildLayoutItem(layoutItem);
        } else if (qgraphicslinearlayout_addchildlayoutitem_callback != nullptr) {
            qgraphicslinearlayout_addchildlayoutitem_callback(this, layoutItem);
        } else {
            QGraphicsLinearLayout::addChildLayoutItem(layoutItem);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicslinearlayout_setgraphicsitem_isbase) {
            qgraphicslinearlayout_setgraphicsitem_isbase = false;
            QGraphicsLinearLayout::setGraphicsItem(item);
        } else if (qgraphicslinearlayout_setgraphicsitem_callback != nullptr) {
            qgraphicslinearlayout_setgraphicsitem_callback(this, item);
        } else {
            QGraphicsLinearLayout::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicslinearlayout_setownedbylayout_isbase) {
            qgraphicslinearlayout_setownedbylayout_isbase = false;
            QGraphicsLinearLayout::setOwnedByLayout(ownedByLayout);
        } else if (qgraphicslinearlayout_setownedbylayout_callback != nullptr) {
            qgraphicslinearlayout_setownedbylayout_callback(this, ownedByLayout);
        } else {
            QGraphicsLinearLayout::setOwnedByLayout(ownedByLayout);
        }
    }
};

#endif

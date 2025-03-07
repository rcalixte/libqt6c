#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSLAYOUTITEM_H
#define SRCC_LIBVIRTUALQGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsLayoutItem so that we can call protected methods
class VirtualQGraphicsLayoutItem : public QGraphicsLayoutItem {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsLayoutItem_SetGeometry_Callback = void (*)(QGraphicsLayoutItem*, const QRectF&);
    using QGraphicsLayoutItem_GetContentsMargins_Callback = void (*)(const QGraphicsLayoutItem*, qreal*, qreal*, qreal*, qreal*);
    using QGraphicsLayoutItem_UpdateGeometry_Callback = void (*)();
    using QGraphicsLayoutItem_IsEmpty_Callback = bool (*)();
    using QGraphicsLayoutItem_SizeHint_Callback = QSizeF (*)(const QGraphicsLayoutItem*, Qt::SizeHint, const QSizeF&);
    using QGraphicsLayoutItem_SetGraphicsItem_Callback = void (*)(QGraphicsLayoutItem*, QGraphicsItem*);
    using QGraphicsLayoutItem_SetOwnedByLayout_Callback = void (*)(QGraphicsLayoutItem*, bool);

  protected:
    // Instance callback storage
    QGraphicsLayoutItem_SetGeometry_Callback qgraphicslayoutitem_setgeometry_callback = nullptr;
    QGraphicsLayoutItem_GetContentsMargins_Callback qgraphicslayoutitem_getcontentsmargins_callback = nullptr;
    QGraphicsLayoutItem_UpdateGeometry_Callback qgraphicslayoutitem_updategeometry_callback = nullptr;
    QGraphicsLayoutItem_IsEmpty_Callback qgraphicslayoutitem_isempty_callback = nullptr;
    QGraphicsLayoutItem_SizeHint_Callback qgraphicslayoutitem_sizehint_callback = nullptr;
    QGraphicsLayoutItem_SetGraphicsItem_Callback qgraphicslayoutitem_setgraphicsitem_callback = nullptr;
    QGraphicsLayoutItem_SetOwnedByLayout_Callback qgraphicslayoutitem_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicslayoutitem_setgeometry_isbase = false;
    mutable bool qgraphicslayoutitem_getcontentsmargins_isbase = false;
    mutable bool qgraphicslayoutitem_updategeometry_isbase = false;
    mutable bool qgraphicslayoutitem_isempty_isbase = false;
    mutable bool qgraphicslayoutitem_sizehint_isbase = false;
    mutable bool qgraphicslayoutitem_setgraphicsitem_isbase = false;
    mutable bool qgraphicslayoutitem_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsLayoutItem() : QGraphicsLayoutItem(){};
    VirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent) : QGraphicsLayoutItem(parent){};
    VirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent, bool isLayout) : QGraphicsLayoutItem(parent, isLayout){};

    ~VirtualQGraphicsLayoutItem() {
        qgraphicslayoutitem_setgeometry_callback = nullptr;
        qgraphicslayoutitem_getcontentsmargins_callback = nullptr;
        qgraphicslayoutitem_updategeometry_callback = nullptr;
        qgraphicslayoutitem_isempty_callback = nullptr;
        qgraphicslayoutitem_sizehint_callback = nullptr;
        qgraphicslayoutitem_setgraphicsitem_callback = nullptr;
        qgraphicslayoutitem_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsLayoutItem_SetGeometry_Callback(QGraphicsLayoutItem_SetGeometry_Callback cb) { qgraphicslayoutitem_setgeometry_callback = cb; }
    void setQGraphicsLayoutItem_GetContentsMargins_Callback(QGraphicsLayoutItem_GetContentsMargins_Callback cb) { qgraphicslayoutitem_getcontentsmargins_callback = cb; }
    void setQGraphicsLayoutItem_UpdateGeometry_Callback(QGraphicsLayoutItem_UpdateGeometry_Callback cb) { qgraphicslayoutitem_updategeometry_callback = cb; }
    void setQGraphicsLayoutItem_IsEmpty_Callback(QGraphicsLayoutItem_IsEmpty_Callback cb) { qgraphicslayoutitem_isempty_callback = cb; }
    void setQGraphicsLayoutItem_SizeHint_Callback(QGraphicsLayoutItem_SizeHint_Callback cb) { qgraphicslayoutitem_sizehint_callback = cb; }
    void setQGraphicsLayoutItem_SetGraphicsItem_Callback(QGraphicsLayoutItem_SetGraphicsItem_Callback cb) { qgraphicslayoutitem_setgraphicsitem_callback = cb; }
    void setQGraphicsLayoutItem_SetOwnedByLayout_Callback(QGraphicsLayoutItem_SetOwnedByLayout_Callback cb) { qgraphicslayoutitem_setownedbylayout_callback = cb; }

    // Base flag setters
    void setQGraphicsLayoutItem_SetGeometry_IsBase(bool value) const { qgraphicslayoutitem_setgeometry_isbase = value; }
    void setQGraphicsLayoutItem_GetContentsMargins_IsBase(bool value) const { qgraphicslayoutitem_getcontentsmargins_isbase = value; }
    void setQGraphicsLayoutItem_UpdateGeometry_IsBase(bool value) const { qgraphicslayoutitem_updategeometry_isbase = value; }
    void setQGraphicsLayoutItem_IsEmpty_IsBase(bool value) const { qgraphicslayoutitem_isempty_isbase = value; }
    void setQGraphicsLayoutItem_SizeHint_IsBase(bool value) const { qgraphicslayoutitem_sizehint_isbase = value; }
    void setQGraphicsLayoutItem_SetGraphicsItem_IsBase(bool value) const { qgraphicslayoutitem_setgraphicsitem_isbase = value; }
    void setQGraphicsLayoutItem_SetOwnedByLayout_IsBase(bool value) const { qgraphicslayoutitem_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicslayoutitem_setgeometry_isbase) {
            qgraphicslayoutitem_setgeometry_isbase = false;
            QGraphicsLayoutItem::setGeometry(rect);
        } else if (qgraphicslayoutitem_setgeometry_callback != nullptr) {
            qgraphicslayoutitem_setgeometry_callback(this, rect);
        } else {
            QGraphicsLayoutItem::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicslayoutitem_getcontentsmargins_isbase) {
            qgraphicslayoutitem_getcontentsmargins_isbase = false;
            QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
        } else if (qgraphicslayoutitem_getcontentsmargins_callback != nullptr) {
            qgraphicslayoutitem_getcontentsmargins_callback(this, left, top, right, bottom);
        } else {
            QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicslayoutitem_updategeometry_isbase) {
            qgraphicslayoutitem_updategeometry_isbase = false;
            QGraphicsLayoutItem::updateGeometry();
        } else if (qgraphicslayoutitem_updategeometry_callback != nullptr) {
            qgraphicslayoutitem_updategeometry_callback();
        } else {
            QGraphicsLayoutItem::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicslayoutitem_isempty_isbase) {
            qgraphicslayoutitem_isempty_isbase = false;
            return QGraphicsLayoutItem::isEmpty();
        } else if (qgraphicslayoutitem_isempty_callback != nullptr) {
            return qgraphicslayoutitem_isempty_callback();
        } else {
            return QGraphicsLayoutItem::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        return qgraphicslayoutitem_sizehint_callback(this, which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicslayoutitem_setgraphicsitem_isbase) {
            qgraphicslayoutitem_setgraphicsitem_isbase = false;
            QGraphicsLayoutItem::setGraphicsItem(item);
        } else if (qgraphicslayoutitem_setgraphicsitem_callback != nullptr) {
            qgraphicslayoutitem_setgraphicsitem_callback(this, item);
        } else {
            QGraphicsLayoutItem::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicslayoutitem_setownedbylayout_isbase) {
            qgraphicslayoutitem_setownedbylayout_isbase = false;
            QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
        } else if (qgraphicslayoutitem_setownedbylayout_callback != nullptr) {
            qgraphicslayoutitem_setownedbylayout_callback(this, ownedByLayout);
        } else {
            QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
        }
    }
};

#endif

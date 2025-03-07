#include <QEvent>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include <qgraphicslayout.h>
#include "libqgraphicslayout.hpp"
#include "libqgraphicslayout.hxx"

QGraphicsLayout* QGraphicsLayout_new() {
    return new VirtualQGraphicsLayout();
}

QGraphicsLayout* QGraphicsLayout_new2(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsLayout(parent);
}

void QGraphicsLayout_SetContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom) {
    self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsLayout_Activate(QGraphicsLayout* self) {
    self->activate();
}

bool QGraphicsLayout_IsActivated(const QGraphicsLayout* self) {
    return self->isActivated();
}

void QGraphicsLayout_SetInstantInvalidatePropagation(bool enable) {
    QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

bool QGraphicsLayout_InstantInvalidatePropagation() {
    return QGraphicsLayout::instantInvalidatePropagation();
}

// Derived class handler implementation
void QGraphicsLayout_GetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicslayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseGetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_GetContentsMargins_IsBase(true);
        vqgraphicslayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicslayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnGetContentsMargins(const QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_Invalidate(QGraphicsLayout* self) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->invalidate();
    } else {
        vqgraphicslayout->invalidate();
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseInvalidate(QGraphicsLayout* self) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_Invalidate_IsBase(true);
        vqgraphicslayout->invalidate();
    } else {
        vqgraphicslayout->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnInvalidate(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_UpdateGeometry(QGraphicsLayout* self) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->updateGeometry();
    } else {
        vqgraphicslayout->updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseUpdateGeometry(QGraphicsLayout* self) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_UpdateGeometry_IsBase(true);
        vqgraphicslayout->updateGeometry();
    } else {
        vqgraphicslayout->updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnUpdateGeometry(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_WidgetEvent(QGraphicsLayout* self, QEvent* e) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->widgetEvent(e);
    } else {
        vqgraphicslayout->widgetEvent(e);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseWidgetEvent(QGraphicsLayout* self, QEvent* e) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_WidgetEvent_IsBase(true);
        vqgraphicslayout->widgetEvent(e);
    } else {
        vqgraphicslayout->widgetEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnWidgetEvent(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsLayout_Count(const QGraphicsLayout* self) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        return vqgraphicslayout->count();
    } else {
        return vqgraphicslayout->count();
    }
}

// Base class handler implementation
int QGraphicsLayout_QBaseCount(const QGraphicsLayout* self) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_Count_IsBase(true);
        return vqgraphicslayout->count();
    } else {
        return vqgraphicslayout->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnCount(const QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
QGraphicsLayoutItem* QGraphicsLayout_ItemAt(const QGraphicsLayout* self, int i) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        return vqgraphicslayout->itemAt(static_cast<int>(i));
    } else {
        return vqgraphicslayout->itemAt(static_cast<int>(i));
    }
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsLayout_QBaseItemAt(const QGraphicsLayout* self, int i) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_ItemAt_IsBase(true);
        return vqgraphicslayout->itemAt(static_cast<int>(i));
    } else {
        return vqgraphicslayout->itemAt(static_cast<int>(i));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnItemAt(const QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_ItemAt_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_RemoveAt(QGraphicsLayout* self, int index) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->removeAt(static_cast<int>(index));
    } else {
        vqgraphicslayout->removeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseRemoveAt(QGraphicsLayout* self, int index) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_RemoveAt_IsBase(true);
        vqgraphicslayout->removeAt(static_cast<int>(index));
    } else {
        vqgraphicslayout->removeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnRemoveAt(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_RemoveAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_SetGeometry(QGraphicsLayout* self, QRectF* rect) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setGeometry(*rect);
    } else {
        vqgraphicslayout->setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseSetGeometry(QGraphicsLayout* self, QRectF* rect) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_SetGeometry_IsBase(true);
        vqgraphicslayout->setGeometry(*rect);
    } else {
        vqgraphicslayout->setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSetGeometry(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLayout_IsEmpty(const QGraphicsLayout* self) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        return vqgraphicslayout->isEmpty();
    } else {
        return vqgraphicslayout->isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsLayout_QBaseIsEmpty(const QGraphicsLayout* self) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_IsEmpty_IsBase(true);
        return vqgraphicslayout->isEmpty();
    } else {
        return vqgraphicslayout->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnIsEmpty(const QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsLayout_SizeHint(const QGraphicsLayout* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        return new QSizeF(vqgraphicslayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QGraphicsLayout_QBaseSizeHint(const QGraphicsLayout* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicslayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSizeHint(const QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self))) {
        vqgraphicslayout->setQGraphicsLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_AddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->addChildLayoutItem(layoutItem);
    } else {
        vqgraphicslayout->addChildLayoutItem(layoutItem);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseAddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_AddChildLayoutItem_IsBase(true);
        vqgraphicslayout->addChildLayoutItem(layoutItem);
    } else {
        vqgraphicslayout->addChildLayoutItem(layoutItem);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnAddChildLayoutItem(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_AddChildLayoutItem_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_AddChildLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_SetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setGraphicsItem(item);
    } else {
        vqgraphicslayout->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseSetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_SetGraphicsItem_IsBase(true);
        vqgraphicslayout->setGraphicsItem(item);
    } else {
        vqgraphicslayout->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSetGraphicsItem(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_SetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicslayout->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseSetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_SetOwnedByLayout_IsBase(true);
        vqgraphicslayout->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicslayout->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSetOwnedByLayout(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->setQGraphicsLayout_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsLayout_Delete(QGraphicsLayout* self) {
    delete self;
}

#include <QEvent>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsLinearLayout>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include <qgraphicslinearlayout.h>
#include "libqgraphicslinearlayout.hpp"
#include "libqgraphicslinearlayout.hxx"

QGraphicsLinearLayout* QGraphicsLinearLayout_new() {
    return new VirtualQGraphicsLinearLayout();
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new2(int orientation) {
    return new VirtualQGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation));
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsLinearLayout(parent);
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new4(int orientation, QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation), parent);
}

void QGraphicsLinearLayout_SetOrientation(QGraphicsLinearLayout* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QGraphicsLinearLayout_Orientation(const QGraphicsLinearLayout* self) {
    return static_cast<int>(self->orientation());
}

void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
    self->addItem(item);
}

void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self) {
    self->addStretch();
}

void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item) {
    self->insertItem(static_cast<int>(index), item);
}

void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index) {
    self->insertStretch(static_cast<int>(index));
}

void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
    self->removeItem(item);
}

void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing) {
    self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_Spacing(const QGraphicsLinearLayout* self) {
    return static_cast<double>(self->spacing());
}

void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing) {
    self->setItemSpacing(static_cast<int>(index), static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_ItemSpacing(const QGraphicsLinearLayout* self, int index) {
    return static_cast<double>(self->itemSpacing(static_cast<int>(index)));
}

void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch) {
    self->setStretchFactor(item, static_cast<int>(stretch));
}

int QGraphicsLinearLayout_StretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
    return self->stretchFactor(item);
}

void QGraphicsLinearLayout_SetAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment) {
    self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsLinearLayout_Alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
    return static_cast<int>(self->alignment(item));
}

void QGraphicsLinearLayout_Dump(const QGraphicsLinearLayout* self) {
    self->dump();
}

void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch) {
    self->addStretch(static_cast<int>(stretch));
}

void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch) {
    self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QGraphicsLinearLayout_Dump1(const QGraphicsLinearLayout* self, int indent) {
    self->dump(static_cast<int>(indent));
}

// Derived class handler implementation
void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->removeAt(static_cast<int>(index));
    } else {
        vqgraphicslinearlayout->removeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseRemoveAt(QGraphicsLinearLayout* self, int index) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_RemoveAt_IsBase(true);
        vqgraphicslinearlayout->removeAt(static_cast<int>(index));
    } else {
        vqgraphicslinearlayout->removeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnRemoveAt(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_RemoveAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, QRectF* rect) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setGeometry(*rect);
    } else {
        vqgraphicslinearlayout->setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseSetGeometry(QGraphicsLinearLayout* self, QRectF* rect) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_SetGeometry_IsBase(true);
        vqgraphicslinearlayout->setGeometry(*rect);
    } else {
        vqgraphicslinearlayout->setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnSetGeometry(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsLinearLayout_Count(const QGraphicsLinearLayout* self) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        return vqgraphicslinearlayout->count();
    } else {
        return vqgraphicslinearlayout->count();
    }
}

// Base class handler implementation
int QGraphicsLinearLayout_QBaseCount(const QGraphicsLinearLayout* self) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_Count_IsBase(true);
        return vqgraphicslinearlayout->count();
    } else {
        return vqgraphicslinearlayout->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnCount(const QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(const QGraphicsLinearLayout* self, int index) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        return vqgraphicslinearlayout->itemAt(static_cast<int>(index));
    } else {
        return vqgraphicslinearlayout->itemAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsLinearLayout_QBaseItemAt(const QGraphicsLinearLayout* self, int index) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_ItemAt_IsBase(true);
        return vqgraphicslinearlayout->itemAt(static_cast<int>(index));
    } else {
        return vqgraphicslinearlayout->itemAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnItemAt(const QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_ItemAt_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->invalidate();
    } else {
        vqgraphicslinearlayout->invalidate();
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseInvalidate(QGraphicsLinearLayout* self) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_Invalidate_IsBase(true);
        vqgraphicslinearlayout->invalidate();
    } else {
        vqgraphicslinearlayout->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnInvalidate(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsLinearLayout_SizeHint(const QGraphicsLinearLayout* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        return new QSizeF(vqgraphicslinearlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    } else {
        return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
}

// Base class handler implementation
QSizeF* QGraphicsLinearLayout_QBaseSizeHint(const QGraphicsLinearLayout* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicslinearlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    } else {
        return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnSizeHint(const QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLinearLayout_GetContentsMargins(const QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicslinearlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseGetContentsMargins(const QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_GetContentsMargins_IsBase(true);
        vqgraphicslinearlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicslinearlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnGetContentsMargins(const QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLinearLayout_UpdateGeometry(QGraphicsLinearLayout* self) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->updateGeometry();
    } else {
        vqgraphicslinearlayout->updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseUpdateGeometry(QGraphicsLinearLayout* self) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_UpdateGeometry_IsBase(true);
        vqgraphicslinearlayout->updateGeometry();
    } else {
        vqgraphicslinearlayout->updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnUpdateGeometry(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLinearLayout_WidgetEvent(QGraphicsLinearLayout* self, QEvent* e) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->widgetEvent(e);
    } else {
        vqgraphicslinearlayout->widgetEvent(e);
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseWidgetEvent(QGraphicsLinearLayout* self, QEvent* e) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_WidgetEvent_IsBase(true);
        vqgraphicslinearlayout->widgetEvent(e);
    } else {
        vqgraphicslinearlayout->widgetEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnWidgetEvent(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLinearLayout_IsEmpty(const QGraphicsLinearLayout* self) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        return vqgraphicslinearlayout->isEmpty();
    } else {
        return vqgraphicslinearlayout->isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsLinearLayout_QBaseIsEmpty(const QGraphicsLinearLayout* self) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_IsEmpty_IsBase(true);
        return vqgraphicslinearlayout->isEmpty();
    } else {
        return vqgraphicslinearlayout->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnIsEmpty(const QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self))) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLinearLayout_AddChildLayoutItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->addChildLayoutItem(layoutItem);
    } else {
        vqgraphicslinearlayout->addChildLayoutItem(layoutItem);
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseAddChildLayoutItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_AddChildLayoutItem_IsBase(true);
        vqgraphicslinearlayout->addChildLayoutItem(layoutItem);
    } else {
        vqgraphicslinearlayout->addChildLayoutItem(layoutItem);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnAddChildLayoutItem(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_AddChildLayoutItem_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_AddChildLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLinearLayout_SetGraphicsItem(QGraphicsLinearLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setGraphicsItem(item);
    } else {
        vqgraphicslinearlayout->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseSetGraphicsItem(QGraphicsLinearLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_SetGraphicsItem_IsBase(true);
        vqgraphicslinearlayout->setGraphicsItem(item);
    } else {
        vqgraphicslinearlayout->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnSetGraphicsItem(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLinearLayout_SetOwnedByLayout(QGraphicsLinearLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicslinearlayout->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsLinearLayout_QBaseSetOwnedByLayout(QGraphicsLinearLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_SetOwnedByLayout_IsBase(true);
        vqgraphicslinearlayout->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicslinearlayout->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnSetOwnedByLayout(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->setQGraphicsLinearLayout_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self) {
    delete self;
}

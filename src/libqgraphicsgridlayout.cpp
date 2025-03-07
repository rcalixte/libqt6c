#include <QEvent>
#include <QGraphicsGridLayout>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include <qgraphicsgridlayout.h>
#include "libqgraphicsgridlayout.hpp"
#include "libqgraphicsgridlayout.hxx"

QGraphicsGridLayout* QGraphicsGridLayout_new() {
    return new VirtualQGraphicsGridLayout();
}

QGraphicsGridLayout* QGraphicsGridLayout_new2(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsGridLayout(parent);
}

void QGraphicsGridLayout_AddItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGraphicsGridLayout_AddItem2(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGraphicsGridLayout_SetHorizontalSpacing(QGraphicsGridLayout* self, double spacing) {
    self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_HorizontalSpacing(const QGraphicsGridLayout* self) {
    return static_cast<double>(self->horizontalSpacing());
}

void QGraphicsGridLayout_SetVerticalSpacing(QGraphicsGridLayout* self, double spacing) {
    self->setVerticalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_VerticalSpacing(const QGraphicsGridLayout* self) {
    return static_cast<double>(self->verticalSpacing());
}

void QGraphicsGridLayout_SetSpacing(QGraphicsGridLayout* self, double spacing) {
    self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsGridLayout_SetRowSpacing(QGraphicsGridLayout* self, int row, double spacing) {
    self->setRowSpacing(static_cast<int>(row), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_RowSpacing(const QGraphicsGridLayout* self, int row) {
    return static_cast<double>(self->rowSpacing(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetColumnSpacing(QGraphicsGridLayout* self, int column, double spacing) {
    self->setColumnSpacing(static_cast<int>(column), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_ColumnSpacing(const QGraphicsGridLayout* self, int column) {
    return static_cast<double>(self->columnSpacing(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch) {
    self->setRowStretchFactor(static_cast<int>(row), static_cast<int>(stretch));
}

int QGraphicsGridLayout_RowStretchFactor(const QGraphicsGridLayout* self, int row) {
    return self->rowStretchFactor(static_cast<int>(row));
}

void QGraphicsGridLayout_SetColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch) {
    self->setColumnStretchFactor(static_cast<int>(column), static_cast<int>(stretch));
}

int QGraphicsGridLayout_ColumnStretchFactor(const QGraphicsGridLayout* self, int column) {
    return self->columnStretchFactor(static_cast<int>(column));
}

void QGraphicsGridLayout_SetRowMinimumHeight(QGraphicsGridLayout* self, int row, double height) {
    self->setRowMinimumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMinimumHeight(const QGraphicsGridLayout* self, int row) {
    return static_cast<double>(self->rowMinimumHeight(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetRowPreferredHeight(QGraphicsGridLayout* self, int row, double height) {
    self->setRowPreferredHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowPreferredHeight(const QGraphicsGridLayout* self, int row) {
    return static_cast<double>(self->rowPreferredHeight(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetRowMaximumHeight(QGraphicsGridLayout* self, int row, double height) {
    self->setRowMaximumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMaximumHeight(const QGraphicsGridLayout* self, int row) {
    return static_cast<double>(self->rowMaximumHeight(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetRowFixedHeight(QGraphicsGridLayout* self, int row, double height) {
    self->setRowFixedHeight(static_cast<int>(row), static_cast<qreal>(height));
}

void QGraphicsGridLayout_SetColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width) {
    self->setColumnMinimumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMinimumWidth(const QGraphicsGridLayout* self, int column) {
    return static_cast<double>(self->columnMinimumWidth(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width) {
    self->setColumnPreferredWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnPreferredWidth(const QGraphicsGridLayout* self, int column) {
    return static_cast<double>(self->columnPreferredWidth(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width) {
    self->setColumnMaximumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMaximumWidth(const QGraphicsGridLayout* self, int column) {
    return static_cast<double>(self->columnMaximumWidth(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetColumnFixedWidth(QGraphicsGridLayout* self, int column, double width) {
    self->setColumnFixedWidth(static_cast<int>(column), static_cast<qreal>(width));
}

void QGraphicsGridLayout_SetRowAlignment(QGraphicsGridLayout* self, int row, int alignment) {
    self->setRowAlignment(static_cast<int>(row), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_RowAlignment(const QGraphicsGridLayout* self, int row) {
    return static_cast<int>(self->rowAlignment(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetColumnAlignment(QGraphicsGridLayout* self, int column, int alignment) {
    self->setColumnAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_ColumnAlignment(const QGraphicsGridLayout* self, int column) {
    return static_cast<int>(self->columnAlignment(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetAlignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment) {
    self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_Alignment(const QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
    return static_cast<int>(self->alignment(item));
}

int QGraphicsGridLayout_RowCount(const QGraphicsGridLayout* self) {
    return self->rowCount();
}

int QGraphicsGridLayout_ColumnCount(const QGraphicsGridLayout* self) {
    return self->columnCount();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt(const QGraphicsGridLayout* self, int row, int column) {
    return self->itemAt(static_cast<int>(row), static_cast<int>(column));
}

void QGraphicsGridLayout_RemoveItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
    self->removeItem(item);
}

void QGraphicsGridLayout_AddItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(alignment));
}

void QGraphicsGridLayout_AddItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

// Derived class handler implementation
int QGraphicsGridLayout_Count(const QGraphicsGridLayout* self) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        return vqgraphicsgridlayout->count();
    } else {
        return vqgraphicsgridlayout->count();
    }
}

// Base class handler implementation
int QGraphicsGridLayout_QBaseCount(const QGraphicsGridLayout* self) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_Count_IsBase(true);
        return vqgraphicsgridlayout->count();
    } else {
        return vqgraphicsgridlayout->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnCount(const QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
QGraphicsLayoutItem* QGraphicsGridLayout_ItemAtWithIndex(const QGraphicsGridLayout* self, int index) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        return vqgraphicsgridlayout->itemAt(static_cast<int>(index));
    } else {
        return vqgraphicsgridlayout->itemAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsGridLayout_QBaseItemAtWithIndex(const QGraphicsGridLayout* self, int index) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_ItemAtWithIndex_IsBase(true);
        return vqgraphicsgridlayout->itemAt(static_cast<int>(index));
    } else {
        return vqgraphicsgridlayout->itemAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnItemAtWithIndex(const QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_ItemAtWithIndex_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_ItemAtWithIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout* self, int index) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->removeAt(static_cast<int>(index));
    } else {
        vqgraphicsgridlayout->removeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseRemoveAt(QGraphicsGridLayout* self, int index) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_RemoveAt_IsBase(true);
        vqgraphicsgridlayout->removeAt(static_cast<int>(index));
    } else {
        vqgraphicsgridlayout->removeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnRemoveAt(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_RemoveAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_Invalidate(QGraphicsGridLayout* self) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->invalidate();
    } else {
        vqgraphicsgridlayout->invalidate();
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseInvalidate(QGraphicsGridLayout* self) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_Invalidate_IsBase(true);
        vqgraphicsgridlayout->invalidate();
    } else {
        vqgraphicsgridlayout->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnInvalidate(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout* self, QRectF* rect) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setGeometry(*rect);
    } else {
        vqgraphicsgridlayout->setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseSetGeometry(QGraphicsGridLayout* self, QRectF* rect) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetGeometry_IsBase(true);
        vqgraphicsgridlayout->setGeometry(*rect);
    } else {
        vqgraphicsgridlayout->setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSetGeometry(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsGridLayout_SizeHint(const QGraphicsGridLayout* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        return new QSizeF(vqgraphicsgridlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    } else {
        return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
}

// Base class handler implementation
QSizeF* QGraphicsGridLayout_QBaseSizeHint(const QGraphicsGridLayout* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicsgridlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    } else {
        return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSizeHint(const QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_GetContentsMargins(const QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicsgridlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseGetContentsMargins(const QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_GetContentsMargins_IsBase(true);
        vqgraphicsgridlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicsgridlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnGetContentsMargins(const QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_UpdateGeometry(QGraphicsGridLayout* self) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->updateGeometry();
    } else {
        vqgraphicsgridlayout->updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseUpdateGeometry(QGraphicsGridLayout* self) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_UpdateGeometry_IsBase(true);
        vqgraphicsgridlayout->updateGeometry();
    } else {
        vqgraphicsgridlayout->updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnUpdateGeometry(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_WidgetEvent(QGraphicsGridLayout* self, QEvent* e) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->widgetEvent(e);
    } else {
        vqgraphicsgridlayout->widgetEvent(e);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseWidgetEvent(QGraphicsGridLayout* self, QEvent* e) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_WidgetEvent_IsBase(true);
        vqgraphicsgridlayout->widgetEvent(e);
    } else {
        vqgraphicsgridlayout->widgetEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnWidgetEvent(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsGridLayout_IsEmpty(const QGraphicsGridLayout* self) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        return vqgraphicsgridlayout->isEmpty();
    } else {
        return vqgraphicsgridlayout->isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsGridLayout_QBaseIsEmpty(const QGraphicsGridLayout* self) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_IsEmpty_IsBase(true);
        return vqgraphicsgridlayout->isEmpty();
    } else {
        return vqgraphicsgridlayout->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnIsEmpty(const QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self))) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_AddChildLayoutItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->addChildLayoutItem(layoutItem);
    } else {
        vqgraphicsgridlayout->addChildLayoutItem(layoutItem);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseAddChildLayoutItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_AddChildLayoutItem_IsBase(true);
        vqgraphicsgridlayout->addChildLayoutItem(layoutItem);
    } else {
        vqgraphicsgridlayout->addChildLayoutItem(layoutItem);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnAddChildLayoutItem(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_AddChildLayoutItem_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_AddChildLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_SetGraphicsItem(QGraphicsGridLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setGraphicsItem(item);
    } else {
        vqgraphicsgridlayout->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseSetGraphicsItem(QGraphicsGridLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetGraphicsItem_IsBase(true);
        vqgraphicsgridlayout->setGraphicsItem(item);
    } else {
        vqgraphicsgridlayout->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSetGraphicsItem(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_SetOwnedByLayout(QGraphicsGridLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicsgridlayout->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseSetOwnedByLayout(QGraphicsGridLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetOwnedByLayout_IsBase(true);
        vqgraphicsgridlayout->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicsgridlayout->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSetOwnedByLayout(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self) {
    delete self;
}

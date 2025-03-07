#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QWidget>
#include <QWidgetItem>
#include <QWidgetItemV2>
#include <qlayoutitem.h>
#include "libqlayoutitem.hpp"
#include "libqlayoutitem.hxx"

QLayoutItem* QLayoutItem_new() {
    return new VirtualQLayoutItem();
}

QLayoutItem* QLayoutItem_new2(QLayoutItem* param1) {
    return new VirtualQLayoutItem(*param1);
}

QLayoutItem* QLayoutItem_new3(int alignment) {
    return new VirtualQLayoutItem(static_cast<Qt::Alignment>(alignment));
}

int QLayoutItem_Alignment(const QLayoutItem* self) {
    return static_cast<int>(self->alignment());
}

void QLayoutItem_SetAlignment(QLayoutItem* self, int a) {
    self->setAlignment(static_cast<Qt::Alignment>(a));
}

// Derived class handler implementation
QSize* QLayoutItem_SizeHint(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return new QSize(vqlayoutitem->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QLayoutItem_QBaseSizeHint(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_SizeHint_IsBase(true);
        return new QSize(vqlayoutitem->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSizeHint(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_SizeHint_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLayoutItem_MinimumSize(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return new QSize(vqlayoutitem->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Base class handler implementation
QSize* QLayoutItem_QBaseMinimumSize(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_MinimumSize_IsBase(true);
        return new QSize(vqlayoutitem->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMinimumSize(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_MinimumSize_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLayoutItem_MaximumSize(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return new QSize(vqlayoutitem->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Base class handler implementation
QSize* QLayoutItem_QBaseMaximumSize(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_MaximumSize_IsBase(true);
        return new QSize(vqlayoutitem->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMaximumSize(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_MaximumSize_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayoutItem_ExpandingDirections(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return static_cast<int>(vqlayoutitem->expandingDirections());
    } else {
        return static_cast<int>(vqlayoutitem->expandingDirections());
    }
}

// Base class handler implementation
int QLayoutItem_QBaseExpandingDirections(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqlayoutitem->expandingDirections());
    } else {
        return static_cast<int>(vqlayoutitem->expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnExpandingDirections(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_ExpandingDirections_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayoutItem_SetGeometry(QLayoutItem* self, QRect* geometry) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setGeometry(*geometry);
    } else {
        vqlayoutitem->setGeometry(*geometry);
    }
}

// Base class handler implementation
void QLayoutItem_QBaseSetGeometry(QLayoutItem* self, QRect* geometry) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_SetGeometry_IsBase(true);
        vqlayoutitem->setGeometry(*geometry);
    } else {
        vqlayoutitem->setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSetGeometry(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_SetGeometry_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QLayoutItem_Geometry(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return new QRect(vqlayoutitem->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Base class handler implementation
QRect* QLayoutItem_QBaseGeometry(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_Geometry_IsBase(true);
        return new QRect(vqlayoutitem->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnGeometry(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_Geometry_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLayoutItem_IsEmpty(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return vqlayoutitem->isEmpty();
    } else {
        return vqlayoutitem->isEmpty();
    }
}

// Base class handler implementation
bool QLayoutItem_QBaseIsEmpty(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_IsEmpty_IsBase(true);
        return vqlayoutitem->isEmpty();
    } else {
        return vqlayoutitem->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnIsEmpty(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_IsEmpty_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLayoutItem_HasHeightForWidth(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return vqlayoutitem->hasHeightForWidth();
    } else {
        return vqlayoutitem->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QLayoutItem_QBaseHasHeightForWidth(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_HasHeightForWidth_IsBase(true);
        return vqlayoutitem->hasHeightForWidth();
    } else {
        return vqlayoutitem->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnHasHeightForWidth(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_HasHeightForWidth_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayoutItem_HeightForWidth(const QLayoutItem* self, int param1) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return vqlayoutitem->heightForWidth(static_cast<int>(param1));
    } else {
        return vqlayoutitem->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QLayoutItem_QBaseHeightForWidth(const QLayoutItem* self, int param1) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_HeightForWidth_IsBase(true);
        return vqlayoutitem->heightForWidth(static_cast<int>(param1));
    } else {
        return vqlayoutitem->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnHeightForWidth(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_HeightForWidth_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayoutItem_MinimumHeightForWidth(const QLayoutItem* self, int param1) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return vqlayoutitem->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqlayoutitem->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QLayoutItem_QBaseMinimumHeightForWidth(const QLayoutItem* self, int param1) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_MinimumHeightForWidth_IsBase(true);
        return vqlayoutitem->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqlayoutitem->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMinimumHeightForWidth(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayoutItem_Invalidate(QLayoutItem* self) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->invalidate();
    } else {
        vqlayoutitem->invalidate();
    }
}

// Base class handler implementation
void QLayoutItem_QBaseInvalidate(QLayoutItem* self) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_Invalidate_IsBase(true);
        vqlayoutitem->invalidate();
    } else {
        vqlayoutitem->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnInvalidate(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_Invalidate_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QLayoutItem_Widget(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return vqlayoutitem->widget();
    } else {
        return vqlayoutitem->widget();
    }
}

// Base class handler implementation
QWidget* QLayoutItem_QBaseWidget(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_Widget_IsBase(true);
        return vqlayoutitem->widget();
    } else {
        return vqlayoutitem->widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnWidget(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_Widget_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QLayoutItem_Layout(QLayoutItem* self) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        return vqlayoutitem->layout();
    } else {
        return vqlayoutitem->layout();
    }
}

// Base class handler implementation
QLayout* QLayoutItem_QBaseLayout(QLayoutItem* self) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_Layout_IsBase(true);
        return vqlayoutitem->layout();
    } else {
        return vqlayoutitem->layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnLayout(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_Layout_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QLayoutItem_SpacerItem(QLayoutItem* self) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        return vqlayoutitem->spacerItem();
    } else {
        return vqlayoutitem->spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QLayoutItem_QBaseSpacerItem(QLayoutItem* self) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_SpacerItem_IsBase(true);
        return vqlayoutitem->spacerItem();
    } else {
        return vqlayoutitem->spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSpacerItem(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_SpacerItem_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayoutItem_ControlTypes(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        return static_cast<int>(vqlayoutitem->controlTypes());
    } else {
        return static_cast<int>(vqlayoutitem->controlTypes());
    }
}

// Base class handler implementation
int QLayoutItem_QBaseControlTypes(const QLayoutItem* self) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_ControlTypes_IsBase(true);
        return static_cast<int>(vqlayoutitem->controlTypes());
    } else {
        return static_cast<int>(vqlayoutitem->controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnControlTypes(const QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self))) {
        vqlayoutitem->setQLayoutItem_ControlTypes_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayoutItem_OperatorAssign(QLayoutItem* self, QLayoutItem* param1) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->operator=(*param1);
    } else {
        vqlayoutitem->operator=(*param1);
    }
}

// Base class handler implementation
void QLayoutItem_QBaseOperatorAssign(QLayoutItem* self, QLayoutItem* param1) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_OperatorAssign_IsBase(true);
        vqlayoutitem->operator=(*param1);
    } else {
        vqlayoutitem->operator=(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnOperatorAssign(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self)) {
        vqlayoutitem->setQLayoutItem_OperatorAssign_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_OperatorAssign_Callback>(slot));
    }
}

void QLayoutItem_Delete(QLayoutItem* self) {
    delete self;
}

QSpacerItem* QSpacerItem_new(int w, int h) {
    return new VirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h));
}

QSpacerItem* QSpacerItem_new2(QSpacerItem* param1) {
    return new VirtualQSpacerItem(*param1);
}

QSpacerItem* QSpacerItem_new3(int w, int h, int hData) {
    return new VirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData));
}

QSpacerItem* QSpacerItem_new4(int w, int h, int hData, int vData) {
    return new VirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

void QSpacerItem_ChangeSize(QSpacerItem* self, int w, int h) {
    self->changeSize(static_cast<int>(w), static_cast<int>(h));
}

QSizePolicy* QSpacerItem_SizePolicy(const QSpacerItem* self) {
    return new QSizePolicy(self->sizePolicy());
}

void QSpacerItem_ChangeSize3(QSpacerItem* self, int w, int h, int hData) {
    self->changeSize(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData));
}

void QSpacerItem_ChangeSize4(QSpacerItem* self, int w, int h, int hData, int vData) {
    self->changeSize(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

// Derived class handler implementation
QSize* QSpacerItem_SizeHint(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return new QSize(vqspaceritem->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QSpacerItem_QBaseSizeHint(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_SizeHint_IsBase(true);
        return new QSize(vqspaceritem->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSizeHint(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_SizeHint_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSpacerItem_MinimumSize(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return new QSize(vqspaceritem->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Base class handler implementation
QSize* QSpacerItem_QBaseMinimumSize(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_MinimumSize_IsBase(true);
        return new QSize(vqspaceritem->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnMinimumSize(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_MinimumSize_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSpacerItem_MaximumSize(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return new QSize(vqspaceritem->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Base class handler implementation
QSize* QSpacerItem_QBaseMaximumSize(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_MaximumSize_IsBase(true);
        return new QSize(vqspaceritem->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnMaximumSize(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_MaximumSize_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpacerItem_ExpandingDirections(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return static_cast<int>(vqspaceritem->expandingDirections());
    } else {
        return static_cast<int>(vqspaceritem->expandingDirections());
    }
}

// Base class handler implementation
int QSpacerItem_QBaseExpandingDirections(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqspaceritem->expandingDirections());
    } else {
        return static_cast<int>(vqspaceritem->expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnExpandingDirections(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_ExpandingDirections_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpacerItem_IsEmpty(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return vqspaceritem->isEmpty();
    } else {
        return vqspaceritem->isEmpty();
    }
}

// Base class handler implementation
bool QSpacerItem_QBaseIsEmpty(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_IsEmpty_IsBase(true);
        return vqspaceritem->isEmpty();
    } else {
        return vqspaceritem->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnIsEmpty(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_IsEmpty_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpacerItem_SetGeometry(QSpacerItem* self, QRect* geometry) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setGeometry(*geometry);
    } else {
        vqspaceritem->setGeometry(*geometry);
    }
}

// Base class handler implementation
void QSpacerItem_QBaseSetGeometry(QSpacerItem* self, QRect* geometry) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setQSpacerItem_SetGeometry_IsBase(true);
        vqspaceritem->setGeometry(*geometry);
    } else {
        vqspaceritem->setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSetGeometry(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setQSpacerItem_SetGeometry_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QSpacerItem_Geometry(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return new QRect(vqspaceritem->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Base class handler implementation
QRect* QSpacerItem_QBaseGeometry(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_Geometry_IsBase(true);
        return new QRect(vqspaceritem->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnGeometry(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_Geometry_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        return vqspaceritem->spacerItem();
    } else {
        return vqspaceritem->spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QSpacerItem_QBaseSpacerItem(QSpacerItem* self) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setQSpacerItem_SpacerItem_IsBase(true);
        return vqspaceritem->spacerItem();
    } else {
        return vqspaceritem->spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSpacerItem(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setQSpacerItem_SpacerItem_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSpacerItem_HasHeightForWidth(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return vqspaceritem->hasHeightForWidth();
    } else {
        return vqspaceritem->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSpacerItem_QBaseHasHeightForWidth(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_HasHeightForWidth_IsBase(true);
        return vqspaceritem->hasHeightForWidth();
    } else {
        return vqspaceritem->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnHasHeightForWidth(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpacerItem_HeightForWidth(const QSpacerItem* self, int param1) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return vqspaceritem->heightForWidth(static_cast<int>(param1));
    } else {
        return vqspaceritem->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSpacerItem_QBaseHeightForWidth(const QSpacerItem* self, int param1) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_HeightForWidth_IsBase(true);
        return vqspaceritem->heightForWidth(static_cast<int>(param1));
    } else {
        return vqspaceritem->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnHeightForWidth(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_HeightForWidth_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpacerItem_MinimumHeightForWidth(const QSpacerItem* self, int param1) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return vqspaceritem->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqspaceritem->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSpacerItem_QBaseMinimumHeightForWidth(const QSpacerItem* self, int param1) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_MinimumHeightForWidth_IsBase(true);
        return vqspaceritem->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqspaceritem->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnMinimumHeightForWidth(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void QSpacerItem_Invalidate(QSpacerItem* self) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->invalidate();
    } else {
        vqspaceritem->invalidate();
    }
}

// Base class handler implementation
void QSpacerItem_QBaseInvalidate(QSpacerItem* self) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setQSpacerItem_Invalidate_IsBase(true);
        vqspaceritem->invalidate();
    } else {
        vqspaceritem->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnInvalidate(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setQSpacerItem_Invalidate_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QSpacerItem_Widget(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return vqspaceritem->widget();
    } else {
        return vqspaceritem->widget();
    }
}

// Base class handler implementation
QWidget* QSpacerItem_QBaseWidget(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_Widget_IsBase(true);
        return vqspaceritem->widget();
    } else {
        return vqspaceritem->widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnWidget(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_Widget_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QSpacerItem_Layout(QSpacerItem* self) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        return vqspaceritem->layout();
    } else {
        return vqspaceritem->layout();
    }
}

// Base class handler implementation
QLayout* QSpacerItem_QBaseLayout(QSpacerItem* self) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setQSpacerItem_Layout_IsBase(true);
        return vqspaceritem->layout();
    } else {
        return vqspaceritem->layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnLayout(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self)) {
        vqspaceritem->setQSpacerItem_Layout_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
int QSpacerItem_ControlTypes(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        return static_cast<int>(vqspaceritem->controlTypes());
    } else {
        return static_cast<int>(vqspaceritem->controlTypes());
    }
}

// Base class handler implementation
int QSpacerItem_QBaseControlTypes(const QSpacerItem* self) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_ControlTypes_IsBase(true);
        return static_cast<int>(vqspaceritem->controlTypes());
    } else {
        return static_cast<int>(vqspaceritem->controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnControlTypes(const QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self))) {
        vqspaceritem->setQSpacerItem_ControlTypes_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_ControlTypes_Callback>(slot));
    }
}

void QSpacerItem_Delete(QSpacerItem* self) {
    delete self;
}

QWidgetItem* QWidgetItem_new(QWidget* w) {
    return new VirtualQWidgetItem(w);
}

// Derived class handler implementation
QSize* QWidgetItem_SizeHint(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return new QSize(vqwidgetitem->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QWidgetItem_QBaseSizeHint(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_SizeHint_IsBase(true);
        return new QSize(vqwidgetitem->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnSizeHint(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_SizeHint_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWidgetItem_MinimumSize(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return new QSize(vqwidgetitem->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Base class handler implementation
QSize* QWidgetItem_QBaseMinimumSize(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_MinimumSize_IsBase(true);
        return new QSize(vqwidgetitem->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMinimumSize(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_MinimumSize_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWidgetItem_MaximumSize(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return new QSize(vqwidgetitem->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Base class handler implementation
QSize* QWidgetItem_QBaseMaximumSize(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_MaximumSize_IsBase(true);
        return new QSize(vqwidgetitem->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMaximumSize(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_MaximumSize_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetItem_ExpandingDirections(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return static_cast<int>(vqwidgetitem->expandingDirections());
    } else {
        return static_cast<int>(vqwidgetitem->expandingDirections());
    }
}

// Base class handler implementation
int QWidgetItem_QBaseExpandingDirections(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqwidgetitem->expandingDirections());
    } else {
        return static_cast<int>(vqwidgetitem->expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnExpandingDirections(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_ExpandingDirections_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidgetItem_IsEmpty(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return vqwidgetitem->isEmpty();
    } else {
        return vqwidgetitem->isEmpty();
    }
}

// Base class handler implementation
bool QWidgetItem_QBaseIsEmpty(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_IsEmpty_IsBase(true);
        return vqwidgetitem->isEmpty();
    } else {
        return vqwidgetitem->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnIsEmpty(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_IsEmpty_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetItem_SetGeometry(QWidgetItem* self, QRect* geometry) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setGeometry(*geometry);
    } else {
        vqwidgetitem->setGeometry(*geometry);
    }
}

// Base class handler implementation
void QWidgetItem_QBaseSetGeometry(QWidgetItem* self, QRect* geometry) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setQWidgetItem_SetGeometry_IsBase(true);
        vqwidgetitem->setGeometry(*geometry);
    } else {
        vqwidgetitem->setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnSetGeometry(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setQWidgetItem_SetGeometry_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QWidgetItem_Geometry(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return new QRect(vqwidgetitem->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Base class handler implementation
QRect* QWidgetItem_QBaseGeometry(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_Geometry_IsBase(true);
        return new QRect(vqwidgetitem->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnGeometry(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_Geometry_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QWidgetItem_Widget(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return vqwidgetitem->widget();
    } else {
        return vqwidgetitem->widget();
    }
}

// Base class handler implementation
QWidget* QWidgetItem_QBaseWidget(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_Widget_IsBase(true);
        return vqwidgetitem->widget();
    } else {
        return vqwidgetitem->widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnWidget(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_Widget_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidgetItem_HasHeightForWidth(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return vqwidgetitem->hasHeightForWidth();
    } else {
        return vqwidgetitem->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QWidgetItem_QBaseHasHeightForWidth(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_HasHeightForWidth_IsBase(true);
        return vqwidgetitem->hasHeightForWidth();
    } else {
        return vqwidgetitem->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnHasHeightForWidth(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetItem_HeightForWidth(const QWidgetItem* self, int param1) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return vqwidgetitem->heightForWidth(static_cast<int>(param1));
    } else {
        return vqwidgetitem->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWidgetItem_QBaseHeightForWidth(const QWidgetItem* self, int param1) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_HeightForWidth_IsBase(true);
        return vqwidgetitem->heightForWidth(static_cast<int>(param1));
    } else {
        return vqwidgetitem->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnHeightForWidth(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_HeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetItem_MinimumHeightForWidth(const QWidgetItem* self, int param1) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return vqwidgetitem->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqwidgetitem->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWidgetItem_QBaseMinimumHeightForWidth(const QWidgetItem* self, int param1) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_MinimumHeightForWidth_IsBase(true);
        return vqwidgetitem->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqwidgetitem->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMinimumHeightForWidth(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetItem_ControlTypes(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        return static_cast<int>(vqwidgetitem->controlTypes());
    } else {
        return static_cast<int>(vqwidgetitem->controlTypes());
    }
}

// Base class handler implementation
int QWidgetItem_QBaseControlTypes(const QWidgetItem* self) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_ControlTypes_IsBase(true);
        return static_cast<int>(vqwidgetitem->controlTypes());
    } else {
        return static_cast<int>(vqwidgetitem->controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnControlTypes(const QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self))) {
        vqwidgetitem->setQWidgetItem_ControlTypes_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetItem_Invalidate(QWidgetItem* self) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->invalidate();
    } else {
        vqwidgetitem->invalidate();
    }
}

// Base class handler implementation
void QWidgetItem_QBaseInvalidate(QWidgetItem* self) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setQWidgetItem_Invalidate_IsBase(true);
        vqwidgetitem->invalidate();
    } else {
        vqwidgetitem->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnInvalidate(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setQWidgetItem_Invalidate_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QWidgetItem_Layout(QWidgetItem* self) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        return vqwidgetitem->layout();
    } else {
        return vqwidgetitem->layout();
    }
}

// Base class handler implementation
QLayout* QWidgetItem_QBaseLayout(QWidgetItem* self) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setQWidgetItem_Layout_IsBase(true);
        return vqwidgetitem->layout();
    } else {
        return vqwidgetitem->layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnLayout(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setQWidgetItem_Layout_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QWidgetItem_SpacerItem(QWidgetItem* self) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        return vqwidgetitem->spacerItem();
    } else {
        return vqwidgetitem->spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QWidgetItem_QBaseSpacerItem(QWidgetItem* self) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setQWidgetItem_SpacerItem_IsBase(true);
        return vqwidgetitem->spacerItem();
    } else {
        return vqwidgetitem->spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnSpacerItem(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self)) {
        vqwidgetitem->setQWidgetItem_SpacerItem_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_SpacerItem_Callback>(slot));
    }
}

void QWidgetItem_Delete(QWidgetItem* self) {
    delete self;
}

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget) {
    return new VirtualQWidgetItemV2(widget);
}

// Derived class handler implementation
QSize* QWidgetItemV2_SizeHint(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return new QSize(vqwidgetitemv2->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QWidgetItemV2_QBaseSizeHint(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_SizeHint_IsBase(true);
        return new QSize(vqwidgetitemv2->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnSizeHint(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_SizeHint_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWidgetItemV2_MinimumSize(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return new QSize(vqwidgetitemv2->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Base class handler implementation
QSize* QWidgetItemV2_QBaseMinimumSize(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_MinimumSize_IsBase(true);
        return new QSize(vqwidgetitemv2->minimumSize());
    } else {
        return new QSize(self->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnMinimumSize(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_MinimumSize_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWidgetItemV2_MaximumSize(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return new QSize(vqwidgetitemv2->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Base class handler implementation
QSize* QWidgetItemV2_QBaseMaximumSize(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_MaximumSize_IsBase(true);
        return new QSize(vqwidgetitemv2->maximumSize());
    } else {
        return new QSize(self->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnMaximumSize(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_MaximumSize_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetItemV2_HeightForWidth(const QWidgetItemV2* self, int width) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return vqwidgetitemv2->heightForWidth(static_cast<int>(width));
    } else {
        return vqwidgetitemv2->heightForWidth(static_cast<int>(width));
    }
}

// Base class handler implementation
int QWidgetItemV2_QBaseHeightForWidth(const QWidgetItemV2* self, int width) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_HeightForWidth_IsBase(true);
        return vqwidgetitemv2->heightForWidth(static_cast<int>(width));
    } else {
        return vqwidgetitemv2->heightForWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnHeightForWidth(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_HeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetItemV2_ExpandingDirections(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return static_cast<int>(vqwidgetitemv2->expandingDirections());
    } else {
        return static_cast<int>(vqwidgetitemv2->expandingDirections());
    }
}

// Base class handler implementation
int QWidgetItemV2_QBaseExpandingDirections(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqwidgetitemv2->expandingDirections());
    } else {
        return static_cast<int>(vqwidgetitemv2->expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnExpandingDirections(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_ExpandingDirections_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidgetItemV2_IsEmpty(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return vqwidgetitemv2->isEmpty();
    } else {
        return vqwidgetitemv2->isEmpty();
    }
}

// Base class handler implementation
bool QWidgetItemV2_QBaseIsEmpty(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_IsEmpty_IsBase(true);
        return vqwidgetitemv2->isEmpty();
    } else {
        return vqwidgetitemv2->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnIsEmpty(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_IsEmpty_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetItemV2_SetGeometry(QWidgetItemV2* self, QRect* geometry) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setGeometry(*geometry);
    } else {
        vqwidgetitemv2->setGeometry(*geometry);
    }
}

// Base class handler implementation
void QWidgetItemV2_QBaseSetGeometry(QWidgetItemV2* self, QRect* geometry) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setQWidgetItemV2_SetGeometry_IsBase(true);
        vqwidgetitemv2->setGeometry(*geometry);
    } else {
        vqwidgetitemv2->setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnSetGeometry(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setQWidgetItemV2_SetGeometry_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QWidgetItemV2_Geometry(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return new QRect(vqwidgetitemv2->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Base class handler implementation
QRect* QWidgetItemV2_QBaseGeometry(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_Geometry_IsBase(true);
        return new QRect(vqwidgetitemv2->geometry());
    } else {
        return new QRect(self->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnGeometry(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_Geometry_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QWidgetItemV2_Widget(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return vqwidgetitemv2->widget();
    } else {
        return vqwidgetitemv2->widget();
    }
}

// Base class handler implementation
QWidget* QWidgetItemV2_QBaseWidget(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_Widget_IsBase(true);
        return vqwidgetitemv2->widget();
    } else {
        return vqwidgetitemv2->widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnWidget(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_Widget_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidgetItemV2_HasHeightForWidth(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return vqwidgetitemv2->hasHeightForWidth();
    } else {
        return vqwidgetitemv2->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QWidgetItemV2_QBaseHasHeightForWidth(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_HasHeightForWidth_IsBase(true);
        return vqwidgetitemv2->hasHeightForWidth();
    } else {
        return vqwidgetitemv2->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnHasHeightForWidth(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetItemV2_MinimumHeightForWidth(const QWidgetItemV2* self, int param1) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return vqwidgetitemv2->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqwidgetitemv2->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWidgetItemV2_QBaseMinimumHeightForWidth(const QWidgetItemV2* self, int param1) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_MinimumHeightForWidth_IsBase(true);
        return vqwidgetitemv2->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return vqwidgetitemv2->minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnMinimumHeightForWidth(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidgetItemV2_ControlTypes(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        return static_cast<int>(vqwidgetitemv2->controlTypes());
    } else {
        return static_cast<int>(vqwidgetitemv2->controlTypes());
    }
}

// Base class handler implementation
int QWidgetItemV2_QBaseControlTypes(const QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_ControlTypes_IsBase(true);
        return static_cast<int>(vqwidgetitemv2->controlTypes());
    } else {
        return static_cast<int>(vqwidgetitemv2->controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnControlTypes(const QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self))) {
        vqwidgetitemv2->setQWidgetItemV2_ControlTypes_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidgetItemV2_Invalidate(QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->invalidate();
    } else {
        vqwidgetitemv2->invalidate();
    }
}

// Base class handler implementation
void QWidgetItemV2_QBaseInvalidate(QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setQWidgetItemV2_Invalidate_IsBase(true);
        vqwidgetitemv2->invalidate();
    } else {
        vqwidgetitemv2->invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnInvalidate(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setQWidgetItemV2_Invalidate_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QWidgetItemV2_Layout(QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        return vqwidgetitemv2->layout();
    } else {
        return vqwidgetitemv2->layout();
    }
}

// Base class handler implementation
QLayout* QWidgetItemV2_QBaseLayout(QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setQWidgetItemV2_Layout_IsBase(true);
        return vqwidgetitemv2->layout();
    } else {
        return vqwidgetitemv2->layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnLayout(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setQWidgetItemV2_Layout_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QWidgetItemV2_SpacerItem(QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        return vqwidgetitemv2->spacerItem();
    } else {
        return vqwidgetitemv2->spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QWidgetItemV2_QBaseSpacerItem(QWidgetItemV2* self) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setQWidgetItemV2_SpacerItem_IsBase(true);
        return vqwidgetitemv2->spacerItem();
    } else {
        return vqwidgetitemv2->spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnSpacerItem(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self)) {
        vqwidgetitemv2->setQWidgetItemV2_SpacerItem_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_SpacerItem_Callback>(slot));
    }
}

void QWidgetItemV2_Delete(QWidgetItemV2* self) {
    delete self;
}

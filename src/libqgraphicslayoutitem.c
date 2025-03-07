#include "libqgraphicsitem.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqgraphicslayoutitem.h"

/// https://doc.qt.io/qt-6/qgraphicslayoutitem.html

/// q_graphicslayoutitem_new constructs a new QGraphicsLayoutItem object.
///
///
QGraphicsLayoutItem* q_graphicslayoutitem_new() {
    return QGraphicsLayoutItem_new();
}

/// q_graphicslayoutitem_new2 constructs a new QGraphicsLayoutItem object.
///
/// ``` QGraphicsLayoutItem* parent ```
QGraphicsLayoutItem* q_graphicslayoutitem_new2(void* parent) {
    return QGraphicsLayoutItem_new2((QGraphicsLayoutItem*)parent);
}

/// q_graphicslayoutitem_new3 constructs a new QGraphicsLayoutItem object.
///
/// ``` QGraphicsLayoutItem* parent, bool isLayout ```
QGraphicsLayoutItem* q_graphicslayoutitem_new3(void* parent, bool isLayout) {
    return QGraphicsLayoutItem_new3((QGraphicsLayoutItem*)parent, isLayout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayoutItem* self, QSizePolicy* policy ```
void q_graphicslayoutitem_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayoutItem* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicslayoutitem_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsLayoutItem* self ```
QSizePolicy* q_graphicslayoutitem_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLayoutItem* self, QSizeF* size ```
void q_graphicslayoutitem_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLayoutItem* self, double w, double h ```
void q_graphicslayoutitem_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsLayoutItem* self ```
QSizeF* q_graphicslayoutitem_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsLayoutItem* self, double width ```
void q_graphicslayoutitem_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsLayoutItem* self, double height ```
void q_graphicslayoutitem_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLayoutItem* self, QSizeF* size ```
void q_graphicslayoutitem_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLayoutItem* self, double w, double h ```
void q_graphicslayoutitem_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsLayoutItem* self ```
QSizeF* q_graphicslayoutitem_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsLayoutItem* self, double width ```
void q_graphicslayoutitem_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsLayoutItem* self, double height ```
void q_graphicslayoutitem_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLayoutItem* self, QSizeF* size ```
void q_graphicslayoutitem_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLayoutItem* self, double w, double h ```
void q_graphicslayoutitem_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsLayoutItem* self ```
QSizeF* q_graphicslayoutitem_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsLayoutItem* self, double width ```
void q_graphicslayoutitem_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsLayoutItem* self, double height ```
void q_graphicslayoutitem_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// ``` QGraphicsLayoutItem* self, QRectF* rect ```
void q_graphicslayoutitem_set_geometry(void* self, void* rect) {
    QGraphicsLayoutItem_SetGeometry((QGraphicsLayoutItem*)self, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)(QGraphicsLayoutItem*, QRectF*) ```
void q_graphicslayoutitem_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsLayoutItem_OnSetGeometry((QGraphicsLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, QRectF* rect ```
void q_graphicslayoutitem_qbase_set_geometry(void* self, void* rect) {
    QGraphicsLayoutItem_QBaseSetGeometry((QGraphicsLayoutItem*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsLayoutItem* self ```
QRectF* q_graphicslayoutitem_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// ``` QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslayoutitem_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLayoutItem_GetContentsMargins((QGraphicsLayoutItem*)self, left, top, right, bottom);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)(QGraphicsLayoutItem*, double*, double*, double*, double*) ```
void q_graphicslayoutitem_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsLayoutItem_OnGetContentsMargins((QGraphicsLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslayoutitem_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLayoutItem_QBaseGetContentsMargins((QGraphicsLayoutItem*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsLayoutItem* self ```
QRectF* q_graphicslayoutitem_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLayoutItem* self, enum Qt__SizeHint which ```
QSizeF* q_graphicslayoutitem_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// ``` QGraphicsLayoutItem* self ```
void q_graphicslayoutitem_update_geometry(void* self) {
    QGraphicsLayoutItem_UpdateGeometry((QGraphicsLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)() ```
void q_graphicslayoutitem_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsLayoutItem_OnUpdateGeometry((QGraphicsLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self ```
void q_graphicslayoutitem_qbase_update_geometry(void* self) {
    QGraphicsLayoutItem_QBaseUpdateGeometry((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// ``` QGraphicsLayoutItem* self ```
bool q_graphicslayoutitem_is_empty(void* self) {
    return QGraphicsLayoutItem_IsEmpty((QGraphicsLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, bool (*slot)() ```
void q_graphicslayoutitem_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsLayoutItem_OnIsEmpty((QGraphicsLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self ```
bool q_graphicslayoutitem_qbase_is_empty(void* self) {
    return QGraphicsLayoutItem_QBaseIsEmpty((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsLayoutItem* self ```
QGraphicsLayoutItem* q_graphicslayoutitem_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent ```
void q_graphicslayoutitem_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsLayoutItem* self ```
bool q_graphicslayoutitem_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsLayoutItem* self ```
QGraphicsItem* q_graphicslayoutitem_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsLayoutItem* self ```
bool q_graphicslayoutitem_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// ``` QGraphicsLayoutItem* self, QGraphicsItem* item ```
void q_graphicslayoutitem_set_graphics_item(void* self, void* item) {
    QGraphicsLayoutItem_SetGraphicsItem((QGraphicsLayoutItem*)self, (QGraphicsItem*)item);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)(QGraphicsLayoutItem*, QGraphicsItem*) ```
void q_graphicslayoutitem_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsLayoutItem_OnSetGraphicsItem((QGraphicsLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, QGraphicsItem* item ```
void q_graphicslayoutitem_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsLayoutItem_QBaseSetGraphicsItem((QGraphicsLayoutItem*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// ``` QGraphicsLayoutItem* self, bool ownedByLayout ```
void q_graphicslayoutitem_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLayoutItem_SetOwnedByLayout((QGraphicsLayoutItem*)self, ownedByLayout);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)(QGraphicsLayoutItem*, bool) ```
void q_graphicslayoutitem_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsLayoutItem_OnSetOwnedByLayout((QGraphicsLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, bool ownedByLayout ```
void q_graphicslayoutitem_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLayoutItem_QBaseSetOwnedByLayout((QGraphicsLayoutItem*)self, ownedByLayout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// ``` QGraphicsLayoutItem* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayoutitem_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_SizeHint((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, QSizeF* (*slot)(QGraphicsLayoutItem*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicslayoutitem_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsLayoutItem_OnSizeHint((QGraphicsLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayoutitem_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_QBaseSizeHint((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayoutItem* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicslayoutitem_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLayoutItem* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayoutitem_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsLayoutItem* self ```
void q_graphicslayoutitem_delete(void* self) {
    QGraphicsLayoutItem_Delete((QGraphicsLayoutItem*)(self));
}
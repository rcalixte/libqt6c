#include "libqevent.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayout.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicslinearlayout.hpp"
#include "libqgraphicslinearlayout.h"

/// https://doc.qt.io/qt-6/qgraphicslinearlayout.html

/// q_graphicslinearlayout_new constructs a new QGraphicsLinearLayout object.
///
///
QGraphicsLinearLayout* q_graphicslinearlayout_new() {
    return QGraphicsLinearLayout_new();
}

/// q_graphicslinearlayout_new2 constructs a new QGraphicsLinearLayout object.
///
/// ``` enum Qt__Orientation orientation ```
QGraphicsLinearLayout* q_graphicslinearlayout_new2(int64_t orientation) {
    return QGraphicsLinearLayout_new2(orientation);
}

/// q_graphicslinearlayout_new3 constructs a new QGraphicsLinearLayout object.
///
/// ``` QGraphicsLayoutItem* parent ```
QGraphicsLinearLayout* q_graphicslinearlayout_new3(void* parent) {
    return QGraphicsLinearLayout_new3((QGraphicsLayoutItem*)parent);
}

/// q_graphicslinearlayout_new4 constructs a new QGraphicsLinearLayout object.
///
/// ``` enum Qt__Orientation orientation, QGraphicsLayoutItem* parent ```
QGraphicsLinearLayout* q_graphicslinearlayout_new4(int64_t orientation, void* parent) {
    return QGraphicsLinearLayout_new4(orientation, (QGraphicsLayoutItem*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setOrientation)
///
/// ``` QGraphicsLinearLayout* self, enum Qt__Orientation orientation ```
void q_graphicslinearlayout_set_orientation(void* self, int64_t orientation) {
    QGraphicsLinearLayout_SetOrientation((QGraphicsLinearLayout*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#orientation)
///
/// ``` QGraphicsLinearLayout* self ```
int64_t q_graphicslinearlayout_orientation(void* self) {
    return QGraphicsLinearLayout_Orientation((QGraphicsLinearLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addItem)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item ```
void q_graphicslinearlayout_add_item(void* self, void* item) {
    QGraphicsLinearLayout_AddItem((QGraphicsLinearLayout*)self, (QGraphicsLayoutItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_add_stretch(void* self) {
    QGraphicsLinearLayout_AddStretch((QGraphicsLinearLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertItem)
///
/// ``` QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item ```
void q_graphicslinearlayout_insert_item(void* self, int index, void* item) {
    QGraphicsLinearLayout_InsertItem((QGraphicsLinearLayout*)self, index, (QGraphicsLayoutItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
///
/// ``` QGraphicsLinearLayout* self, int index ```
void q_graphicslinearlayout_insert_stretch(void* self, int index) {
    QGraphicsLinearLayout_InsertStretch((QGraphicsLinearLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeItem)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item ```
void q_graphicslinearlayout_remove_item(void* self, void* item) {
    QGraphicsLinearLayout_RemoveItem((QGraphicsLinearLayout*)self, (QGraphicsLayoutItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
///
/// ``` QGraphicsLinearLayout* self, int index ```
void q_graphicslinearlayout_remove_at(void* self, int index) {
    QGraphicsLinearLayout_RemoveAt((QGraphicsLinearLayout*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, int) ```
void q_graphicslinearlayout_on_remove_at(void* self, void (*slot)(void*, int)) {
    QGraphicsLinearLayout_OnRemoveAt((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self, int index ```
void q_graphicslinearlayout_qbase_remove_at(void* self, int index) {
    QGraphicsLinearLayout_QBaseRemoveAt((QGraphicsLinearLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setSpacing)
///
/// ``` QGraphicsLinearLayout* self, double spacing ```
void q_graphicslinearlayout_set_spacing(void* self, double spacing) {
    QGraphicsLinearLayout_SetSpacing((QGraphicsLinearLayout*)self, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#spacing)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_spacing(void* self) {
    return QGraphicsLinearLayout_Spacing((QGraphicsLinearLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setItemSpacing)
///
/// ``` QGraphicsLinearLayout* self, int index, double spacing ```
void q_graphicslinearlayout_set_item_spacing(void* self, int index, double spacing) {
    QGraphicsLinearLayout_SetItemSpacing((QGraphicsLinearLayout*)self, index, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemSpacing)
///
/// ``` QGraphicsLinearLayout* self, int index ```
double q_graphicslinearlayout_item_spacing(void* self, int index) {
    return QGraphicsLinearLayout_ItemSpacing((QGraphicsLinearLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setStretchFactor)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch ```
void q_graphicslinearlayout_set_stretch_factor(void* self, void* item, int stretch) {
    QGraphicsLinearLayout_SetStretchFactor((QGraphicsLinearLayout*)self, (QGraphicsLayoutItem*)item, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#stretchFactor)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item ```
int32_t q_graphicslinearlayout_stretch_factor(void* self, void* item) {
    return QGraphicsLinearLayout_StretchFactor((QGraphicsLinearLayout*)self, (QGraphicsLayoutItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setAlignment)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment ```
void q_graphicslinearlayout_set_alignment(void* self, void* item, int64_t alignment) {
    QGraphicsLinearLayout_SetAlignment((QGraphicsLinearLayout*)self, (QGraphicsLayoutItem*)item, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#alignment)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item ```
int64_t q_graphicslinearlayout_alignment(void* self, void* item) {
    return QGraphicsLinearLayout_Alignment((QGraphicsLinearLayout*)self, (QGraphicsLayoutItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
///
/// ``` QGraphicsLinearLayout* self, QRectF* rect ```
void q_graphicslinearlayout_set_geometry(void* self, void* rect) {
    QGraphicsLinearLayout_SetGeometry((QGraphicsLinearLayout*)self, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, QRectF*) ```
void q_graphicslinearlayout_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsLinearLayout_OnSetGeometry((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self, QRectF* rect ```
void q_graphicslinearlayout_qbase_set_geometry(void* self, void* rect) {
    QGraphicsLinearLayout_QBaseSetGeometry((QGraphicsLinearLayout*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
///
/// ``` QGraphicsLinearLayout* self ```
int32_t q_graphicslinearlayout_count(void* self) {
    return QGraphicsLinearLayout_Count((QGraphicsLinearLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, int32_t (*slot)() ```
void q_graphicslinearlayout_on_count(void* self, int32_t (*slot)()) {
    QGraphicsLinearLayout_OnCount((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self ```
int32_t q_graphicslinearlayout_qbase_count(void* self) {
    return QGraphicsLinearLayout_QBaseCount((QGraphicsLinearLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
///
/// ``` QGraphicsLinearLayout* self, int index ```
QGraphicsLayoutItem* q_graphicslinearlayout_item_at(void* self, int index) {
    return QGraphicsLinearLayout_ItemAt((QGraphicsLinearLayout*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* (*slot)(QGraphicsLinearLayout*, int) ```
void q_graphicslinearlayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int)) {
    QGraphicsLinearLayout_OnItemAt((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self, int index ```
QGraphicsLayoutItem* q_graphicslinearlayout_qbase_item_at(void* self, int index) {
    return QGraphicsLinearLayout_QBaseItemAt((QGraphicsLinearLayout*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_invalidate(void* self) {
    QGraphicsLinearLayout_Invalidate((QGraphicsLinearLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)() ```
void q_graphicslinearlayout_on_invalidate(void* self, void (*slot)()) {
    QGraphicsLinearLayout_OnInvalidate((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_qbase_invalidate(void* self) {
    QGraphicsLinearLayout_QBaseInvalidate((QGraphicsLinearLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
///
/// ``` QGraphicsLinearLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslinearlayout_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsLinearLayout_SizeHint((QGraphicsLinearLayout*)self, which, (QSizeF*)constraint);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, QSizeF* (*slot)(QGraphicsLinearLayout*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicslinearlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsLinearLayout_OnSizeHint((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslinearlayout_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsLinearLayout_QBaseSizeHint((QGraphicsLinearLayout*)self, which, (QSizeF*)constraint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_dump(void* self) {
    QGraphicsLinearLayout_Dump((QGraphicsLinearLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
///
/// ``` QGraphicsLinearLayout* self, int stretch ```
void q_graphicslinearlayout_add_stretch1(void* self, int stretch) {
    QGraphicsLinearLayout_AddStretch1((QGraphicsLinearLayout*)self, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
///
/// ``` QGraphicsLinearLayout* self, int index, int stretch ```
void q_graphicslinearlayout_insert_stretch2(void* self, int index, int stretch) {
    QGraphicsLinearLayout_InsertStretch2((QGraphicsLinearLayout*)self, index, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
///
/// ``` QGraphicsLinearLayout* self, int indent ```
void q_graphicslinearlayout_dump1(void* self, int indent) {
    QGraphicsLinearLayout_Dump1((QGraphicsLinearLayout*)self, indent);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// ``` QGraphicsLinearLayout* self, double left, double top, double right, double bottom ```
void q_graphicslinearlayout_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsLayout_SetContentsMargins((QGraphicsLayout*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_activate(void* self) {
    QGraphicsLayout_Activate((QGraphicsLayout*)self);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_is_activated(void* self) {
    return QGraphicsLayout_IsActivated((QGraphicsLayout*)self);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// ``` bool enable ```
void q_graphicslinearlayout_set_instant_invalidate_propagation(bool enable) {
    QGraphicsLayout_SetInstantInvalidatePropagation(enable);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
///
bool q_graphicslinearlayout_instant_invalidate_propagation() {
    return QGraphicsLayout_InstantInvalidatePropagation();
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLinearLayout* self, QSizePolicy* policy ```
void q_graphicslinearlayout_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLinearLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicslinearlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsLinearLayout* self ```
QSizePolicy* q_graphicslinearlayout_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLinearLayout* self, QSizeF* size ```
void q_graphicslinearlayout_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLinearLayout* self, double w, double h ```
void q_graphicslinearlayout_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsLinearLayout* self ```
QSizeF* q_graphicslinearlayout_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsLinearLayout* self, double width ```
void q_graphicslinearlayout_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsLinearLayout* self, double height ```
void q_graphicslinearlayout_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLinearLayout* self, QSizeF* size ```
void q_graphicslinearlayout_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLinearLayout* self, double w, double h ```
void q_graphicslinearlayout_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsLinearLayout* self ```
QSizeF* q_graphicslinearlayout_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsLinearLayout* self, double width ```
void q_graphicslinearlayout_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsLinearLayout* self, double height ```
void q_graphicslinearlayout_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLinearLayout* self, QSizeF* size ```
void q_graphicslinearlayout_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLinearLayout* self, double w, double h ```
void q_graphicslinearlayout_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsLinearLayout* self ```
QSizeF* q_graphicslinearlayout_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsLinearLayout* self, double width ```
void q_graphicslinearlayout_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsLinearLayout* self, double height ```
void q_graphicslinearlayout_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsLinearLayout* self ```
QRectF* q_graphicslinearlayout_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsLinearLayout* self ```
QRectF* q_graphicslinearlayout_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLinearLayout* self, enum Qt__SizeHint which ```
QSizeF* q_graphicslinearlayout_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsLinearLayout* self ```
QGraphicsLayoutItem* q_graphicslinearlayout_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* parent ```
void q_graphicslinearlayout_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsLinearLayout* self ```
QGraphicsItem* q_graphicslinearlayout_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLinearLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicslinearlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLinearLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslinearlayout_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslinearlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLinearLayout_GetContentsMargins((QGraphicsLinearLayout*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslinearlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsLinearLayout_QBaseGetContentsMargins((QGraphicsLinearLayout*)self, left, top, right, bottom);
}

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, double*, double*, double*, double*) ```
void q_graphicslinearlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsLinearLayout_OnGetContentsMargins((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_update_geometry(void* self) {
    QGraphicsLinearLayout_UpdateGeometry((QGraphicsLinearLayout*)self);
}

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_qbase_update_geometry(void* self) {
    QGraphicsLinearLayout_QBaseUpdateGeometry((QGraphicsLinearLayout*)self);
}

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)() ```
void q_graphicslinearlayout_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsLinearLayout_OnUpdateGeometry((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QEvent* e ```
void q_graphicslinearlayout_widget_event(void* self, void* e) {
    QGraphicsLinearLayout_WidgetEvent((QGraphicsLinearLayout*)self, (QEvent*)e);
}

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QEvent* e ```
void q_graphicslinearlayout_qbase_widget_event(void* self, void* e) {
    QGraphicsLinearLayout_QBaseWidgetEvent((QGraphicsLinearLayout*)self, (QEvent*)e);
}

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, QEvent*) ```
void q_graphicslinearlayout_on_widget_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsLinearLayout_OnWidgetEvent((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_is_empty(void* self) {
    return QGraphicsLinearLayout_IsEmpty((QGraphicsLinearLayout*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_qbase_is_empty(void* self) {
    return QGraphicsLinearLayout_QBaseIsEmpty((QGraphicsLinearLayout*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, bool (*slot)() ```
void q_graphicslinearlayout_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsLinearLayout_OnIsEmpty((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicslinearlayout_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsLinearLayout_AddChildLayoutItem((QGraphicsLinearLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicslinearlayout_qbase_add_child_layout_item(void* self, void* layoutItem) {
    QGraphicsLinearLayout_QBaseAddChildLayoutItem((QGraphicsLinearLayout*)self, (QGraphicsLayoutItem*)layoutItem);
}

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, QGraphicsLayoutItem*) ```
void q_graphicslinearlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsLinearLayout_OnAddChildLayoutItem((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsItem* item ```
void q_graphicslinearlayout_set_graphics_item(void* self, void* item) {
    QGraphicsLinearLayout_SetGraphicsItem((QGraphicsLinearLayout*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsItem* item ```
void q_graphicslinearlayout_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsLinearLayout_QBaseSetGraphicsItem((QGraphicsLinearLayout*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, QGraphicsItem*) ```
void q_graphicslinearlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsLinearLayout_OnSetGraphicsItem((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, bool ownedByLayout ```
void q_graphicslinearlayout_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLinearLayout_SetOwnedByLayout((QGraphicsLinearLayout*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, bool ownedByLayout ```
void q_graphicslinearlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsLinearLayout_QBaseSetOwnedByLayout((QGraphicsLinearLayout*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, bool) ```
void q_graphicslinearlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsLinearLayout_OnSetOwnedByLayout((QGraphicsLinearLayout*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_delete(void* self) {
    QGraphicsLinearLayout_Delete((QGraphicsLinearLayout*)(self));
}
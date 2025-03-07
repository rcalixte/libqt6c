#include "libqlayout.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include "libqwidget.hpp"
#include "libqlayoutitem.hpp"
#include "libqlayoutitem.h"

/// https://doc.qt.io/qt-6/qlayoutitem.html

/// q_layoutitem_new constructs a new QLayoutItem object.
///
///
QLayoutItem* q_layoutitem_new() {
    return QLayoutItem_new();
}

/// q_layoutitem_new2 constructs a new QLayoutItem object.
///
/// ``` QLayoutItem* param1 ```
QLayoutItem* q_layoutitem_new2(void* param1) {
    return QLayoutItem_new2((QLayoutItem*)param1);
}

/// q_layoutitem_new3 constructs a new QLayoutItem object.
///
/// ``` int alignment ```
QLayoutItem* q_layoutitem_new3(int64_t alignment) {
    return QLayoutItem_new3(alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_size_hint(void* self) {
    return QLayoutItem_SizeHint((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QSize* (*slot)() ```
void q_layoutitem_on_size_hint(void* self, QSize* (*slot)()) {
    QLayoutItem_OnSizeHint((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_qbase_size_hint(void* self) {
    return QLayoutItem_QBaseSizeHint((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_minimum_size(void* self) {
    return QLayoutItem_MinimumSize((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QSize* (*slot)() ```
void q_layoutitem_on_minimum_size(void* self, QSize* (*slot)()) {
    QLayoutItem_OnMinimumSize((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_qbase_minimum_size(void* self) {
    return QLayoutItem_QBaseMinimumSize((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_maximum_size(void* self) {
    return QLayoutItem_MaximumSize((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QSize* (*slot)() ```
void q_layoutitem_on_maximum_size(void* self, QSize* (*slot)()) {
    QLayoutItem_OnMaximumSize((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_qbase_maximum_size(void* self) {
    return QLayoutItem_QBaseMaximumSize((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_expanding_directions(void* self) {
    return QLayoutItem_ExpandingDirections((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, int64_t (*slot)() ```
void q_layoutitem_on_expanding_directions(void* self, int64_t (*slot)()) {
    QLayoutItem_OnExpandingDirections((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_qbase_expanding_directions(void* self) {
    return QLayoutItem_QBaseExpandingDirections((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// ``` QLayoutItem* self, QRect* geometry ```
void q_layoutitem_set_geometry(void* self, void* geometry) {
    QLayoutItem_SetGeometry((QLayoutItem*)self, (QRect*)geometry);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, void (*slot)(QLayoutItem*, QRect*) ```
void q_layoutitem_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QLayoutItem_OnSetGeometry((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self, QRect* geometry ```
void q_layoutitem_qbase_set_geometry(void* self, void* geometry) {
    QLayoutItem_QBaseSetGeometry((QLayoutItem*)self, (QRect*)geometry);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// ``` QLayoutItem* self ```
QRect* q_layoutitem_geometry(void* self) {
    return QLayoutItem_Geometry((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QRect* (*slot)() ```
void q_layoutitem_on_geometry(void* self, QRect* (*slot)()) {
    QLayoutItem_OnGeometry((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QRect* q_layoutitem_qbase_geometry(void* self) {
    return QLayoutItem_QBaseGeometry((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// ``` QLayoutItem* self ```
bool q_layoutitem_is_empty(void* self) {
    return QLayoutItem_IsEmpty((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, bool (*slot)() ```
void q_layoutitem_on_is_empty(void* self, bool (*slot)()) {
    QLayoutItem_OnIsEmpty((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
bool q_layoutitem_qbase_is_empty(void* self) {
    return QLayoutItem_QBaseIsEmpty((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// ``` QLayoutItem* self ```
bool q_layoutitem_has_height_for_width(void* self) {
    return QLayoutItem_HasHeightForWidth((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, bool (*slot)() ```
void q_layoutitem_on_has_height_for_width(void* self, bool (*slot)()) {
    QLayoutItem_OnHasHeightForWidth((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
bool q_layoutitem_qbase_has_height_for_width(void* self) {
    return QLayoutItem_QBaseHasHeightForWidth((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// ``` QLayoutItem* self, int param1 ```
int32_t q_layoutitem_height_for_width(void* self, int param1) {
    return QLayoutItem_HeightForWidth((QLayoutItem*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, int32_t (*slot)(QLayoutItem*, int) ```
void q_layoutitem_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QLayoutItem_OnHeightForWidth((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self, int param1 ```
int32_t q_layoutitem_qbase_height_for_width(void* self, int param1) {
    return QLayoutItem_QBaseHeightForWidth((QLayoutItem*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// ``` QLayoutItem* self, int param1 ```
int32_t q_layoutitem_minimum_height_for_width(void* self, int param1) {
    return QLayoutItem_MinimumHeightForWidth((QLayoutItem*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, int32_t (*slot)(QLayoutItem*, int) ```
void q_layoutitem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QLayoutItem_OnMinimumHeightForWidth((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self, int param1 ```
int32_t q_layoutitem_qbase_minimum_height_for_width(void* self, int param1) {
    return QLayoutItem_QBaseMinimumHeightForWidth((QLayoutItem*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// ``` QLayoutItem* self ```
void q_layoutitem_invalidate(void* self) {
    QLayoutItem_Invalidate((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, void (*slot)() ```
void q_layoutitem_on_invalidate(void* self, void (*slot)()) {
    QLayoutItem_OnInvalidate((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
void q_layoutitem_qbase_invalidate(void* self) {
    QLayoutItem_QBaseInvalidate((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// ``` QLayoutItem* self ```
QWidget* q_layoutitem_widget(void* self) {
    return QLayoutItem_Widget((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QWidget* (*slot)() ```
void q_layoutitem_on_widget(void* self, QWidget* (*slot)()) {
    QLayoutItem_OnWidget((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QWidget* q_layoutitem_qbase_widget(void* self) {
    return QLayoutItem_QBaseWidget((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// ``` QLayoutItem* self ```
QLayout* q_layoutitem_layout(void* self) {
    return QLayoutItem_Layout((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QLayout* (*slot)() ```
void q_layoutitem_on_layout(void* self, QLayout* (*slot)()) {
    QLayoutItem_OnLayout((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QLayout* q_layoutitem_qbase_layout(void* self) {
    return QLayoutItem_QBaseLayout((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// ``` QLayoutItem* self ```
QSpacerItem* q_layoutitem_spacer_item(void* self) {
    return QLayoutItem_SpacerItem((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QSpacerItem* (*slot)() ```
void q_layoutitem_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QLayoutItem_OnSpacerItem((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QSpacerItem* q_layoutitem_qbase_spacer_item(void* self) {
    return QLayoutItem_QBaseSpacerItem((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// ``` QLayoutItem* self, int a ```
void q_layoutitem_set_alignment(void* self, int64_t a) {
    QLayoutItem_SetAlignment((QLayoutItem*)self, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_control_types(void* self) {
    return QLayoutItem_ControlTypes((QLayoutItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, int64_t (*slot)() ```
void q_layoutitem_on_control_types(void* self, int64_t (*slot)()) {
    QLayoutItem_OnControlTypes((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_qbase_control_types(void* self) {
    return QLayoutItem_QBaseControlTypes((QLayoutItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator=)
///
/// ``` QLayoutItem* self, QLayoutItem* param1 ```
void q_layoutitem_operator_assign(void* self, void* param1) {
    QLayoutItem_OperatorAssign((QLayoutItem*)self, (QLayoutItem*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, void (*slot)(QLayoutItem*, QLayoutItem*) ```
void q_layoutitem_on_operator_assign(void* self, void (*slot)(void*, void*)) {
    QLayoutItem_OnOperatorAssign((QLayoutItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLayoutItem* self, QLayoutItem* param1 ```
void q_layoutitem_qbase_operator_assign(void* self, void* param1) {
    QLayoutItem_QBaseOperatorAssign((QLayoutItem*)self, (QLayoutItem*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QLayoutItem* self ```
void q_layoutitem_delete(void* self) {
    QLayoutItem_Delete((QLayoutItem*)(self));
}

/// https://doc.qt.io/qt-6/qspaceritem.html

/// q_spaceritem_new constructs a new QSpacerItem object.
///
/// ``` int w, int h ```
QSpacerItem* q_spaceritem_new(int w, int h) {
    return QSpacerItem_new(w, h);
}

/// q_spaceritem_new2 constructs a new QSpacerItem object.
///
/// ``` QSpacerItem* param1 ```
QSpacerItem* q_spaceritem_new2(void* param1) {
    return QSpacerItem_new2((QSpacerItem*)param1);
}

/// q_spaceritem_new3 constructs a new QSpacerItem object.
///
/// ``` int w, int h, enum QSizePolicy__Policy hData ```
QSpacerItem* q_spaceritem_new3(int w, int h, int64_t hData) {
    return QSpacerItem_new3(w, h, hData);
}

/// q_spaceritem_new4 constructs a new QSpacerItem object.
///
/// ``` int w, int h, enum QSizePolicy__Policy hData, enum QSizePolicy__Policy vData ```
QSpacerItem* q_spaceritem_new4(int w, int h, int64_t hData, int64_t vData) {
    return QSpacerItem_new4(w, h, hData, vData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// ``` QSpacerItem* self, int w, int h ```
void q_spaceritem_change_size(void* self, int w, int h) {
    QSpacerItem_ChangeSize((QSpacerItem*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_size_hint(void* self) {
    return QSpacerItem_SizeHint((QSpacerItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QSize* (*slot)() ```
void q_spaceritem_on_size_hint(void* self, QSize* (*slot)()) {
    QSpacerItem_OnSizeHint((QSpacerItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_qbase_size_hint(void* self) {
    return QSpacerItem_QBaseSizeHint((QSpacerItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_minimum_size(void* self) {
    return QSpacerItem_MinimumSize((QSpacerItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QSize* (*slot)() ```
void q_spaceritem_on_minimum_size(void* self, QSize* (*slot)()) {
    QSpacerItem_OnMinimumSize((QSpacerItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_qbase_minimum_size(void* self) {
    return QSpacerItem_QBaseMinimumSize((QSpacerItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_maximum_size(void* self) {
    return QSpacerItem_MaximumSize((QSpacerItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QSize* (*slot)() ```
void q_spaceritem_on_maximum_size(void* self, QSize* (*slot)()) {
    QSpacerItem_OnMaximumSize((QSpacerItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_qbase_maximum_size(void* self) {
    return QSpacerItem_QBaseMaximumSize((QSpacerItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_expanding_directions(void* self) {
    return QSpacerItem_ExpandingDirections((QSpacerItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, int64_t (*slot)() ```
void q_spaceritem_on_expanding_directions(void* self, int64_t (*slot)()) {
    QSpacerItem_OnExpandingDirections((QSpacerItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_qbase_expanding_directions(void* self) {
    return QSpacerItem_QBaseExpandingDirections((QSpacerItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// ``` QSpacerItem* self ```
bool q_spaceritem_is_empty(void* self) {
    return QSpacerItem_IsEmpty((QSpacerItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, bool (*slot)() ```
void q_spaceritem_on_is_empty(void* self, bool (*slot)()) {
    QSpacerItem_OnIsEmpty((QSpacerItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpacerItem* self ```
bool q_spaceritem_qbase_is_empty(void* self) {
    return QSpacerItem_QBaseIsEmpty((QSpacerItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// ``` QSpacerItem* self, QRect* geometry ```
void q_spaceritem_set_geometry(void* self, void* geometry) {
    QSpacerItem_SetGeometry((QSpacerItem*)self, (QRect*)geometry);
}

/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, void (*slot)(QSpacerItem*, QRect*) ```
void q_spaceritem_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QSpacerItem_OnSetGeometry((QSpacerItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpacerItem* self, QRect* geometry ```
void q_spaceritem_qbase_set_geometry(void* self, void* geometry) {
    QSpacerItem_QBaseSetGeometry((QSpacerItem*)self, (QRect*)geometry);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// ``` QSpacerItem* self ```
QRect* q_spaceritem_geometry(void* self) {
    return QSpacerItem_Geometry((QSpacerItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QRect* (*slot)() ```
void q_spaceritem_on_geometry(void* self, QRect* (*slot)()) {
    QSpacerItem_OnGeometry((QSpacerItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QRect* q_spaceritem_qbase_geometry(void* self) {
    return QSpacerItem_QBaseGeometry((QSpacerItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// ``` QSpacerItem* self ```
QSpacerItem* q_spaceritem_spacer_item(void* self) {
    return QSpacerItem_SpacerItem((QSpacerItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QSpacerItem* (*slot)() ```
void q_spaceritem_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QSpacerItem_OnSpacerItem((QSpacerItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QSpacerItem* q_spaceritem_qbase_spacer_item(void* self) {
    return QSpacerItem_QBaseSpacerItem((QSpacerItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizePolicy)
///
/// ``` QSpacerItem* self ```
QSizePolicy* q_spaceritem_size_policy(void* self) {
    return QSpacerItem_SizePolicy((QSpacerItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// ``` QSpacerItem* self, int w, int h, enum QSizePolicy__Policy hData ```
void q_spaceritem_change_size3(void* self, int w, int h, int64_t hData) {
    QSpacerItem_ChangeSize3((QSpacerItem*)self, w, h, hData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// ``` QSpacerItem* self, int w, int h, enum QSizePolicy__Policy hData, enum QSizePolicy__Policy vData ```
void q_spaceritem_change_size4(void* self, int w, int h, int64_t hData, int64_t vData) {
    QSpacerItem_ChangeSize4((QSpacerItem*)self, w, h, hData, vData);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// ``` QSpacerItem* self, int a ```
void q_spaceritem_set_alignment(void* self, int64_t a) {
    QLayoutItem_SetAlignment((QLayoutItem*)self, a);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
bool q_spaceritem_has_height_for_width(void* self) {
    return QSpacerItem_HasHeightForWidth((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
bool q_spaceritem_qbase_has_height_for_width(void* self) {
    return QSpacerItem_QBaseHasHeightForWidth((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, bool (*slot)() ```
void q_spaceritem_on_has_height_for_width(void* self, bool (*slot)()) {
    QSpacerItem_OnHasHeightForWidth((QSpacerItem*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self, int param1 ```
int32_t q_spaceritem_height_for_width(void* self, int param1) {
    return QSpacerItem_HeightForWidth((QSpacerItem*)self, param1);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self, int param1 ```
int32_t q_spaceritem_qbase_height_for_width(void* self, int param1) {
    return QSpacerItem_QBaseHeightForWidth((QSpacerItem*)self, param1);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, int32_t (*slot)(QSpacerItem*, int) ```
void q_spaceritem_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSpacerItem_OnHeightForWidth((QSpacerItem*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self, int param1 ```
int32_t q_spaceritem_minimum_height_for_width(void* self, int param1) {
    return QSpacerItem_MinimumHeightForWidth((QSpacerItem*)self, param1);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self, int param1 ```
int32_t q_spaceritem_qbase_minimum_height_for_width(void* self, int param1) {
    return QSpacerItem_QBaseMinimumHeightForWidth((QSpacerItem*)self, param1);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, int32_t (*slot)(QSpacerItem*, int) ```
void q_spaceritem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSpacerItem_OnMinimumHeightForWidth((QSpacerItem*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
void q_spaceritem_invalidate(void* self) {
    QSpacerItem_Invalidate((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
void q_spaceritem_qbase_invalidate(void* self) {
    QSpacerItem_QBaseInvalidate((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, void (*slot)() ```
void q_spaceritem_on_invalidate(void* self, void (*slot)()) {
    QSpacerItem_OnInvalidate((QSpacerItem*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
QWidget* q_spaceritem_widget(void* self) {
    return QSpacerItem_Widget((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
QWidget* q_spaceritem_qbase_widget(void* self) {
    return QSpacerItem_QBaseWidget((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, QWidget* (*slot)() ```
void q_spaceritem_on_widget(void* self, QWidget* (*slot)()) {
    QSpacerItem_OnWidget((QSpacerItem*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
QLayout* q_spaceritem_layout(void* self) {
    return QSpacerItem_Layout((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
QLayout* q_spaceritem_qbase_layout(void* self) {
    return QSpacerItem_QBaseLayout((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, QLayout* (*slot)() ```
void q_spaceritem_on_layout(void* self, QLayout* (*slot)()) {
    QSpacerItem_OnLayout((QSpacerItem*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_control_types(void* self) {
    return QSpacerItem_ControlTypes((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_qbase_control_types(void* self) {
    return QSpacerItem_QBaseControlTypes((QSpacerItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, int64_t (*slot)() ```
void q_spaceritem_on_control_types(void* self, int64_t (*slot)()) {
    QSpacerItem_OnControlTypes((QSpacerItem*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSpacerItem* self ```
void q_spaceritem_delete(void* self) {
    QSpacerItem_Delete((QSpacerItem*)(self));
}

/// https://doc.qt.io/qt-6/qwidgetitem.html

/// q_widgetitem_new constructs a new QWidgetItem object.
///
/// ``` QWidget* w ```
QWidgetItem* q_widgetitem_new(void* w) {
    return QWidgetItem_new((QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_size_hint(void* self) {
    return QWidgetItem_SizeHint((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QSize* (*slot)() ```
void q_widgetitem_on_size_hint(void* self, QSize* (*slot)()) {
    QWidgetItem_OnSizeHint((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_qbase_size_hint(void* self) {
    return QWidgetItem_QBaseSizeHint((QWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_minimum_size(void* self) {
    return QWidgetItem_MinimumSize((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QSize* (*slot)() ```
void q_widgetitem_on_minimum_size(void* self, QSize* (*slot)()) {
    QWidgetItem_OnMinimumSize((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_qbase_minimum_size(void* self) {
    return QWidgetItem_QBaseMinimumSize((QWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_maximum_size(void* self) {
    return QWidgetItem_MaximumSize((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QSize* (*slot)() ```
void q_widgetitem_on_maximum_size(void* self, QSize* (*slot)()) {
    QWidgetItem_OnMaximumSize((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_qbase_maximum_size(void* self) {
    return QWidgetItem_QBaseMaximumSize((QWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_expanding_directions(void* self) {
    return QWidgetItem_ExpandingDirections((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, int64_t (*slot)() ```
void q_widgetitem_on_expanding_directions(void* self, int64_t (*slot)()) {
    QWidgetItem_OnExpandingDirections((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_qbase_expanding_directions(void* self) {
    return QWidgetItem_QBaseExpandingDirections((QWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// ``` QWidgetItem* self ```
bool q_widgetitem_is_empty(void* self) {
    return QWidgetItem_IsEmpty((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, bool (*slot)() ```
void q_widgetitem_on_is_empty(void* self, bool (*slot)()) {
    QWidgetItem_OnIsEmpty((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
bool q_widgetitem_qbase_is_empty(void* self) {
    return QWidgetItem_QBaseIsEmpty((QWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// ``` QWidgetItem* self, QRect* geometry ```
void q_widgetitem_set_geometry(void* self, void* geometry) {
    QWidgetItem_SetGeometry((QWidgetItem*)self, (QRect*)geometry);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, void (*slot)(QWidgetItem*, QRect*) ```
void q_widgetitem_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QWidgetItem_OnSetGeometry((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self, QRect* geometry ```
void q_widgetitem_qbase_set_geometry(void* self, void* geometry) {
    QWidgetItem_QBaseSetGeometry((QWidgetItem*)self, (QRect*)geometry);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// ``` QWidgetItem* self ```
QRect* q_widgetitem_geometry(void* self) {
    return QWidgetItem_Geometry((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QRect* (*slot)() ```
void q_widgetitem_on_geometry(void* self, QRect* (*slot)()) {
    QWidgetItem_OnGeometry((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QRect* q_widgetitem_qbase_geometry(void* self) {
    return QWidgetItem_QBaseGeometry((QWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// ``` QWidgetItem* self ```
QWidget* q_widgetitem_widget(void* self) {
    return QWidgetItem_Widget((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QWidget* (*slot)() ```
void q_widgetitem_on_widget(void* self, QWidget* (*slot)()) {
    QWidgetItem_OnWidget((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QWidget* q_widgetitem_qbase_widget(void* self) {
    return QWidgetItem_QBaseWidget((QWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// ``` QWidgetItem* self ```
bool q_widgetitem_has_height_for_width(void* self) {
    return QWidgetItem_HasHeightForWidth((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, bool (*slot)() ```
void q_widgetitem_on_has_height_for_width(void* self, bool (*slot)()) {
    QWidgetItem_OnHasHeightForWidth((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
bool q_widgetitem_qbase_has_height_for_width(void* self) {
    return QWidgetItem_QBaseHasHeightForWidth((QWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// ``` QWidgetItem* self, int param1 ```
int32_t q_widgetitem_height_for_width(void* self, int param1) {
    return QWidgetItem_HeightForWidth((QWidgetItem*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, int32_t (*slot)(QWidgetItem*, int) ```
void q_widgetitem_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWidgetItem_OnHeightForWidth((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self, int param1 ```
int32_t q_widgetitem_qbase_height_for_width(void* self, int param1) {
    return QWidgetItem_QBaseHeightForWidth((QWidgetItem*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// ``` QWidgetItem* self, int param1 ```
int32_t q_widgetitem_minimum_height_for_width(void* self, int param1) {
    return QWidgetItem_MinimumHeightForWidth((QWidgetItem*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, int32_t (*slot)(QWidgetItem*, int) ```
void q_widgetitem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWidgetItem_OnMinimumHeightForWidth((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self, int param1 ```
int32_t q_widgetitem_qbase_minimum_height_for_width(void* self, int param1) {
    return QWidgetItem_QBaseMinimumHeightForWidth((QWidgetItem*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_control_types(void* self) {
    return QWidgetItem_ControlTypes((QWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, int64_t (*slot)() ```
void q_widgetitem_on_control_types(void* self, int64_t (*slot)()) {
    QWidgetItem_OnControlTypes((QWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_qbase_control_types(void* self) {
    return QWidgetItem_QBaseControlTypes((QWidgetItem*)self);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// ``` QWidgetItem* self, int a ```
void q_widgetitem_set_alignment(void* self, int64_t a) {
    QLayoutItem_SetAlignment((QLayoutItem*)self, a);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItem* self ```
void q_widgetitem_invalidate(void* self) {
    QWidgetItem_Invalidate((QWidgetItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItem* self ```
void q_widgetitem_qbase_invalidate(void* self) {
    QWidgetItem_QBaseInvalidate((QWidgetItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItem* self, void (*slot)() ```
void q_widgetitem_on_invalidate(void* self, void (*slot)()) {
    QWidgetItem_OnInvalidate((QWidgetItem*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItem* self ```
QLayout* q_widgetitem_layout(void* self) {
    return QWidgetItem_Layout((QWidgetItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItem* self ```
QLayout* q_widgetitem_qbase_layout(void* self) {
    return QWidgetItem_QBaseLayout((QWidgetItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItem* self, QLayout* (*slot)() ```
void q_widgetitem_on_layout(void* self, QLayout* (*slot)()) {
    QWidgetItem_OnLayout((QWidgetItem*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItem* self ```
QSpacerItem* q_widgetitem_spacer_item(void* self) {
    return QWidgetItem_SpacerItem((QWidgetItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItem* self ```
QSpacerItem* q_widgetitem_qbase_spacer_item(void* self) {
    return QWidgetItem_QBaseSpacerItem((QWidgetItem*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItem* self, QSpacerItem* (*slot)() ```
void q_widgetitem_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QWidgetItem_OnSpacerItem((QWidgetItem*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWidgetItem* self ```
void q_widgetitem_delete(void* self) {
    QWidgetItem_Delete((QWidgetItem*)(self));
}

/// https://doc.qt.io/qt-6/qwidgetitemv2.html

/// q_widgetitemv2_new constructs a new QWidgetItemV2 object.
///
/// ``` QWidget* widget ```
QWidgetItemV2* q_widgetitemv2_new(void* widget) {
    return QWidgetItemV2_new((QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_size_hint(void* self) {
    return QWidgetItemV2_SizeHint((QWidgetItemV2*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItemV2* self, QSize* (*slot)() ```
void q_widgetitemv2_on_size_hint(void* self, QSize* (*slot)()) {
    QWidgetItemV2_OnSizeHint((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_qbase_size_hint(void* self) {
    return QWidgetItemV2_QBaseSizeHint((QWidgetItemV2*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_minimum_size(void* self) {
    return QWidgetItemV2_MinimumSize((QWidgetItemV2*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItemV2* self, QSize* (*slot)() ```
void q_widgetitemv2_on_minimum_size(void* self, QSize* (*slot)()) {
    QWidgetItemV2_OnMinimumSize((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_qbase_minimum_size(void* self) {
    return QWidgetItemV2_QBaseMinimumSize((QWidgetItemV2*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_maximum_size(void* self) {
    return QWidgetItemV2_MaximumSize((QWidgetItemV2*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItemV2* self, QSize* (*slot)() ```
void q_widgetitemv2_on_maximum_size(void* self, QSize* (*slot)()) {
    QWidgetItemV2_OnMaximumSize((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_qbase_maximum_size(void* self) {
    return QWidgetItemV2_QBaseMaximumSize((QWidgetItemV2*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// ``` QWidgetItemV2* self, int width ```
int32_t q_widgetitemv2_height_for_width(void* self, int width) {
    return QWidgetItemV2_HeightForWidth((QWidgetItemV2*)self, width);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetItemV2* self, int32_t (*slot)(QWidgetItemV2*, int) ```
void q_widgetitemv2_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWidgetItemV2_OnHeightForWidth((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetItemV2* self, int width ```
int32_t q_widgetitemv2_qbase_height_for_width(void* self, int width) {
    return QWidgetItemV2_QBaseHeightForWidth((QWidgetItemV2*)self, width);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_alignment(void* self) {
    return QLayoutItem_Alignment((QLayoutItem*)self);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// ``` QWidgetItemV2* self, int a ```
void q_widgetitemv2_set_alignment(void* self, int64_t a) {
    QLayoutItem_SetAlignment((QLayoutItem*)self, a);
}

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_expanding_directions(void* self) {
    return QWidgetItemV2_ExpandingDirections((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_qbase_expanding_directions(void* self) {
    return QWidgetItemV2_QBaseExpandingDirections((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, int64_t (*slot)() ```
void q_widgetitemv2_on_expanding_directions(void* self, int64_t (*slot)()) {
    QWidgetItemV2_OnExpandingDirections((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
bool q_widgetitemv2_is_empty(void* self) {
    return QWidgetItemV2_IsEmpty((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
bool q_widgetitemv2_qbase_is_empty(void* self) {
    return QWidgetItemV2_QBaseIsEmpty((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, bool (*slot)() ```
void q_widgetitemv2_on_is_empty(void* self, bool (*slot)()) {
    QWidgetItemV2_OnIsEmpty((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self, QRect* geometry ```
void q_widgetitemv2_set_geometry(void* self, void* geometry) {
    QWidgetItemV2_SetGeometry((QWidgetItemV2*)self, (QRect*)geometry);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QRect* geometry ```
void q_widgetitemv2_qbase_set_geometry(void* self, void* geometry) {
    QWidgetItemV2_QBaseSetGeometry((QWidgetItemV2*)self, (QRect*)geometry);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, void (*slot)(QWidgetItemV2*, QRect*) ```
void q_widgetitemv2_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QWidgetItemV2_OnSetGeometry((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QRect* q_widgetitemv2_geometry(void* self) {
    return QWidgetItemV2_Geometry((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QRect* q_widgetitemv2_qbase_geometry(void* self) {
    return QWidgetItemV2_QBaseGeometry((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QRect* (*slot)() ```
void q_widgetitemv2_on_geometry(void* self, QRect* (*slot)()) {
    QWidgetItemV2_OnGeometry((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QWidget* q_widgetitemv2_widget(void* self) {
    return QWidgetItemV2_Widget((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QWidget* q_widgetitemv2_qbase_widget(void* self) {
    return QWidgetItemV2_QBaseWidget((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QWidget* (*slot)() ```
void q_widgetitemv2_on_widget(void* self, QWidget* (*slot)()) {
    QWidgetItemV2_OnWidget((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
bool q_widgetitemv2_has_height_for_width(void* self) {
    return QWidgetItemV2_HasHeightForWidth((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
bool q_widgetitemv2_qbase_has_height_for_width(void* self) {
    return QWidgetItemV2_QBaseHasHeightForWidth((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, bool (*slot)() ```
void q_widgetitemv2_on_has_height_for_width(void* self, bool (*slot)()) {
    QWidgetItemV2_OnHasHeightForWidth((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self, int param1 ```
int32_t q_widgetitemv2_minimum_height_for_width(void* self, int param1) {
    return QWidgetItemV2_MinimumHeightForWidth((QWidgetItemV2*)self, param1);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self, int param1 ```
int32_t q_widgetitemv2_qbase_minimum_height_for_width(void* self, int param1) {
    return QWidgetItemV2_QBaseMinimumHeightForWidth((QWidgetItemV2*)self, param1);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, int32_t (*slot)(QWidgetItemV2*, int) ```
void q_widgetitemv2_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWidgetItemV2_OnMinimumHeightForWidth((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_control_types(void* self) {
    return QWidgetItemV2_ControlTypes((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_qbase_control_types(void* self) {
    return QWidgetItemV2_QBaseControlTypes((QWidgetItemV2*)self);
}

/// Inherited from QWidgetItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, int64_t (*slot)() ```
void q_widgetitemv2_on_control_types(void* self, int64_t (*slot)()) {
    QWidgetItemV2_OnControlTypes((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
void q_widgetitemv2_invalidate(void* self) {
    QWidgetItemV2_Invalidate((QWidgetItemV2*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
void q_widgetitemv2_qbase_invalidate(void* self) {
    QWidgetItemV2_QBaseInvalidate((QWidgetItemV2*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, void (*slot)() ```
void q_widgetitemv2_on_invalidate(void* self, void (*slot)()) {
    QWidgetItemV2_OnInvalidate((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QLayout* q_widgetitemv2_layout(void* self) {
    return QWidgetItemV2_Layout((QWidgetItemV2*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QLayout* q_widgetitemv2_qbase_layout(void* self) {
    return QWidgetItemV2_QBaseLayout((QWidgetItemV2*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QLayout* (*slot)() ```
void q_widgetitemv2_on_layout(void* self, QLayout* (*slot)()) {
    QWidgetItemV2_OnLayout((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QSpacerItem* q_widgetitemv2_spacer_item(void* self) {
    return QWidgetItemV2_SpacerItem((QWidgetItemV2*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QSpacerItem* q_widgetitemv2_qbase_spacer_item(void* self) {
    return QWidgetItemV2_QBaseSpacerItem((QWidgetItemV2*)self);
}

/// Inherited from QLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QSpacerItem* (*slot)() ```
void q_widgetitemv2_on_spacer_item(void* self, QSpacerItem* (*slot)()) {
    QWidgetItemV2_OnSpacerItem((QWidgetItemV2*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWidgetItemV2* self ```
void q_widgetitemv2_delete(void* self) {
    QWidgetItemV2_Delete((QWidgetItemV2*)(self));
}
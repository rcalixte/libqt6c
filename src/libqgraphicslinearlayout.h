#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSLINEARLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSLINEARLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqgraphicsitem.h"
#include "libqgraphicslayout.h"
#include "libqgraphicslayoutitem.h"
#include "libqrect.h"
#include "libqsize.h"
#include "libqsizepolicy.h"

/// https://doc.qt.io/qt-6/qgraphicslinearlayout.html

/// q_graphicslinearlayout_new constructs a new QGraphicsLinearLayout object.
///
///
QGraphicsLinearLayout* q_graphicslinearlayout_new();

/// q_graphicslinearlayout_new2 constructs a new QGraphicsLinearLayout object.
///
/// ``` enum Qt__Orientation orientation ```
QGraphicsLinearLayout* q_graphicslinearlayout_new2(int64_t orientation);

/// q_graphicslinearlayout_new3 constructs a new QGraphicsLinearLayout object.
///
/// ``` QGraphicsLayoutItem* parent ```
QGraphicsLinearLayout* q_graphicslinearlayout_new3(void* parent);

/// q_graphicslinearlayout_new4 constructs a new QGraphicsLinearLayout object.
///
/// ``` enum Qt__Orientation orientation, QGraphicsLayoutItem* parent ```
QGraphicsLinearLayout* q_graphicslinearlayout_new4(int64_t orientation, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setOrientation)
///
/// ``` QGraphicsLinearLayout* self, enum Qt__Orientation orientation ```
void q_graphicslinearlayout_set_orientation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#orientation)
///
/// ``` QGraphicsLinearLayout* self ```
int64_t q_graphicslinearlayout_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addItem)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item ```
void q_graphicslinearlayout_add_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_add_stretch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertItem)
///
/// ``` QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item ```
void q_graphicslinearlayout_insert_item(void* self, int index, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
///
/// ``` QGraphicsLinearLayout* self, int index ```
void q_graphicslinearlayout_insert_stretch(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeItem)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item ```
void q_graphicslinearlayout_remove_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
///
/// ``` QGraphicsLinearLayout* self, int index ```
void q_graphicslinearlayout_remove_at(void* self, int index);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, int) ```
void q_graphicslinearlayout_on_remove_at(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self, int index ```
void q_graphicslinearlayout_qbase_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setSpacing)
///
/// ``` QGraphicsLinearLayout* self, double spacing ```
void q_graphicslinearlayout_set_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#spacing)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setItemSpacing)
///
/// ``` QGraphicsLinearLayout* self, int index, double spacing ```
void q_graphicslinearlayout_set_item_spacing(void* self, int index, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemSpacing)
///
/// ``` QGraphicsLinearLayout* self, int index ```
double q_graphicslinearlayout_item_spacing(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setStretchFactor)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch ```
void q_graphicslinearlayout_set_stretch_factor(void* self, void* item, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#stretchFactor)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item ```
int32_t q_graphicslinearlayout_stretch_factor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setAlignment)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment ```
void q_graphicslinearlayout_set_alignment(void* self, void* item, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#alignment)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* item ```
int64_t q_graphicslinearlayout_alignment(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
///
/// ``` QGraphicsLinearLayout* self, QRectF* rect ```
void q_graphicslinearlayout_set_geometry(void* self, void* rect);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, QRectF*) ```
void q_graphicslinearlayout_on_set_geometry(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self, QRectF* rect ```
void q_graphicslinearlayout_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
///
/// ``` QGraphicsLinearLayout* self ```
int32_t q_graphicslinearlayout_count(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, int32_t (*slot)() ```
void q_graphicslinearlayout_on_count(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self ```
int32_t q_graphicslinearlayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
///
/// ``` QGraphicsLinearLayout* self, int index ```
QGraphicsLayoutItem* q_graphicslinearlayout_item_at(void* self, int index);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* (*slot)(QGraphicsLinearLayout*, int) ```
void q_graphicslinearlayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self, int index ```
QGraphicsLayoutItem* q_graphicslinearlayout_qbase_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_invalidate(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)() ```
void q_graphicslinearlayout_on_invalidate(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
///
/// ``` QGraphicsLinearLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslinearlayout_size_hint(void* self, int64_t which, void* constraint);

/// Allows for overriding the related default method
///
/// ``` QGraphicsLinearLayout* self, QSizeF* (*slot)(QGraphicsLinearLayout*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicslinearlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsLinearLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslinearlayout_qbase_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_dump(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
///
/// ``` QGraphicsLinearLayout* self, int stretch ```
void q_graphicslinearlayout_add_stretch1(void* self, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
///
/// ``` QGraphicsLinearLayout* self, int index, int stretch ```
void q_graphicslinearlayout_insert_stretch2(void* self, int index, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
///
/// ``` QGraphicsLinearLayout* self, int indent ```
void q_graphicslinearlayout_dump1(void* self, int indent);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// ``` QGraphicsLinearLayout* self, double left, double top, double right, double bottom ```
void q_graphicslinearlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_activate(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_is_activated(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// ``` bool enable ```
void q_graphicslinearlayout_set_instant_invalidate_propagation(bool enable);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
///
bool q_graphicslinearlayout_instant_invalidate_propagation();

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLinearLayout* self, QSizePolicy* policy ```
void q_graphicslinearlayout_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLinearLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicslinearlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsLinearLayout* self ```
QSizePolicy* q_graphicslinearlayout_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLinearLayout* self, QSizeF* size ```
void q_graphicslinearlayout_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLinearLayout* self, double w, double h ```
void q_graphicslinearlayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsLinearLayout* self ```
QSizeF* q_graphicslinearlayout_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsLinearLayout* self, double width ```
void q_graphicslinearlayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsLinearLayout* self, double height ```
void q_graphicslinearlayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLinearLayout* self, QSizeF* size ```
void q_graphicslinearlayout_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLinearLayout* self, double w, double h ```
void q_graphicslinearlayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsLinearLayout* self ```
QSizeF* q_graphicslinearlayout_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsLinearLayout* self, double width ```
void q_graphicslinearlayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsLinearLayout* self, double height ```
void q_graphicslinearlayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLinearLayout* self, QSizeF* size ```
void q_graphicslinearlayout_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLinearLayout* self, double w, double h ```
void q_graphicslinearlayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsLinearLayout* self ```
QSizeF* q_graphicslinearlayout_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsLinearLayout* self, double width ```
void q_graphicslinearlayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsLinearLayout* self, double height ```
void q_graphicslinearlayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsLinearLayout* self ```
double q_graphicslinearlayout_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsLinearLayout* self ```
QRectF* q_graphicslinearlayout_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsLinearLayout* self ```
QRectF* q_graphicslinearlayout_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLinearLayout* self, enum Qt__SizeHint which ```
QSizeF* q_graphicslinearlayout_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsLinearLayout* self ```
QGraphicsLayoutItem* q_graphicslinearlayout_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* parent ```
void q_graphicslinearlayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsLinearLayout* self ```
QGraphicsItem* q_graphicslinearlayout_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLinearLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicslinearlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLinearLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslinearlayout_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslinearlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslinearlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, double*, double*, double*, double*) ```
void q_graphicslinearlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_qbase_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)() ```
void q_graphicslinearlayout_on_update_geometry(void* self, void (*slot)());

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QEvent* e ```
void q_graphicslinearlayout_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QEvent* e ```
void q_graphicslinearlayout_qbase_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, QEvent*) ```
void q_graphicslinearlayout_on_widget_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self ```
bool q_graphicslinearlayout_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, bool (*slot)() ```
void q_graphicslinearlayout_on_is_empty(void* self, bool (*slot)());

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicslinearlayout_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicslinearlayout_qbase_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, QGraphicsLayoutItem*) ```
void q_graphicslinearlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsItem* item ```
void q_graphicslinearlayout_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, QGraphicsItem* item ```
void q_graphicslinearlayout_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, QGraphicsItem*) ```
void q_graphicslinearlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, bool ownedByLayout ```
void q_graphicslinearlayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, bool ownedByLayout ```
void q_graphicslinearlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLinearLayout* self, void (*slot)(QGraphicsLinearLayout*, bool) ```
void q_graphicslinearlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// Delete this object from C++ memory.
///
/// ``` QGraphicsLinearLayout* self ```
void q_graphicslinearlayout_delete(void* self);

#endif

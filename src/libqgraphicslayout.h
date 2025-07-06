#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicslayout.html

/// q_graphicslayout_new constructs a new QGraphicsLayout object.
///
///
QGraphicsLayout* q_graphicslayout_new();

/// q_graphicslayout_new2 constructs a new QGraphicsLayout object.
///
/// ``` QGraphicsLayoutItem* parent ```
QGraphicsLayout* q_graphicslayout_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// ``` QGraphicsLayout* self, double left, double top, double right, double bottom ```
void q_graphicslayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// ``` QGraphicsLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayout* self, void (*slot)(QGraphicsLayout*, double*, double*, double*, double*) ```
void q_graphicslayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Base class method implementation
///
/// ``` QGraphicsLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// ``` QGraphicsLayout* self ```
void q_graphicslayout_activate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// ``` QGraphicsLayout* self ```
bool q_graphicslayout_is_activated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// ``` QGraphicsLayout* self ```
void q_graphicslayout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayout* self, void (*slot)() ```
void q_graphicslayout_on_invalidate(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// Base class method implementation
///
/// ``` QGraphicsLayout* self ```
void q_graphicslayout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// ``` QGraphicsLayout* self ```
void q_graphicslayout_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayout* self, void (*slot)() ```
void q_graphicslayout_on_update_geometry(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Base class method implementation
///
/// ``` QGraphicsLayout* self ```
void q_graphicslayout_qbase_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// ``` QGraphicsLayout* self, QEvent* e ```
void q_graphicslayout_widget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayout* self, void (*slot)(QGraphicsLayout*, QEvent*) ```
void q_graphicslayout_on_widget_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsLayout* self, QEvent* e ```
void q_graphicslayout_qbase_widget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
///
/// ``` QGraphicsLayout* self ```
int32_t q_graphicslayout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayout* self, int32_t (*slot)() ```
void q_graphicslayout_on_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
///
/// Base class method implementation
///
/// ``` QGraphicsLayout* self ```
int32_t q_graphicslayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
///
/// ``` QGraphicsLayout* self, int i ```
QGraphicsLayoutItem* q_graphicslayout_item_at(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayout* self, QGraphicsLayoutItem* (*slot)(QGraphicsLayout*, int) ```
void q_graphicslayout_on_item_at(void* self, QGraphicsLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
///
/// Base class method implementation
///
/// ``` QGraphicsLayout* self, int i ```
QGraphicsLayoutItem* q_graphicslayout_qbase_item_at(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
///
/// ``` QGraphicsLayout* self, int index ```
void q_graphicslayout_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayout* self, void (*slot)(QGraphicsLayout*, int) ```
void q_graphicslayout_on_remove_at(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
///
/// Base class method implementation
///
/// ``` QGraphicsLayout* self, int index ```
void q_graphicslayout_qbase_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// ``` bool enable ```
void q_graphicslayout_set_instant_invalidate_propagation(bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
///
bool q_graphicslayout_instant_invalidate_propagation();

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// ``` QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicslayout_add_child_layout_item(void* self, void* layoutItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayout* self, void (*slot)(QGraphicsLayout*, QGraphicsLayoutItem*) ```
void q_graphicslayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Base class method implementation
///
/// ``` QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicslayout_qbase_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayout* self, QSizePolicy* policy ```
void q_graphicslayout_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicslayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsLayout* self ```
QSizePolicy* q_graphicslayout_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLayout* self, QSizeF* size ```
void q_graphicslayout_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLayout* self, double w, double h ```
void q_graphicslayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsLayout* self ```
QSizeF* q_graphicslayout_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsLayout* self, double width ```
void q_graphicslayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsLayout* self ```
double q_graphicslayout_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsLayout* self, double height ```
void q_graphicslayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsLayout* self ```
double q_graphicslayout_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLayout* self, QSizeF* size ```
void q_graphicslayout_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLayout* self, double w, double h ```
void q_graphicslayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsLayout* self ```
QSizeF* q_graphicslayout_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsLayout* self, double width ```
void q_graphicslayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsLayout* self ```
double q_graphicslayout_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsLayout* self, double height ```
void q_graphicslayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsLayout* self ```
double q_graphicslayout_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLayout* self, QSizeF* size ```
void q_graphicslayout_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLayout* self, double w, double h ```
void q_graphicslayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsLayout* self ```
QSizeF* q_graphicslayout_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsLayout* self, double width ```
void q_graphicslayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsLayout* self ```
double q_graphicslayout_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsLayout* self, double height ```
void q_graphicslayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsLayout* self ```
double q_graphicslayout_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsLayout* self ```
QRectF* q_graphicslayout_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsLayout* self ```
QRectF* q_graphicslayout_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLayout* self, enum Qt__SizeHint which ```
QSizeF* q_graphicslayout_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsLayout* self ```
QGraphicsLayoutItem* q_graphicslayout_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsLayout* self, QGraphicsLayoutItem* parent ```
void q_graphicslayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsLayout* self ```
bool q_graphicslayout_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsLayout* self ```
QGraphicsItem* q_graphicslayout_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsLayout* self ```
bool q_graphicslayout_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicslayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayout_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLayout* self, QRectF* rect ```
void q_graphicslayout_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLayout* self, QRectF* rect ```
void q_graphicslayout_qbase_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLayout* self, void (*slot)(QGraphicsLayout*, QRectF*) ```
void q_graphicslayout_on_set_geometry(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLayout* self ```
bool q_graphicslayout_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLayout* self ```
bool q_graphicslayout_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLayout* self, bool (*slot)() ```
void q_graphicslayout_on_is_empty(void* self, bool (*slot)());

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayout_size_hint(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayout_qbase_size_hint(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLayout* self, QSizeF* (*slot)(QGraphicsLayout*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicslayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLayout* self, QGraphicsItem* item ```
void q_graphicslayout_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLayout* self, QGraphicsItem* item ```
void q_graphicslayout_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLayout* self, void (*slot)(QGraphicsLayout*, QGraphicsItem*) ```
void q_graphicslayout_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsLayout* self, bool ownedByLayout ```
void q_graphicslayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsLayout* self, bool ownedByLayout ```
void q_graphicslayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsLayout* self, void (*slot)(QGraphicsLayout*, bool) ```
void q_graphicslayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#dtor.QGraphicsLayout)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsLayout* self ```
void q_graphicslayout_delete(void* self);

#endif

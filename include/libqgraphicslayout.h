#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicslayout.html

/// q_graphicslayout_new constructs a new QGraphicsLayout object.
///
QGraphicsLayout* q_graphicslayout_new();

/// q_graphicslayout_new2 constructs a new QGraphicsLayout object.
///
/// @param parent QGraphicsLayoutItem*
QGraphicsLayout* q_graphicslayout_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// @param self QGraphicsLayout*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
void q_graphicslayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// @param self QGraphicsLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
void q_graphicslayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void fn(QGraphicsLayout*, double*, double*, double*, double*)
void q_graphicslayout_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
void q_graphicslayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// @param self QGraphicsLayout*
void q_graphicslayout_activate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// @param self QGraphicsLayout*
bool q_graphicslayout_is_activated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// @param self QGraphicsLayout*
void q_graphicslayout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void fn()
void q_graphicslayout_on_invalidate(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
void q_graphicslayout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// @param self QGraphicsLayout*
void q_graphicslayout_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void fn()
void q_graphicslayout_on_update_geometry(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
void q_graphicslayout_qbase_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// @param self QGraphicsLayout*
/// @param e QEvent*
void q_graphicslayout_widget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void fn(QGraphicsLayout*, QEvent*)
void q_graphicslayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
/// @param e QEvent*
void q_graphicslayout_qbase_widget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
///
/// @param self QGraphicsLayout*
int32_t q_graphicslayout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback int32_t fn()
void q_graphicslayout_on_count(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
int32_t q_graphicslayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
///
/// @param self QGraphicsLayout*
/// @param i int
QGraphicsLayoutItem* q_graphicslayout_item_at(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback QGraphicsLayoutItem* fn(QGraphicsLayout*, int)
void q_graphicslayout_on_item_at(void* self, QGraphicsLayoutItem* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
/// @param i int
QGraphicsLayoutItem* q_graphicslayout_qbase_item_at(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
///
/// @param self QGraphicsLayout*
/// @param index int
void q_graphicslayout_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void fn(QGraphicsLayout*, int)
void q_graphicslayout_on_remove_at(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
/// @param index int
void q_graphicslayout_qbase_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// @param enable bool
void q_graphicslayout_set_instant_invalidate_propagation(bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
bool q_graphicslayout_instant_invalidate_propagation();

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// @param self QGraphicsLayout*
/// @param layoutItem QGraphicsLayoutItem*
void q_graphicslayout_add_child_layout_item(void* self, void* layoutItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void fn(QGraphicsLayout*, QGraphicsLayoutItem*)
void q_graphicslayout_on_add_child_layout_item(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
/// @param layoutItem QGraphicsLayoutItem*
void q_graphicslayout_qbase_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayout*
/// @param policy QSizePolicy*
void q_graphicslayout_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
void q_graphicslayout_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self QGraphicsLayout*
QSizePolicy* q_graphicslayout_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLayout*
/// @param size QSizeF*
void q_graphicslayout_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLayout*
/// @param w double
/// @param h double
void q_graphicslayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self QGraphicsLayout*
QSizeF* q_graphicslayout_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsLayout*
/// @param width double
void q_graphicslayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self QGraphicsLayout*
double q_graphicslayout_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsLayout*
/// @param height double
void q_graphicslayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self QGraphicsLayout*
double q_graphicslayout_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLayout*
/// @param size QSizeF*
void q_graphicslayout_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLayout*
/// @param w double
/// @param h double
void q_graphicslayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self QGraphicsLayout*
QSizeF* q_graphicslayout_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsLayout*
/// @param width double
void q_graphicslayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self QGraphicsLayout*
double q_graphicslayout_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsLayout*
/// @param height double
void q_graphicslayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self QGraphicsLayout*
double q_graphicslayout_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLayout*
/// @param size QSizeF*
void q_graphicslayout_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLayout*
/// @param w double
/// @param h double
void q_graphicslayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self QGraphicsLayout*
QSizeF* q_graphicslayout_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsLayout*
/// @param width double
void q_graphicslayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self QGraphicsLayout*
double q_graphicslayout_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsLayout*
/// @param height double
void q_graphicslayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self QGraphicsLayout*
double q_graphicslayout_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self QGraphicsLayout*
QRectF* q_graphicslayout_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self QGraphicsLayout*
QRectF* q_graphicslayout_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsLayout*
/// @param which enum Qt__SizeHint
QSizeF* q_graphicslayout_effective_size_hint(void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self QGraphicsLayout*
QGraphicsLayoutItem* q_graphicslayout_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsLayout*
/// @param parent QGraphicsLayoutItem*
void q_graphicslayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self QGraphicsLayout*
bool q_graphicslayout_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self QGraphicsLayout*
QGraphicsItem* q_graphicslayout_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self QGraphicsLayout*
bool q_graphicslayout_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
void q_graphicslayout_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicslayout_effective_size_hint2(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param rect QRectF*
void q_graphicslayout_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param rect QRectF*
void q_graphicslayout_qbase_set_geometry(void* self, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback void fn(QGraphicsLayout*, QRectF*)
void q_graphicslayout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLayout*
bool q_graphicslayout_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLayout*
bool q_graphicslayout_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback bool fn()
void q_graphicslayout_on_is_empty(void* self, bool (*callback)());

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicslayout_size_hint(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicslayout_qbase_size_hint(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback QSizeF* fn(QGraphicsLayout*, enum Qt__SizeHint, QSizeF*)
void q_graphicslayout_on_size_hint(void* self, QSizeF* (*callback)(void*, int32_t, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param item QGraphicsItem*
void q_graphicslayout_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param item QGraphicsItem*
void q_graphicslayout_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback void fn(QGraphicsLayout*, QGraphicsItem*)
void q_graphicslayout_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param ownedByLayout bool
void q_graphicslayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param ownedByLayout bool
void q_graphicslayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback void fn(QGraphicsLayout*, bool)
void q_graphicslayout_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#dtor.QGraphicsLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsLayout*
void q_graphicslayout_delete(void* self);

#endif

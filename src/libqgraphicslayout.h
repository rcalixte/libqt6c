#pragma once
#ifndef LIBQGRAPHICSLAYOUT_H
#define LIBQGRAPHICSLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html)

/// q_graphicslayout_new constructs a new QGraphicsLayout object.
///
QGraphicsLayout* q_graphicslayout_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html)

/// q_graphicslayout_new2 constructs a new QGraphicsLayout object.
///
/// @param parent QGraphicsLayoutItem*
///
QGraphicsLayout* q_graphicslayout_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// @param self QGraphicsLayout*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_graphicslayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// @param self const QGraphicsLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicslayout_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void func(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom)
///
void q_graphicslayout_on_get_contents_margins(void* self, void (*callback)(const void*, double*, double*, double*, double*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Base class method implementation
///
/// @param self const QGraphicsLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicslayout_super_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// @param self QGraphicsLayout*
///
void q_graphicslayout_activate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// @param self const QGraphicsLayout*
///
bool q_graphicslayout_is_activated(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// @param self QGraphicsLayout*
///
void q_graphicslayout_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void func(QGraphicsLayout* self)
///
void q_graphicslayout_on_invalidate(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
///
void q_graphicslayout_super_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// @param self QGraphicsLayout*
///
void q_graphicslayout_update_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void func(QGraphicsLayout* self)
///
void q_graphicslayout_on_update_geometry(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
///
void q_graphicslayout_super_update_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// @param self QGraphicsLayout*
/// @param e QEvent*
///
void q_graphicslayout_widget_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void func(QGraphicsLayout* self, QEvent* e)
///
void q_graphicslayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsLayout*
/// @param e QEvent*
///
void q_graphicslayout_super_widget_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
///
/// @warning This method must be implemented with `q_graphicslayout_on_count` before it can be called.
///
/// @param self const QGraphicsLayout*
///
int32_t q_graphicslayout_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback int32_t func(const QGraphicsLayout* self)
///
void q_graphicslayout_on_count(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
///
/// @warning This method must be implemented with `q_graphicslayout_on_item_at` before it can be called.
///
/// @param self const QGraphicsLayout*
/// @param i int
///
QGraphicsLayoutItem* q_graphicslayout_item_at(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback QGraphicsLayoutItem* func(const QGraphicsLayout* self, int i)
///
void q_graphicslayout_on_item_at(void* self, QGraphicsLayoutItem* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
///
/// @warning This method must be implemented with `q_graphicslayout_on_remove_at` before it can be called.
///
/// @param self QGraphicsLayout*
/// @param index int
///
void q_graphicslayout_remove_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#removeAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayout*
/// @param callback void func(QGraphicsLayout* self, int index)
///
void q_graphicslayout_on_remove_at(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// @param enable bool
///
void q_graphicslayout_set_instant_invalidate_propagation(bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
bool q_graphicslayout_instant_invalidate_propagation();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// @param self QGraphicsLayout*
/// @param layoutItem QGraphicsLayoutItem*
///
void q_graphicslayout_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayout*
/// @param policy QSizePolicy*
///
void q_graphicslayout_set_size_policy(void* self, const void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_graphicslayout_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self const QGraphicsLayout*
///
QSizePolicy* q_graphicslayout_size_policy(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLayout*
/// @param size QSizeF*
///
void q_graphicslayout_set_minimum_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLayout*
/// @param w double
/// @param h double
///
void q_graphicslayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self const QGraphicsLayout*
///
QSizeF* q_graphicslayout_minimum_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsLayout*
/// @param width double
///
void q_graphicslayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self const QGraphicsLayout*
///
double q_graphicslayout_minimum_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsLayout*
/// @param height double
///
void q_graphicslayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self const QGraphicsLayout*
///
double q_graphicslayout_minimum_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLayout*
/// @param size QSizeF*
///
void q_graphicslayout_set_preferred_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLayout*
/// @param w double
/// @param h double
///
void q_graphicslayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self const QGraphicsLayout*
///
QSizeF* q_graphicslayout_preferred_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsLayout*
/// @param width double
///
void q_graphicslayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self const QGraphicsLayout*
///
double q_graphicslayout_preferred_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsLayout*
/// @param height double
///
void q_graphicslayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self const QGraphicsLayout*
///
double q_graphicslayout_preferred_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLayout*
/// @param size QSizeF*
///
void q_graphicslayout_set_maximum_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLayout*
/// @param w double
/// @param h double
///
void q_graphicslayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self const QGraphicsLayout*
///
QSizeF* q_graphicslayout_maximum_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsLayout*
/// @param width double
///
void q_graphicslayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self const QGraphicsLayout*
///
double q_graphicslayout_maximum_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsLayout*
/// @param height double
///
void q_graphicslayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self const QGraphicsLayout*
///
double q_graphicslayout_maximum_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self const QGraphicsLayout*
///
QRectF* q_graphicslayout_geometry(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self const QGraphicsLayout*
///
QRectF* q_graphicslayout_contents_rect(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QGraphicsLayout*
/// @param which enum Qt__SizeHint
///
QSizeF* q_graphicslayout_effective_size_hint(const void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self const QGraphicsLayout*
///
QGraphicsLayoutItem* q_graphicslayout_parent_layout_item(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsLayout*
/// @param parent QGraphicsLayoutItem*
///
void q_graphicslayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self const QGraphicsLayout*
///
bool q_graphicslayout_is_layout(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self const QGraphicsLayout*
///
QGraphicsItem* q_graphicslayout_graphics_item(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self const QGraphicsLayout*
///
bool q_graphicslayout_owned_by_layout(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_graphicslayout_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QGraphicsLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicslayout_effective_size_hint2(const void* self, int32_t which, const void* constraint);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param rect QRectF*
///
void q_graphicslayout_set_geometry(void* self, const void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param rect QRectF*
///
void q_graphicslayout_super_set_geometry(void* self, const void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback void func(QGraphicsLayout* self, QRectF* rect)
///
void q_graphicslayout_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsLayout*
///
bool q_graphicslayout_is_empty(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsLayout*
///
bool q_graphicslayout_super_is_empty(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback bool func(QGraphicsLayout* self)
///
void q_graphicslayout_on_is_empty(void* self, bool (*callback)(const void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_graphicslayout_on_size_hint` before it can be called.
////// @param self const QGraphicsLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicslayout_size_hint(const void* self, int32_t which, const void* constraint);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback QSizeF* func(QGraphicsLayout* self, enum Qt__SizeHint which, QSizeF* constraint)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicslayout_on_size_hint(void* self, QSizeF* (*callback)(const void*, int32_t, const void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param item QGraphicsItem*
///
void q_graphicslayout_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param item QGraphicsItem*
///
void q_graphicslayout_super_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback void func(QGraphicsLayout* self, QGraphicsItem* item)
///
void q_graphicslayout_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param ownedByLayout bool
///
void q_graphicslayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param ownedByLayout bool
///
void q_graphicslayout_super_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLayout*
/// @param callback void func(QGraphicsLayout* self, bool ownedByLayout)
///
void q_graphicslayout_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#dtor.QGraphicsLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsLayout*
///
void q_graphicslayout_delete(void* self);

#endif

#pragma once
#ifndef LIBQGRAPHICSLINEARLAYOUT_H
#define LIBQGRAPHICSLINEARLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html)

/// q_graphicslinearlayout_new constructs a new QGraphicsLinearLayout object.
///
QGraphicsLinearLayout* q_graphicslinearlayout_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html)

/// q_graphicslinearlayout_new2 constructs a new QGraphicsLinearLayout object.
///
/// @param orientation enum Qt__Orientation
///
QGraphicsLinearLayout* q_graphicslinearlayout_new2(int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html)

/// q_graphicslinearlayout_new3 constructs a new QGraphicsLinearLayout object.
///
/// @param parent QGraphicsLayoutItem*
///
QGraphicsLinearLayout* q_graphicslinearlayout_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html)

/// q_graphicslinearlayout_new4 constructs a new QGraphicsLinearLayout object.
///
/// @param orientation enum Qt__Orientation
/// @param parent QGraphicsLayoutItem*
///
QGraphicsLinearLayout* q_graphicslinearlayout_new4(int32_t orientation, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setOrientation)
///
/// @param self QGraphicsLinearLayout*
/// @param orientation enum Qt__Orientation
///
void q_graphicslinearlayout_set_orientation(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#orientation)
///
/// @param self const QGraphicsLinearLayout*
///
/// @return enum Qt__Orientation
///
int32_t q_graphicslinearlayout_orientation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addItem)
///
/// @param self QGraphicsLinearLayout*
/// @param item QGraphicsLayoutItem*
///
void q_graphicslinearlayout_add_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
///
/// @param self QGraphicsLinearLayout*
///
void q_graphicslinearlayout_add_stretch(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertItem)
///
/// @param self QGraphicsLinearLayout*
/// @param index int
/// @param item QGraphicsLayoutItem*
///
void q_graphicslinearlayout_insert_item(void* self, int index, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
///
/// @param self QGraphicsLinearLayout*
/// @param index int
///
void q_graphicslinearlayout_insert_stretch(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeItem)
///
/// @param self QGraphicsLinearLayout*
/// @param item QGraphicsLayoutItem*
///
void q_graphicslinearlayout_remove_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
///
/// @param self QGraphicsLinearLayout*
/// @param index int
///
void q_graphicslinearlayout_remove_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self, int index)
///
void q_graphicslinearlayout_on_remove_at(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#removeAt)
///
/// Base class method implementation
///
/// @param self QGraphicsLinearLayout*
/// @param index int
///
void q_graphicslinearlayout_super_remove_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setSpacing)
///
/// @param self QGraphicsLinearLayout*
/// @param spacing double
///
void q_graphicslinearlayout_set_spacing(void* self, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#spacing)
///
/// @param self const QGraphicsLinearLayout*
///
double q_graphicslinearlayout_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setItemSpacing)
///
/// @param self QGraphicsLinearLayout*
/// @param index int
/// @param spacing double
///
void q_graphicslinearlayout_set_item_spacing(void* self, int index, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemSpacing)
///
/// @param self const QGraphicsLinearLayout*
/// @param index int
///
double q_graphicslinearlayout_item_spacing(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setStretchFactor)
///
/// @param self QGraphicsLinearLayout*
/// @param item QGraphicsLayoutItem*
/// @param stretch int
///
void q_graphicslinearlayout_set_stretch_factor(void* self, void* item, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#stretchFactor)
///
/// @param self const QGraphicsLinearLayout*
/// @param item QGraphicsLayoutItem*
///
int32_t q_graphicslinearlayout_stretch_factor(const void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setAlignment)
///
/// @param self QGraphicsLinearLayout*
/// @param item QGraphicsLayoutItem*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_graphicslinearlayout_set_alignment(void* self, void* item, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#alignment)
///
/// @param self const QGraphicsLinearLayout*
/// @param item QGraphicsLayoutItem*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_graphicslinearlayout_alignment(const void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
///
/// @param self QGraphicsLinearLayout*
/// @param rect QRectF*
///
void q_graphicslinearlayout_set_geometry(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self, QRectF* rect)
///
void q_graphicslinearlayout_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsLinearLayout*
/// @param rect QRectF*
///
void q_graphicslinearlayout_super_set_geometry(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
///
/// @param self const QGraphicsLinearLayout*
///
int32_t q_graphicslinearlayout_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsLinearLayout*
/// @param callback int32_t func(const QGraphicsLinearLayout* self)
///
void q_graphicslinearlayout_on_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#count)
///
/// Base class method implementation
///
/// @param self const QGraphicsLinearLayout*
///
int32_t q_graphicslinearlayout_super_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
///
/// @param self const QGraphicsLinearLayout*
/// @param index int
///
QGraphicsLayoutItem* q_graphicslinearlayout_item_at(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsLinearLayout*
/// @param callback QGraphicsLayoutItem* func(const QGraphicsLinearLayout* self, int index)
///
void q_graphicslinearlayout_on_item_at(const void* self, QGraphicsLayoutItem* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self const QGraphicsLinearLayout*
/// @param index int
///
QGraphicsLayoutItem* q_graphicslinearlayout_super_item_at(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
///
/// @param self QGraphicsLinearLayout*
///
void q_graphicslinearlayout_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self)
///
void q_graphicslinearlayout_on_invalidate(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QGraphicsLinearLayout*
///
void q_graphicslinearlayout_super_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
///
/// @param self const QGraphicsLinearLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicslinearlayout_size_hint(const void* self, int32_t which, const void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsLinearLayout*
/// @param callback QSizeF* func(const QGraphicsLinearLayout* self, enum Qt__SizeHint which, QSizeF* constraint)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicslinearlayout_on_size_hint(const void* self, QSizeF* (*callback)(const void*, int32_t, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QGraphicsLinearLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicslinearlayout_super_size_hint(const void* self, int32_t which, const void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
///
/// @param self const QGraphicsLinearLayout*
///
void q_graphicslinearlayout_dump(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#addStretch)
///
/// @param self QGraphicsLinearLayout*
/// @param stretch int
///
void q_graphicslinearlayout_add_stretch1(void* self, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#insertStretch)
///
/// @param self QGraphicsLinearLayout*
/// @param index int
/// @param stretch int
///
void q_graphicslinearlayout_insert_stretch2(void* self, int index, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dump)
///
/// @param self const QGraphicsLinearLayout*
/// @param indent int
///
void q_graphicslinearlayout_dump1(const void* self, int indent);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// @param self QGraphicsLinearLayout*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_graphicslinearlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// @param self QGraphicsLinearLayout*
///
void q_graphicslinearlayout_activate(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// @param self const QGraphicsLinearLayout*
///
bool q_graphicslinearlayout_is_activated(const void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// @param enable bool
///
void q_graphicslinearlayout_set_instant_invalidate_propagation(bool enable);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
bool q_graphicslinearlayout_instant_invalidate_propagation();

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLinearLayout*
/// @param policy QSizePolicy*
///
void q_graphicslinearlayout_set_size_policy(void* self, const void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLinearLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_graphicslinearlayout_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self const QGraphicsLinearLayout*
///
QSizePolicy* q_graphicslinearlayout_size_policy(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLinearLayout*
/// @param size QSizeF*
///
void q_graphicslinearlayout_set_minimum_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLinearLayout*
/// @param w double
/// @param h double
///
void q_graphicslinearlayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self const QGraphicsLinearLayout*
///
QSizeF* q_graphicslinearlayout_minimum_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsLinearLayout*
/// @param width double
///
void q_graphicslinearlayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self const QGraphicsLinearLayout*
///
double q_graphicslinearlayout_minimum_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsLinearLayout*
/// @param height double
///
void q_graphicslinearlayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self const QGraphicsLinearLayout*
///
double q_graphicslinearlayout_minimum_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLinearLayout*
/// @param size QSizeF*
///
void q_graphicslinearlayout_set_preferred_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLinearLayout*
/// @param w double
/// @param h double
///
void q_graphicslinearlayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self const QGraphicsLinearLayout*
///
QSizeF* q_graphicslinearlayout_preferred_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsLinearLayout*
/// @param width double
///
void q_graphicslinearlayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self const QGraphicsLinearLayout*
///
double q_graphicslinearlayout_preferred_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsLinearLayout*
/// @param height double
///
void q_graphicslinearlayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self const QGraphicsLinearLayout*
///
double q_graphicslinearlayout_preferred_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLinearLayout*
/// @param size QSizeF*
///
void q_graphicslinearlayout_set_maximum_size(void* self, const void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLinearLayout*
/// @param w double
/// @param h double
///
void q_graphicslinearlayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self const QGraphicsLinearLayout*
///
QSizeF* q_graphicslinearlayout_maximum_size(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsLinearLayout*
/// @param width double
///
void q_graphicslinearlayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self const QGraphicsLinearLayout*
///
double q_graphicslinearlayout_maximum_width(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsLinearLayout*
/// @param height double
///
void q_graphicslinearlayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self const QGraphicsLinearLayout*
///
double q_graphicslinearlayout_maximum_height(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self const QGraphicsLinearLayout*
///
QRectF* q_graphicslinearlayout_geometry(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self const QGraphicsLinearLayout*
///
QRectF* q_graphicslinearlayout_contents_rect(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QGraphicsLinearLayout*
/// @param which enum Qt__SizeHint
///
QSizeF* q_graphicslinearlayout_effective_size_hint(const void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self const QGraphicsLinearLayout*
///
QGraphicsLayoutItem* q_graphicslinearlayout_parent_layout_item(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsLinearLayout*
/// @param parent QGraphicsLayoutItem*
///
void q_graphicslinearlayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self const QGraphicsLinearLayout*
///
bool q_graphicslinearlayout_is_layout(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self const QGraphicsLinearLayout*
///
QGraphicsItem* q_graphicslinearlayout_graphics_item(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self const QGraphicsLinearLayout*
///
bool q_graphicslinearlayout_owned_by_layout(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLinearLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_graphicslinearlayout_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QGraphicsLinearLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicslinearlayout_effective_size_hint2(const void* self, int32_t which, const void* constraint);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsLinearLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicslinearlayout_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsLinearLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicslinearlayout_super_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom)
///
void q_graphicslinearlayout_on_get_contents_margins(const void* self, void (*callback)(const void*, double*, double*, double*, double*));

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLinearLayout*
///
void q_graphicslinearlayout_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
///
void q_graphicslinearlayout_super_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self)
///
void q_graphicslinearlayout_on_update_geometry(void* self, void (*callback)(void*));

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param e QEvent*
///
void q_graphicslinearlayout_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param e QEvent*
///
void q_graphicslinearlayout_super_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self, QEvent* e)
///
void q_graphicslinearlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsLinearLayout*
///
bool q_graphicslinearlayout_is_empty(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsLinearLayout*
///
bool q_graphicslinearlayout_super_is_empty(const void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsLinearLayout*
/// @param callback bool func(QGraphicsLinearLayout* self)
///
void q_graphicslinearlayout_on_is_empty(const void* self, bool (*callback)(const void*));

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param layoutItem QGraphicsLayoutItem*
///
void q_graphicslinearlayout_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param layoutItem QGraphicsLayoutItem*
///
void q_graphicslinearlayout_super_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self, QGraphicsLayoutItem* layoutItem)
///
void q_graphicslinearlayout_on_add_child_layout_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param item QGraphicsItem*
///
void q_graphicslinearlayout_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param item QGraphicsItem*
///
void q_graphicslinearlayout_super_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self, QGraphicsItem* item)
///
void q_graphicslinearlayout_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param ownedByLayout bool
///
void q_graphicslinearlayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param ownedByLayout bool
///
void q_graphicslinearlayout_super_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsLinearLayout*
/// @param callback void func(QGraphicsLinearLayout* self, bool ownedByLayout)
///
void q_graphicslinearlayout_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslinearlayout.html#dtor.QGraphicsLinearLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsLinearLayout*
///
void q_graphicslinearlayout_delete(void* self);

#endif

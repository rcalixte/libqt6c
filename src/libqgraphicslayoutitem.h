#pragma once
#ifndef LIBQGRAPHICSLAYOUTITEM_H
#define LIBQGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html)

/// q_graphicslayoutitem_new constructs a new QGraphicsLayoutItem object.
///
QGraphicsLayoutItem* q_graphicslayoutitem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html)

/// q_graphicslayoutitem_new2 constructs a new QGraphicsLayoutItem object.
///
/// @param parent QGraphicsLayoutItem*
///
QGraphicsLayoutItem* q_graphicslayoutitem_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html)

/// q_graphicslayoutitem_new3 constructs a new QGraphicsLayoutItem object.
///
/// @param parent QGraphicsLayoutItem*
/// @param isLayout bool
///
QGraphicsLayoutItem* q_graphicslayoutitem_new3(void* parent, bool isLayout);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayoutItem*
/// @param policy QSizePolicy*
///
void q_graphicslayoutitem_set_size_policy(void* self, const void* policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayoutItem*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_graphicslayoutitem_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self const QGraphicsLayoutItem*
///
QSizePolicy* q_graphicslayoutitem_size_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLayoutItem*
/// @param size QSizeF*
///
void q_graphicslayoutitem_set_minimum_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLayoutItem*
/// @param w double
/// @param h double
///
void q_graphicslayoutitem_set_minimum_size2(void* self, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self const QGraphicsLayoutItem*
///
QSizeF* q_graphicslayoutitem_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsLayoutItem*
/// @param width double
///
void q_graphicslayoutitem_set_minimum_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self const QGraphicsLayoutItem*
///
double q_graphicslayoutitem_minimum_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsLayoutItem*
/// @param height double
///
void q_graphicslayoutitem_set_minimum_height(void* self, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self const QGraphicsLayoutItem*
///
double q_graphicslayoutitem_minimum_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLayoutItem*
/// @param size QSizeF*
///
void q_graphicslayoutitem_set_preferred_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLayoutItem*
/// @param w double
/// @param h double
///
void q_graphicslayoutitem_set_preferred_size2(void* self, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self const QGraphicsLayoutItem*
///
QSizeF* q_graphicslayoutitem_preferred_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsLayoutItem*
/// @param width double
///
void q_graphicslayoutitem_set_preferred_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self const QGraphicsLayoutItem*
///
double q_graphicslayoutitem_preferred_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsLayoutItem*
/// @param height double
///
void q_graphicslayoutitem_set_preferred_height(void* self, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self const QGraphicsLayoutItem*
///
double q_graphicslayoutitem_preferred_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLayoutItem*
/// @param size QSizeF*
///
void q_graphicslayoutitem_set_maximum_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLayoutItem*
/// @param w double
/// @param h double
///
void q_graphicslayoutitem_set_maximum_size2(void* self, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self const QGraphicsLayoutItem*
///
QSizeF* q_graphicslayoutitem_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsLayoutItem*
/// @param width double
///
void q_graphicslayoutitem_set_maximum_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self const QGraphicsLayoutItem*
///
double q_graphicslayoutitem_maximum_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsLayoutItem*
/// @param height double
///
void q_graphicslayoutitem_set_maximum_height(void* self, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self const QGraphicsLayoutItem*
///
double q_graphicslayoutitem_maximum_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// @param self QGraphicsLayoutItem*
/// @param rect QRectF*
///
void q_graphicslayoutitem_set_geometry(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback void func(QGraphicsLayoutItem* self, QRectF* rect)
///
void q_graphicslayoutitem_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
/// @param rect QRectF*
///
void q_graphicslayoutitem_super_set_geometry(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self const QGraphicsLayoutItem*
///
QRectF* q_graphicslayoutitem_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// @param self const QGraphicsLayoutItem*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicslayoutitem_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback void func(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom)
///
void q_graphicslayoutitem_on_get_contents_margins(void* self, void (*callback)(const void*, double*, double*, double*, double*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// Base class method implementation
///
/// @param self const QGraphicsLayoutItem*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicslayoutitem_super_get_contents_margins(const void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self const QGraphicsLayoutItem*
///
QRectF* q_graphicslayoutitem_contents_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QGraphicsLayoutItem*
/// @param which enum Qt__SizeHint
///
QSizeF* q_graphicslayoutitem_effective_size_hint(const void* self, int32_t which);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// @param self QGraphicsLayoutItem*
///
void q_graphicslayoutitem_update_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback void func(QGraphicsLayoutItem* self)
///
void q_graphicslayoutitem_on_update_geometry(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
///
void q_graphicslayoutitem_super_update_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// @param self const QGraphicsLayoutItem*
///
bool q_graphicslayoutitem_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback bool func(const QGraphicsLayoutItem* self)
///
void q_graphicslayoutitem_on_is_empty(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Base class method implementation
///
/// @param self const QGraphicsLayoutItem*
///
bool q_graphicslayoutitem_super_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self const QGraphicsLayoutItem*
///
QGraphicsLayoutItem* q_graphicslayoutitem_parent_layout_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsLayoutItem*
/// @param parent QGraphicsLayoutItem*
///
void q_graphicslayoutitem_set_parent_layout_item(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self const QGraphicsLayoutItem*
///
bool q_graphicslayoutitem_is_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self const QGraphicsLayoutItem*
///
QGraphicsItem* q_graphicslayoutitem_graphics_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self const QGraphicsLayoutItem*
///
bool q_graphicslayoutitem_owned_by_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// @param self QGraphicsLayoutItem*
/// @param item QGraphicsItem*
///
void q_graphicslayoutitem_set_graphics_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// @param self QGraphicsLayoutItem*
/// @param ownedByLayout bool
///
void q_graphicslayoutitem_set_owned_by_layout(void* self, bool ownedByLayout);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// @warning This method must be implemented with `q_graphicslayoutitem_on_size_hint` before it can be called.
///
/// @param self const QGraphicsLayoutItem*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicslayoutitem_size_hint(const void* self, int32_t which, const void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback QSizeF* func(const QGraphicsLayoutItem* self, enum Qt__SizeHint which, QSizeF* constraint)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_graphicslayoutitem_on_size_hint(void* self, QSizeF* (*callback)(const void*, int32_t, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayoutItem*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_graphicslayoutitem_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self const QGraphicsLayoutItem*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicslayoutitem_effective_size_hint2(const void* self, int32_t which, const void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#dtor.QGraphicsLayoutItem)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsLayoutItem*
///
void q_graphicslayoutitem_delete(void* self);

#endif

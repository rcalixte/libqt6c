#pragma once
#ifndef SRC_QT6C_LIBQGRAPHICSLAYOUTITEM_H
#define SRC_QT6C_LIBQGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicslayoutitem.html

/// q_graphicslayoutitem_new constructs a new QGraphicsLayoutItem object.
///
QGraphicsLayoutItem* q_graphicslayoutitem_new();

/// q_graphicslayoutitem_new2 constructs a new QGraphicsLayoutItem object.
///
/// @param parent QGraphicsLayoutItem*
QGraphicsLayoutItem* q_graphicslayoutitem_new2(void* parent);

/// q_graphicslayoutitem_new3 constructs a new QGraphicsLayoutItem object.
///
/// @param parent QGraphicsLayoutItem*
/// @param isLayout bool
QGraphicsLayoutItem* q_graphicslayoutitem_new3(void* parent, bool isLayout);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayoutItem*
/// @param policy QSizePolicy*
void q_graphicslayoutitem_set_size_policy(void* self, void* policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayoutItem*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
void q_graphicslayoutitem_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self QGraphicsLayoutItem*
QSizePolicy* q_graphicslayoutitem_size_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLayoutItem*
/// @param size QSizeF*
void q_graphicslayoutitem_set_minimum_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsLayoutItem*
/// @param w double
/// @param h double
void q_graphicslayoutitem_set_minimum_size2(void* self, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self QGraphicsLayoutItem*
QSizeF* q_graphicslayoutitem_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsLayoutItem*
/// @param width double
void q_graphicslayoutitem_set_minimum_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self QGraphicsLayoutItem*
double q_graphicslayoutitem_minimum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsLayoutItem*
/// @param height double
void q_graphicslayoutitem_set_minimum_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self QGraphicsLayoutItem*
double q_graphicslayoutitem_minimum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLayoutItem*
/// @param size QSizeF*
void q_graphicslayoutitem_set_preferred_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsLayoutItem*
/// @param w double
/// @param h double
void q_graphicslayoutitem_set_preferred_size2(void* self, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self QGraphicsLayoutItem*
QSizeF* q_graphicslayoutitem_preferred_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsLayoutItem*
/// @param width double
void q_graphicslayoutitem_set_preferred_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self QGraphicsLayoutItem*
double q_graphicslayoutitem_preferred_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsLayoutItem*
/// @param height double
void q_graphicslayoutitem_set_preferred_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self QGraphicsLayoutItem*
double q_graphicslayoutitem_preferred_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLayoutItem*
/// @param size QSizeF*
void q_graphicslayoutitem_set_maximum_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsLayoutItem*
/// @param w double
/// @param h double
void q_graphicslayoutitem_set_maximum_size2(void* self, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self QGraphicsLayoutItem*
QSizeF* q_graphicslayoutitem_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsLayoutItem*
/// @param width double
void q_graphicslayoutitem_set_maximum_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self QGraphicsLayoutItem*
double q_graphicslayoutitem_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsLayoutItem*
/// @param height double
void q_graphicslayoutitem_set_maximum_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self QGraphicsLayoutItem*
double q_graphicslayoutitem_maximum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// @param self QGraphicsLayoutItem*
/// @param rect QRectF*
void q_graphicslayoutitem_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback void func(QGraphicsLayoutItem* self, QRectF* rect)
void q_graphicslayoutitem_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
/// @param rect QRectF*
void q_graphicslayoutitem_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self QGraphicsLayoutItem*
QRectF* q_graphicslayoutitem_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// @param self QGraphicsLayoutItem*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
void q_graphicslayoutitem_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback void func(QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom)
void q_graphicslayoutitem_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
void q_graphicslayoutitem_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self QGraphicsLayoutItem*
QRectF* q_graphicslayoutitem_contents_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsLayoutItem*
/// @param which enum Qt__SizeHint
QSizeF* q_graphicslayoutitem_effective_size_hint(void* self, int32_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// @param self QGraphicsLayoutItem*
void q_graphicslayoutitem_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback void func()
void q_graphicslayoutitem_on_update_geometry(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
void q_graphicslayoutitem_qbase_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// @param self QGraphicsLayoutItem*
bool q_graphicslayoutitem_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback bool func()
void q_graphicslayoutitem_on_is_empty(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
bool q_graphicslayoutitem_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self QGraphicsLayoutItem*
QGraphicsLayoutItem* q_graphicslayoutitem_parent_layout_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsLayoutItem*
/// @param parent QGraphicsLayoutItem*
void q_graphicslayoutitem_set_parent_layout_item(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self QGraphicsLayoutItem*
bool q_graphicslayoutitem_is_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self QGraphicsLayoutItem*
QGraphicsItem* q_graphicslayoutitem_graphics_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self QGraphicsLayoutItem*
bool q_graphicslayoutitem_owned_by_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// @param self QGraphicsLayoutItem*
/// @param item QGraphicsItem*
void q_graphicslayoutitem_set_graphics_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback void func(QGraphicsLayoutItem* self, QGraphicsItem* item)
void q_graphicslayoutitem_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
/// @param item QGraphicsItem*
void q_graphicslayoutitem_qbase_set_graphics_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// @param self QGraphicsLayoutItem*
/// @param ownedByLayout bool
void q_graphicslayoutitem_set_owned_by_layout(void* self, bool ownedByLayout);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback void func(QGraphicsLayoutItem* self, bool ownedByLayout)
void q_graphicslayoutitem_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
/// @param ownedByLayout bool
void q_graphicslayoutitem_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// @param self QGraphicsLayoutItem*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicslayoutitem_size_hint(void* self, int32_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsLayoutItem*
/// @param callback QSizeF* func(QGraphicsLayoutItem* self, enum Qt__SizeHint which, QSizeF* constraint)
void q_graphicslayoutitem_on_size_hint(void* self, QSizeF* (*callback)(void*, int32_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QGraphicsLayoutItem*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicslayoutitem_qbase_size_hint(void* self, int32_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsLayoutItem*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
void q_graphicslayoutitem_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsLayoutItem*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicslayoutitem_effective_size_hint2(void* self, int32_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#dtor.QGraphicsLayoutItem)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsLayoutItem*
void q_graphicslayoutitem_delete(void* self);

#endif

#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSLAYOUTITEM_H
#define SRCQT6C_LIBQGRAPHICSLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicslayoutitem.html

/// q_graphicslayoutitem_new constructs a new QGraphicsLayoutItem object.
///
///
QGraphicsLayoutItem* q_graphicslayoutitem_new();

/// q_graphicslayoutitem_new2 constructs a new QGraphicsLayoutItem object.
///
/// ``` QGraphicsLayoutItem* parent ```
QGraphicsLayoutItem* q_graphicslayoutitem_new2(void* parent);

/// q_graphicslayoutitem_new3 constructs a new QGraphicsLayoutItem object.
///
/// ``` QGraphicsLayoutItem* parent, bool isLayout ```
QGraphicsLayoutItem* q_graphicslayoutitem_new3(void* parent, bool isLayout);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayoutItem* self, QSizePolicy* policy ```
void q_graphicslayoutitem_set_size_policy(void* self, void* policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayoutItem* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicslayoutitem_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsLayoutItem* self ```
QSizePolicy* q_graphicslayoutitem_size_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLayoutItem* self, QSizeF* size ```
void q_graphicslayoutitem_set_minimum_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsLayoutItem* self, double w, double h ```
void q_graphicslayoutitem_set_minimum_size2(void* self, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsLayoutItem* self ```
QSizeF* q_graphicslayoutitem_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsLayoutItem* self, double width ```
void q_graphicslayoutitem_set_minimum_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_minimum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsLayoutItem* self, double height ```
void q_graphicslayoutitem_set_minimum_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_minimum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLayoutItem* self, QSizeF* size ```
void q_graphicslayoutitem_set_preferred_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsLayoutItem* self, double w, double h ```
void q_graphicslayoutitem_set_preferred_size2(void* self, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsLayoutItem* self ```
QSizeF* q_graphicslayoutitem_preferred_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsLayoutItem* self, double width ```
void q_graphicslayoutitem_set_preferred_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_preferred_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsLayoutItem* self, double height ```
void q_graphicslayoutitem_set_preferred_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_preferred_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLayoutItem* self, QSizeF* size ```
void q_graphicslayoutitem_set_maximum_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsLayoutItem* self, double w, double h ```
void q_graphicslayoutitem_set_maximum_size2(void* self, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsLayoutItem* self ```
QSizeF* q_graphicslayoutitem_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsLayoutItem* self, double width ```
void q_graphicslayoutitem_set_maximum_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsLayoutItem* self, double height ```
void q_graphicslayoutitem_set_maximum_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsLayoutItem* self ```
double q_graphicslayoutitem_maximum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// ``` QGraphicsLayoutItem* self, QRectF* rect ```
void q_graphicslayoutitem_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)(QGraphicsLayoutItem*, QRectF*) ```
void q_graphicslayoutitem_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, QRectF* rect ```
void q_graphicslayoutitem_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsLayoutItem* self ```
QRectF* q_graphicslayoutitem_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// ``` QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslayoutitem_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)(QGraphicsLayoutItem*, double*, double*, double*, double*) ```
void q_graphicslayoutitem_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#getContentsMargins)
///
/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom ```
void q_graphicslayoutitem_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsLayoutItem* self ```
QRectF* q_graphicslayoutitem_contents_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLayoutItem* self, enum Qt__SizeHint which ```
QSizeF* q_graphicslayoutitem_effective_size_hint(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// ``` QGraphicsLayoutItem* self ```
void q_graphicslayoutitem_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)() ```
void q_graphicslayoutitem_on_update_geometry(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#updateGeometry)
///
/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self ```
void q_graphicslayoutitem_qbase_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// ``` QGraphicsLayoutItem* self ```
bool q_graphicslayoutitem_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, bool (*slot)() ```
void q_graphicslayoutitem_on_is_empty(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self ```
bool q_graphicslayoutitem_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsLayoutItem* self ```
QGraphicsLayoutItem* q_graphicslayoutitem_parent_layout_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent ```
void q_graphicslayoutitem_set_parent_layout_item(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsLayoutItem* self ```
bool q_graphicslayoutitem_is_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsLayoutItem* self ```
QGraphicsItem* q_graphicslayoutitem_graphics_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsLayoutItem* self ```
bool q_graphicslayoutitem_owned_by_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// ``` QGraphicsLayoutItem* self, QGraphicsItem* item ```
void q_graphicslayoutitem_set_graphics_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)(QGraphicsLayoutItem*, QGraphicsItem*) ```
void q_graphicslayoutitem_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, QGraphicsItem* item ```
void q_graphicslayoutitem_qbase_set_graphics_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// ``` QGraphicsLayoutItem* self, bool ownedByLayout ```
void q_graphicslayoutitem_set_owned_by_layout(void* self, bool ownedByLayout);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, void (*slot)(QGraphicsLayoutItem*, bool) ```
void q_graphicslayoutitem_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, bool ownedByLayout ```
void q_graphicslayoutitem_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// ``` QGraphicsLayoutItem* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayoutitem_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsLayoutItem* self, QSizeF* (*slot)(QGraphicsLayoutItem*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicslayoutitem_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QGraphicsLayoutItem* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayoutitem_qbase_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsLayoutItem* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicslayoutitem_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsLayoutItem* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicslayoutitem_effective_size_hint2(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#dtor.QGraphicsLayoutItem)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsLayoutItem* self ```
void q_graphicslayoutitem_delete(void* self);

#endif

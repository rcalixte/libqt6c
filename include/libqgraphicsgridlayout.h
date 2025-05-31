#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSGRIDLAYOUT_H
#define SRCQT6C_LIBQGRAPHICSGRIDLAYOUT_H

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

/// https://doc.qt.io/qt-6/qgraphicsgridlayout.html

/// q_graphicsgridlayout_new constructs a new QGraphicsGridLayout object.
///
///
QGraphicsGridLayout* q_graphicsgridlayout_new();

/// q_graphicsgridlayout_new2 constructs a new QGraphicsGridLayout object.
///
/// ``` QGraphicsLayoutItem* parent ```
QGraphicsGridLayout* q_graphicsgridlayout_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan ```
void q_graphicsgridlayout_add_item(void* self, void* item, int row, int column, int rowSpan, int columnSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column ```
void q_graphicsgridlayout_add_item2(void* self, void* item, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setHorizontalSpacing)
///
/// ``` QGraphicsGridLayout* self, double spacing ```
void q_graphicsgridlayout_set_horizontal_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#horizontalSpacing)
///
/// ``` QGraphicsGridLayout* self ```
double q_graphicsgridlayout_horizontal_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setVerticalSpacing)
///
/// ``` QGraphicsGridLayout* self, double spacing ```
void q_graphicsgridlayout_set_vertical_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#verticalSpacing)
///
/// ``` QGraphicsGridLayout* self ```
double q_graphicsgridlayout_vertical_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setSpacing)
///
/// ``` QGraphicsGridLayout* self, double spacing ```
void q_graphicsgridlayout_set_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowSpacing)
///
/// ``` QGraphicsGridLayout* self, int row, double spacing ```
void q_graphicsgridlayout_set_row_spacing(void* self, int row, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowSpacing)
///
/// ``` QGraphicsGridLayout* self, int row ```
double q_graphicsgridlayout_row_spacing(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnSpacing)
///
/// ``` QGraphicsGridLayout* self, int column, double spacing ```
void q_graphicsgridlayout_set_column_spacing(void* self, int column, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnSpacing)
///
/// ``` QGraphicsGridLayout* self, int column ```
double q_graphicsgridlayout_column_spacing(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowStretchFactor)
///
/// ``` QGraphicsGridLayout* self, int row, int stretch ```
void q_graphicsgridlayout_set_row_stretch_factor(void* self, int row, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowStretchFactor)
///
/// ``` QGraphicsGridLayout* self, int row ```
int32_t q_graphicsgridlayout_row_stretch_factor(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnStretchFactor)
///
/// ``` QGraphicsGridLayout* self, int column, int stretch ```
void q_graphicsgridlayout_set_column_stretch_factor(void* self, int column, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnStretchFactor)
///
/// ``` QGraphicsGridLayout* self, int column ```
int32_t q_graphicsgridlayout_column_stretch_factor(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMinimumHeight)
///
/// ``` QGraphicsGridLayout* self, int row, double height ```
void q_graphicsgridlayout_set_row_minimum_height(void* self, int row, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMinimumHeight)
///
/// ``` QGraphicsGridLayout* self, int row ```
double q_graphicsgridlayout_row_minimum_height(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowPreferredHeight)
///
/// ``` QGraphicsGridLayout* self, int row, double height ```
void q_graphicsgridlayout_set_row_preferred_height(void* self, int row, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowPreferredHeight)
///
/// ``` QGraphicsGridLayout* self, int row ```
double q_graphicsgridlayout_row_preferred_height(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMaximumHeight)
///
/// ``` QGraphicsGridLayout* self, int row, double height ```
void q_graphicsgridlayout_set_row_maximum_height(void* self, int row, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMaximumHeight)
///
/// ``` QGraphicsGridLayout* self, int row ```
double q_graphicsgridlayout_row_maximum_height(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowFixedHeight)
///
/// ``` QGraphicsGridLayout* self, int row, double height ```
void q_graphicsgridlayout_set_row_fixed_height(void* self, int row, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMinimumWidth)
///
/// ``` QGraphicsGridLayout* self, int column, double width ```
void q_graphicsgridlayout_set_column_minimum_width(void* self, int column, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMinimumWidth)
///
/// ``` QGraphicsGridLayout* self, int column ```
double q_graphicsgridlayout_column_minimum_width(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnPreferredWidth)
///
/// ``` QGraphicsGridLayout* self, int column, double width ```
void q_graphicsgridlayout_set_column_preferred_width(void* self, int column, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnPreferredWidth)
///
/// ``` QGraphicsGridLayout* self, int column ```
double q_graphicsgridlayout_column_preferred_width(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMaximumWidth)
///
/// ``` QGraphicsGridLayout* self, int column, double width ```
void q_graphicsgridlayout_set_column_maximum_width(void* self, int column, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMaximumWidth)
///
/// ``` QGraphicsGridLayout* self, int column ```
double q_graphicsgridlayout_column_maximum_width(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnFixedWidth)
///
/// ``` QGraphicsGridLayout* self, int column, double width ```
void q_graphicsgridlayout_set_column_fixed_width(void* self, int column, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowAlignment)
///
/// ``` QGraphicsGridLayout* self, int row, int alignment ```
void q_graphicsgridlayout_set_row_alignment(void* self, int row, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowAlignment)
///
/// ``` QGraphicsGridLayout* self, int row ```
int64_t q_graphicsgridlayout_row_alignment(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnAlignment)
///
/// ``` QGraphicsGridLayout* self, int column, int alignment ```
void q_graphicsgridlayout_set_column_alignment(void* self, int column, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnAlignment)
///
/// ``` QGraphicsGridLayout* self, int column ```
int64_t q_graphicsgridlayout_column_alignment(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setAlignment)
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment ```
void q_graphicsgridlayout_set_alignment(void* self, void* item, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#alignment)
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* item ```
int64_t q_graphicsgridlayout_alignment(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowCount)
///
/// ``` QGraphicsGridLayout* self ```
int32_t q_graphicsgridlayout_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnCount)
///
/// ``` QGraphicsGridLayout* self ```
int32_t q_graphicsgridlayout_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
///
/// ``` QGraphicsGridLayout* self, int row, int column ```
QGraphicsLayoutItem* q_graphicsgridlayout_item_at(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
///
/// ``` QGraphicsGridLayout* self ```
int32_t q_graphicsgridlayout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsGridLayout* self, int32_t (*slot)() ```
void q_graphicsgridlayout_on_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
///
/// Base class method implementation
///
/// ``` QGraphicsGridLayout* self ```
int32_t q_graphicsgridlayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
///
/// ``` QGraphicsGridLayout* self, int index ```
QGraphicsLayoutItem* q_graphicsgridlayout_item_at_with_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* (*slot)(QGraphicsGridLayout*, int) ```
void q_graphicsgridlayout_on_item_at_with_index(void* self, QGraphicsLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
///
/// Base class method implementation
///
/// ``` QGraphicsGridLayout* self, int index ```
QGraphicsLayoutItem* q_graphicsgridlayout_qbase_item_at_with_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
///
/// ``` QGraphicsGridLayout* self, int index ```
void q_graphicsgridlayout_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsGridLayout* self, void (*slot)(QGraphicsGridLayout*, int) ```
void q_graphicsgridlayout_on_remove_at(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
///
/// Base class method implementation
///
/// ``` QGraphicsGridLayout* self, int index ```
void q_graphicsgridlayout_qbase_remove_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeItem)
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* item ```
void q_graphicsgridlayout_remove_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
///
/// ``` QGraphicsGridLayout* self ```
void q_graphicsgridlayout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsGridLayout* self, void (*slot)() ```
void q_graphicsgridlayout_on_invalidate(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
///
/// Base class method implementation
///
/// ``` QGraphicsGridLayout* self ```
void q_graphicsgridlayout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
///
/// ``` QGraphicsGridLayout* self, QRectF* rect ```
void q_graphicsgridlayout_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsGridLayout* self, void (*slot)(QGraphicsGridLayout*, QRectF*) ```
void q_graphicsgridlayout_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QGraphicsGridLayout* self, QRectF* rect ```
void q_graphicsgridlayout_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
///
/// ``` QGraphicsGridLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsgridlayout_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsGridLayout* self, QSizeF* (*slot)(QGraphicsGridLayout*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicsgridlayout_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QGraphicsGridLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsgridlayout_qbase_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment ```
void q_graphicsgridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment ```
void q_graphicsgridlayout_add_item4(void* self, void* item, int row, int column, int64_t alignment);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// ``` QGraphicsGridLayout* self, double left, double top, double right, double bottom ```
void q_graphicsgridlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// ``` QGraphicsGridLayout* self ```
void q_graphicsgridlayout_activate(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// ``` QGraphicsGridLayout* self ```
bool q_graphicsgridlayout_is_activated(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// ``` bool enable ```
void q_graphicsgridlayout_set_instant_invalidate_propagation(bool enable);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
///
bool q_graphicsgridlayout_instant_invalidate_propagation();

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsGridLayout* self, QSizePolicy* policy ```
void q_graphicsgridlayout_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsGridLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicsgridlayout_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsGridLayout* self ```
QSizePolicy* q_graphicsgridlayout_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsGridLayout* self, QSizeF* size ```
void q_graphicsgridlayout_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsGridLayout* self, double w, double h ```
void q_graphicsgridlayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsGridLayout* self ```
QSizeF* q_graphicsgridlayout_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsGridLayout* self, double width ```
void q_graphicsgridlayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsGridLayout* self ```
double q_graphicsgridlayout_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsGridLayout* self, double height ```
void q_graphicsgridlayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsGridLayout* self ```
double q_graphicsgridlayout_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsGridLayout* self, QSizeF* size ```
void q_graphicsgridlayout_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsGridLayout* self, double w, double h ```
void q_graphicsgridlayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsGridLayout* self ```
QSizeF* q_graphicsgridlayout_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsGridLayout* self, double width ```
void q_graphicsgridlayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsGridLayout* self ```
double q_graphicsgridlayout_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsGridLayout* self, double height ```
void q_graphicsgridlayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsGridLayout* self ```
double q_graphicsgridlayout_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsGridLayout* self, QSizeF* size ```
void q_graphicsgridlayout_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsGridLayout* self, double w, double h ```
void q_graphicsgridlayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsGridLayout* self ```
QSizeF* q_graphicsgridlayout_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsGridLayout* self, double width ```
void q_graphicsgridlayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsGridLayout* self ```
double q_graphicsgridlayout_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsGridLayout* self, double height ```
void q_graphicsgridlayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsGridLayout* self ```
double q_graphicsgridlayout_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsGridLayout* self ```
QRectF* q_graphicsgridlayout_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsGridLayout* self ```
QRectF* q_graphicsgridlayout_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsGridLayout* self, enum Qt__SizeHint which ```
QSizeF* q_graphicsgridlayout_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsGridLayout* self ```
QGraphicsLayoutItem* q_graphicsgridlayout_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* parent ```
void q_graphicsgridlayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsGridLayout* self ```
bool q_graphicsgridlayout_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsGridLayout* self ```
QGraphicsItem* q_graphicsgridlayout_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsGridLayout* self ```
bool q_graphicsgridlayout_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsGridLayout* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicsgridlayout_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsGridLayout* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsgridlayout_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsgridlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsgridlayout_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, void (*slot)(QGraphicsGridLayout*, double*, double*, double*, double*) ```
void q_graphicsgridlayout_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsGridLayout* self ```
void q_graphicsgridlayout_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self ```
void q_graphicsgridlayout_qbase_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, void (*slot)() ```
void q_graphicsgridlayout_on_update_geometry(void* self, void (*slot)());

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsGridLayout* self, QEvent* e ```
void q_graphicsgridlayout_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, QEvent* e ```
void q_graphicsgridlayout_qbase_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, void (*slot)(QGraphicsGridLayout*, QEvent*) ```
void q_graphicsgridlayout_on_widget_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsGridLayout* self ```
bool q_graphicsgridlayout_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self ```
bool q_graphicsgridlayout_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, bool (*slot)() ```
void q_graphicsgridlayout_on_is_empty(void* self, bool (*slot)());

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicsgridlayout_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem ```
void q_graphicsgridlayout_qbase_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, void (*slot)(QGraphicsGridLayout*, QGraphicsLayoutItem*) ```
void q_graphicsgridlayout_on_add_child_layout_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsGridLayout* self, QGraphicsItem* item ```
void q_graphicsgridlayout_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, QGraphicsItem* item ```
void q_graphicsgridlayout_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, void (*slot)(QGraphicsGridLayout*, QGraphicsItem*) ```
void q_graphicsgridlayout_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsGridLayout* self, bool ownedByLayout ```
void q_graphicsgridlayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, bool ownedByLayout ```
void q_graphicsgridlayout_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsGridLayout* self, void (*slot)(QGraphicsGridLayout*, bool) ```
void q_graphicsgridlayout_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#dtor.QGraphicsGridLayout)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsGridLayout* self ```
void q_graphicsgridlayout_delete(void* self);

#endif

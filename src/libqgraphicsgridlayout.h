#pragma once
#ifndef SRC_QT6C_LIBQGRAPHICSGRIDLAYOUT_H
#define SRC_QT6C_LIBQGRAPHICSGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html)

/// q_graphicsgridlayout_new constructs a new QGraphicsGridLayout object.
///
QGraphicsGridLayout* q_graphicsgridlayout_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html)

/// q_graphicsgridlayout_new2 constructs a new QGraphicsGridLayout object.
///
/// @param parent QGraphicsLayoutItem*
///
QGraphicsGridLayout* q_graphicsgridlayout_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsLayoutItem*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
///
void q_graphicsgridlayout_add_item(void* self, void* item, int row, int column, int rowSpan, int columnSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsLayoutItem*
/// @param row int
/// @param column int
///
void q_graphicsgridlayout_add_item2(void* self, void* item, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setHorizontalSpacing)
///
/// @param self QGraphicsGridLayout*
/// @param spacing double
///
void q_graphicsgridlayout_set_horizontal_spacing(void* self, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#horizontalSpacing)
///
/// @param self QGraphicsGridLayout*
///
double q_graphicsgridlayout_horizontal_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setVerticalSpacing)
///
/// @param self QGraphicsGridLayout*
/// @param spacing double
///
void q_graphicsgridlayout_set_vertical_spacing(void* self, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#verticalSpacing)
///
/// @param self QGraphicsGridLayout*
///
double q_graphicsgridlayout_vertical_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setSpacing)
///
/// @param self QGraphicsGridLayout*
/// @param spacing double
///
void q_graphicsgridlayout_set_spacing(void* self, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowSpacing)
///
/// @param self QGraphicsGridLayout*
/// @param row int
/// @param spacing double
///
void q_graphicsgridlayout_set_row_spacing(void* self, int row, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowSpacing)
///
/// @param self QGraphicsGridLayout*
/// @param row int
///
double q_graphicsgridlayout_row_spacing(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnSpacing)
///
/// @param self QGraphicsGridLayout*
/// @param column int
/// @param spacing double
///
void q_graphicsgridlayout_set_column_spacing(void* self, int column, double spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnSpacing)
///
/// @param self QGraphicsGridLayout*
/// @param column int
///
double q_graphicsgridlayout_column_spacing(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowStretchFactor)
///
/// @param self QGraphicsGridLayout*
/// @param row int
/// @param stretch int
///
void q_graphicsgridlayout_set_row_stretch_factor(void* self, int row, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowStretchFactor)
///
/// @param self QGraphicsGridLayout*
/// @param row int
///
int32_t q_graphicsgridlayout_row_stretch_factor(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnStretchFactor)
///
/// @param self QGraphicsGridLayout*
/// @param column int
/// @param stretch int
///
void q_graphicsgridlayout_set_column_stretch_factor(void* self, int column, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnStretchFactor)
///
/// @param self QGraphicsGridLayout*
/// @param column int
///
int32_t q_graphicsgridlayout_column_stretch_factor(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMinimumHeight)
///
/// @param self QGraphicsGridLayout*
/// @param row int
/// @param height double
///
void q_graphicsgridlayout_set_row_minimum_height(void* self, int row, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMinimumHeight)
///
/// @param self QGraphicsGridLayout*
/// @param row int
///
double q_graphicsgridlayout_row_minimum_height(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowPreferredHeight)
///
/// @param self QGraphicsGridLayout*
/// @param row int
/// @param height double
///
void q_graphicsgridlayout_set_row_preferred_height(void* self, int row, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowPreferredHeight)
///
/// @param self QGraphicsGridLayout*
/// @param row int
///
double q_graphicsgridlayout_row_preferred_height(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowMaximumHeight)
///
/// @param self QGraphicsGridLayout*
/// @param row int
/// @param height double
///
void q_graphicsgridlayout_set_row_maximum_height(void* self, int row, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowMaximumHeight)
///
/// @param self QGraphicsGridLayout*
/// @param row int
///
double q_graphicsgridlayout_row_maximum_height(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowFixedHeight)
///
/// @param self QGraphicsGridLayout*
/// @param row int
/// @param height double
///
void q_graphicsgridlayout_set_row_fixed_height(void* self, int row, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMinimumWidth)
///
/// @param self QGraphicsGridLayout*
/// @param column int
/// @param width double
///
void q_graphicsgridlayout_set_column_minimum_width(void* self, int column, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMinimumWidth)
///
/// @param self QGraphicsGridLayout*
/// @param column int
///
double q_graphicsgridlayout_column_minimum_width(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnPreferredWidth)
///
/// @param self QGraphicsGridLayout*
/// @param column int
/// @param width double
///
void q_graphicsgridlayout_set_column_preferred_width(void* self, int column, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnPreferredWidth)
///
/// @param self QGraphicsGridLayout*
/// @param column int
///
double q_graphicsgridlayout_column_preferred_width(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnMaximumWidth)
///
/// @param self QGraphicsGridLayout*
/// @param column int
/// @param width double
///
void q_graphicsgridlayout_set_column_maximum_width(void* self, int column, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnMaximumWidth)
///
/// @param self QGraphicsGridLayout*
/// @param column int
///
double q_graphicsgridlayout_column_maximum_width(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnFixedWidth)
///
/// @param self QGraphicsGridLayout*
/// @param column int
/// @param width double
///
void q_graphicsgridlayout_set_column_fixed_width(void* self, int column, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setRowAlignment)
///
/// @param self QGraphicsGridLayout*
/// @param row int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_graphicsgridlayout_set_row_alignment(void* self, int row, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowAlignment)
///
/// @param self QGraphicsGridLayout*
/// @param row int
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_graphicsgridlayout_row_alignment(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setColumnAlignment)
///
/// @param self QGraphicsGridLayout*
/// @param column int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_graphicsgridlayout_set_column_alignment(void* self, int column, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnAlignment)
///
/// @param self QGraphicsGridLayout*
/// @param column int
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_graphicsgridlayout_column_alignment(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setAlignment)
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsLayoutItem*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_graphicsgridlayout_set_alignment(void* self, void* item, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#alignment)
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsLayoutItem*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_graphicsgridlayout_alignment(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#rowCount)
///
/// @param self QGraphicsGridLayout*
///
int32_t q_graphicsgridlayout_row_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#columnCount)
///
/// @param self QGraphicsGridLayout*
///
int32_t q_graphicsgridlayout_column_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
///
/// @param self QGraphicsGridLayout*
/// @param row int
/// @param column int
///
QGraphicsLayoutItem* q_graphicsgridlayout_item_at(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
///
/// @param self QGraphicsGridLayout*
///
int32_t q_graphicsgridlayout_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsGridLayout*
/// @param callback int32_t func()
///
void q_graphicsgridlayout_on_count(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_count` instead
///
#define q_graphicsgridlayout_qbase_count q_graphicsgridlayout_super_count

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#count)
///
/// Base class method implementation
///
/// @param self QGraphicsGridLayout*
///
int32_t q_graphicsgridlayout_super_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
///
/// @param self QGraphicsGridLayout*
/// @param index int
///
QGraphicsLayoutItem* q_graphicsgridlayout_item_at2(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsGridLayout*
/// @param callback QGraphicsLayoutItem* func(QGraphicsGridLayout* self, int index)
///
void q_graphicsgridlayout_on_item_at2(void* self, QGraphicsLayoutItem* (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_item_at2` instead
///
#define q_graphicsgridlayout_qbase_item_at2 q_graphicsgridlayout_super_item_at2

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self QGraphicsGridLayout*
/// @param index int
///
QGraphicsLayoutItem* q_graphicsgridlayout_super_item_at2(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
///
/// @param self QGraphicsGridLayout*
/// @param index int
///
void q_graphicsgridlayout_remove_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func(QGraphicsGridLayout* self, int index)
///
void q_graphicsgridlayout_on_remove_at(void* self, void (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_remove_at` instead
///
#define q_graphicsgridlayout_qbase_remove_at q_graphicsgridlayout_super_remove_at

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeAt)
///
/// Base class method implementation
///
/// @param self QGraphicsGridLayout*
/// @param index int
///
void q_graphicsgridlayout_super_remove_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#removeItem)
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsLayoutItem*
///
void q_graphicsgridlayout_remove_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
///
/// @param self QGraphicsGridLayout*
///
void q_graphicsgridlayout_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func()
///
void q_graphicsgridlayout_on_invalidate(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_invalidate` instead
///
#define q_graphicsgridlayout_qbase_invalidate q_graphicsgridlayout_super_invalidate

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QGraphicsGridLayout*
///
void q_graphicsgridlayout_super_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
///
/// @param self QGraphicsGridLayout*
/// @param rect QRectF*
///
void q_graphicsgridlayout_set_geometry(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func(QGraphicsGridLayout* self, QRectF* rect)
///
void q_graphicsgridlayout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_set_geometry` instead
///
#define q_graphicsgridlayout_qbase_set_geometry q_graphicsgridlayout_super_set_geometry

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsGridLayout*
/// @param rect QRectF*
///
void q_graphicsgridlayout_super_set_geometry(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
///
/// @param self QGraphicsGridLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicsgridlayout_size_hint(void* self, int32_t which, void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsGridLayout*
/// @param callback QSizeF* func(QGraphicsGridLayout* self, enum Qt__SizeHint which, QSizeF* constraint)
///
void q_graphicsgridlayout_on_size_hint(void* self, QSizeF* (*callback)(void*, int32_t, void*));

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_size_hint` instead
///
#define q_graphicsgridlayout_qbase_size_hint q_graphicsgridlayout_super_size_hint

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QGraphicsGridLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicsgridlayout_super_size_hint(void* self, int32_t which, void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsLayoutItem*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_graphicsgridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#addItem)
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsLayoutItem*
/// @param row int
/// @param column int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_graphicsgridlayout_add_item4(void* self, void* item, int row, int column, int32_t alignment);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setContentsMargins)
///
/// @param self QGraphicsGridLayout*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_graphicsgridlayout_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#activate)
///
/// @param self QGraphicsGridLayout*
///
void q_graphicsgridlayout_activate(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#isActivated)
///
/// @param self QGraphicsGridLayout*
///
bool q_graphicsgridlayout_is_activated(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#setInstantInvalidatePropagation)
///
/// @param enable bool
///
void q_graphicsgridlayout_set_instant_invalidate_propagation(bool enable);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#instantInvalidatePropagation)
///
bool q_graphicsgridlayout_instant_invalidate_propagation();

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsGridLayout*
/// @param policy QSizePolicy*
///
void q_graphicsgridlayout_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsGridLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_graphicsgridlayout_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self QGraphicsGridLayout*
///
QSizePolicy* q_graphicsgridlayout_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsGridLayout*
/// @param size QSizeF*
///
void q_graphicsgridlayout_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsGridLayout*
/// @param w double
/// @param h double
///
void q_graphicsgridlayout_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self QGraphicsGridLayout*
///
QSizeF* q_graphicsgridlayout_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsGridLayout*
/// @param width double
///
void q_graphicsgridlayout_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self QGraphicsGridLayout*
///
double q_graphicsgridlayout_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsGridLayout*
/// @param height double
///
void q_graphicsgridlayout_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self QGraphicsGridLayout*
///
double q_graphicsgridlayout_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsGridLayout*
/// @param size QSizeF*
///
void q_graphicsgridlayout_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsGridLayout*
/// @param w double
/// @param h double
///
void q_graphicsgridlayout_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self QGraphicsGridLayout*
///
QSizeF* q_graphicsgridlayout_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsGridLayout*
/// @param width double
///
void q_graphicsgridlayout_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self QGraphicsGridLayout*
///
double q_graphicsgridlayout_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsGridLayout*
/// @param height double
///
void q_graphicsgridlayout_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self QGraphicsGridLayout*
///
double q_graphicsgridlayout_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsGridLayout*
/// @param size QSizeF*
///
void q_graphicsgridlayout_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsGridLayout*
/// @param w double
/// @param h double
///
void q_graphicsgridlayout_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self QGraphicsGridLayout*
///
QSizeF* q_graphicsgridlayout_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsGridLayout*
/// @param width double
///
void q_graphicsgridlayout_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self QGraphicsGridLayout*
///
double q_graphicsgridlayout_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsGridLayout*
/// @param height double
///
void q_graphicsgridlayout_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self QGraphicsGridLayout*
///
double q_graphicsgridlayout_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self QGraphicsGridLayout*
///
QRectF* q_graphicsgridlayout_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self QGraphicsGridLayout*
///
QRectF* q_graphicsgridlayout_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsGridLayout*
/// @param which enum Qt__SizeHint
///
QSizeF* q_graphicsgridlayout_effective_size_hint(void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self QGraphicsGridLayout*
///
QGraphicsLayoutItem* q_graphicsgridlayout_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsGridLayout*
/// @param parent QGraphicsLayoutItem*
///
void q_graphicsgridlayout_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self QGraphicsGridLayout*
///
bool q_graphicsgridlayout_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self QGraphicsGridLayout*
///
QGraphicsItem* q_graphicsgridlayout_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self QGraphicsGridLayout*
///
bool q_graphicsgridlayout_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsGridLayout*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_graphicsgridlayout_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsGridLayout*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicsgridlayout_effective_size_hint2(void* self, int32_t which, void* constraint);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicsgridlayout_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_get_contents_margins` instead
///
#define q_graphicsgridlayout_qbase_get_contents_margins q_graphicsgridlayout_super_get_contents_margins

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicsgridlayout_super_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func(QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom)
///
void q_graphicsgridlayout_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsGridLayout*
///
void q_graphicsgridlayout_update_geometry(void* self);

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_update_geometry` instead
///
#define q_graphicsgridlayout_qbase_update_geometry q_graphicsgridlayout_super_update_geometry

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
///
void q_graphicsgridlayout_super_update_geometry(void* self);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func()
///
void q_graphicsgridlayout_on_update_geometry(void* self, void (*callback)());

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param e QEvent*
///
void q_graphicsgridlayout_widget_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_widget_event` instead
///
#define q_graphicsgridlayout_qbase_widget_event q_graphicsgridlayout_super_widget_event

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param e QEvent*
///
void q_graphicsgridlayout_super_widget_event(void* self, void* e);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func(QGraphicsGridLayout* self, QEvent* e)
///
void q_graphicsgridlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsGridLayout*
///
bool q_graphicsgridlayout_is_empty(void* self);

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_is_empty` instead
///
#define q_graphicsgridlayout_qbase_is_empty q_graphicsgridlayout_super_is_empty

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
///
bool q_graphicsgridlayout_super_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param callback bool func()
///
void q_graphicsgridlayout_on_is_empty(void* self, bool (*callback)());

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param layoutItem QGraphicsLayoutItem*
///
void q_graphicsgridlayout_add_child_layout_item(void* self, void* layoutItem);

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_add_child_layout_item` instead
///
#define q_graphicsgridlayout_qbase_add_child_layout_item q_graphicsgridlayout_super_add_child_layout_item

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param layoutItem QGraphicsLayoutItem*
///
void q_graphicsgridlayout_super_add_child_layout_item(void* self, void* layoutItem);

/// Inherited from QGraphicsLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayout.html#addChildLayoutItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func(QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem)
///
void q_graphicsgridlayout_on_add_child_layout_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsItem*
///
void q_graphicsgridlayout_set_graphics_item(void* self, void* item);

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_set_graphics_item` instead
///
#define q_graphicsgridlayout_qbase_set_graphics_item q_graphicsgridlayout_super_set_graphics_item

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param item QGraphicsItem*
///
void q_graphicsgridlayout_super_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func(QGraphicsGridLayout* self, QGraphicsItem* item)
///
void q_graphicsgridlayout_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param ownedByLayout bool
///
void q_graphicsgridlayout_set_owned_by_layout(void* self, bool ownedByLayout);

/// @warning DEPRECATED: Use `q_graphicsgridlayout_super_set_owned_by_layout` instead
///
#define q_graphicsgridlayout_qbase_set_owned_by_layout q_graphicsgridlayout_super_set_owned_by_layout

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param ownedByLayout bool
///
void q_graphicsgridlayout_super_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsGridLayout*
/// @param callback void func(QGraphicsGridLayout* self, bool ownedByLayout)
///
void q_graphicsgridlayout_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsgridlayout.html#dtor.QGraphicsGridLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsGridLayout*
///
void q_graphicsgridlayout_delete(void* self);

#endif

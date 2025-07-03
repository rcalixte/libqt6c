#pragma once
#ifndef SRCQT6C_LIBQGRIDLAYOUT_H
#define SRCQT6C_LIBQGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqlayout.h"
#include "libqlayoutitem.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qgridlayout.html

/// q_gridlayout_new constructs a new QGridLayout object.
///
/// ``` QWidget* parent ```
QGridLayout* q_gridlayout_new(void* parent);

/// q_gridlayout_new2 constructs a new QGridLayout object.
///
///
QGridLayout* q_gridlayout_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGridLayout* self ```
const QMetaObject* q_gridlayout_meta_object(void* self);

/// ``` QGridLayout* self, const char* param1 ```
void* q_gridlayout_metacast(void* self, const char* param1);

/// ``` QGridLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_gridlayout_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, enum QMetaObject__Call, int, void*) ```
void q_gridlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGridLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_gridlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_gridlayout_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QSize* (*slot)() ```
void q_gridlayout_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QSize* (*slot)() ```
void q_gridlayout_on_minimum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
///
/// Base class method implementation
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QSize* (*slot)() ```
void q_gridlayout_on_maximum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
///
/// Base class method implementation
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setHorizontalSpacing)
///
/// ``` QGridLayout* self, int spacing ```
void q_gridlayout_set_horizontal_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#horizontalSpacing)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_horizontal_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setVerticalSpacing)
///
/// ``` QGridLayout* self, int spacing ```
void q_gridlayout_set_vertical_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#verticalSpacing)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_vertical_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
///
/// ``` QGridLayout* self, int spacing ```
void q_gridlayout_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_set_spacing(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
///
/// Base class method implementation
///
/// ``` QGridLayout* self, int spacing ```
void q_gridlayout_qbase_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)() ```
void q_gridlayout_on_spacing(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
///
/// Base class method implementation
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_qbase_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setRowStretch)
///
/// ``` QGridLayout* self, int row, int stretch ```
void q_gridlayout_set_row_stretch(void* self, int row, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setColumnStretch)
///
/// ``` QGridLayout* self, int column, int stretch ```
void q_gridlayout_set_column_stretch(void* self, int column, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowStretch)
///
/// ``` QGridLayout* self, int row ```
int32_t q_gridlayout_row_stretch(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnStretch)
///
/// ``` QGridLayout* self, int column ```
int32_t q_gridlayout_column_stretch(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setRowMinimumHeight)
///
/// ``` QGridLayout* self, int row, int minSize ```
void q_gridlayout_set_row_minimum_height(void* self, int row, int minSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setColumnMinimumWidth)
///
/// ``` QGridLayout* self, int column, int minSize ```
void q_gridlayout_set_column_minimum_width(void* self, int column, int minSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowMinimumHeight)
///
/// ``` QGridLayout* self, int row ```
int32_t q_gridlayout_row_minimum_height(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnMinimumWidth)
///
/// ``` QGridLayout* self, int column ```
int32_t q_gridlayout_column_minimum_width(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#columnCount)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#rowCount)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#cellRect)
///
/// ``` QGridLayout* self, int row, int column ```
QRect* q_gridlayout_cell_rect(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, bool (*slot)() ```
void q_gridlayout_on_has_height_for_width(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// ``` QGridLayout* self ```
bool q_gridlayout_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
///
/// ``` QGridLayout* self, int param1 ```
int32_t q_gridlayout_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
///
/// Base class method implementation
///
/// ``` QGridLayout* self, int param1 ```
int32_t q_gridlayout_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
///
/// ``` QGridLayout* self, int param1 ```
int32_t q_gridlayout_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// ``` QGridLayout* self, int param1 ```
int32_t q_gridlayout_qbase_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int64_t (*slot)() ```
void q_gridlayout_on_expanding_directions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
///
/// Base class method implementation
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
///
/// ``` QGridLayout* self ```
void q_gridlayout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, void (*slot)() ```
void q_gridlayout_on_invalidate(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
///
/// Base class method implementation
///
/// ``` QGridLayout* self ```
void q_gridlayout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_add_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* param1, int row, int column ```
void q_gridlayout_add_widget2(void* self, void* param1, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan ```
void q_gridlayout_add_widget3(void* self, void* param1, int row, int column, int rowSpan, int columnSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// ``` QGridLayout* self, QLayout* param1, int row, int column ```
void q_gridlayout_add_layout(void* self, void* param1, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// ``` QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan ```
void q_gridlayout_add_layout2(void* self, void* param1, int row, int column, int rowSpan, int columnSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setOriginCorner)
///
/// ``` QGridLayout* self, enum Qt__Corner originCorner ```
void q_gridlayout_set_origin_corner(void* self, int64_t originCorner);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#originCorner)
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_origin_corner(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
///
/// ``` QGridLayout* self, int index ```
QLayoutItem* q_gridlayout_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QLayoutItem* (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
///
/// Base class method implementation
///
/// ``` QGridLayout* self, int index ```
QLayoutItem* q_gridlayout_qbase_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#itemAtPosition)
///
/// ``` QGridLayout* self, int row, int column ```
QLayoutItem* q_gridlayout_item_at_position(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
///
/// ``` QGridLayout* self, int index ```
QLayoutItem* q_gridlayout_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, QLayoutItem* (*slot)(QGridLayout*, int) ```
void q_gridlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
///
/// Base class method implementation
///
/// ``` QGridLayout* self, int index ```
QLayoutItem* q_gridlayout_qbase_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#count)
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#count)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, int32_t (*slot)() ```
void q_gridlayout_on_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#count)
///
/// Base class method implementation
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
///
/// ``` QGridLayout* self, QRect* geometry ```
void q_gridlayout_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QRect*) ```
void q_gridlayout_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QGridLayout* self, QRect* geometry ```
void q_gridlayout_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* item, int row, int column ```
void q_gridlayout_add_item(void* self, void* item, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#setDefaultPositioning)
///
/// ``` QGridLayout* self, int n, enum Qt__Orientation orient ```
void q_gridlayout_set_default_positioning(void* self, int n, int64_t orient);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#getItemPosition)
///
/// ``` QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan ```
void q_gridlayout_get_item_position(void* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
void q_gridlayout_add_item_with_q_layout_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QLayoutItem*) ```
void q_gridlayout_on_add_item_with_q_layout_item(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// Base class method implementation
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
void q_gridlayout_qbase_add_item_with_q_layout_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_gridlayout_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_gridlayout_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* param1, int row, int column, int param4 ```
void q_gridlayout_add_widget4(void* self, void* param1, int row, int column, int64_t param4);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// ``` QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6 ```
void q_gridlayout_add_widget6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int64_t param6);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// ``` QGridLayout* self, QLayout* param1, int row, int column, int param4 ```
void q_gridlayout_add_layout4(void* self, void* param1, int row, int column, int64_t param4);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// ``` QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6 ```
void q_gridlayout_add_layout6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int64_t param6);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan ```
void q_gridlayout_add_item4(void* self, void* item, int row, int column, int rowSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan ```
void q_gridlayout_add_item5(void* self, void* item, int row, int column, int rowSpan, int columnSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// ``` QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6 ```
void q_gridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int64_t param6);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QGridLayout* self, int left, int top, int right, int bottom ```
void q_gridlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QGridLayout* self, QMargins* margins ```
void q_gridlayout_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QGridLayout* self ```
void q_gridlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QGridLayout* self, int* left, int* top, int* right, int* bottom ```
void q_gridlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QGridLayout* self ```
QMargins* q_gridlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QGridLayout* self ```
QRect* q_gridlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QGridLayout* self, QWidget* w, int alignment ```
bool q_gridlayout_set_alignment(void* self, void* w, int64_t alignment);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QGridLayout* self, QLayout* l, int alignment ```
bool q_gridlayout_set_alignment2(void* self, void* l, int64_t alignment);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QGridLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_gridlayout_set_size_constraint(void* self, int64_t sizeConstraint);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QGridLayout* self ```
QWidget* q_gridlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QGridLayout* self ```
QWidget* q_gridlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QGridLayout* self ```
void q_gridlayout_update(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
void q_gridlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
int32_t q_gridlayout_index_of_with_q_layout_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_gridlayout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// ``` QGridLayout* self, QLayoutItem* param1 ```
int32_t q_gridlayout_qbase_index_of_with_q_layout_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QGridLayout* self, int w ```
int32_t q_gridlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QGridLayout* self, int w ```
int32_t q_gridlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QGridLayout* self ```
QSize* q_gridlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QGridLayout* self, bool enabled ```
void q_gridlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_gridlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGridLayout* self ```
const char* q_gridlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGridLayout* self, char* name ```
void q_gridlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGridLayout* self ```
bool q_gridlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGridLayout* self, bool b ```
bool q_gridlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGridLayout* self ```
QThread* q_gridlayout_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGridLayout* self, QThread* thread ```
void q_gridlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGridLayout* self, int interval ```
int32_t q_gridlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGridLayout* self, int id ```
void q_gridlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGridLayout* self ```
libqt_list /* of QObject* */ q_gridlayout_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGridLayout* self, QObject* parent ```
void q_gridlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGridLayout* self, QObject* filterObj ```
void q_gridlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGridLayout* self, QObject* obj ```
void q_gridlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_gridlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGridLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_gridlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_gridlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_gridlayout_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGridLayout* self ```
void q_gridlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGridLayout* self ```
void q_gridlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGridLayout* self, const char* name, QVariant* value ```
bool q_gridlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGridLayout* self, const char* name ```
QVariant* q_gridlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGridLayout* self ```
const char** q_gridlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGridLayout* self ```
QBindingStorage* q_gridlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGridLayout* self ```
const QBindingStorage* q_gridlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGridLayout* self ```
void q_gridlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGridLayout* self, void (*slot)(QObject*) ```
void q_gridlayout_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGridLayout* self ```
QObject* q_gridlayout_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGridLayout* self, const char* classname ```
bool q_gridlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGridLayout* self ```
void q_gridlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGridLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_gridlayout_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_gridlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGridLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_gridlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGridLayout* self, QObject* param1 ```
void q_gridlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGridLayout* self, void (*slot)(QObject*, QObject*) ```
void q_gridlayout_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_alignment(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QRect* q_gridlayout_geometry(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QRect* q_gridlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QRect* (*slot)() ```
void q_gridlayout_on_geometry(void* self, QRect* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QWidget* param1 ```
int32_t q_gridlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QWidget* param1 ```
int32_t q_gridlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, QWidget*) ```
void q_gridlayout_on_index_of(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
bool q_gridlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
bool q_gridlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)() ```
void q_gridlayout_on_is_empty(void* self, bool (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_control_types(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
int64_t q_gridlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, int64_t (*slot)() ```
void q_gridlayout_on_control_types(void* self, int64_t (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_gridlayout_replace_widget(void* self, void* from, void* to, int64_t options);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_gridlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QLayoutItem* (*slot)(QGridLayout*, QWidget*, QWidget*, int) ```
void q_gridlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QLayout* q_gridlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QLayout* q_gridlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QLayout* (*slot)() ```
void q_gridlayout_on_layout(void* self, QLayout* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QChildEvent* e ```
void q_gridlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QChildEvent* e ```
void q_gridlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QChildEvent*) ```
void q_gridlayout_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QEvent* event ```
bool q_gridlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QEvent* event ```
bool q_gridlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)(QGridLayout*, QEvent*) ```
void q_gridlayout_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QObject* watched, QEvent* event ```
bool q_gridlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QObject* watched, QEvent* event ```
bool q_gridlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)(QGridLayout*, QObject*, QEvent*) ```
void q_gridlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QTimerEvent* event ```
void q_gridlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QTimerEvent* event ```
void q_gridlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QTimerEvent*) ```
void q_gridlayout_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QEvent* event ```
void q_gridlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QEvent* event ```
void q_gridlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QEvent*) ```
void q_gridlayout_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
void q_gridlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
void q_gridlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QMetaMethod*) ```
void q_gridlayout_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
void q_gridlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
void q_gridlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QMetaMethod*) ```
void q_gridlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QWidget* q_gridlayout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QWidget* q_gridlayout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QWidget* (*slot)() ```
void q_gridlayout_on_widget(void* self, QWidget* (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QSpacerItem* q_gridlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QSpacerItem* q_gridlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QSpacerItem* (*slot)() ```
void q_gridlayout_on_spacer_item(void* self, QSpacerItem* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QEvent* param1 ```
void q_gridlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QEvent* param1 ```
void q_gridlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QEvent*) ```
void q_gridlayout_on_widget_event(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QLayout* l ```
void q_gridlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QLayout* l ```
void q_gridlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QLayout*) ```
void q_gridlayout_on_add_child_layout(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QWidget* w ```
void q_gridlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, void (*slot)(QGridLayout*, QWidget*) ```
void q_gridlayout_on_add_child_widget(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QLayout* layout ```
bool q_gridlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QLayout* layout ```
bool q_gridlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)(QGridLayout*, QLayout*) ```
void q_gridlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QRect* param1 ```
QRect* q_gridlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QRect* param1 ```
QRect* q_gridlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QRect* (*slot)(QGridLayout*, QRect*) ```
void q_gridlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
QObject* q_gridlayout_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
QObject* q_gridlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, QObject* (*slot)() ```
void q_gridlayout_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self ```
int32_t q_gridlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, int32_t (*slot)() ```
void q_gridlayout_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, const char* signal ```
int32_t q_gridlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, const char* signal ```
int32_t q_gridlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, int32_t (*slot)(QGridLayout*, const char*) ```
void q_gridlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
bool q_gridlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGridLayout* self, QMetaMethod* signal ```
bool q_gridlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGridLayout* self, bool (*slot)(QGridLayout*, QMetaMethod*) ```
void q_gridlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGridLayout* self, void (*slot)(QObject*, const char*) ```
void q_gridlayout_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgridlayout.html#dtor.QGridLayout)
///
/// Delete this object from C++ memory.
///
/// ``` QGridLayout* self ```
void q_gridlayout_delete(void* self);

#endif

#pragma once
#ifndef SRC_QT6C_LIBQGRIDLAYOUT_H
#define SRC_QT6C_LIBQGRIDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html)

/// q_gridlayout_new constructs a new QGridLayout object.
///
/// @param parent QWidget*
///
QGridLayout* q_gridlayout_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html)

/// q_gridlayout_new2 constructs a new QGridLayout object.
///
QGridLayout* q_gridlayout_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGridLayout*
///
const QMetaObject* q_gridlayout_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback const QMetaObject* func()
///
void q_gridlayout_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
const QMetaObject* q_gridlayout_qbase_meta_object(void* self);

/// @param self QGridLayout*
/// @param param1 const char*
///
void* q_gridlayout_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback void* func(QGridLayout* self, const char* param1)
///
void q_gridlayout_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGridLayout*
/// @param param1 const char*
///
void* q_gridlayout_qbase_metacast(void* self, const char* param1);

/// @param self QGridLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_gridlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback int32_t func(QGridLayout* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_gridlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGridLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_gridlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_gridlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback QSize* func()
///
void q_gridlayout_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_minimum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback QSize* func()
///
void q_gridlayout_on_minimum_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_qbase_minimum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_maximum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback QSize* func()
///
void q_gridlayout_on_maximum_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#maximumSize)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_qbase_maximum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setHorizontalSpacing)
///
/// @param self QGridLayout*
/// @param spacing int
///
void q_gridlayout_set_horizontal_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#horizontalSpacing)
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_horizontal_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setVerticalSpacing)
///
/// @param self QGridLayout*
/// @param spacing int
///
void q_gridlayout_set_vertical_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#verticalSpacing)
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_vertical_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
///
/// @param self QGridLayout*
/// @param spacing int
///
void q_gridlayout_set_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, int spacing)
///
void q_gridlayout_on_set_spacing(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setSpacing)
///
/// Base class method implementation
///
/// @param self QGridLayout*
/// @param spacing int
///
void q_gridlayout_qbase_set_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback int32_t func()
///
void q_gridlayout_on_spacing(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#spacing)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_qbase_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setRowStretch)
///
/// @param self QGridLayout*
/// @param row int
/// @param stretch int
///
void q_gridlayout_set_row_stretch(void* self, int row, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setColumnStretch)
///
/// @param self QGridLayout*
/// @param column int
/// @param stretch int
///
void q_gridlayout_set_column_stretch(void* self, int column, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#rowStretch)
///
/// @param self QGridLayout*
/// @param row int
///
int32_t q_gridlayout_row_stretch(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#columnStretch)
///
/// @param self QGridLayout*
/// @param column int
///
int32_t q_gridlayout_column_stretch(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setRowMinimumHeight)
///
/// @param self QGridLayout*
/// @param row int
/// @param minSize int
///
void q_gridlayout_set_row_minimum_height(void* self, int row, int minSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setColumnMinimumWidth)
///
/// @param self QGridLayout*
/// @param column int
/// @param minSize int
///
void q_gridlayout_set_column_minimum_width(void* self, int column, int minSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#rowMinimumHeight)
///
/// @param self QGridLayout*
/// @param row int
///
int32_t q_gridlayout_row_minimum_height(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#columnMinimumWidth)
///
/// @param self QGridLayout*
/// @param column int
///
int32_t q_gridlayout_column_minimum_width(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#columnCount)
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_column_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#rowCount)
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_row_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#cellRect)
///
/// @param self QGridLayout*
/// @param row int
/// @param column int
///
QRect* q_gridlayout_cell_rect(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
///
/// @param self QGridLayout*
///
bool q_gridlayout_has_height_for_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback bool func()
///
void q_gridlayout_on_has_height_for_width(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
bool q_gridlayout_qbase_has_height_for_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
///
/// @param self QGridLayout*
/// @param param1 int
///
int32_t q_gridlayout_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback int32_t func(QGridLayout* self, int param1)
///
void q_gridlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QGridLayout*
/// @param param1 int
///
int32_t q_gridlayout_qbase_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
///
/// @param self QGridLayout*
/// @param param1 int
///
int32_t q_gridlayout_minimum_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback int32_t func(QGridLayout* self, int param1)
///
void q_gridlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// @param self QGridLayout*
/// @param param1 int
///
int32_t q_gridlayout_qbase_minimum_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
///
/// @param self QGridLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_gridlayout_expanding_directions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback int32_t func()
///
void q_gridlayout_on_expanding_directions(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_gridlayout_qbase_expanding_directions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
///
/// @param self QGridLayout*
///
void q_gridlayout_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback void func()
///
void q_gridlayout_on_invalidate(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
void q_gridlayout_qbase_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// @param self QGridLayout*
/// @param w QWidget*
///
void q_gridlayout_add_widget(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// @param self QGridLayout*
/// @param param1 QWidget*
/// @param row int
/// @param column int
///
void q_gridlayout_add_widget2(void* self, void* param1, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// @param self QGridLayout*
/// @param param1 QWidget*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
///
void q_gridlayout_add_widget3(void* self, void* param1, int row, int column, int rowSpan, int columnSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// @param self QGridLayout*
/// @param param1 QLayout*
/// @param row int
/// @param column int
///
void q_gridlayout_add_layout(void* self, void* param1, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// @param self QGridLayout*
/// @param param1 QLayout*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
///
void q_gridlayout_add_layout2(void* self, void* param1, int row, int column, int rowSpan, int columnSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setOriginCorner)
///
/// @param self QGridLayout*
/// @param originCorner enum Qt__Corner
///
void q_gridlayout_set_origin_corner(void* self, int32_t originCorner);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#originCorner)
///
/// @param self QGridLayout*
///
/// @return enum Qt__Corner
///
int32_t q_gridlayout_origin_corner(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
///
/// @param self QGridLayout*
/// @param index int
///
QLayoutItem* q_gridlayout_item_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback QLayoutItem* func(QGridLayout* self, int index)
///
void q_gridlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self QGridLayout*
/// @param index int
///
QLayoutItem* q_gridlayout_qbase_item_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#itemAtPosition)
///
/// @param self QGridLayout*
/// @param row int
/// @param column int
///
QLayoutItem* q_gridlayout_item_at_position(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
///
/// @param self QGridLayout*
/// @param index int
///
QLayoutItem* q_gridlayout_take_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback QLayoutItem* func(QGridLayout* self, int index)
///
void q_gridlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#takeAt)
///
/// Base class method implementation
///
/// @param self QGridLayout*
/// @param index int
///
QLayoutItem* q_gridlayout_qbase_take_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#count)
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback int32_t func()
///
void q_gridlayout_on_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#count)
///
/// Base class method implementation
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_qbase_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
///
/// @param self QGridLayout*
/// @param geometry QRect*
///
void q_gridlayout_set_geometry(void* self, void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QRect* geometry)
///
void q_gridlayout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QGridLayout*
/// @param geometry QRect*
///
void q_gridlayout_qbase_set_geometry(void* self, void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// @param self QGridLayout*
/// @param item QLayoutItem*
/// @param row int
/// @param column int
///
void q_gridlayout_add_item(void* self, void* item, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#setDefaultPositioning)
///
/// @param self QGridLayout*
/// @param n int
/// @param orient enum Qt__Orientation
///
void q_gridlayout_set_default_positioning(void* self, int n, int32_t orient);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#getItemPosition)
///
/// @param self QGridLayout*
/// @param idx int
/// @param row int*
/// @param column int*
/// @param rowSpan int*
/// @param columnSpan int*
///
void q_gridlayout_get_item_position(void* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// @param self QGridLayout*
/// @param param1 QLayoutItem*
///
void q_gridlayout_add_item2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QLayoutItem* param1)
///
void q_gridlayout_on_add_item2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// Base class method implementation
///
/// @param self QGridLayout*
/// @param param1 QLayoutItem*
///
void q_gridlayout_qbase_add_item2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_gridlayout_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_gridlayout_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// @param self QGridLayout*
/// @param param1 QWidget*
/// @param row int
/// @param column int
/// @param param4 flag of enum Qt__AlignmentFlag
///
void q_gridlayout_add_widget4(void* self, void* param1, int row, int column, int32_t param4);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addWidget)
///
/// @param self QGridLayout*
/// @param param1 QWidget*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
/// @param param6 flag of enum Qt__AlignmentFlag
///
void q_gridlayout_add_widget6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int32_t param6);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// @param self QGridLayout*
/// @param param1 QLayout*
/// @param row int
/// @param column int
/// @param param4 flag of enum Qt__AlignmentFlag
///
void q_gridlayout_add_layout4(void* self, void* param1, int row, int column, int32_t param4);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addLayout)
///
/// @param self QGridLayout*
/// @param param1 QLayout*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
/// @param param6 flag of enum Qt__AlignmentFlag
///
void q_gridlayout_add_layout6(void* self, void* param1, int row, int column, int rowSpan, int columnSpan, int32_t param6);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// @param self QGridLayout*
/// @param item QLayoutItem*
/// @param row int
/// @param column int
/// @param rowSpan int
///
void q_gridlayout_add_item4(void* self, void* item, int row, int column, int rowSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// @param self QGridLayout*
/// @param item QLayoutItem*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
///
void q_gridlayout_add_item5(void* self, void* item, int row, int column, int rowSpan, int columnSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#addItem)
///
/// @param self QGridLayout*
/// @param item QLayoutItem*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
/// @param param6 flag of enum Qt__AlignmentFlag
///
void q_gridlayout_add_item6(void* self, void* item, int row, int column, int rowSpan, int columnSpan, int32_t param6);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QGridLayout*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_gridlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QGridLayout*
/// @param margins QMargins*
///
void q_gridlayout_set_contents_margins2(void* self, void* margins);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// @param self QGridLayout*
///
void q_gridlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// @param self QGridLayout*
/// @param left int*
/// @param top int*
/// @param right int*
/// @param bottom int*
///
void q_gridlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// @param self QGridLayout*
///
QMargins* q_gridlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// @param self QGridLayout*
///
QRect* q_gridlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QGridLayout*
/// @param w QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_gridlayout_set_alignment(void* self, void* w, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QGridLayout*
/// @param l QLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_gridlayout_set_alignment2(void* self, void* l, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// @param self QGridLayout*
/// @param sizeConstraint enum QLayout__SizeConstraint
///
void q_gridlayout_set_size_constraint(void* self, int32_t sizeConstraint);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// @param self QGridLayout*
///
/// @return enum QLayout__SizeConstraint
///
int32_t q_gridlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// @param self QGridLayout*
/// @param w QWidget*
///
void q_gridlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// @param self QGridLayout*
///
QWidget* q_gridlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// @param self QGridLayout*
///
QWidget* q_gridlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// @param self QGridLayout*
///
bool q_gridlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// @param self QGridLayout*
///
void q_gridlayout_update(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// @param self QGridLayout*
/// @param w QWidget*
///
void q_gridlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// @param self QGridLayout*
/// @param param1 QLayoutItem*
///
void q_gridlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self QGridLayout*
/// @param param1 QLayoutItem*
///
int32_t q_gridlayout_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QGridLayout*
/// @param callback int32_t func(QGridLayout* self, QLayoutItem* param1)
///
void q_gridlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self QGridLayout*
/// @param param1 QLayoutItem*
///
int32_t q_gridlayout_qbase_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// @param self QGridLayout*
/// @param w int
///
int32_t q_gridlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// @param self QGridLayout*
/// @param w int
///
int32_t q_gridlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// @param self QGridLayout*
///
QSize* q_gridlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// @param self QGridLayout*
/// @param enabled bool
///
void q_gridlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// @param self QGridLayout*
///
bool q_gridlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// @param w QWidget*
/// @param s QSize*
///
QSize* q_gridlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGridLayout*
///
const char* q_gridlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGridLayout*
/// @param name char*
///
void q_gridlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGridLayout*
///
bool q_gridlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGridLayout*
///
bool q_gridlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGridLayout*
///
bool q_gridlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGridLayout*
///
bool q_gridlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGridLayout*
/// @param b bool
///
bool q_gridlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGridLayout*
///
QThread* q_gridlayout_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGridLayout*
/// @param thread QThread*
///
bool q_gridlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGridLayout*
/// @param interval int
///
int32_t q_gridlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGridLayout*
/// @param time int64_t of nanoseconds
///
int32_t q_gridlayout_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGridLayout*
/// @param id int
///
void q_gridlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGridLayout*
/// @param id enum Qt__TimerId
///
void q_gridlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGridLayout*
///
/// @return libqt_list of QObject*
///
libqt_list q_gridlayout_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGridLayout*
/// @param parent QObject*
///
void q_gridlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGridLayout*
/// @param filterObj QObject*
///
void q_gridlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGridLayout*
/// @param obj QObject*
///
void q_gridlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_gridlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGridLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_gridlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_gridlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_gridlayout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGridLayout*
///
void q_gridlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGridLayout*
///
void q_gridlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGridLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_gridlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGridLayout*
/// @param name const char*
///
QVariant* q_gridlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGridLayout*
///
const char** q_gridlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGridLayout*
///
QBindingStorage* q_gridlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGridLayout*
///
const QBindingStorage* q_gridlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGridLayout*
///
void q_gridlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self)
///
void q_gridlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGridLayout*
///
QObject* q_gridlayout_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGridLayout*
/// @param classname const char*
///
bool q_gridlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGridLayout*
///
void q_gridlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGridLayout*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_gridlayout_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGridLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_gridlayout_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGridLayout*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_gridlayout_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_gridlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGridLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_gridlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGridLayout*
/// @param param1 QObject*
///
void q_gridlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QObject* param1)
///
void q_gridlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QGridLayout*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_gridlayout_alignment(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
///
QRect* q_gridlayout_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
///
QRect* q_gridlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback QRect* func()
///
void q_gridlayout_on_geometry(void* self, QRect* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param param1 QWidget*
///
int32_t q_gridlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param param1 QWidget*
///
int32_t q_gridlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback int32_t func(QGridLayout* self, QWidget* param1)
///
void q_gridlayout_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
///
bool q_gridlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
///
bool q_gridlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback bool func()
///
void q_gridlayout_on_is_empty(void* self, bool (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_gridlayout_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_gridlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback int32_t func()
///
void q_gridlayout_on_control_types(void* self, int32_t (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_gridlayout_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_gridlayout_qbase_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback QLayoutItem* func(QGridLayout* self, QWidget* from, QWidget* to, flag of enum Qt__FindChildOption options)
///
void q_gridlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
///
QLayout* q_gridlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
///
QLayout* q_gridlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback QLayout* func()
///
void q_gridlayout_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param e QChildEvent*
///
void q_gridlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param e QChildEvent*
///
void q_gridlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QChildEvent* e)
///
void q_gridlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param event QEvent*
///
bool q_gridlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param event QEvent*
///
bool q_gridlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback bool func(QGridLayout* self, QEvent* event)
///
void q_gridlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_gridlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_gridlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback bool func(QGridLayout* self, QObject* watched, QEvent* event)
///
void q_gridlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param event QTimerEvent*
///
void q_gridlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param event QTimerEvent*
///
void q_gridlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QTimerEvent* event)
///
void q_gridlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param event QEvent*
///
void q_gridlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param event QEvent*
///
void q_gridlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QEvent* event)
///
void q_gridlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param signal QMetaMethod*
///
void q_gridlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param signal QMetaMethod*
///
void q_gridlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QMetaMethod* signal)
///
void q_gridlayout_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param signal QMetaMethod*
///
void q_gridlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param signal QMetaMethod*
///
void q_gridlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QMetaMethod* signal)
///
void q_gridlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
///
QWidget* q_gridlayout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
///
QWidget* q_gridlayout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback QWidget* func()
///
void q_gridlayout_on_widget(void* self, QWidget* (*callback)());

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
///
QSpacerItem* q_gridlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
///
QSpacerItem* q_gridlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback QSpacerItem* func()
///
void q_gridlayout_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param param1 QEvent*
///
void q_gridlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param param1 QEvent*
///
void q_gridlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QEvent* param1)
///
void q_gridlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param l QLayout*
///
void q_gridlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param l QLayout*
///
void q_gridlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QLayout* l)
///
void q_gridlayout_on_add_child_layout(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param w QWidget*
///
void q_gridlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param w QWidget*
///
void q_gridlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, QWidget* w)
///
void q_gridlayout_on_add_child_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param layout QLayout*
///
bool q_gridlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param layout QLayout*
///
bool q_gridlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback bool func(QGridLayout* self, QLayout* layout)
///
void q_gridlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param param1 QRect*
///
QRect* q_gridlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param param1 QRect*
///
QRect* q_gridlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback QRect* func(QGridLayout* self, QRect* param1)
///
void q_gridlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
///
QObject* q_gridlayout_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
///
QObject* q_gridlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback QObject* func()
///
void q_gridlayout_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
///
int32_t q_gridlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback int32_t func()
///
void q_gridlayout_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param signal const char*
///
int32_t q_gridlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param signal const char*
///
int32_t q_gridlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback int32_t func(QGridLayout* self, const char* signal)
///
void q_gridlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGridLayout*
/// @param signal QMetaMethod*
///
bool q_gridlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGridLayout*
/// @param signal QMetaMethod*
///
bool q_gridlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGridLayout*
/// @param callback bool func(QGridLayout* self, QMetaMethod* signal)
///
void q_gridlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGridLayout*
/// @param callback void func(QGridLayout* self, const char* objectName)
///
void q_gridlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgridlayout.html#dtor.QGridLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QGridLayout*
///
void q_gridlayout_delete(void* self);

#endif

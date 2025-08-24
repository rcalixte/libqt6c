#pragma once
#ifndef SRCQT6C_LIBQFORMLAYOUT_H
#define SRCQT6C_LIBQFORMLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qformlayout.html

/// q_formlayout_new constructs a new QFormLayout object.
///
/// @param parent QWidget*
QFormLayout* q_formlayout_new(void* parent);

/// q_formlayout_new2 constructs a new QFormLayout object.
///
QFormLayout* q_formlayout_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFormLayout*
const QMetaObject* q_formlayout_meta_object(void* self);

/// @param self QFormLayout*
/// @param param1 const char*
void* q_formlayout_metacast(void* self, const char* param1);

/// @param self QFormLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_formlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback int32_t fn(QFormLayout*, enum QMetaObject__Call, int, void*)
void q_formlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFormLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_formlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_formlayout_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setFieldGrowthPolicy)
///
/// @param self QFormLayout*
/// @param policy enum QFormLayout__FieldGrowthPolicy
void q_formlayout_set_field_growth_policy(void* self, int32_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#fieldGrowthPolicy)
///
/// @param self QFormLayout*
///
/// @return enum QFormLayout__FieldGrowthPolicy
int32_t q_formlayout_field_growth_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowWrapPolicy)
///
/// @param self QFormLayout*
/// @param policy enum QFormLayout__RowWrapPolicy
void q_formlayout_set_row_wrap_policy(void* self, int32_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#rowWrapPolicy)
///
/// @param self QFormLayout*
///
/// @return enum QFormLayout__RowWrapPolicy
int32_t q_formlayout_row_wrap_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setLabelAlignment)
///
/// @param self QFormLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_formlayout_set_label_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelAlignment)
///
/// @param self QFormLayout*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_formlayout_label_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setFormAlignment)
///
/// @param self QFormLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_formlayout_set_form_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#formAlignment)
///
/// @param self QFormLayout*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_formlayout_form_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setHorizontalSpacing)
///
/// @param self QFormLayout*
/// @param spacing int
void q_formlayout_set_horizontal_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#horizontalSpacing)
///
/// @param self QFormLayout*
int32_t q_formlayout_horizontal_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setVerticalSpacing)
///
/// @param self QFormLayout*
/// @param spacing int
void q_formlayout_set_vertical_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#verticalSpacing)
///
/// @param self QFormLayout*
int32_t q_formlayout_vertical_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// @param self QFormLayout*
int32_t q_formlayout_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback int32_t fn()
void q_formlayout_on_spacing(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// Base class method implementation
///
/// @param self QFormLayout*
int32_t q_formlayout_qbase_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// @param self QFormLayout*
/// @param spacing int
void q_formlayout_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, int)
void q_formlayout_on_set_spacing(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param spacing int
void q_formlayout_qbase_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param label QWidget*
/// @param field QWidget*
void q_formlayout_add_row(void* self, void* label, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param label QWidget*
/// @param field QLayout*
void q_formlayout_add_row2(void* self, void* label, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param labelText const char*
/// @param field QWidget*
void q_formlayout_add_row3(void* self, const char* labelText, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param labelText const char*
/// @param field QLayout*
void q_formlayout_add_row4(void* self, const char* labelText, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param widget QWidget*
void q_formlayout_add_row5(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param layout QLayout*
void q_formlayout_add_row6(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param label QWidget*
/// @param field QWidget*
void q_formlayout_insert_row(void* self, int row, void* label, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param label QWidget*
/// @param field QLayout*
void q_formlayout_insert_row2(void* self, int row, void* label, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param labelText const char*
/// @param field QWidget*
void q_formlayout_insert_row3(void* self, int row, const char* labelText, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param labelText const char*
/// @param field QLayout*
void q_formlayout_insert_row4(void* self, int row, const char* labelText, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param widget QWidget*
void q_formlayout_insert_row5(void* self, int row, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param layout QLayout*
void q_formlayout_insert_row6(void* self, int row, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// @param self QFormLayout*
/// @param row int
void q_formlayout_remove_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// @param self QFormLayout*
/// @param widget QWidget*
void q_formlayout_remove_row2(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// @param self QFormLayout*
/// @param layout QLayout*
void q_formlayout_remove_row3(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// @param self QFormLayout*
/// @param row int
QFormLayout__TakeRowResult* q_formlayout_take_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// @param self QFormLayout*
/// @param widget QWidget*
QFormLayout__TakeRowResult* q_formlayout_take_row2(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// @param self QFormLayout*
/// @param layout QLayout*
QFormLayout__TakeRowResult* q_formlayout_take_row3(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setItem)
///
/// @param self QFormLayout*
/// @param row int
/// @param role enum QFormLayout__ItemRole
/// @param item QLayoutItem*
void q_formlayout_set_item(void* self, int row, int32_t role, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setWidget)
///
/// @param self QFormLayout*
/// @param row int
/// @param role enum QFormLayout__ItemRole
/// @param widget QWidget*
void q_formlayout_set_widget(void* self, int row, int32_t role, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setLayout)
///
/// @param self QFormLayout*
/// @param row int
/// @param role enum QFormLayout__ItemRole
/// @param layout QLayout*
void q_formlayout_set_layout(void* self, int row, int32_t role, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// @param self QFormLayout*
/// @param row int
/// @param on bool
void q_formlayout_set_row_visible(void* self, int row, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// @param self QFormLayout*
/// @param widget QWidget*
/// @param on bool
void q_formlayout_set_row_visible2(void* self, void* widget, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// @param self QFormLayout*
/// @param layout QLayout*
/// @param on bool
void q_formlayout_set_row_visible3(void* self, void* layout, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// @param self QFormLayout*
/// @param row int
bool q_formlayout_is_row_visible(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// @param self QFormLayout*
/// @param widget QWidget*
bool q_formlayout_is_row_visible2(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// @param self QFormLayout*
/// @param layout QLayout*
bool q_formlayout_is_row_visible3(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// @param self QFormLayout*
/// @param row int
/// @param role enum QFormLayout__ItemRole
QLayoutItem* q_formlayout_item_at(void* self, int row, int32_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
///
/// @param self QFormLayout*
/// @param field QWidget*
QWidget* q_formlayout_label_for_field(void* self, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
///
/// @param self QFormLayout*
/// @param field QLayout*
QWidget* q_formlayout_label_for_field2(void* self, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// @param self QFormLayout*
/// @param item QLayoutItem*
void q_formlayout_add_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QLayoutItem*)
void q_formlayout_on_add_item(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param item QLayoutItem*
void q_formlayout_qbase_add_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// @param self QFormLayout*
/// @param index int
QLayoutItem* q_formlayout_item_at2(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback QLayoutItem* fn(QFormLayout*, int)
void q_formlayout_on_item_at2(void* self, QLayoutItem* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param index int
QLayoutItem* q_formlayout_qbase_item_at2(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// @param self QFormLayout*
/// @param index int
QLayoutItem* q_formlayout_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback QLayoutItem* fn(QFormLayout*, int)
void q_formlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param index int
QLayoutItem* q_formlayout_qbase_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// @param self QFormLayout*
/// @param rect QRect*
void q_formlayout_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QRect*)
void q_formlayout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param rect QRect*
void q_formlayout_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// @param self QFormLayout*
QSize* q_formlayout_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback QSize* fn()
void q_formlayout_on_minimum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QFormLayout*
QSize* q_formlayout_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// @param self QFormLayout*
QSize* q_formlayout_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback QSize* fn()
void q_formlayout_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QFormLayout*
QSize* q_formlayout_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// @param self QFormLayout*
void q_formlayout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void fn()
void q_formlayout_on_invalidate(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QFormLayout*
void q_formlayout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// @param self QFormLayout*
bool q_formlayout_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback bool fn()
void q_formlayout_on_has_height_for_width(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self QFormLayout*
bool q_formlayout_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// @param self QFormLayout*
/// @param width int
int32_t q_formlayout_height_for_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback int32_t fn(QFormLayout*, int)
void q_formlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param width int
int32_t q_formlayout_qbase_height_for_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// @param self QFormLayout*
///
/// @return flag of enum Qt__Orientation
int64_t q_formlayout_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback int64_t fn()
void q_formlayout_on_expanding_directions(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self QFormLayout*
///
/// @return flag of enum Qt__Orientation
int64_t q_formlayout_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// @param self QFormLayout*
int32_t q_formlayout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback int32_t fn()
void q_formlayout_on_count(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// Base class method implementation
///
/// @param self QFormLayout*
int32_t q_formlayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#rowCount)
///
/// @param self QFormLayout*
int32_t q_formlayout_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_formlayout_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_formlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QFormLayout*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_formlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QFormLayout*
/// @param margins QMargins*
void q_formlayout_set_contents_margins2(void* self, void* margins);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// @param self QFormLayout*
void q_formlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// @param self QFormLayout*
/// @param left int*
/// @param top int*
/// @param right int*
/// @param bottom int*
void q_formlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// @param self QFormLayout*
QMargins* q_formlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// @param self QFormLayout*
QRect* q_formlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QFormLayout*
/// @param w QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
bool q_formlayout_set_alignment(void* self, void* w, int64_t alignment);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QFormLayout*
/// @param l QLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
bool q_formlayout_set_alignment2(void* self, void* l, int64_t alignment);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// @param self QFormLayout*
/// @param sizeConstraint enum QLayout__SizeConstraint
void q_formlayout_set_size_constraint(void* self, int32_t sizeConstraint);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// @param self QFormLayout*
///
/// @return enum QLayout__SizeConstraint
int32_t q_formlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// @param self QFormLayout*
/// @param w QWidget*
void q_formlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// @param self QFormLayout*
QWidget* q_formlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// @param self QFormLayout*
QWidget* q_formlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// @param self QFormLayout*
bool q_formlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// @param self QFormLayout*
void q_formlayout_update(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addWidget)
///
/// @param self QFormLayout*
/// @param w QWidget*
void q_formlayout_add_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// @param self QFormLayout*
/// @param w QWidget*
void q_formlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// @param self QFormLayout*
/// @param param1 QLayoutItem*
void q_formlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self QFormLayout*
/// @param param1 QLayoutItem*
int32_t q_formlayout_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback int32_t fn(QFormLayout*, QLayoutItem*)
void q_formlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param param1 QLayoutItem*
int32_t q_formlayout_qbase_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// @param self QFormLayout*
/// @param w int
int32_t q_formlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// @param self QFormLayout*
/// @param w int
int32_t q_formlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// @param self QFormLayout*
QSize* q_formlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// @param self QFormLayout*
QSize* q_formlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// @param self QFormLayout*
QSize* q_formlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// @param self QFormLayout*
/// @param enabled bool
void q_formlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// @param self QFormLayout*
bool q_formlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// @param w QWidget*
/// @param s QSize*
QSize* q_formlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFormLayout*
const char* q_formlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFormLayout*
/// @param name char*
void q_formlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFormLayout*
bool q_formlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFormLayout*
bool q_formlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFormLayout*
bool q_formlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFormLayout*
bool q_formlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFormLayout*
/// @param b bool
bool q_formlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFormLayout*
QThread* q_formlayout_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFormLayout*
/// @param thread QThread*
bool q_formlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFormLayout*
/// @param interval int
int32_t q_formlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFormLayout*
/// @param id int
void q_formlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFormLayout*
/// @param id enum Qt__TimerId
void q_formlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFormLayout*
libqt_list /* of QObject* */ q_formlayout_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFormLayout*
/// @param parent QObject*
void q_formlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFormLayout*
/// @param filterObj QObject*
void q_formlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFormLayout*
/// @param obj QObject*
void q_formlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_formlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFormLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_formlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_formlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_formlayout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFormLayout*
void q_formlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFormLayout*
void q_formlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFormLayout*
/// @param name const char*
/// @param value QVariant*
bool q_formlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFormLayout*
/// @param name const char*
QVariant* q_formlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFormLayout*
const char** q_formlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFormLayout*
QBindingStorage* q_formlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFormLayout*
const QBindingStorage* q_formlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFormLayout*
void q_formlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*)
void q_formlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QFormLayout*
QObject* q_formlayout_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFormLayout*
/// @param classname const char*
bool q_formlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFormLayout*
void q_formlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFormLayout*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_formlayout_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFormLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_formlayout_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_formlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFormLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_formlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFormLayout*
/// @param param1 QObject*
void q_formlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QObject*)
void q_formlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QFormLayout*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_formlayout_alignment(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
QRect* q_formlayout_geometry(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
QRect* q_formlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QRect* fn()
void q_formlayout_on_geometry(void* self, QRect* (*callback)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
QSize* q_formlayout_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
QSize* q_formlayout_qbase_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QSize* fn()
void q_formlayout_on_maximum_size(void* self, QSize* (*callback)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 QWidget*
int32_t q_formlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 QWidget*
int32_t q_formlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback int32_t fn(QFormLayout*, QWidget*)
void q_formlayout_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
bool q_formlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
bool q_formlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback bool fn()
void q_formlayout_on_is_empty(void* self, bool (*callback)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_formlayout_control_types(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_formlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback int64_t fn()
void q_formlayout_on_control_types(void* self, int64_t (*callback)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
QLayoutItem* q_formlayout_replace_widget(void* self, void* from, void* to, int64_t options);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
QLayoutItem* q_formlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QLayoutItem* fn(QFormLayout*, QWidget*, QWidget*, flag of enum Qt__FindChildOption)
void q_formlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int64_t));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
QLayout* q_formlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
QLayout* q_formlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QLayout* fn()
void q_formlayout_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param e QChildEvent*
void q_formlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param e QChildEvent*
void q_formlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QChildEvent*)
void q_formlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param event QEvent*
bool q_formlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param event QEvent*
bool q_formlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback bool fn(QFormLayout*, QEvent*)
void q_formlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param watched QObject*
/// @param event QEvent*
bool q_formlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param watched QObject*
/// @param event QEvent*
bool q_formlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback bool fn(QFormLayout*, QObject*, QEvent*)
void q_formlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param event QTimerEvent*
void q_formlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param event QTimerEvent*
void q_formlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QTimerEvent*)
void q_formlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param event QEvent*
void q_formlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param event QEvent*
void q_formlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QEvent*)
void q_formlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
void q_formlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
void q_formlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QMetaMethod*)
void q_formlayout_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
void q_formlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
void q_formlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QMetaMethod*)
void q_formlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 int
int32_t q_formlayout_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 int
int32_t q_formlayout_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback int32_t fn(QFormLayout*, int)
void q_formlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
QWidget* q_formlayout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
QWidget* q_formlayout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QWidget* fn()
void q_formlayout_on_widget(void* self, QWidget* (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
QSpacerItem* q_formlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
QSpacerItem* q_formlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QSpacerItem* fn()
void q_formlayout_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 QEvent*
void q_formlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 QEvent*
void q_formlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QEvent*)
void q_formlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param l QLayout*
void q_formlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param l QLayout*
void q_formlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QLayout*)
void q_formlayout_on_add_child_layout(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param w QWidget*
void q_formlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param w QWidget*
void q_formlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, QWidget*)
void q_formlayout_on_add_child_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param layout QLayout*
bool q_formlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param layout QLayout*
bool q_formlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback bool fn(QFormLayout*, QLayout*)
void q_formlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 QRect*
QRect* q_formlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 QRect*
QRect* q_formlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QRect* fn(QFormLayout*, QRect*)
void q_formlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
QObject* q_formlayout_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
QObject* q_formlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QObject* fn()
void q_formlayout_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
int32_t q_formlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
int32_t q_formlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback int32_t fn()
void q_formlayout_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param signal const char*
int32_t q_formlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param signal const char*
int32_t q_formlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback int32_t fn(QFormLayout*, const char*)
void q_formlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
bool q_formlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
bool q_formlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback bool fn(QFormLayout*, QMetaMethod*)
void q_formlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFormLayout*
/// @param callback void fn(QFormLayout*, const char*)
void q_formlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#dtor.QFormLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QFormLayout*
void q_formlayout_delete(void* self);

/// https://doc.qt.io/qt-6/qformlayout-takerowresult.html

/// q_formlayout__takerowresult_new constructs a new QFormLayout::TakeRowResult object.
///
QFormLayout__TakeRowResult* q_formlayout__takerowresult_new();

/// q_formlayout__takerowresult_new2 constructs a new QFormLayout::TakeRowResult object.
///
/// @param param1 QFormLayout__TakeRowResult*
QFormLayout__TakeRowResult* q_formlayout__takerowresult_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#labelItem-var)
///
/// @param self QFormLayout__TakeRowResult*
QLayoutItem* q_formlayout__takerowresult_label_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#labelItem-var)
///
/// @param self QFormLayout__TakeRowResult*
/// @param labelItem QLayoutItem*
void q_formlayout__takerowresult_set_label_item(void* self, void* labelItem);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#fieldItem-var)
///
/// @param self QFormLayout__TakeRowResult*
QLayoutItem* q_formlayout__takerowresult_field_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#fieldItem-var)
///
/// @param self QFormLayout__TakeRowResult*
/// @param fieldItem QLayoutItem*
void q_formlayout__takerowresult_set_field_item(void* self, void* fieldItem);

/// Delete this object from C++ memory.
///
/// @param self QFormLayout__TakeRowResult*
void q_formlayout__takerowresult_delete(void* self);

/// https://doc.qt.io/qt-6/qformlayout.html#types

typedef enum {
    QFORMLAYOUT_FIELDGROWTHPOLICY_FIELDSSTAYATSIZEHINT = 0,
    QFORMLAYOUT_FIELDGROWTHPOLICY_EXPANDINGFIELDSGROW = 1,
    QFORMLAYOUT_FIELDGROWTHPOLICY_ALLNONFIXEDFIELDSGROW = 2
} QFormLayout__FieldGrowthPolicy;

typedef enum {
    QFORMLAYOUT_ROWWRAPPOLICY_DONTWRAPROWS = 0,
    QFORMLAYOUT_ROWWRAPPOLICY_WRAPLONGROWS = 1,
    QFORMLAYOUT_ROWWRAPPOLICY_WRAPALLROWS = 2
} QFormLayout__RowWrapPolicy;

typedef enum {
    QFORMLAYOUT_ITEMROLE_LABELROLE = 0,
    QFORMLAYOUT_ITEMROLE_FIELDROLE = 1,
    QFORMLAYOUT_ITEMROLE_SPANNINGROLE = 2
} QFormLayout__ItemRole;

#endif

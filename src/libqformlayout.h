#pragma once
#ifndef LIBQFORMLAYOUT_H
#define LIBQFORMLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html)

/// q_formlayout_new constructs a new QFormLayout object.
///
/// @param parent QWidget*
///
QFormLayout* q_formlayout_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html)

/// q_formlayout_new2 constructs a new QFormLayout object.
///
QFormLayout* q_formlayout_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QFormLayout*
///
const QMetaObject* q_formlayout_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback const QMetaObject* func(const QFormLayout* self)
///
void q_formlayout_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
///
const QMetaObject* q_formlayout_super_meta_object(const void* self);

/// @param self QFormLayout*
/// @param param1 const char*
///
void* q_formlayout_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void* func(QFormLayout* self, const char* param1)
///
void q_formlayout_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QFormLayout*
/// @param param1 const char*
///
void* q_formlayout_super_metacast(void* self, const char* param1);

/// @param self QFormLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_formlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback int32_t func(QFormLayout* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_formlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFormLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_formlayout_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_formlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setFieldGrowthPolicy)
///
/// @param self QFormLayout*
/// @param policy enum QFormLayout__FieldGrowthPolicy
///
void q_formlayout_set_field_growth_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#fieldGrowthPolicy)
///
/// @param self const QFormLayout*
///
/// @return enum QFormLayout__FieldGrowthPolicy
///
int32_t q_formlayout_field_growth_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowWrapPolicy)
///
/// @param self QFormLayout*
/// @param policy enum QFormLayout__RowWrapPolicy
///
void q_formlayout_set_row_wrap_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#rowWrapPolicy)
///
/// @param self const QFormLayout*
///
/// @return enum QFormLayout__RowWrapPolicy
///
int32_t q_formlayout_row_wrap_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setLabelAlignment)
///
/// @param self QFormLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_formlayout_set_label_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#labelAlignment)
///
/// @param self const QFormLayout*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_formlayout_label_alignment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setFormAlignment)
///
/// @param self QFormLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_formlayout_set_form_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#formAlignment)
///
/// @param self const QFormLayout*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_formlayout_form_alignment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setHorizontalSpacing)
///
/// @param self QFormLayout*
/// @param spacing int
///
void q_formlayout_set_horizontal_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#horizontalSpacing)
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_horizontal_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setVerticalSpacing)
///
/// @param self QFormLayout*
/// @param spacing int
///
void q_formlayout_set_vertical_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#verticalSpacing)
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_vertical_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(const QFormLayout* self)
///
void q_formlayout_on_spacing(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_super_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// @param self QFormLayout*
/// @param spacing int
///
void q_formlayout_set_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, int spacing)
///
void q_formlayout_on_set_spacing(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param spacing int
///
void q_formlayout_super_set_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param label QWidget*
/// @param field QWidget*
///
void q_formlayout_add_row(void* self, void* label, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param label QWidget*
/// @param field QLayout*
///
void q_formlayout_add_row2(void* self, void* label, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param labelText const char*
/// @param field QWidget*
///
void q_formlayout_add_row3(void* self, const char* labelText, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param labelText const char*
/// @param field QLayout*
///
void q_formlayout_add_row4(void* self, const char* labelText, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param widget QWidget*
///
void q_formlayout_add_row5(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// @param self QFormLayout*
/// @param layout QLayout*
///
void q_formlayout_add_row6(void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param label QWidget*
/// @param field QWidget*
///
void q_formlayout_insert_row(void* self, int row, void* label, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param label QWidget*
/// @param field QLayout*
///
void q_formlayout_insert_row2(void* self, int row, void* label, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param labelText const char*
/// @param field QWidget*
///
void q_formlayout_insert_row3(void* self, int row, const char* labelText, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param labelText const char*
/// @param field QLayout*
///
void q_formlayout_insert_row4(void* self, int row, const char* labelText, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param widget QWidget*
///
void q_formlayout_insert_row5(void* self, int row, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// @param self QFormLayout*
/// @param row int
/// @param layout QLayout*
///
void q_formlayout_insert_row6(void* self, int row, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// @param self QFormLayout*
/// @param row int
///
void q_formlayout_remove_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// @param self QFormLayout*
/// @param widget QWidget*
///
void q_formlayout_remove_row2(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// @param self QFormLayout*
/// @param layout QLayout*
///
void q_formlayout_remove_row3(void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// @param self QFormLayout*
/// @param row int
///
QFormLayout__TakeRowResult* q_formlayout_take_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// @param self QFormLayout*
/// @param widget QWidget*
///
QFormLayout__TakeRowResult* q_formlayout_take_row2(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// @param self QFormLayout*
/// @param layout QLayout*
///
QFormLayout__TakeRowResult* q_formlayout_take_row3(void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setItem)
///
/// @param self QFormLayout*
/// @param row int
/// @param role enum QFormLayout__ItemRole
/// @param item QLayoutItem*
///
void q_formlayout_set_item(void* self, int row, int32_t role, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setWidget)
///
/// @param self QFormLayout*
/// @param row int
/// @param role enum QFormLayout__ItemRole
/// @param widget QWidget*
///
void q_formlayout_set_widget(void* self, int row, int32_t role, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setLayout)
///
/// @param self QFormLayout*
/// @param row int
/// @param role enum QFormLayout__ItemRole
/// @param layout QLayout*
///
void q_formlayout_set_layout(void* self, int row, int32_t role, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// @param self QFormLayout*
/// @param row int
/// @param on bool
///
void q_formlayout_set_row_visible(void* self, int row, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// @param self QFormLayout*
/// @param widget QWidget*
/// @param on bool
///
void q_formlayout_set_row_visible2(void* self, void* widget, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// @param self QFormLayout*
/// @param layout QLayout*
/// @param on bool
///
void q_formlayout_set_row_visible3(void* self, void* layout, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// @param self const QFormLayout*
/// @param row int
///
bool q_formlayout_is_row_visible(const void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// @param self const QFormLayout*
/// @param widget QWidget*
///
bool q_formlayout_is_row_visible2(const void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// @param self const QFormLayout*
/// @param layout QLayout*
///
bool q_formlayout_is_row_visible3(const void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// @param self const QFormLayout*
/// @param row int
/// @param role enum QFormLayout__ItemRole
///
QLayoutItem* q_formlayout_item_at(const void* self, int row, int32_t role);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#getItemPosition)
///
/// @param self const QFormLayout*
/// @param index int
/// @param rowPtr int*
/// @param rolePtr enum QFormLayout__ItemRole*
///
void q_formlayout_get_item_position(const void* self, int index, int* rowPtr, int32_t* rolePtr);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#getWidgetPosition)
///
/// @param self const QFormLayout*
/// @param widget QWidget*
/// @param rowPtr int*
/// @param rolePtr enum QFormLayout__ItemRole*
///
void q_formlayout_get_widget_position(const void* self, void* widget, int* rowPtr, int32_t* rolePtr);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#getLayoutPosition)
///
/// @param self const QFormLayout*
/// @param layout QLayout*
/// @param rowPtr int*
/// @param rolePtr enum QFormLayout__ItemRole*
///
void q_formlayout_get_layout_position(const void* self, void* layout, int* rowPtr, int32_t* rolePtr);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
///
/// @param self const QFormLayout*
/// @param field QWidget*
///
QWidget* q_formlayout_label_for_field(const void* self, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
///
/// @param self const QFormLayout*
/// @param field QLayout*
///
QWidget* q_formlayout_label_for_field2(const void* self, void* field);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// @param self QFormLayout*
/// @param item QLayoutItem*
///
void q_formlayout_add_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QLayoutItem* item)
///
void q_formlayout_on_add_item(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param item QLayoutItem*
///
void q_formlayout_super_add_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// @param self const QFormLayout*
/// @param index int
///
QLayoutItem* q_formlayout_item_at2(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback QLayoutItem* func(const QFormLayout* self, int index)
///
void q_formlayout_on_item_at2(const void* self, QLayoutItem* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
/// @param index int
///
QLayoutItem* q_formlayout_super_item_at2(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// @param self QFormLayout*
/// @param index int
///
QLayoutItem* q_formlayout_take_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback QLayoutItem* func(QFormLayout* self, int index)
///
void q_formlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param index int
///
QLayoutItem* q_formlayout_super_take_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// @param self QFormLayout*
/// @param rect QRect*
///
void q_formlayout_set_geometry(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QRect* rect)
///
void q_formlayout_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QFormLayout*
/// @param rect QRect*
///
void q_formlayout_super_set_geometry(void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback QSize* func(const QFormLayout* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_formlayout_on_minimum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_super_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback QSize* func(const QFormLayout* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_formlayout_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// @param self QFormLayout*
///
void q_formlayout_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self)
///
void q_formlayout_on_invalidate(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QFormLayout*
///
void q_formlayout_super_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// @param self const QFormLayout*
///
bool q_formlayout_has_height_for_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback bool func(const QFormLayout* self)
///
void q_formlayout_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
///
bool q_formlayout_super_has_height_for_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// @param self const QFormLayout*
/// @param width int
///
int32_t q_formlayout_height_for_width(const void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(const QFormLayout* self, int width)
///
void q_formlayout_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
/// @param width int
///
int32_t q_formlayout_super_height_for_width(const void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// @param self const QFormLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_formlayout_expanding_directions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(const QFormLayout* self)
///
void q_formlayout_on_expanding_directions(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_formlayout_super_expanding_directions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(const QFormLayout* self)
///
void q_formlayout_on_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_super_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#rowCount)
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_row_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_formlayout_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_formlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QLayout
///
/// Upcasts to a QLayoutItem object
///
/// @param self QFormLayout*
///
QLayoutItem* q_formlayout_as_q_layout_item(void* self);

/// Inherited from QLayout
///
/// Downcasts to a QFormLayout object
///
/// @param _qlayoutitem QLayoutItem*
///
QFormLayout* q_formlayout_from_q_layout_item(void* _qlayoutitem);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QFormLayout*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_formlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QFormLayout*
/// @param margins QMargins*
///
void q_formlayout_set_contents_margins2(void* self, const void* margins);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// @param self QFormLayout*
///
void q_formlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// @param self const QFormLayout*
/// @param left int*
/// @param top int*
/// @param right int*
/// @param bottom int*
///
void q_formlayout_get_contents_margins(const void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// @param self const QFormLayout*
///
QMargins* q_formlayout_contents_margins(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// @param self const QFormLayout*
///
QRect* q_formlayout_contents_rect(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QFormLayout*
/// @param w QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_formlayout_set_alignment(void* self, void* w, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QFormLayout*
/// @param l QLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_formlayout_set_alignment2(void* self, void* l, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// @param self QFormLayout*
/// @param sizeConstraint enum QLayout__SizeConstraint
///
void q_formlayout_set_size_constraint(void* self, int32_t sizeConstraint);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// @param self const QFormLayout*
///
/// @return enum QLayout__SizeConstraint
///
int32_t q_formlayout_size_constraint(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// @param self QFormLayout*
/// @param w QWidget*
///
void q_formlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// @param self const QFormLayout*
///
QWidget* q_formlayout_menu_bar(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// @param self const QFormLayout*
///
QWidget* q_formlayout_parent_widget(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// @param self QFormLayout*
///
bool q_formlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// @param self QFormLayout*
///
void q_formlayout_update(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addWidget)
///
/// @param self QFormLayout*
/// @param w QWidget*
///
void q_formlayout_add_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// @param self QFormLayout*
/// @param w QWidget*
///
void q_formlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// @param self QFormLayout*
/// @param param1 QLayoutItem*
///
void q_formlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self const QFormLayout*
/// @param param1 QLayoutItem*
///
int32_t q_formlayout_index_of2(const void* self, const void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(const QFormLayout* self, QLayoutItem* param1)
///
void q_formlayout_on_index_of2(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self const QFormLayout*
/// @param param1 QLayoutItem*
///
int32_t q_formlayout_super_index_of2(const void* self, const void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// @param self const QFormLayout*
/// @param w int
///
int32_t q_formlayout_total_minimum_height_for_width(const void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// @param self const QFormLayout*
/// @param w int
///
int32_t q_formlayout_total_height_for_width(const void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_total_minimum_size(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_total_maximum_size(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_total_size_hint(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// @param self QFormLayout*
/// @param enabled bool
///
void q_formlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// @param self const QFormLayout*
///
bool q_formlayout_is_enabled(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// @param w QWidget*
/// @param s QSize*
///
QSize* q_formlayout_closest_acceptable_size(const void* w, const void* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFormLayout*
///
const char* q_formlayout_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFormLayout*
/// @param name const char*
///
void q_formlayout_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QFormLayout*
///
bool q_formlayout_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QFormLayout*
///
bool q_formlayout_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QFormLayout*
///
bool q_formlayout_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QFormLayout*
///
bool q_formlayout_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFormLayout*
/// @param b bool
///
bool q_formlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QFormLayout*
///
QThread* q_formlayout_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFormLayout*
/// @param thread QThread*
///
bool q_formlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFormLayout*
/// @param interval int
///
int32_t q_formlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFormLayout*
/// @param time int64_t of nanoseconds
///
int32_t q_formlayout_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFormLayout*
/// @param id int
///
void q_formlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFormLayout*
/// @param id enum Qt__TimerId
///
void q_formlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QFormLayout*
///
/// @return libqt_list of QObject*
///
libqt_list q_formlayout_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFormLayout*
/// @param parent QObject*
///
void q_formlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFormLayout*
/// @param filterObj QObject*
///
void q_formlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFormLayout*
/// @param obj QObject*
///
void q_formlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_formlayout_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_formlayout_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QFormLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_formlayout_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_formlayout_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_formlayout_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFormLayout*
///
bool q_formlayout_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFormLayout*
/// @param receiver QObject*
///
bool q_formlayout_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_formlayout_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QFormLayout*
///
void q_formlayout_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QFormLayout*
///
void q_formlayout_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFormLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_formlayout_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QFormLayout*
/// @param name const char*
///
QVariant* q_formlayout_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QFormLayout*
///
const char** q_formlayout_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFormLayout*
///
QBindingStorage* q_formlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QFormLayout*
///
const QBindingStorage* q_formlayout_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFormLayout*
///
void q_formlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self)
///
void q_formlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QFormLayout*
///
QObject* q_formlayout_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QFormLayout*
/// @param classname const char*
///
bool q_formlayout_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFormLayout*
///
void q_formlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFormLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_formlayout_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFormLayout*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_formlayout_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_formlayout_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_formlayout_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QFormLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_formlayout_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFormLayout*
/// @param signal const char*
///
bool q_formlayout_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFormLayout*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_formlayout_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFormLayout*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_formlayout_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QFormLayout*
/// @param receiver QObject*
/// @param member const char*
///
bool q_formlayout_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFormLayout*
/// @param param1 QObject*
///
void q_formlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QObject* param1)
///
void q_formlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self const QFormLayout*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_formlayout_alignment(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
///
/// @param self QFormLayout*
/// @param param1 QLayoutItem*
///
void q_formlayout_operator_assign(void* self, const void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
///
QRect* q_formlayout_geometry(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
///
QRect* q_formlayout_super_geometry(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback QRect* func(QFormLayout* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_formlayout_on_geometry(const void* self, QRect* (*callback)(const void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_maximum_size(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
///
QSize* q_formlayout_super_maximum_size(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback QSize* func(QFormLayout* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_formlayout_on_maximum_size(const void* self, QSize* (*callback)(const void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
/// @param param1 QWidget*
///
int32_t q_formlayout_index_of(const void* self, const void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param param1 QWidget*
///
int32_t q_formlayout_super_index_of(const void* self, const void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(QFormLayout* self, QWidget* param1)
///
void q_formlayout_on_index_of(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
///
bool q_formlayout_is_empty(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
///
bool q_formlayout_super_is_empty(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback bool func(QFormLayout* self)
///
void q_formlayout_on_is_empty(const void* self, bool (*callback)(const void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_formlayout_control_types(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_formlayout_super_control_types(const void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(QFormLayout* self)
///
void q_formlayout_on_control_types(const void* self, int32_t (*callback)(const void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_formlayout_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_formlayout_super_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QLayoutItem* func(QFormLayout* self, QWidget* from, QWidget* to, flag of enum Qt__FindChildOption options)
///
void q_formlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
///
QLayout* q_formlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
///
QLayout* q_formlayout_super_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QLayout* func(QFormLayout* self)
///
void q_formlayout_on_layout(void* self, QLayout* (*callback)(void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param e QChildEvent*
///
void q_formlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param e QChildEvent*
///
void q_formlayout_super_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QChildEvent* e)
///
void q_formlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param event QEvent*
///
bool q_formlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param event QEvent*
///
bool q_formlayout_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback bool func(QFormLayout* self, QEvent* event)
///
void q_formlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_formlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_formlayout_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback bool func(QFormLayout* self, QObject* watched, QEvent* event)
///
void q_formlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param event QTimerEvent*
///
void q_formlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param event QTimerEvent*
///
void q_formlayout_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QTimerEvent* event)
///
void q_formlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param event QEvent*
///
void q_formlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param event QEvent*
///
void q_formlayout_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QEvent* event)
///
void q_formlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
///
void q_formlayout_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
///
void q_formlayout_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QMetaMethod* signal)
///
void q_formlayout_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
///
void q_formlayout_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param signal QMetaMethod*
///
void q_formlayout_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QMetaMethod* signal)
///
void q_formlayout_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
/// @param param1 int
///
int32_t q_formlayout_minimum_height_for_width(const void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param param1 int
///
int32_t q_formlayout_super_minimum_height_for_width(const void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(QFormLayout* self, int param1)
///
void q_formlayout_on_minimum_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
///
QWidget* q_formlayout_widget(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
///
QWidget* q_formlayout_super_widget(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback QWidget* func(QFormLayout* self)
///
void q_formlayout_on_widget(const void* self, QWidget* (*callback)(const void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
///
QSpacerItem* q_formlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
///
QSpacerItem* q_formlayout_super_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback QSpacerItem* func(QFormLayout* self)
///
void q_formlayout_on_spacer_item(void* self, QSpacerItem* (*callback)(void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 QEvent*
///
void q_formlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param param1 QEvent*
///
void q_formlayout_super_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QEvent* param1)
///
void q_formlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param l QLayout*
///
void q_formlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param l QLayout*
///
void q_formlayout_super_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QLayout* l)
///
void q_formlayout_on_add_child_layout(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param w QWidget*
///
void q_formlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param w QWidget*
///
void q_formlayout_super_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, QWidget* w)
///
void q_formlayout_on_add_child_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFormLayout*
/// @param layout QLayout*
///
bool q_formlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFormLayout*
/// @param layout QLayout*
///
bool q_formlayout_super_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFormLayout*
/// @param callback bool func(QFormLayout* self, QLayout* layout)
///
void q_formlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
/// @param param1 QRect*
///
QRect* q_formlayout_alignment_rect(const void* self, const void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param param1 QRect*
///
QRect* q_formlayout_super_alignment_rect(const void* self, const void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback QRect* func(QFormLayout* self, QRect* param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_formlayout_on_alignment_rect(const void* self, QRect* (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
///
QObject* q_formlayout_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
///
QObject* q_formlayout_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback QObject* func(QFormLayout* self)
///
void q_formlayout_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
///
int32_t q_formlayout_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(QFormLayout* self)
///
void q_formlayout_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
/// @param signal const char*
///
int32_t q_formlayout_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param signal const char*
///
int32_t q_formlayout_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback int32_t func(QFormLayout* self, const char* signal)
///
void q_formlayout_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFormLayout*
/// @param signal QMetaMethod*
///
bool q_formlayout_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param signal QMetaMethod*
///
bool q_formlayout_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFormLayout*
/// @param callback bool func(QFormLayout* self, QMetaMethod* signal)
///
void q_formlayout_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFormLayout*
/// @param callback void func(QFormLayout* self, const char* objectName)
///
void q_formlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#dtor.QFormLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QFormLayout*
///
void q_formlayout_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html)

/// q_formlayout__takerowresult_new constructs a new QFormLayout::TakeRowResult object.
///
QFormLayout__TakeRowResult* q_formlayout__takerowresult_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html)

/// q_formlayout__takerowresult_new2 constructs a new QFormLayout::TakeRowResult object.
///
/// @param param1 QFormLayout__TakeRowResult*
///
QFormLayout__TakeRowResult* q_formlayout__takerowresult_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#labelItem-var)
///
/// @param self const QFormLayout__TakeRowResult*
///
QLayoutItem* q_formlayout__takerowresult_label_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#labelItem-var)
///
/// @param self QFormLayout__TakeRowResult*
/// @param labelItem QLayoutItem*
///
void q_formlayout__takerowresult_set_label_item(void* self, void* labelItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#fieldItem-var)
///
/// @param self const QFormLayout__TakeRowResult*
///
QLayoutItem* q_formlayout__takerowresult_field_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout-takerowresult.html#fieldItem-var)
///
/// @param self QFormLayout__TakeRowResult*
/// @param fieldItem QLayoutItem*
///
void q_formlayout__takerowresult_set_field_item(void* self, void* fieldItem);

/// Delete this object from C++ memory.
///
/// @param self QFormLayout__TakeRowResult*
///
void q_formlayout__takerowresult_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#public-types)

typedef enum {
    QFORMLAYOUT_FIELDGROWTHPOLICY_FIELDSSTAYATSIZEHINT = 0,
    QFORMLAYOUT_FIELDGROWTHPOLICY_EXPANDINGFIELDSGROW = 1,
    QFORMLAYOUT_FIELDGROWTHPOLICY_ALLNONFIXEDFIELDSGROW = 2
} QFormLayout__FieldGrowthPolicy;

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#public-types)

typedef enum {
    QFORMLAYOUT_ROWWRAPPOLICY_DONTWRAPROWS = 0,
    QFORMLAYOUT_ROWWRAPPOLICY_WRAPLONGROWS = 1,
    QFORMLAYOUT_ROWWRAPPOLICY_WRAPALLROWS = 2
} QFormLayout__RowWrapPolicy;

/// [Upstream resources](https://doc.qt.io/qt-6/qformlayout.html#public-types)

typedef enum {
    QFORMLAYOUT_ITEMROLE_LABELROLE = 0,
    QFORMLAYOUT_ITEMROLE_FIELDROLE = 1,
    QFORMLAYOUT_ITEMROLE_SPANNINGROLE = 2
} QFormLayout__ItemRole;

#endif

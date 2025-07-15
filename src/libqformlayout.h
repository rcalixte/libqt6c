#pragma once
#ifndef SRCQT6C_LIBQFORMLAYOUT_H
#define SRCQT6C_LIBQFORMLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qformlayout.html

/// q_formlayout_new constructs a new QFormLayout object.
///
/// ``` QWidget* parent ```
QFormLayout* q_formlayout_new(void* parent);

/// q_formlayout_new2 constructs a new QFormLayout object.
///
///
QFormLayout* q_formlayout_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFormLayout* self ```
const QMetaObject* q_formlayout_meta_object(void* self);

/// ``` QFormLayout* self, const char* param1 ```
void* q_formlayout_metacast(void* self, const char* param1);

/// ``` QFormLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_formlayout_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, int32_t (*slot)(QFormLayout*, enum QMetaObject__Call, int, void*) ```
void q_formlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QFormLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_formlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_formlayout_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setFieldGrowthPolicy)
///
/// ``` QFormLayout* self, enum QFormLayout__FieldGrowthPolicy policy ```
void q_formlayout_set_field_growth_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#fieldGrowthPolicy)
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_field_growth_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowWrapPolicy)
///
/// ``` QFormLayout* self, enum QFormLayout__RowWrapPolicy policy ```
void q_formlayout_set_row_wrap_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#rowWrapPolicy)
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_row_wrap_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setLabelAlignment)
///
/// ``` QFormLayout* self, int alignment ```
void q_formlayout_set_label_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelAlignment)
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_label_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setFormAlignment)
///
/// ``` QFormLayout* self, int alignment ```
void q_formlayout_set_form_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#formAlignment)
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_form_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setHorizontalSpacing)
///
/// ``` QFormLayout* self, int spacing ```
void q_formlayout_set_horizontal_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#horizontalSpacing)
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_horizontal_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setVerticalSpacing)
///
/// ``` QFormLayout* self, int spacing ```
void q_formlayout_set_vertical_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#verticalSpacing)
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_vertical_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, int32_t (*slot)() ```
void q_formlayout_on_spacing(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#spacing)
///
/// Base class method implementation
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_qbase_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// ``` QFormLayout* self, int spacing ```
void q_formlayout_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, int) ```
void q_formlayout_on_set_spacing(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setSpacing)
///
/// Base class method implementation
///
/// ``` QFormLayout* self, int spacing ```
void q_formlayout_qbase_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// ``` QFormLayout* self, QWidget* label, QWidget* field ```
void q_formlayout_add_row(void* self, void* label, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// ``` QFormLayout* self, QWidget* label, QLayout* field ```
void q_formlayout_add_row2(void* self, void* label, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// ``` QFormLayout* self, const char* labelText, QWidget* field ```
void q_formlayout_add_row3(void* self, const char* labelText, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// ``` QFormLayout* self, const char* labelText, QLayout* field ```
void q_formlayout_add_row4(void* self, const char* labelText, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// ``` QFormLayout* self, QWidget* widget ```
void q_formlayout_add_row5(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addRow)
///
/// ``` QFormLayout* self, QLayout* layout ```
void q_formlayout_add_row6(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// ``` QFormLayout* self, int row, QWidget* label, QWidget* field ```
void q_formlayout_insert_row(void* self, int row, void* label, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// ``` QFormLayout* self, int row, QWidget* label, QLayout* field ```
void q_formlayout_insert_row2(void* self, int row, void* label, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// ``` QFormLayout* self, int row, const char* labelText, QWidget* field ```
void q_formlayout_insert_row3(void* self, int row, const char* labelText, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// ``` QFormLayout* self, int row, const char* labelText, QLayout* field ```
void q_formlayout_insert_row4(void* self, int row, const char* labelText, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// ``` QFormLayout* self, int row, QWidget* widget ```
void q_formlayout_insert_row5(void* self, int row, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#insertRow)
///
/// ``` QFormLayout* self, int row, QLayout* layout ```
void q_formlayout_insert_row6(void* self, int row, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// ``` QFormLayout* self, int row ```
void q_formlayout_remove_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// ``` QFormLayout* self, QWidget* widget ```
void q_formlayout_remove_row2(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#removeRow)
///
/// ``` QFormLayout* self, QLayout* layout ```
void q_formlayout_remove_row3(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// ``` QFormLayout* self, int row ```
QFormLayout__TakeRowResult* q_formlayout_take_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// ``` QFormLayout* self, QWidget* widget ```
QFormLayout__TakeRowResult* q_formlayout_take_row2(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeRow)
///
/// ``` QFormLayout* self, QLayout* layout ```
QFormLayout__TakeRowResult* q_formlayout_take_row3(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setItem)
///
/// ``` QFormLayout* self, int row, enum QFormLayout__ItemRole role, QLayoutItem* item ```
void q_formlayout_set_item(void* self, int row, int64_t role, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setWidget)
///
/// ``` QFormLayout* self, int row, enum QFormLayout__ItemRole role, QWidget* widget ```
void q_formlayout_set_widget(void* self, int row, int64_t role, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setLayout)
///
/// ``` QFormLayout* self, int row, enum QFormLayout__ItemRole role, QLayout* layout ```
void q_formlayout_set_layout(void* self, int row, int64_t role, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// ``` QFormLayout* self, int row, bool on ```
void q_formlayout_set_row_visible(void* self, int row, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// ``` QFormLayout* self, QWidget* widget, bool on ```
void q_formlayout_set_row_visible2(void* self, void* widget, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setRowVisible)
///
/// ``` QFormLayout* self, QLayout* layout, bool on ```
void q_formlayout_set_row_visible3(void* self, void* layout, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// ``` QFormLayout* self, int row ```
bool q_formlayout_is_row_visible(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// ``` QFormLayout* self, QWidget* widget ```
bool q_formlayout_is_row_visible2(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#isRowVisible)
///
/// ``` QFormLayout* self, QLayout* layout ```
bool q_formlayout_is_row_visible3(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// ``` QFormLayout* self, int row, enum QFormLayout__ItemRole role ```
QLayoutItem* q_formlayout_item_at(void* self, int row, int64_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
///
/// ``` QFormLayout* self, QWidget* field ```
QWidget* q_formlayout_label_for_field(void* self, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#labelForField)
///
/// ``` QFormLayout* self, QLayout* field ```
QWidget* q_formlayout_label_for_field2(void* self, void* field);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// ``` QFormLayout* self, QLayoutItem* item ```
void q_formlayout_add_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QLayoutItem*) ```
void q_formlayout_on_add_item(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#addItem)
///
/// Base class method implementation
///
/// ``` QFormLayout* self, QLayoutItem* item ```
void q_formlayout_qbase_add_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// ``` QFormLayout* self, int index ```
QLayoutItem* q_formlayout_item_at2(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, QLayoutItem* (*slot)(QFormLayout*, int) ```
void q_formlayout_on_item_at2(void* self, QLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#itemAt)
///
/// Base class method implementation
///
/// ``` QFormLayout* self, int index ```
QLayoutItem* q_formlayout_qbase_item_at2(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// ``` QFormLayout* self, int index ```
QLayoutItem* q_formlayout_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, QLayoutItem* (*slot)(QFormLayout*, int) ```
void q_formlayout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#takeAt)
///
/// Base class method implementation
///
/// ``` QFormLayout* self, int index ```
QLayoutItem* q_formlayout_qbase_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// ``` QFormLayout* self, QRect* rect ```
void q_formlayout_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QRect*) ```
void q_formlayout_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QFormLayout* self, QRect* rect ```
void q_formlayout_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, QSize* (*slot)() ```
void q_formlayout_on_minimum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#minimumSize)
///
/// Base class method implementation
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, QSize* (*slot)() ```
void q_formlayout_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// ``` QFormLayout* self ```
void q_formlayout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, void (*slot)() ```
void q_formlayout_on_invalidate(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#invalidate)
///
/// Base class method implementation
///
/// ``` QFormLayout* self ```
void q_formlayout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// ``` QFormLayout* self ```
bool q_formlayout_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, bool (*slot)() ```
void q_formlayout_on_has_height_for_width(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// ``` QFormLayout* self ```
bool q_formlayout_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// ``` QFormLayout* self, int width ```
int32_t q_formlayout_height_for_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, int32_t (*slot)(QFormLayout*, int) ```
void q_formlayout_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#heightForWidth)
///
/// Base class method implementation
///
/// ``` QFormLayout* self, int width ```
int32_t q_formlayout_qbase_height_for_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, int64_t (*slot)() ```
void q_formlayout_on_expanding_directions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#expandingDirections)
///
/// Base class method implementation
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// Allows for overriding the related default method
///
/// ``` QFormLayout* self, int32_t (*slot)() ```
void q_formlayout_on_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#count)
///
/// Base class method implementation
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#rowCount)
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_formlayout_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_formlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QFormLayout* self, int left, int top, int right, int bottom ```
void q_formlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QFormLayout* self, QMargins* margins ```
void q_formlayout_set_contents_margins2(void* self, void* margins);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QFormLayout* self ```
void q_formlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QFormLayout* self, int* left, int* top, int* right, int* bottom ```
void q_formlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QFormLayout* self ```
QMargins* q_formlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QFormLayout* self ```
QRect* q_formlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QFormLayout* self, QWidget* w, int alignment ```
bool q_formlayout_set_alignment(void* self, void* w, int64_t alignment);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QFormLayout* self, QLayout* l, int alignment ```
bool q_formlayout_set_alignment2(void* self, void* l, int64_t alignment);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QFormLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_formlayout_set_size_constraint(void* self, int64_t sizeConstraint);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QFormLayout* self, QWidget* w ```
void q_formlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QFormLayout* self ```
QWidget* q_formlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QFormLayout* self ```
QWidget* q_formlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QFormLayout* self ```
bool q_formlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QFormLayout* self ```
void q_formlayout_update(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addWidget)
///
/// ``` QFormLayout* self, QWidget* w ```
void q_formlayout_add_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QFormLayout* self, QWidget* w ```
void q_formlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QFormLayout* self, QLayoutItem* param1 ```
void q_formlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QFormLayout* self, QLayoutItem* param1 ```
int32_t q_formlayout_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_formlayout_on_index_of2(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// ``` QFormLayout* self, QLayoutItem* param1 ```
int32_t q_formlayout_qbase_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QFormLayout* self, int w ```
int32_t q_formlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QFormLayout* self, int w ```
int32_t q_formlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QFormLayout* self, bool enabled ```
void q_formlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QFormLayout* self ```
bool q_formlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_formlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFormLayout* self ```
const char* q_formlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFormLayout* self, char* name ```
void q_formlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFormLayout* self ```
bool q_formlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFormLayout* self ```
bool q_formlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFormLayout* self ```
bool q_formlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFormLayout* self ```
bool q_formlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFormLayout* self, bool b ```
bool q_formlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFormLayout* self ```
QThread* q_formlayout_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFormLayout* self, QThread* thread ```
bool q_formlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFormLayout* self, int interval ```
int32_t q_formlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFormLayout* self, int id ```
void q_formlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFormLayout* self, enum Qt__TimerId id ```
void q_formlayout_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFormLayout* self ```
libqt_list /* of QObject* */ q_formlayout_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFormLayout* self, QObject* parent ```
void q_formlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFormLayout* self, QObject* filterObj ```
void q_formlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFormLayout* self, QObject* obj ```
void q_formlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_formlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFormLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_formlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_formlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_formlayout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFormLayout* self ```
void q_formlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFormLayout* self ```
void q_formlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFormLayout* self, const char* name, QVariant* value ```
bool q_formlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFormLayout* self, const char* name ```
QVariant* q_formlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFormLayout* self ```
const char** q_formlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFormLayout* self ```
QBindingStorage* q_formlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFormLayout* self ```
const QBindingStorage* q_formlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFormLayout* self ```
void q_formlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFormLayout* self, void (*slot)(QObject*) ```
void q_formlayout_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFormLayout* self ```
QObject* q_formlayout_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFormLayout* self, const char* classname ```
bool q_formlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFormLayout* self ```
void q_formlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFormLayout* self, QThread* thread, Disambiguated_t* param2 ```
bool q_formlayout_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFormLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_formlayout_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_formlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFormLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_formlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFormLayout* self, QObject* param1 ```
void q_formlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFormLayout* self, void (*slot)(QObject*, QObject*) ```
void q_formlayout_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_alignment(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
QRect* q_formlayout_geometry(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
QRect* q_formlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, QRect* (*slot)() ```
void q_formlayout_on_geometry(void* self, QRect* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
QSize* q_formlayout_qbase_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, QSize* (*slot)() ```
void q_formlayout_on_maximum_size(void* self, QSize* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QWidget* param1 ```
int32_t q_formlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QWidget* param1 ```
int32_t q_formlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, int32_t (*slot)(QFormLayout*, QWidget*) ```
void q_formlayout_on_index_of(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
bool q_formlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
bool q_formlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, bool (*slot)() ```
void q_formlayout_on_is_empty(void* self, bool (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_control_types(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
int64_t q_formlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, int64_t (*slot)() ```
void q_formlayout_on_control_types(void* self, int64_t (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_formlayout_replace_widget(void* self, void* from, void* to, int64_t options);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_formlayout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, QLayoutItem* (*slot)(QFormLayout*, QWidget*, QWidget*, int) ```
void q_formlayout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
QLayout* q_formlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
QLayout* q_formlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, QLayout* (*slot)() ```
void q_formlayout_on_layout(void* self, QLayout* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QChildEvent* e ```
void q_formlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QChildEvent* e ```
void q_formlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QChildEvent*) ```
void q_formlayout_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QEvent* event ```
bool q_formlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QEvent* event ```
bool q_formlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, bool (*slot)(QFormLayout*, QEvent*) ```
void q_formlayout_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QObject* watched, QEvent* event ```
bool q_formlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QObject* watched, QEvent* event ```
bool q_formlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, bool (*slot)(QFormLayout*, QObject*, QEvent*) ```
void q_formlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QTimerEvent* event ```
void q_formlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QTimerEvent* event ```
void q_formlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QTimerEvent*) ```
void q_formlayout_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QEvent* event ```
void q_formlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QEvent* event ```
void q_formlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QEvent*) ```
void q_formlayout_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QMetaMethod* signal ```
void q_formlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QMetaMethod* signal ```
void q_formlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QMetaMethod*) ```
void q_formlayout_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QMetaMethod* signal ```
void q_formlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QMetaMethod* signal ```
void q_formlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QMetaMethod*) ```
void q_formlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, int param1 ```
int32_t q_formlayout_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, int param1 ```
int32_t q_formlayout_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, int32_t (*slot)(QFormLayout*, int) ```
void q_formlayout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
QWidget* q_formlayout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
QWidget* q_formlayout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, QWidget* (*slot)() ```
void q_formlayout_on_widget(void* self, QWidget* (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
QSpacerItem* q_formlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
QSpacerItem* q_formlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, QSpacerItem* (*slot)() ```
void q_formlayout_on_spacer_item(void* self, QSpacerItem* (*slot)());

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QEvent* param1 ```
void q_formlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QEvent* param1 ```
void q_formlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QEvent*) ```
void q_formlayout_on_widget_event(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QLayout* l ```
void q_formlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QLayout* l ```
void q_formlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QLayout*) ```
void q_formlayout_on_add_child_layout(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QWidget* w ```
void q_formlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QWidget* w ```
void q_formlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, void (*slot)(QFormLayout*, QWidget*) ```
void q_formlayout_on_add_child_widget(void* self, void (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QLayout* layout ```
bool q_formlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QLayout* layout ```
bool q_formlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, bool (*slot)(QFormLayout*, QLayout*) ```
void q_formlayout_on_adopt_layout(void* self, bool (*slot)(void*, void*));

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QRect* param1 ```
QRect* q_formlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QRect* param1 ```
QRect* q_formlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, QRect* (*slot)(QFormLayout*, QRect*) ```
void q_formlayout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
QObject* q_formlayout_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
QObject* q_formlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, QObject* (*slot)() ```
void q_formlayout_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self ```
int32_t q_formlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, int32_t (*slot)() ```
void q_formlayout_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, const char* signal ```
int32_t q_formlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, const char* signal ```
int32_t q_formlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, int32_t (*slot)(QFormLayout*, const char*) ```
void q_formlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFormLayout* self, QMetaMethod* signal ```
bool q_formlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFormLayout* self, QMetaMethod* signal ```
bool q_formlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFormLayout* self, bool (*slot)(QFormLayout*, QMetaMethod*) ```
void q_formlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QFormLayout* self, void (*slot)(QObject*, const char*) ```
void q_formlayout_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout.html#dtor.QFormLayout)
///
/// Delete this object from C++ memory.
///
/// ``` QFormLayout* self ```
void q_formlayout_delete(void* self);

/// https://doc.qt.io/qt-6/qformlayout-takerowresult.html

/// q_formlayout__takerowresult_new constructs a new QFormLayout::TakeRowResult object.
///
///
QFormLayout__TakeRowResult* q_formlayout__takerowresult_new();

/// q_formlayout__takerowresult_new2 constructs a new QFormLayout::TakeRowResult object.
///
/// ``` QFormLayout__TakeRowResult* param1 ```
QFormLayout__TakeRowResult* q_formlayout__takerowresult_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qformlayout::takerowresult.html#dtor.QFormLayout::TakeRowResult)
///
/// Delete this object from C++ memory.
///
/// ``` QFormLayout__TakeRowResult* self ```
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

#pragma once
#ifndef SRC_QT6C_LIBQBOXLAYOUT_H
#define SRC_QT6C_LIBQBOXLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html)

/// q_boxlayout_new constructs a new QBoxLayout object.
///
/// @param param1 enum QBoxLayout__Direction
///
QBoxLayout* q_boxlayout_new(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html)

/// q_boxlayout_new2 constructs a new QBoxLayout object.
///
/// @param param1 enum QBoxLayout__Direction
/// @param parent QWidget*
///
QBoxLayout* q_boxlayout_new2(int32_t param1, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBoxLayout*
///
const QMetaObject* q_boxlayout_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback const QMetaObject* func()
///
void q_boxlayout_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
const QMetaObject* q_boxlayout_qbase_meta_object(void* self);

/// @param self QBoxLayout*
/// @param param1 const char*
///
void* q_boxlayout_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback void* func(QBoxLayout* self, const char* param1)
///
void q_boxlayout_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param param1 const char*
///
void* q_boxlayout_qbase_metacast(void* self, const char* param1);

/// @param self QBoxLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_boxlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback int32_t func(QBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_boxlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_boxlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_boxlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#direction)
///
/// @param self QBoxLayout*
///
/// @return enum QBoxLayout__Direction
///
int32_t q_boxlayout_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
///
/// @param self QBoxLayout*
/// @param direction enum QBoxLayout__Direction
///
void q_boxlayout_set_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
///
/// @param self QBoxLayout*
/// @param size int
///
void q_boxlayout_add_spacing(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// @param self QBoxLayout*
///
void q_boxlayout_add_stretch(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
///
/// @param self QBoxLayout*
/// @param spacerItem QSpacerItem*
///
void q_boxlayout_add_spacer_item(void* self, void* spacerItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QBoxLayout*
/// @param param1 QWidget*
///
void q_boxlayout_add_widget(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// @param self QBoxLayout*
/// @param layout QLayout*
///
void q_boxlayout_add_layout(void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
///
/// @param self QBoxLayout*
/// @param param1 int
///
void q_boxlayout_add_strut(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// @param self QBoxLayout*
/// @param param1 QLayoutItem*
///
void q_boxlayout_add_item(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QLayoutItem* param1)
///
void q_boxlayout_on_add_item(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param param1 QLayoutItem*
///
void q_boxlayout_qbase_add_item(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
///
/// @param self QBoxLayout*
/// @param index int
/// @param size int
///
void q_boxlayout_insert_spacing(void* self, int index, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// @param self QBoxLayout*
/// @param index int
///
void q_boxlayout_insert_stretch(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
///
/// @param self QBoxLayout*
/// @param index int
/// @param spacerItem QSpacerItem*
///
void q_boxlayout_insert_spacer_item(void* self, int index, void* spacerItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QBoxLayout*
/// @param index int
/// @param widget QWidget*
///
void q_boxlayout_insert_widget(void* self, int index, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// @param self QBoxLayout*
/// @param index int
/// @param layout QLayout*
///
void q_boxlayout_insert_layout(void* self, int index, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
///
/// @param self QBoxLayout*
/// @param index int
/// @param param2 QLayoutItem*
///
void q_boxlayout_insert_item(void* self, int index, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// @param self QBoxLayout*
///
int32_t q_boxlayout_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback int32_t func()
///
void q_boxlayout_on_spacing(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
int32_t q_boxlayout_qbase_spacing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// @param self QBoxLayout*
/// @param spacing int
///
void q_boxlayout_set_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, int spacing)
///
void q_boxlayout_on_set_spacing(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param spacing int
///
void q_boxlayout_qbase_set_spacing(void* self, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// @param self QBoxLayout*
/// @param w QWidget*
/// @param stretch int
///
bool q_boxlayout_set_stretch_factor(void* self, void* w, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// @param self QBoxLayout*
/// @param l QLayout*
/// @param stretch int
///
bool q_boxlayout_set_stretch_factor2(void* self, void* l, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
///
/// @param self QBoxLayout*
/// @param index int
/// @param stretch int
///
void q_boxlayout_set_stretch(void* self, int index, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
///
/// @param self QBoxLayout*
/// @param index int
///
int32_t q_boxlayout_stretch(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback QSize* func()
///
void q_boxlayout_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_minimum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback QSize* func()
///
void q_boxlayout_on_minimum_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_qbase_minimum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_maximum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback QSize* func()
///
void q_boxlayout_on_maximum_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_qbase_maximum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// @param self QBoxLayout*
///
bool q_boxlayout_has_height_for_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback bool func()
///
void q_boxlayout_on_has_height_for_width(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
bool q_boxlayout_qbase_has_height_for_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// @param self QBoxLayout*
/// @param param1 int
///
int32_t q_boxlayout_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback int32_t func(QBoxLayout* self, int param1)
///
void q_boxlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param param1 int
///
int32_t q_boxlayout_qbase_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// @param self QBoxLayout*
/// @param param1 int
///
int32_t q_boxlayout_minimum_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback int32_t func(QBoxLayout* self, int param1)
///
void q_boxlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param param1 int
///
int32_t q_boxlayout_qbase_minimum_height_for_width(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// @param self QBoxLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_boxlayout_expanding_directions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback int32_t func()
///
void q_boxlayout_on_expanding_directions(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_boxlayout_qbase_expanding_directions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// @param self QBoxLayout*
///
void q_boxlayout_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback void func()
///
void q_boxlayout_on_invalidate(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
void q_boxlayout_qbase_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// @param self QBoxLayout*
/// @param param1 int
///
QLayoutItem* q_boxlayout_item_at(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback QLayoutItem* func(QBoxLayout* self, int param1)
///
void q_boxlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param param1 int
///
QLayoutItem* q_boxlayout_qbase_item_at(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// @param self QBoxLayout*
/// @param param1 int
///
QLayoutItem* q_boxlayout_take_at(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback QLayoutItem* func(QBoxLayout* self, int param1)
///
void q_boxlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param param1 int
///
QLayoutItem* q_boxlayout_qbase_take_at(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// @param self QBoxLayout*
///
int32_t q_boxlayout_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback int32_t func()
///
void q_boxlayout_on_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
///
int32_t q_boxlayout_qbase_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// @param self QBoxLayout*
/// @param geometry QRect*
///
void q_boxlayout_set_geometry(void* self, void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QRect* geometry)
///
void q_boxlayout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param geometry QRect*
///
void q_boxlayout_qbase_set_geometry(void* self, void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_boxlayout_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_boxlayout_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// @param self QBoxLayout*
/// @param stretch int
///
void q_boxlayout_add_stretch1(void* self, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QBoxLayout*
/// @param param1 QWidget*
/// @param stretch int
///
void q_boxlayout_add_widget2(void* self, void* param1, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QBoxLayout*
/// @param param1 QWidget*
/// @param stretch int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_boxlayout_add_widget3(void* self, void* param1, int stretch, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// @param self QBoxLayout*
/// @param layout QLayout*
/// @param stretch int
///
void q_boxlayout_add_layout2(void* self, void* layout, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// @param self QBoxLayout*
/// @param index int
/// @param stretch int
///
void q_boxlayout_insert_stretch2(void* self, int index, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QBoxLayout*
/// @param index int
/// @param widget QWidget*
/// @param stretch int
///
void q_boxlayout_insert_widget3(void* self, int index, void* widget, int stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QBoxLayout*
/// @param index int
/// @param widget QWidget*
/// @param stretch int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_boxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// @param self QBoxLayout*
/// @param index int
/// @param layout QLayout*
/// @param stretch int
///
void q_boxlayout_insert_layout3(void* self, int index, void* layout, int stretch);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QBoxLayout*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_boxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QBoxLayout*
/// @param margins QMargins*
///
void q_boxlayout_set_contents_margins2(void* self, void* margins);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// @param self QBoxLayout*
///
void q_boxlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// @param self QBoxLayout*
/// @param left int*
/// @param top int*
/// @param right int*
/// @param bottom int*
///
void q_boxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// @param self QBoxLayout*
///
QMargins* q_boxlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// @param self QBoxLayout*
///
QRect* q_boxlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QBoxLayout*
/// @param w QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_boxlayout_set_alignment(void* self, void* w, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QBoxLayout*
/// @param l QLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_boxlayout_set_alignment2(void* self, void* l, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// @param self QBoxLayout*
/// @param sizeConstraint enum QLayout__SizeConstraint
///
void q_boxlayout_set_size_constraint(void* self, int32_t sizeConstraint);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// @param self QBoxLayout*
///
/// @return enum QLayout__SizeConstraint
///
int32_t q_boxlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// @param self QBoxLayout*
/// @param w QWidget*
///
void q_boxlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// @param self QBoxLayout*
///
QWidget* q_boxlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// @param self QBoxLayout*
///
QWidget* q_boxlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// @param self QBoxLayout*
///
bool q_boxlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// @param self QBoxLayout*
///
void q_boxlayout_update(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// @param self QBoxLayout*
/// @param w QWidget*
///
void q_boxlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// @param self QBoxLayout*
/// @param param1 QLayoutItem*
///
void q_boxlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self QBoxLayout*
/// @param param1 QLayoutItem*
///
int32_t q_boxlayout_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QBoxLayout*
/// @param callback int32_t func(QBoxLayout* self, QLayoutItem* param1)
///
void q_boxlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self QBoxLayout*
/// @param param1 QLayoutItem*
///
int32_t q_boxlayout_qbase_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// @param self QBoxLayout*
/// @param w int
///
int32_t q_boxlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// @param self QBoxLayout*
/// @param w int
///
int32_t q_boxlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// @param self QBoxLayout*
///
QSize* q_boxlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// @param self QBoxLayout*
/// @param enabled bool
///
void q_boxlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// @param self QBoxLayout*
///
bool q_boxlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// @param w QWidget*
/// @param s QSize*
///
QSize* q_boxlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBoxLayout*
///
const char* q_boxlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBoxLayout*
/// @param name char*
///
void q_boxlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBoxLayout*
///
bool q_boxlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBoxLayout*
///
bool q_boxlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBoxLayout*
///
bool q_boxlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBoxLayout*
///
bool q_boxlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBoxLayout*
/// @param b bool
///
bool q_boxlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBoxLayout*
///
QThread* q_boxlayout_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBoxLayout*
/// @param thread QThread*
///
bool q_boxlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxLayout*
/// @param interval int
///
int32_t q_boxlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxLayout*
/// @param time int64_t of nanoseconds
///
int32_t q_boxlayout_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBoxLayout*
/// @param id int
///
void q_boxlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBoxLayout*
/// @param id enum Qt__TimerId
///
void q_boxlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBoxLayout*
///
/// @return libqt_list of QObject*
///
libqt_list q_boxlayout_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBoxLayout*
/// @param parent QObject*
///
void q_boxlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBoxLayout*
/// @param filterObj QObject*
///
void q_boxlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBoxLayout*
/// @param obj QObject*
///
void q_boxlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_boxlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBoxLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_boxlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_boxlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_boxlayout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBoxLayout*
///
void q_boxlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBoxLayout*
///
void q_boxlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBoxLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_boxlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBoxLayout*
/// @param name const char*
///
QVariant* q_boxlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBoxLayout*
///
const char** q_boxlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBoxLayout*
///
QBindingStorage* q_boxlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBoxLayout*
///
const QBindingStorage* q_boxlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxLayout*
///
void q_boxlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self)
///
void q_boxlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBoxLayout*
///
QObject* q_boxlayout_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBoxLayout*
/// @param classname const char*
///
bool q_boxlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBoxLayout*
///
void q_boxlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_boxlayout_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxLayout*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_boxlayout_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_boxlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBoxLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_boxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxLayout*
/// @param param1 QObject*
///
void q_boxlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QObject* param1)
///
void q_boxlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QBoxLayout*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_boxlayout_alignment(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
///
QRect* q_boxlayout_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
///
QRect* q_boxlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback QRect* func()
///
void q_boxlayout_on_geometry(void* self, QRect* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param param1 QWidget*
///
int32_t q_boxlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param param1 QWidget*
///
int32_t q_boxlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback int32_t func(QBoxLayout* self, QWidget* param1)
///
void q_boxlayout_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
///
bool q_boxlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
///
bool q_boxlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback bool func()
///
void q_boxlayout_on_is_empty(void* self, bool (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_boxlayout_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_boxlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback int32_t func()
///
void q_boxlayout_on_control_types(void* self, int32_t (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_boxlayout_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_boxlayout_qbase_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback QLayoutItem* func(QBoxLayout* self, QWidget* from, QWidget* to, flag of enum Qt__FindChildOption options)
///
void q_boxlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
///
QLayout* q_boxlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
///
QLayout* q_boxlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback QLayout* func()
///
void q_boxlayout_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param e QChildEvent*
///
void q_boxlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param e QChildEvent*
///
void q_boxlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QChildEvent* e)
///
void q_boxlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param event QEvent*
///
bool q_boxlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param event QEvent*
///
bool q_boxlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback bool func(QBoxLayout* self, QEvent* event)
///
void q_boxlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_boxlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_boxlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback bool func(QBoxLayout* self, QObject* watched, QEvent* event)
///
void q_boxlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param event QTimerEvent*
///
void q_boxlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param event QTimerEvent*
///
void q_boxlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QTimerEvent* event)
///
void q_boxlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param event QEvent*
///
void q_boxlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param event QEvent*
///
void q_boxlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QEvent* event)
///
void q_boxlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param signal QMetaMethod*
///
void q_boxlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param signal QMetaMethod*
///
void q_boxlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QMetaMethod* signal)
///
void q_boxlayout_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param signal QMetaMethod*
///
void q_boxlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param signal QMetaMethod*
///
void q_boxlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QMetaMethod* signal)
///
void q_boxlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
///
QWidget* q_boxlayout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
///
QWidget* q_boxlayout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback QWidget* func()
///
void q_boxlayout_on_widget(void* self, QWidget* (*callback)());

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
///
QSpacerItem* q_boxlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
///
QSpacerItem* q_boxlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback QSpacerItem* func()
///
void q_boxlayout_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param param1 QEvent*
///
void q_boxlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param param1 QEvent*
///
void q_boxlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QEvent* param1)
///
void q_boxlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param l QLayout*
///
void q_boxlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param l QLayout*
///
void q_boxlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QLayout* l)
///
void q_boxlayout_on_add_child_layout(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param w QWidget*
///
void q_boxlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param w QWidget*
///
void q_boxlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, QWidget* w)
///
void q_boxlayout_on_add_child_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param layout QLayout*
///
bool q_boxlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param layout QLayout*
///
bool q_boxlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback bool func(QBoxLayout* self, QLayout* layout)
///
void q_boxlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param param1 QRect*
///
QRect* q_boxlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param param1 QRect*
///
QRect* q_boxlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback QRect* func(QBoxLayout* self, QRect* param1)
///
void q_boxlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
///
QObject* q_boxlayout_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
///
QObject* q_boxlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback QObject* func()
///
void q_boxlayout_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
///
int32_t q_boxlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
///
int32_t q_boxlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback int32_t func()
///
void q_boxlayout_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param signal const char*
///
int32_t q_boxlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param signal const char*
///
int32_t q_boxlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback int32_t func(QBoxLayout* self, const char* signal)
///
void q_boxlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxLayout*
/// @param signal QMetaMethod*
///
bool q_boxlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param signal QMetaMethod*
///
bool q_boxlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxLayout*
/// @param callback bool func(QBoxLayout* self, QMetaMethod* signal)
///
void q_boxlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBoxLayout*
/// @param callback void func(QBoxLayout* self, const char* objectName)
///
void q_boxlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#dtor.QBoxLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QBoxLayout*
///
void q_boxlayout_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxlayout.html)

/// q_hboxlayout_new constructs a new QHBoxLayout object.
///
/// @param parent QWidget*
///
QHBoxLayout* q_hboxlayout_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxlayout.html)

/// q_hboxlayout_new2 constructs a new QHBoxLayout object.
///
QHBoxLayout* q_hboxlayout_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHBoxLayout*
///
const QMetaObject* q_hboxlayout_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHBoxLayout*
/// @param callback const QMetaObject* func()
///
void q_hboxlayout_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QHBoxLayout*
///
const QMetaObject* q_hboxlayout_qbase_meta_object(void* self);

/// @param self QHBoxLayout*
/// @param param1 const char*
///
void* q_hboxlayout_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHBoxLayout*
/// @param callback void* func(QHBoxLayout* self, const char* param1)
///
void q_hboxlayout_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHBoxLayout*
/// @param param1 const char*
///
void* q_hboxlayout_qbase_metacast(void* self, const char* param1);

/// @param self QHBoxLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hboxlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func(QHBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_hboxlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHBoxLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hboxlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_hboxlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_hboxlayout_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_hboxlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#direction)
///
/// @param self QHBoxLayout*
///
/// @return enum QBoxLayout__Direction
///
int32_t q_hboxlayout_direction(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
///
/// @param self QHBoxLayout*
/// @param direction enum QBoxLayout__Direction
///
void q_hboxlayout_set_direction(void* self, int32_t direction);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
///
/// @param self QHBoxLayout*
/// @param size int
///
void q_hboxlayout_add_spacing(void* self, int size);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_add_stretch(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
///
/// @param self QHBoxLayout*
/// @param spacerItem QSpacerItem*
///
void q_hboxlayout_add_spacer_item(void* self, void* spacerItem);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QHBoxLayout*
/// @param param1 QWidget*
///
void q_hboxlayout_add_widget(void* self, void* param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// @param self QHBoxLayout*
/// @param layout QLayout*
///
void q_hboxlayout_add_layout(void* self, void* layout);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
///
/// @param self QHBoxLayout*
/// @param param1 int
///
void q_hboxlayout_add_strut(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param size int
///
void q_hboxlayout_insert_spacing(void* self, int index, int size);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// @param self QHBoxLayout*
/// @param index int
///
void q_hboxlayout_insert_stretch(void* self, int index);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param spacerItem QSpacerItem*
///
void q_hboxlayout_insert_spacer_item(void* self, int index, void* spacerItem);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param widget QWidget*
///
void q_hboxlayout_insert_widget(void* self, int index, void* widget);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param layout QLayout*
///
void q_hboxlayout_insert_layout(void* self, int index, void* layout);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param param2 QLayoutItem*
///
void q_hboxlayout_insert_item(void* self, int index, void* param2);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// @param self QHBoxLayout*
/// @param w QWidget*
/// @param stretch int
///
bool q_hboxlayout_set_stretch_factor(void* self, void* w, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// @param self QHBoxLayout*
/// @param l QLayout*
/// @param stretch int
///
bool q_hboxlayout_set_stretch_factor2(void* self, void* l, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param stretch int
///
void q_hboxlayout_set_stretch(void* self, int index, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
///
/// @param self QHBoxLayout*
/// @param index int
///
int32_t q_hboxlayout_stretch(void* self, int index);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// @param self QHBoxLayout*
/// @param stretch int
///
void q_hboxlayout_add_stretch1(void* self, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QHBoxLayout*
/// @param param1 QWidget*
/// @param stretch int
///
void q_hboxlayout_add_widget2(void* self, void* param1, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QHBoxLayout*
/// @param param1 QWidget*
/// @param stretch int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_hboxlayout_add_widget3(void* self, void* param1, int stretch, int32_t alignment);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// @param self QHBoxLayout*
/// @param layout QLayout*
/// @param stretch int
///
void q_hboxlayout_add_layout2(void* self, void* layout, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param stretch int
///
void q_hboxlayout_insert_stretch2(void* self, int index, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param widget QWidget*
/// @param stretch int
///
void q_hboxlayout_insert_widget3(void* self, int index, void* widget, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param widget QWidget*
/// @param stretch int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_hboxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int32_t alignment);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// @param self QHBoxLayout*
/// @param index int
/// @param layout QLayout*
/// @param stretch int
///
void q_hboxlayout_insert_layout3(void* self, int index, void* layout, int stretch);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QHBoxLayout*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_hboxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QHBoxLayout*
/// @param margins QMargins*
///
void q_hboxlayout_set_contents_margins2(void* self, void* margins);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// @param self QHBoxLayout*
/// @param left int*
/// @param top int*
/// @param right int*
/// @param bottom int*
///
void q_hboxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// @param self QHBoxLayout*
///
QMargins* q_hboxlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// @param self QHBoxLayout*
///
QRect* q_hboxlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QHBoxLayout*
/// @param w QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_hboxlayout_set_alignment(void* self, void* w, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QHBoxLayout*
/// @param l QLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_hboxlayout_set_alignment2(void* self, void* l, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// @param self QHBoxLayout*
/// @param sizeConstraint enum QLayout__SizeConstraint
///
void q_hboxlayout_set_size_constraint(void* self, int32_t sizeConstraint);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// @param self QHBoxLayout*
///
/// @return enum QLayout__SizeConstraint
///
int32_t q_hboxlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// @param self QHBoxLayout*
/// @param w QWidget*
///
void q_hboxlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// @param self QHBoxLayout*
///
QWidget* q_hboxlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// @param self QHBoxLayout*
///
QWidget* q_hboxlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_update(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// @param self QHBoxLayout*
/// @param w QWidget*
///
void q_hboxlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// @param self QHBoxLayout*
/// @param param1 QLayoutItem*
///
void q_hboxlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self QHBoxLayout*
/// @param param1 QLayoutItem*
///
int32_t q_hboxlayout_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func(QHBoxLayout* self, QLayoutItem* param1)
///
void q_hboxlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self QHBoxLayout*
/// @param param1 QLayoutItem*
///
int32_t q_hboxlayout_qbase_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// @param self QHBoxLayout*
/// @param w int
///
int32_t q_hboxlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// @param self QHBoxLayout*
/// @param w int
///
int32_t q_hboxlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// @param self QHBoxLayout*
/// @param enabled bool
///
void q_hboxlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// @param w QWidget*
/// @param s QSize*
///
QSize* q_hboxlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHBoxLayout*
///
const char* q_hboxlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHBoxLayout*
/// @param name char*
///
void q_hboxlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHBoxLayout*
/// @param b bool
///
bool q_hboxlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHBoxLayout*
///
QThread* q_hboxlayout_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHBoxLayout*
/// @param thread QThread*
///
bool q_hboxlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHBoxLayout*
/// @param interval int
///
int32_t q_hboxlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHBoxLayout*
/// @param time int64_t of nanoseconds
///
int32_t q_hboxlayout_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHBoxLayout*
/// @param id int
///
void q_hboxlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHBoxLayout*
/// @param id enum Qt__TimerId
///
void q_hboxlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHBoxLayout*
///
/// @return libqt_list of QObject*
///
libqt_list q_hboxlayout_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHBoxLayout*
/// @param parent QObject*
///
void q_hboxlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHBoxLayout*
/// @param filterObj QObject*
///
void q_hboxlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHBoxLayout*
/// @param obj QObject*
///
void q_hboxlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_hboxlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHBoxLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_hboxlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_hboxlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_hboxlayout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHBoxLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_hboxlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHBoxLayout*
/// @param name const char*
///
QVariant* q_hboxlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHBoxLayout*
///
const char** q_hboxlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHBoxLayout*
///
QBindingStorage* q_hboxlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHBoxLayout*
///
const QBindingStorage* q_hboxlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self)
///
void q_hboxlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHBoxLayout*
///
QObject* q_hboxlayout_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHBoxLayout*
/// @param classname const char*
///
bool q_hboxlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHBoxLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_hboxlayout_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHBoxLayout*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_hboxlayout_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_hboxlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHBoxLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_hboxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHBoxLayout*
/// @param param1 QObject*
///
void q_hboxlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QObject* param1)
///
void q_hboxlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QHBoxLayout*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_hboxlayout_alignment(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 QLayoutItem*
///
void q_hboxlayout_add_item(void* self, void* param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 QLayoutItem*
///
void q_hboxlayout_qbase_add_item(void* self, void* param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QLayoutItem* param1)
///
void q_hboxlayout_on_add_item(void* self, void (*callback)(void*, void*));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
int32_t q_hboxlayout_spacing(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
int32_t q_hboxlayout_qbase_spacing(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func()
///
void q_hboxlayout_on_spacing(void* self, int32_t (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param spacing int
///
void q_hboxlayout_set_spacing(void* self, int spacing);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param spacing int
///
void q_hboxlayout_qbase_set_spacing(void* self, int spacing);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, int spacing)
///
void q_hboxlayout_on_set_spacing(void* self, void (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_size_hint(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_qbase_size_hint(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QSize* func()
///
void q_hboxlayout_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_minimum_size(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_qbase_minimum_size(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QSize* func()
///
void q_hboxlayout_on_minimum_size(void* self, QSize* (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_maximum_size(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
QSize* q_hboxlayout_qbase_maximum_size(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QSize* func()
///
void q_hboxlayout_on_maximum_size(void* self, QSize* (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_has_height_for_width(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_qbase_has_height_for_width(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback bool func()
///
void q_hboxlayout_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 int
///
int32_t q_hboxlayout_height_for_width(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 int
///
int32_t q_hboxlayout_qbase_height_for_width(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func(QHBoxLayout* self, int param1)
///
void q_hboxlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 int
///
int32_t q_hboxlayout_minimum_height_for_width(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 int
///
int32_t q_hboxlayout_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func(QHBoxLayout* self, int param1)
///
void q_hboxlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_hboxlayout_expanding_directions(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_hboxlayout_qbase_expanding_directions(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func()
///
void q_hboxlayout_on_expanding_directions(void* self, int32_t (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_invalidate(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_qbase_invalidate(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func()
///
void q_hboxlayout_on_invalidate(void* self, void (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 int
///
QLayoutItem* q_hboxlayout_item_at(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 int
///
QLayoutItem* q_hboxlayout_qbase_item_at(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QLayoutItem* func(QHBoxLayout* self, int param1)
///
void q_hboxlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 int
///
QLayoutItem* q_hboxlayout_take_at(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 int
///
QLayoutItem* q_hboxlayout_qbase_take_at(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QLayoutItem* func(QHBoxLayout* self, int param1)
///
void q_hboxlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
int32_t q_hboxlayout_count(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
int32_t q_hboxlayout_qbase_count(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func()
///
void q_hboxlayout_on_count(void* self, int32_t (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param geometry QRect*
///
void q_hboxlayout_set_geometry(void* self, void* geometry);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param geometry QRect*
///
void q_hboxlayout_qbase_set_geometry(void* self, void* geometry);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QRect* geometry)
///
void q_hboxlayout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
QRect* q_hboxlayout_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
QRect* q_hboxlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QRect* func()
///
void q_hboxlayout_on_geometry(void* self, QRect* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 QWidget*
///
int32_t q_hboxlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 QWidget*
///
int32_t q_hboxlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func(QHBoxLayout* self, QWidget* param1)
///
void q_hboxlayout_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
bool q_hboxlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback bool func()
///
void q_hboxlayout_on_is_empty(void* self, bool (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_hboxlayout_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_hboxlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func()
///
void q_hboxlayout_on_control_types(void* self, int32_t (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_hboxlayout_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_hboxlayout_qbase_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QLayoutItem* func(QHBoxLayout* self, QWidget* from, QWidget* to, flag of enum Qt__FindChildOption options)
///
void q_hboxlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
QLayout* q_hboxlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
QLayout* q_hboxlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QLayout* func()
///
void q_hboxlayout_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param e QChildEvent*
///
void q_hboxlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param e QChildEvent*
///
void q_hboxlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QChildEvent* e)
///
void q_hboxlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param event QEvent*
///
bool q_hboxlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param event QEvent*
///
bool q_hboxlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback bool func(QHBoxLayout* self, QEvent* event)
///
void q_hboxlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hboxlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hboxlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback bool func(QHBoxLayout* self, QObject* watched, QEvent* event)
///
void q_hboxlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param event QTimerEvent*
///
void q_hboxlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param event QTimerEvent*
///
void q_hboxlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QTimerEvent* event)
///
void q_hboxlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param event QEvent*
///
void q_hboxlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param event QEvent*
///
void q_hboxlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QEvent* event)
///
void q_hboxlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param signal QMetaMethod*
///
void q_hboxlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param signal QMetaMethod*
///
void q_hboxlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QMetaMethod* signal)
///
void q_hboxlayout_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param signal QMetaMethod*
///
void q_hboxlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param signal QMetaMethod*
///
void q_hboxlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QMetaMethod* signal)
///
void q_hboxlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
QWidget* q_hboxlayout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
QWidget* q_hboxlayout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QWidget* func()
///
void q_hboxlayout_on_widget(void* self, QWidget* (*callback)());

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
QSpacerItem* q_hboxlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
QSpacerItem* q_hboxlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QSpacerItem* func()
///
void q_hboxlayout_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 QEvent*
///
void q_hboxlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 QEvent*
///
void q_hboxlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QEvent* param1)
///
void q_hboxlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param l QLayout*
///
void q_hboxlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param l QLayout*
///
void q_hboxlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QLayout* l)
///
void q_hboxlayout_on_add_child_layout(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param w QWidget*
///
void q_hboxlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param w QWidget*
///
void q_hboxlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, QWidget* w)
///
void q_hboxlayout_on_add_child_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param layout QLayout*
///
bool q_hboxlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param layout QLayout*
///
bool q_hboxlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback bool func(QHBoxLayout* self, QLayout* layout)
///
void q_hboxlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 QRect*
///
QRect* q_hboxlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param param1 QRect*
///
QRect* q_hboxlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QRect* func(QHBoxLayout* self, QRect* param1)
///
void q_hboxlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
QObject* q_hboxlayout_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
QObject* q_hboxlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback QObject* func()
///
void q_hboxlayout_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
///
int32_t q_hboxlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
///
int32_t q_hboxlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func()
///
void q_hboxlayout_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param signal const char*
///
int32_t q_hboxlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param signal const char*
///
int32_t q_hboxlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback int32_t func(QHBoxLayout* self, const char* signal)
///
void q_hboxlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxLayout*
/// @param signal QMetaMethod*
///
bool q_hboxlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param signal QMetaMethod*
///
bool q_hboxlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxLayout*
/// @param callback bool func(QHBoxLayout* self, QMetaMethod* signal)
///
void q_hboxlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHBoxLayout*
/// @param callback void func(QHBoxLayout* self, const char* objectName)
///
void q_hboxlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxlayout.html#dtor.QHBoxLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QHBoxLayout*
///
void q_hboxlayout_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvboxlayout.html)

/// q_vboxlayout_new constructs a new QVBoxLayout object.
///
/// @param parent QWidget*
///
QVBoxLayout* q_vboxlayout_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qvboxlayout.html)

/// q_vboxlayout_new2 constructs a new QVBoxLayout object.
///
QVBoxLayout* q_vboxlayout_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QVBoxLayout*
///
const QMetaObject* q_vboxlayout_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QVBoxLayout*
/// @param callback const QMetaObject* func()
///
void q_vboxlayout_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QVBoxLayout*
///
const QMetaObject* q_vboxlayout_qbase_meta_object(void* self);

/// @param self QVBoxLayout*
/// @param param1 const char*
///
void* q_vboxlayout_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QVBoxLayout*
/// @param callback void* func(QVBoxLayout* self, const char* param1)
///
void q_vboxlayout_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QVBoxLayout*
/// @param param1 const char*
///
void* q_vboxlayout_qbase_metacast(void* self, const char* param1);

/// @param self QVBoxLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_vboxlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func(QVBoxLayout* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_vboxlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVBoxLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_vboxlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_vboxlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_vboxlayout_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_vboxlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#direction)
///
/// @param self QVBoxLayout*
///
/// @return enum QBoxLayout__Direction
///
int32_t q_vboxlayout_direction(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
///
/// @param self QVBoxLayout*
/// @param direction enum QBoxLayout__Direction
///
void q_vboxlayout_set_direction(void* self, int32_t direction);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
///
/// @param self QVBoxLayout*
/// @param size int
///
void q_vboxlayout_add_spacing(void* self, int size);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_add_stretch(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
///
/// @param self QVBoxLayout*
/// @param spacerItem QSpacerItem*
///
void q_vboxlayout_add_spacer_item(void* self, void* spacerItem);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QVBoxLayout*
/// @param param1 QWidget*
///
void q_vboxlayout_add_widget(void* self, void* param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// @param self QVBoxLayout*
/// @param layout QLayout*
///
void q_vboxlayout_add_layout(void* self, void* layout);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
///
/// @param self QVBoxLayout*
/// @param param1 int
///
void q_vboxlayout_add_strut(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param size int
///
void q_vboxlayout_insert_spacing(void* self, int index, int size);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// @param self QVBoxLayout*
/// @param index int
///
void q_vboxlayout_insert_stretch(void* self, int index);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param spacerItem QSpacerItem*
///
void q_vboxlayout_insert_spacer_item(void* self, int index, void* spacerItem);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param widget QWidget*
///
void q_vboxlayout_insert_widget(void* self, int index, void* widget);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param layout QLayout*
///
void q_vboxlayout_insert_layout(void* self, int index, void* layout);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param param2 QLayoutItem*
///
void q_vboxlayout_insert_item(void* self, int index, void* param2);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// @param self QVBoxLayout*
/// @param w QWidget*
/// @param stretch int
///
bool q_vboxlayout_set_stretch_factor(void* self, void* w, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
///
/// @param self QVBoxLayout*
/// @param l QLayout*
/// @param stretch int
///
bool q_vboxlayout_set_stretch_factor2(void* self, void* l, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param stretch int
///
void q_vboxlayout_set_stretch(void* self, int index, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
///
/// @param self QVBoxLayout*
/// @param index int
///
int32_t q_vboxlayout_stretch(void* self, int index);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
///
/// @param self QVBoxLayout*
/// @param stretch int
///
void q_vboxlayout_add_stretch1(void* self, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QVBoxLayout*
/// @param param1 QWidget*
/// @param stretch int
///
void q_vboxlayout_add_widget2(void* self, void* param1, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
///
/// @param self QVBoxLayout*
/// @param param1 QWidget*
/// @param stretch int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_vboxlayout_add_widget3(void* self, void* param1, int stretch, int32_t alignment);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
///
/// @param self QVBoxLayout*
/// @param layout QLayout*
/// @param stretch int
///
void q_vboxlayout_add_layout2(void* self, void* layout, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param stretch int
///
void q_vboxlayout_insert_stretch2(void* self, int index, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param widget QWidget*
/// @param stretch int
///
void q_vboxlayout_insert_widget3(void* self, int index, void* widget, int stretch);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param widget QWidget*
/// @param stretch int
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_vboxlayout_insert_widget4(void* self, int index, void* widget, int stretch, int32_t alignment);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
///
/// @param self QVBoxLayout*
/// @param index int
/// @param layout QLayout*
/// @param stretch int
///
void q_vboxlayout_insert_layout3(void* self, int index, void* layout, int stretch);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QVBoxLayout*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_vboxlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QVBoxLayout*
/// @param margins QMargins*
///
void q_vboxlayout_set_contents_margins2(void* self, void* margins);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// @param self QVBoxLayout*
/// @param left int*
/// @param top int*
/// @param right int*
/// @param bottom int*
///
void q_vboxlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// @param self QVBoxLayout*
///
QMargins* q_vboxlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// @param self QVBoxLayout*
///
QRect* q_vboxlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QVBoxLayout*
/// @param w QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_vboxlayout_set_alignment(void* self, void* w, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QVBoxLayout*
/// @param l QLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_vboxlayout_set_alignment2(void* self, void* l, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// @param self QVBoxLayout*
/// @param sizeConstraint enum QLayout__SizeConstraint
///
void q_vboxlayout_set_size_constraint(void* self, int32_t sizeConstraint);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// @param self QVBoxLayout*
///
/// @return enum QLayout__SizeConstraint
///
int32_t q_vboxlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// @param self QVBoxLayout*
/// @param w QWidget*
///
void q_vboxlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// @param self QVBoxLayout*
///
QWidget* q_vboxlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// @param self QVBoxLayout*
///
QWidget* q_vboxlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_update(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// @param self QVBoxLayout*
/// @param w QWidget*
///
void q_vboxlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// @param self QVBoxLayout*
/// @param param1 QLayoutItem*
///
void q_vboxlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self QVBoxLayout*
/// @param param1 QLayoutItem*
///
int32_t q_vboxlayout_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func(QVBoxLayout* self, QLayoutItem* param1)
///
void q_vboxlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self QVBoxLayout*
/// @param param1 QLayoutItem*
///
int32_t q_vboxlayout_qbase_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// @param self QVBoxLayout*
/// @param w int
///
int32_t q_vboxlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// @param self QVBoxLayout*
/// @param w int
///
int32_t q_vboxlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// @param self QVBoxLayout*
/// @param enabled bool
///
void q_vboxlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// @param w QWidget*
/// @param s QSize*
///
QSize* q_vboxlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVBoxLayout*
///
const char* q_vboxlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVBoxLayout*
/// @param name char*
///
void q_vboxlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVBoxLayout*
/// @param b bool
///
bool q_vboxlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QVBoxLayout*
///
QThread* q_vboxlayout_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVBoxLayout*
/// @param thread QThread*
///
bool q_vboxlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVBoxLayout*
/// @param interval int
///
int32_t q_vboxlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVBoxLayout*
/// @param time int64_t of nanoseconds
///
int32_t q_vboxlayout_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVBoxLayout*
/// @param id int
///
void q_vboxlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVBoxLayout*
/// @param id enum Qt__TimerId
///
void q_vboxlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QVBoxLayout*
///
/// @return libqt_list of QObject*
///
libqt_list q_vboxlayout_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVBoxLayout*
/// @param parent QObject*
///
void q_vboxlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVBoxLayout*
/// @param filterObj QObject*
///
void q_vboxlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVBoxLayout*
/// @param obj QObject*
///
void q_vboxlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_vboxlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVBoxLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_vboxlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_vboxlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_vboxlayout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVBoxLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_vboxlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QVBoxLayout*
/// @param name const char*
///
QVariant* q_vboxlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QVBoxLayout*
///
const char** q_vboxlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVBoxLayout*
///
QBindingStorage* q_vboxlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVBoxLayout*
///
const QBindingStorage* q_vboxlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self)
///
void q_vboxlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QVBoxLayout*
///
QObject* q_vboxlayout_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QVBoxLayout*
/// @param classname const char*
///
bool q_vboxlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVBoxLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_vboxlayout_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVBoxLayout*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_vboxlayout_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_vboxlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVBoxLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_vboxlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBoxLayout*
/// @param param1 QObject*
///
void q_vboxlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QObject* param1)
///
void q_vboxlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QVBoxLayout*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_vboxlayout_alignment(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 QLayoutItem*
///
void q_vboxlayout_add_item(void* self, void* param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 QLayoutItem*
///
void q_vboxlayout_qbase_add_item(void* self, void* param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QLayoutItem* param1)
///
void q_vboxlayout_on_add_item(void* self, void (*callback)(void*, void*));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
int32_t q_vboxlayout_spacing(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
int32_t q_vboxlayout_qbase_spacing(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func()
///
void q_vboxlayout_on_spacing(void* self, int32_t (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param spacing int
///
void q_vboxlayout_set_spacing(void* self, int spacing);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param spacing int
///
void q_vboxlayout_qbase_set_spacing(void* self, int spacing);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, int spacing)
///
void q_vboxlayout_on_set_spacing(void* self, void (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_size_hint(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_qbase_size_hint(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QSize* func()
///
void q_vboxlayout_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_minimum_size(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_qbase_minimum_size(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QSize* func()
///
void q_vboxlayout_on_minimum_size(void* self, QSize* (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_maximum_size(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
QSize* q_vboxlayout_qbase_maximum_size(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QSize* func()
///
void q_vboxlayout_on_maximum_size(void* self, QSize* (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_has_height_for_width(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_qbase_has_height_for_width(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback bool func()
///
void q_vboxlayout_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 int
///
int32_t q_vboxlayout_height_for_width(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 int
///
int32_t q_vboxlayout_qbase_height_for_width(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func(QVBoxLayout* self, int param1)
///
void q_vboxlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 int
///
int32_t q_vboxlayout_minimum_height_for_width(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 int
///
int32_t q_vboxlayout_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func(QVBoxLayout* self, int param1)
///
void q_vboxlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_vboxlayout_expanding_directions(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_vboxlayout_qbase_expanding_directions(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func()
///
void q_vboxlayout_on_expanding_directions(void* self, int32_t (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_invalidate(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_qbase_invalidate(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func()
///
void q_vboxlayout_on_invalidate(void* self, void (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 int
///
QLayoutItem* q_vboxlayout_item_at(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 int
///
QLayoutItem* q_vboxlayout_qbase_item_at(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QLayoutItem* func(QVBoxLayout* self, int param1)
///
void q_vboxlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 int
///
QLayoutItem* q_vboxlayout_take_at(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 int
///
QLayoutItem* q_vboxlayout_qbase_take_at(void* self, int param1);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QLayoutItem* func(QVBoxLayout* self, int param1)
///
void q_vboxlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int));

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
int32_t q_vboxlayout_count(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
int32_t q_vboxlayout_qbase_count(void* self);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func()
///
void q_vboxlayout_on_count(void* self, int32_t (*callback)());

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param geometry QRect*
///
void q_vboxlayout_set_geometry(void* self, void* geometry);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param geometry QRect*
///
void q_vboxlayout_qbase_set_geometry(void* self, void* geometry);

/// Inherited from QBoxLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QRect* geometry)
///
void q_vboxlayout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
QRect* q_vboxlayout_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
QRect* q_vboxlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QRect* func()
///
void q_vboxlayout_on_geometry(void* self, QRect* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 QWidget*
///
int32_t q_vboxlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 QWidget*
///
int32_t q_vboxlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func(QVBoxLayout* self, QWidget* param1)
///
void q_vboxlayout_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
bool q_vboxlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback bool func()
///
void q_vboxlayout_on_is_empty(void* self, bool (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_vboxlayout_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_vboxlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func()
///
void q_vboxlayout_on_control_types(void* self, int32_t (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_vboxlayout_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_vboxlayout_qbase_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QLayoutItem* func(QVBoxLayout* self, QWidget* from, QWidget* to, flag of enum Qt__FindChildOption options)
///
void q_vboxlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
QLayout* q_vboxlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
QLayout* q_vboxlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QLayout* func()
///
void q_vboxlayout_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param e QChildEvent*
///
void q_vboxlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param e QChildEvent*
///
void q_vboxlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QChildEvent* e)
///
void q_vboxlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param event QEvent*
///
bool q_vboxlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param event QEvent*
///
bool q_vboxlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback bool func(QVBoxLayout* self, QEvent* event)
///
void q_vboxlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_vboxlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_vboxlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback bool func(QVBoxLayout* self, QObject* watched, QEvent* event)
///
void q_vboxlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param event QTimerEvent*
///
void q_vboxlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param event QTimerEvent*
///
void q_vboxlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QTimerEvent* event)
///
void q_vboxlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param event QEvent*
///
void q_vboxlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param event QEvent*
///
void q_vboxlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QEvent* event)
///
void q_vboxlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param signal QMetaMethod*
///
void q_vboxlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param signal QMetaMethod*
///
void q_vboxlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QMetaMethod* signal)
///
void q_vboxlayout_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param signal QMetaMethod*
///
void q_vboxlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param signal QMetaMethod*
///
void q_vboxlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QMetaMethod* signal)
///
void q_vboxlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
QWidget* q_vboxlayout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
QWidget* q_vboxlayout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QWidget* func()
///
void q_vboxlayout_on_widget(void* self, QWidget* (*callback)());

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
QSpacerItem* q_vboxlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
QSpacerItem* q_vboxlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QSpacerItem* func()
///
void q_vboxlayout_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 QEvent*
///
void q_vboxlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 QEvent*
///
void q_vboxlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QEvent* param1)
///
void q_vboxlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param l QLayout*
///
void q_vboxlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param l QLayout*
///
void q_vboxlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QLayout* l)
///
void q_vboxlayout_on_add_child_layout(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param w QWidget*
///
void q_vboxlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param w QWidget*
///
void q_vboxlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, QWidget* w)
///
void q_vboxlayout_on_add_child_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param layout QLayout*
///
bool q_vboxlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param layout QLayout*
///
bool q_vboxlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback bool func(QVBoxLayout* self, QLayout* layout)
///
void q_vboxlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 QRect*
///
QRect* q_vboxlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param param1 QRect*
///
QRect* q_vboxlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QRect* func(QVBoxLayout* self, QRect* param1)
///
void q_vboxlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
QObject* q_vboxlayout_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
QObject* q_vboxlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback QObject* func()
///
void q_vboxlayout_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
///
int32_t q_vboxlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
///
int32_t q_vboxlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func()
///
void q_vboxlayout_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param signal const char*
///
int32_t q_vboxlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param signal const char*
///
int32_t q_vboxlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback int32_t func(QVBoxLayout* self, const char* signal)
///
void q_vboxlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVBoxLayout*
/// @param signal QMetaMethod*
///
bool q_vboxlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param signal QMetaMethod*
///
bool q_vboxlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVBoxLayout*
/// @param callback bool func(QVBoxLayout* self, QMetaMethod* signal)
///
void q_vboxlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVBoxLayout*
/// @param callback void func(QVBoxLayout* self, const char* objectName)
///
void q_vboxlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvboxlayout.html#dtor.QVBoxLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QVBoxLayout*
///
void q_vboxlayout_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#public-types)

typedef enum {
    QBOXLAYOUT_DIRECTION_LEFTTORIGHT = 0,
    QBOXLAYOUT_DIRECTION_RIGHTTOLEFT = 1,
    QBOXLAYOUT_DIRECTION_TOPTOBOTTOM = 2,
    QBOXLAYOUT_DIRECTION_BOTTOMTOTOP = 3,
    QBOXLAYOUT_DIRECTION_DOWN = 2,
    QBOXLAYOUT_DIRECTION_UP = 3
} QBoxLayout__Direction;

#endif

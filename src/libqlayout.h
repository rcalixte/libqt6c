#pragma once
#ifndef SRCQT6C_LIBQLAYOUT_H
#define SRCQT6C_LIBQLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlayout.html

/// q_layout_new constructs a new QLayout object.
///
/// @param parent QWidget*
QLayout* q_layout_new(void* parent);

/// q_layout_new2 constructs a new QLayout object.
///
QLayout* q_layout_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLayout*
const QMetaObject* q_layout_meta_object(void* self);

/// @param self QLayout*
/// @param param1 const char*
void* q_layout_metacast(void* self, const char* param1);

/// @param self QLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_layout_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback int32_t fn(QLayout*, enum QMetaObject__Call, int, void*)
void q_layout_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_layout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_layout_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// @param self QLayout*
int32_t q_layout_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback int32_t fn()
void q_layout_on_spacing(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// Base class method implementation
///
/// @param self QLayout*
int32_t q_layout_qbase_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// @param self QLayout*
/// @param spacing int
void q_layout_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, int)
void q_layout_on_set_spacing(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param spacing int
void q_layout_qbase_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QLayout*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_layout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QLayout*
/// @param margins QMargins*
void q_layout_set_contents_margins2(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// @param self QLayout*
void q_layout_unset_contents_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// @param self QLayout*
/// @param left int*
/// @param top int*
/// @param right int*
/// @param bottom int*
void q_layout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// @param self QLayout*
QMargins* q_layout_contents_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// @param self QLayout*
QRect* q_layout_contents_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QLayout*
/// @param w QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
bool q_layout_set_alignment(void* self, void* w, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QLayout*
/// @param l QLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
bool q_layout_set_alignment2(void* self, void* l, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// @param self QLayout*
/// @param sizeConstraint enum QLayout__SizeConstraint
void q_layout_set_size_constraint(void* self, int64_t sizeConstraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// @param self QLayout*
///
/// @return enum QLayout__SizeConstraint
int64_t q_layout_size_constraint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// @param self QLayout*
/// @param w QWidget*
void q_layout_set_menu_bar(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// @param self QLayout*
QWidget* q_layout_menu_bar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// @param self QLayout*
QWidget* q_layout_parent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// @param self QLayout*
void q_layout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback void fn()
void q_layout_on_invalidate(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// Base class method implementation
///
/// @param self QLayout*
void q_layout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// @param self QLayout*
QRect* q_layout_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback QRect* fn()
void q_layout_on_geometry(void* self, QRect* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Base class method implementation
///
/// @param self QLayout*
QRect* q_layout_qbase_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// @param self QLayout*
bool q_layout_activate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// @param self QLayout*
void q_layout_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addWidget)
///
/// @param self QLayout*
/// @param w QWidget*
void q_layout_add_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
///
/// @param self QLayout*
/// @param param1 QLayoutItem*
void q_layout_add_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QLayoutItem*)
void q_layout_on_add_item(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param param1 QLayoutItem*
void q_layout_qbase_add_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// @param self QLayout*
/// @param w QWidget*
void q_layout_remove_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// @param self QLayout*
/// @param param1 QLayoutItem*
void q_layout_remove_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// @param self QLayout*
///
/// @return flag of enum Qt__Orientation
int64_t q_layout_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback int64_t fn()
void q_layout_on_expanding_directions(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self QLayout*
///
/// @return flag of enum Qt__Orientation
int64_t q_layout_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
///
/// @param self QLayout*
QSize* q_layout_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback QSize* fn()
void q_layout_on_minimum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QLayout*
QSize* q_layout_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// @param self QLayout*
QSize* q_layout_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback QSize* fn()
void q_layout_on_maximum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Base class method implementation
///
/// @param self QLayout*
QSize* q_layout_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
///
/// @param self QLayout*
/// @param geometry QRect*
void q_layout_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QRect*)
void q_layout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param geometry QRect*
void q_layout_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
///
/// @param self QLayout*
/// @param index int
QLayoutItem* q_layout_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback QLayoutItem* fn(QLayout*, int)
void q_layout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param index int
QLayoutItem* q_layout_qbase_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
///
/// @param self QLayout*
/// @param index int
QLayoutItem* q_layout_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback QLayoutItem* fn(QLayout*, int)
void q_layout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param index int
QLayoutItem* q_layout_qbase_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self QLayout*
/// @param param1 QWidget*
int32_t q_layout_index_of(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback int32_t fn(QLayout*, QWidget*)
void q_layout_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param param1 QWidget*
int32_t q_layout_qbase_index_of(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self QLayout*
/// @param param1 QLayoutItem*
int32_t q_layout_index_of2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback int32_t fn(QLayout*, QLayoutItem*)
void q_layout_on_index_of2(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param param1 QLayoutItem*
int32_t q_layout_qbase_index_of2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
///
/// @param self QLayout*
int32_t q_layout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback int32_t fn()
void q_layout_on_count(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
///
/// Base class method implementation
///
/// @param self QLayout*
int32_t q_layout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// @param self QLayout*
bool q_layout_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback bool fn()
void q_layout_on_is_empty(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Base class method implementation
///
/// @param self QLayout*
bool q_layout_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// @param self QLayout*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_layout_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback int64_t fn()
void q_layout_on_control_types(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Base class method implementation
///
/// @param self QLayout*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_layout_qbase_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// @param self QLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
QLayoutItem* q_layout_replace_widget(void* self, void* from, void* to, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback QLayoutItem* fn(QLayout*, QWidget*, QWidget*, flag of enum Qt__FindChildOption)
void q_layout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
QLayoutItem* q_layout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// @param self QLayout*
/// @param w int
int32_t q_layout_total_minimum_height_for_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// @param self QLayout*
/// @param w int
int32_t q_layout_total_height_for_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// @param self QLayout*
QSize* q_layout_total_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// @param self QLayout*
QSize* q_layout_total_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// @param self QLayout*
QSize* q_layout_total_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// @param self QLayout*
QLayout* q_layout_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback QLayout* fn()
void q_layout_on_layout(void* self, QLayout* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Base class method implementation
///
/// @param self QLayout*
QLayout* q_layout_qbase_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// @param self QLayout*
/// @param enabled bool
void q_layout_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// @param self QLayout*
bool q_layout_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// @param w QWidget*
/// @param s QSize*
QSize* q_layout_closest_acceptable_size(void* w, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// @param self QLayout*
/// @param param1 QEvent*
void q_layout_widget_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QEvent*)
void q_layout_on_widget_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param param1 QEvent*
void q_layout_qbase_widget_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// @param self QLayout*
/// @param e QChildEvent*
void q_layout_child_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QChildEvent*)
void q_layout_on_child_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param e QChildEvent*
void q_layout_qbase_child_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// @param self QLayout*
/// @param l QLayout*
void q_layout_add_child_layout(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QLayout*)
void q_layout_on_add_child_layout(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param l QLayout*
void q_layout_qbase_add_child_layout(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// @param self QLayout*
/// @param w QWidget*
void q_layout_add_child_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QWidget*)
void q_layout_on_add_child_widget(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param w QWidget*
void q_layout_qbase_add_child_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// @param self QLayout*
/// @param layout QLayout*
bool q_layout_adopt_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback bool fn(QLayout*, QLayout*)
void q_layout_on_adopt_layout(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param layout QLayout*
bool q_layout_qbase_adopt_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// @param self QLayout*
/// @param param1 QRect*
QRect* q_layout_alignment_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Allows for overriding the related default method
///
/// @param self QLayout*
/// @param callback QRect* fn(QLayout*, QRect*)
void q_layout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Base class method implementation
///
/// @param self QLayout*
/// @param param1 QRect*
QRect* q_layout_qbase_alignment_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_layout_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_layout_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLayout*
const char* q_layout_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLayout*
/// @param name char*
void q_layout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLayout*
bool q_layout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLayout*
bool q_layout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLayout*
bool q_layout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLayout*
bool q_layout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLayout*
/// @param b bool
bool q_layout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLayout*
QThread* q_layout_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLayout*
/// @param thread QThread*
bool q_layout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLayout*
/// @param interval int
int32_t q_layout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLayout*
/// @param id int
void q_layout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLayout*
/// @param id enum Qt__TimerId
void q_layout_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLayout*
libqt_list /* of QObject* */ q_layout_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLayout*
/// @param parent QObject*
void q_layout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLayout*
/// @param filterObj QObject*
void q_layout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLayout*
/// @param obj QObject*
void q_layout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_layout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_layout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_layout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_layout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLayout*
void q_layout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLayout*
void q_layout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLayout*
/// @param name const char*
/// @param value QVariant*
bool q_layout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLayout*
/// @param name const char*
QVariant* q_layout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLayout*
const char** q_layout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLayout*
QBindingStorage* q_layout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLayout*
const QBindingStorage* q_layout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLayout*
void q_layout_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLayout*
/// @param callback void fn(QLayout*)
void q_layout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLayout*
QObject* q_layout_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLayout*
/// @param classname const char*
bool q_layout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLayout*
void q_layout_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLayout*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_layout_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_layout_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_layout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_layout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLayout*
/// @param param1 QObject*
void q_layout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QObject*)
void q_layout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QLayout*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_layout_alignment(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param event QEvent*
bool q_layout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param event QEvent*
bool q_layout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback bool fn(QLayout*, QEvent*)
void q_layout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param watched QObject*
/// @param event QEvent*
bool q_layout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param watched QObject*
/// @param event QEvent*
bool q_layout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback bool fn(QLayout*, QObject*, QEvent*)
void q_layout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param event QTimerEvent*
void q_layout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param event QTimerEvent*
void q_layout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QTimerEvent*)
void q_layout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param event QEvent*
void q_layout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param event QEvent*
void q_layout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QEvent*)
void q_layout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param signal QMetaMethod*
void q_layout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param signal QMetaMethod*
void q_layout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QMetaMethod*)
void q_layout_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param signal QMetaMethod*
void q_layout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param signal QMetaMethod*
void q_layout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, QMetaMethod*)
void q_layout_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
QSize* q_layout_size_hint(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
QSize* q_layout_qbase_size_hint(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback QSize* fn()
void q_layout_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
bool q_layout_has_height_for_width(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
bool q_layout_qbase_has_height_for_width(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback bool fn()
void q_layout_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param param1 int
int32_t q_layout_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param param1 int
int32_t q_layout_qbase_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback int32_t fn(QLayout*, int)
void q_layout_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param param1 int
int32_t q_layout_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param param1 int
int32_t q_layout_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback int32_t fn(QLayout*, int)
void q_layout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
QWidget* q_layout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
QWidget* q_layout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback QWidget* fn()
void q_layout_on_widget(void* self, QWidget* (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
QSpacerItem* q_layout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
QSpacerItem* q_layout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback QSpacerItem* fn()
void q_layout_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
QObject* q_layout_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
QObject* q_layout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback QObject* fn()
void q_layout_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
int32_t q_layout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
int32_t q_layout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback int32_t fn()
void q_layout_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param signal const char*
int32_t q_layout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param signal const char*
int32_t q_layout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback int32_t fn(QLayout*, const char*)
void q_layout_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLayout*
/// @param signal QMetaMethod*
bool q_layout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLayout*
/// @param signal QMetaMethod*
bool q_layout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLayout*
/// @param callback bool fn(QLayout*, QMetaMethod*)
void q_layout_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLayout*
/// @param callback void fn(QLayout*, const char*)
void q_layout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#dtor.QLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QLayout*
void q_layout_delete(void* self);

/// https://doc.qt.io/qt-6/qlayout.html#types

typedef enum {
    QLAYOUT_SIZECONSTRAINT_SETDEFAULTCONSTRAINT = 0,
    QLAYOUT_SIZECONSTRAINT_SETNOCONSTRAINT = 1,
    QLAYOUT_SIZECONSTRAINT_SETMINIMUMSIZE = 2,
    QLAYOUT_SIZECONSTRAINT_SETFIXEDSIZE = 3,
    QLAYOUT_SIZECONSTRAINT_SETMAXIMUMSIZE = 4,
    QLAYOUT_SIZECONSTRAINT_SETMINANDMAXSIZE = 5
} QLayout__SizeConstraint;

#endif

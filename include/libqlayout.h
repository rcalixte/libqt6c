#pragma once
#ifndef SRCQT6C_LIBQLAYOUT_H
#define SRCQT6C_LIBQLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqlayoutitem.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qlayout.html

/// q_layout_new constructs a new QLayout object.
///
/// ``` QWidget* parent ```
QLayout* q_layout_new(void* parent);

/// q_layout_new2 constructs a new QLayout object.
///
///
QLayout* q_layout_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLayout* self ```
const QMetaObject* q_layout_meta_object(void* self);

/// ``` QLayout* self, const char* param1 ```
void* q_layout_metacast(void* self, const char* param1);

/// ``` QLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_layout_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, enum QMetaObject__Call, int, void*) ```
void q_layout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_layout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_layout_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// ``` QLayout* self ```
int32_t q_layout_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)() ```
void q_layout_on_spacing(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
int32_t q_layout_qbase_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// ``` QLayout* self, int spacing ```
void q_layout_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, int) ```
void q_layout_on_set_spacing(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// Base class method implementation
///
/// ``` QLayout* self, int spacing ```
void q_layout_qbase_set_spacing(void* self, int spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QLayout* self, int left, int top, int right, int bottom ```
void q_layout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// ``` QLayout* self, QMargins* margins ```
void q_layout_set_contents_margins_with_margins(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// ``` QLayout* self ```
void q_layout_unset_contents_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// ``` QLayout* self, int* left, int* top, int* right, int* bottom ```
void q_layout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// ``` QLayout* self ```
QMargins* q_layout_contents_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// ``` QLayout* self ```
QRect* q_layout_contents_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QLayout* self, QWidget* w, int alignment ```
bool q_layout_set_alignment(void* self, void* w, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// ``` QLayout* self, QLayout* l, int alignment ```
bool q_layout_set_alignment2(void* self, void* l, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// ``` QLayout* self, enum QLayout__SizeConstraint sizeConstraint ```
void q_layout_set_size_constraint(void* self, int64_t sizeConstraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// ``` QLayout* self ```
int64_t q_layout_size_constraint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_set_menu_bar(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// ``` QLayout* self ```
QWidget* q_layout_menu_bar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// ``` QLayout* self ```
QWidget* q_layout_parent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// ``` QLayout* self ```
void q_layout_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)() ```
void q_layout_on_invalidate(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
void q_layout_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// ``` QLayout* self ```
QRect* q_layout_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, QRect* (*slot)() ```
void q_layout_on_geometry(void* self, QRect* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
QRect* q_layout_qbase_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// ``` QLayout* self ```
bool q_layout_activate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// ``` QLayout* self ```
void q_layout_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addWidget)
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_add_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
///
/// ``` QLayout* self, QLayoutItem* param1 ```
void q_layout_add_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QLayoutItem*) ```
void q_layout_on_add_item(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
///
/// Base class method implementation
///
/// ``` QLayout* self, QLayoutItem* param1 ```
void q_layout_qbase_add_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_remove_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// ``` QLayout* self, QLayoutItem* param1 ```
void q_layout_remove_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// ``` QLayout* self ```
int64_t q_layout_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int64_t (*slot)() ```
void q_layout_on_expanding_directions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
int64_t q_layout_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
///
/// ``` QLayout* self ```
QSize* q_layout_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, QSize* (*slot)() ```
void q_layout_on_minimum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
QSize* q_layout_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// ``` QLayout* self ```
QSize* q_layout_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, QSize* (*slot)() ```
void q_layout_on_maximum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
QSize* q_layout_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
///
/// ``` QLayout* self, QRect* geometry ```
void q_layout_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QRect*) ```
void q_layout_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QLayout* self, QRect* geometry ```
void q_layout_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
///
/// ``` QLayout* self, int index ```
QLayoutItem* q_layout_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, QLayoutItem* (*slot)(QLayout*, int) ```
void q_layout_on_item_at(void* self, QLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
///
/// Base class method implementation
///
/// ``` QLayout* self, int index ```
QLayoutItem* q_layout_qbase_item_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
///
/// ``` QLayout* self, int index ```
QLayoutItem* q_layout_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, QLayoutItem* (*slot)(QLayout*, int) ```
void q_layout_on_take_at(void* self, QLayoutItem* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
///
/// Base class method implementation
///
/// ``` QLayout* self, int index ```
QLayoutItem* q_layout_qbase_take_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QLayout* self, QWidget* param1 ```
int32_t q_layout_index_of(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QWidget*) ```
void q_layout_on_index_of(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// ``` QLayout* self, QWidget* param1 ```
int32_t q_layout_qbase_index_of(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// ``` QLayout* self, QLayoutItem* param1 ```
int32_t q_layout_index_of_with_q_layout_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, QLayoutItem*) ```
void q_layout_on_index_of_with_q_layout_item(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// ``` QLayout* self, QLayoutItem* param1 ```
int32_t q_layout_qbase_index_of_with_q_layout_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
///
/// ``` QLayout* self ```
int32_t q_layout_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int32_t (*slot)() ```
void q_layout_on_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
int32_t q_layout_qbase_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// ``` QLayout* self ```
bool q_layout_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, bool (*slot)() ```
void q_layout_on_is_empty(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
bool q_layout_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// ``` QLayout* self ```
int64_t q_layout_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, int64_t (*slot)() ```
void q_layout_on_control_types(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
int64_t q_layout_qbase_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// ``` QLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_layout_replace_widget(void* self, void* from, void* to, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, QLayoutItem* (*slot)(QLayout*, QWidget*, QWidget*, int) ```
void q_layout_on_replace_widget(void* self, QLayoutItem* (*slot)(void*, void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Base class method implementation
///
/// ``` QLayout* self, QWidget* from, QWidget* to, int options ```
QLayoutItem* q_layout_qbase_replace_widget(void* self, void* from, void* to, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// ``` QLayout* self, int w ```
int32_t q_layout_total_minimum_height_for_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// ``` QLayout* self, int w ```
int32_t q_layout_total_height_for_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// ``` QLayout* self ```
QSize* q_layout_total_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// ``` QLayout* self ```
QSize* q_layout_total_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// ``` QLayout* self ```
QSize* q_layout_total_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// ``` QLayout* self ```
QLayout* q_layout_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, QLayout* (*slot)() ```
void q_layout_on_layout(void* self, QLayout* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Base class method implementation
///
/// ``` QLayout* self ```
QLayout* q_layout_qbase_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// ``` QLayout* self, bool enabled ```
void q_layout_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// ``` QLayout* self ```
bool q_layout_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// ``` QWidget* w, QSize* s ```
QSize* q_layout_closest_acceptable_size(void* w, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// ``` QLayout* self, QEvent* param1 ```
void q_layout_widget_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QEvent*) ```
void q_layout_on_widget_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Base class method implementation
///
/// ``` QLayout* self, QEvent* param1 ```
void q_layout_qbase_widget_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// ``` QLayout* self, QChildEvent* e ```
void q_layout_child_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QChildEvent*) ```
void q_layout_on_child_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Base class method implementation
///
/// ``` QLayout* self, QChildEvent* e ```
void q_layout_qbase_child_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// ``` QLayout* self, QLayout* l ```
void q_layout_add_child_layout(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QLayout*) ```
void q_layout_on_add_child_layout(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Base class method implementation
///
/// ``` QLayout* self, QLayout* l ```
void q_layout_qbase_add_child_layout(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_add_child_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QWidget*) ```
void q_layout_on_add_child_widget(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Base class method implementation
///
/// ``` QLayout* self, QWidget* w ```
void q_layout_qbase_add_child_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// ``` QLayout* self, QLayout* layout ```
bool q_layout_adopt_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, bool (*slot)(QLayout*, QLayout*) ```
void q_layout_on_adopt_layout(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Base class method implementation
///
/// ``` QLayout* self, QLayout* layout ```
bool q_layout_qbase_adopt_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// ``` QLayout* self, QRect* param1 ```
QRect* q_layout_alignment_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Allows for overriding the related default method
///
/// ``` QLayout* self, QRect* (*slot)(QLayout*, QRect*) ```
void q_layout_on_alignment_rect(void* self, QRect* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Base class method implementation
///
/// ``` QLayout* self, QRect* param1 ```
QRect* q_layout_qbase_alignment_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_layout_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_layout_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLayout* self ```
const char* q_layout_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLayout* self, char* name ```
void q_layout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLayout* self ```
bool q_layout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLayout* self ```
bool q_layout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLayout* self ```
bool q_layout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLayout* self ```
bool q_layout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLayout* self, bool b ```
bool q_layout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLayout* self ```
QThread* q_layout_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLayout* self, QThread* thread ```
void q_layout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLayout* self, int interval ```
int32_t q_layout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLayout* self, int id ```
void q_layout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLayout* self ```
libqt_list /* of QObject* */ q_layout_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLayout* self, QObject* parent ```
void q_layout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLayout* self, QObject* filterObj ```
void q_layout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLayout* self, QObject* obj ```
void q_layout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_layout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_layout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_layout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_layout_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLayout* self ```
void q_layout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLayout* self ```
void q_layout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLayout* self, const char* name, QVariant* value ```
bool q_layout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLayout* self, const char* name ```
QVariant* q_layout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLayout* self ```
const char** q_layout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLayout* self ```
QBindingStorage* q_layout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLayout* self ```
const QBindingStorage* q_layout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLayout* self ```
void q_layout_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLayout* self, void (*slot)(QObject*) ```
void q_layout_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLayout* self ```
QObject* q_layout_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLayout* self, const char* classname ```
bool q_layout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLayout* self ```
void q_layout_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_layout_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_layout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_layout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLayout* self, QObject* param1 ```
void q_layout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLayout* self, void (*slot)(QObject*, QObject*) ```
void q_layout_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QLayout* self ```
int64_t q_layout_alignment(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QEvent* event ```
bool q_layout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QEvent* event ```
bool q_layout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, bool (*slot)(QLayout*, QEvent*) ```
void q_layout_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QObject* watched, QEvent* event ```
bool q_layout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QObject* watched, QEvent* event ```
bool q_layout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, bool (*slot)(QLayout*, QObject*, QEvent*) ```
void q_layout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QTimerEvent* event ```
void q_layout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QTimerEvent* event ```
void q_layout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QTimerEvent*) ```
void q_layout_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QEvent* event ```
void q_layout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QEvent* event ```
void q_layout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QEvent*) ```
void q_layout_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
void q_layout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
void q_layout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QMetaMethod*) ```
void q_layout_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
void q_layout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
void q_layout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, void (*slot)(QLayout*, QMetaMethod*) ```
void q_layout_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
QSize* q_layout_size_hint(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
QSize* q_layout_qbase_size_hint(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, QSize* (*slot)() ```
void q_layout_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
bool q_layout_has_height_for_width(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
bool q_layout_qbase_has_height_for_width(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, bool (*slot)() ```
void q_layout_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, int param1 ```
int32_t q_layout_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, int param1 ```
int32_t q_layout_qbase_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, int) ```
void q_layout_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, int param1 ```
int32_t q_layout_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, int param1 ```
int32_t q_layout_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, int) ```
void q_layout_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
QWidget* q_layout_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
QWidget* q_layout_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, QWidget* (*slot)() ```
void q_layout_on_widget(void* self, QWidget* (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
QSpacerItem* q_layout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
QSpacerItem* q_layout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, QSpacerItem* (*slot)() ```
void q_layout_on_spacer_item(void* self, QSpacerItem* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
QObject* q_layout_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
QObject* q_layout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, QObject* (*slot)() ```
void q_layout_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self ```
int32_t q_layout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self ```
int32_t q_layout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, int32_t (*slot)() ```
void q_layout_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, const char* signal ```
int32_t q_layout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, const char* signal ```
int32_t q_layout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, int32_t (*slot)(QLayout*, const char*) ```
void q_layout_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
bool q_layout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLayout* self, QMetaMethod* signal ```
bool q_layout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLayout* self, bool (*slot)(QLayout*, QMetaMethod*) ```
void q_layout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QLayout* self, void (*slot)(QObject*, const char*) ```
void q_layout_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#dtor.QLayout)
///
/// Delete this object from C++ memory.
///
/// ``` QLayout* self ```
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

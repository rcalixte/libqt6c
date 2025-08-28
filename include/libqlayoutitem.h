#pragma once
#ifndef SRCQT6C_LIBQLAYOUTITEM_H
#define SRCQT6C_LIBQLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlayoutitem.html

/// q_layoutitem_new constructs a new QLayoutItem object.
///
QLayoutItem* q_layoutitem_new();

/// q_layoutitem_new2 constructs a new QLayoutItem object.
///
/// @param param1 QLayoutItem*
QLayoutItem* q_layoutitem_new2(void* param1);

/// q_layoutitem_new3 constructs a new QLayoutItem object.
///
/// @param alignment flag of enum Qt__AlignmentFlag
QLayoutItem* q_layoutitem_new3(int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// @param self QLayoutItem*
QSize* q_layoutitem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QSize* func()
void q_layoutitem_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
QSize* q_layoutitem_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// @param self QLayoutItem*
QSize* q_layoutitem_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QSize* func()
void q_layoutitem_on_minimum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
QSize* q_layoutitem_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// @param self QLayoutItem*
QSize* q_layoutitem_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QSize* func()
void q_layoutitem_on_maximum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
QSize* q_layoutitem_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// @param self QLayoutItem*
///
/// @return flag of enum Qt__Orientation
int64_t q_layoutitem_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback int64_t func()
void q_layoutitem_on_expanding_directions(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
///
/// @return flag of enum Qt__Orientation
int64_t q_layoutitem_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// @param self QLayoutItem*
/// @param geometry QRect*
void q_layoutitem_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback void func(QLayoutItem* self, QRect* geometry)
void q_layoutitem_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
/// @param geometry QRect*
void q_layoutitem_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// @param self QLayoutItem*
QRect* q_layoutitem_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QRect* func()
void q_layoutitem_on_geometry(void* self, QRect* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
QRect* q_layoutitem_qbase_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// @param self QLayoutItem*
bool q_layoutitem_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback bool func()
void q_layoutitem_on_is_empty(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
bool q_layoutitem_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// @param self QLayoutItem*
bool q_layoutitem_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback bool func()
void q_layoutitem_on_has_height_for_width(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
bool q_layoutitem_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// @param self QLayoutItem*
/// @param param1 int
int32_t q_layoutitem_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback int32_t func(QLayoutItem* self, int param1)
void q_layoutitem_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
/// @param param1 int
int32_t q_layoutitem_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// @param self QLayoutItem*
/// @param param1 int
int32_t q_layoutitem_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback int32_t func(QLayoutItem* self, int param1)
void q_layoutitem_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
/// @param param1 int
int32_t q_layoutitem_qbase_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// @param self QLayoutItem*
void q_layoutitem_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback void func()
void q_layoutitem_on_invalidate(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
void q_layoutitem_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// @param self QLayoutItem*
QWidget* q_layoutitem_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QWidget* func()
void q_layoutitem_on_widget(void* self, QWidget* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
QWidget* q_layoutitem_qbase_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// @param self QLayoutItem*
QLayout* q_layoutitem_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QLayout* func()
void q_layoutitem_on_layout(void* self, QLayout* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
QLayout* q_layoutitem_qbase_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// @param self QLayoutItem*
QSpacerItem* q_layoutitem_spacer_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QSpacerItem* func()
void q_layoutitem_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
QSpacerItem* q_layoutitem_qbase_spacer_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QLayoutItem*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_layoutitem_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// @param self QLayoutItem*
/// @param a flag of enum Qt__AlignmentFlag
void q_layoutitem_set_alignment(void* self, int64_t a);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// @param self QLayoutItem*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_layoutitem_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback int64_t func()
void q_layoutitem_on_control_types(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_layoutitem_qbase_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
///
/// @param self QLayoutItem*
/// @param param1 QLayoutItem*
void q_layoutitem_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback void func(QLayoutItem* self, QLayoutItem* param1)
void q_layoutitem_on_operator_assign(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
/// @param param1 QLayoutItem*
void q_layoutitem_qbase_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#dtor.QLayoutItem)
///
/// Delete this object from C++ memory.
///
/// @param self QLayoutItem*
void q_layoutitem_delete(void* self);

/// https://doc.qt.io/qt-6/qspaceritem.html

/// q_spaceritem_new constructs a new QSpacerItem object.
///
/// @param w int
/// @param h int
QSpacerItem* q_spaceritem_new(int w, int h);

/// q_spaceritem_new2 constructs a new QSpacerItem object.
///
/// @param param1 QSpacerItem*
QSpacerItem* q_spaceritem_new2(void* param1);

/// q_spaceritem_new3 constructs a new QSpacerItem object.
///
/// @param w int
/// @param h int
/// @param hData enum QSizePolicy__Policy
QSpacerItem* q_spaceritem_new3(int w, int h, int32_t hData);

/// q_spaceritem_new4 constructs a new QSpacerItem object.
///
/// @param w int
/// @param h int
/// @param hData enum QSizePolicy__Policy
/// @param vData enum QSizePolicy__Policy
QSpacerItem* q_spaceritem_new4(int w, int h, int32_t hData, int32_t vData);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// @param self QSpacerItem*
/// @param w int
/// @param h int
void q_spaceritem_change_size(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// @param self QSpacerItem*
QSize* q_spaceritem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback QSize* func()
void q_spaceritem_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
QSize* q_spaceritem_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// @param self QSpacerItem*
QSize* q_spaceritem_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback QSize* func()
void q_spaceritem_on_minimum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
QSize* q_spaceritem_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// @param self QSpacerItem*
QSize* q_spaceritem_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback QSize* func()
void q_spaceritem_on_maximum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
QSize* q_spaceritem_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// @param self QSpacerItem*
///
/// @return flag of enum Qt__Orientation
int64_t q_spaceritem_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback int64_t func()
void q_spaceritem_on_expanding_directions(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
///
/// @return flag of enum Qt__Orientation
int64_t q_spaceritem_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// @param self QSpacerItem*
bool q_spaceritem_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback bool func()
void q_spaceritem_on_is_empty(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
bool q_spaceritem_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// @param self QSpacerItem*
/// @param geometry QRect*
void q_spaceritem_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback void func(QSpacerItem* self, QRect* geometry)
void q_spaceritem_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
/// @param geometry QRect*
void q_spaceritem_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// @param self QSpacerItem*
QRect* q_spaceritem_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback QRect* func()
void q_spaceritem_on_geometry(void* self, QRect* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
QRect* q_spaceritem_qbase_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// @param self QSpacerItem*
QSpacerItem* q_spaceritem_spacer_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback QSpacerItem* func()
void q_spaceritem_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
QSpacerItem* q_spaceritem_qbase_spacer_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizePolicy)
///
/// @param self QSpacerItem*
QSizePolicy* q_spaceritem_size_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// @param self QSpacerItem*
/// @param w int
/// @param h int
/// @param hData enum QSizePolicy__Policy
void q_spaceritem_change_size3(void* self, int w, int h, int32_t hData);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// @param self QSpacerItem*
/// @param w int
/// @param h int
/// @param hData enum QSizePolicy__Policy
/// @param vData enum QSizePolicy__Policy
void q_spaceritem_change_size4(void* self, int w, int h, int32_t hData, int32_t vData);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QSpacerItem*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_spaceritem_alignment(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// @param self QSpacerItem*
/// @param a flag of enum Qt__AlignmentFlag
void q_spaceritem_set_alignment(void* self, int64_t a);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
bool q_spaceritem_has_height_for_width(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
bool q_spaceritem_qbase_has_height_for_width(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback bool func()
void q_spaceritem_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
/// @param param1 int
int32_t q_spaceritem_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param param1 int
int32_t q_spaceritem_qbase_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback int32_t func(QSpacerItem* self, int param1)
void q_spaceritem_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
/// @param param1 int
int32_t q_spaceritem_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param param1 int
int32_t q_spaceritem_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback int32_t func(QSpacerItem* self, int param1)
void q_spaceritem_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
void q_spaceritem_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
void q_spaceritem_qbase_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback void func()
void q_spaceritem_on_invalidate(void* self, void (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
QWidget* q_spaceritem_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
QWidget* q_spaceritem_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback QWidget* func()
void q_spaceritem_on_widget(void* self, QWidget* (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
QLayout* q_spaceritem_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
QLayout* q_spaceritem_qbase_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback QLayout* func()
void q_spaceritem_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_spaceritem_control_types(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_spaceritem_qbase_control_types(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback int64_t func()
void q_spaceritem_on_control_types(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#dtor.QSpacerItem)
///
/// Delete this object from C++ memory.
///
/// @param self QSpacerItem*
void q_spaceritem_delete(void* self);

/// https://doc.qt.io/qt-6/qwidgetitem.html

/// q_widgetitem_new constructs a new QWidgetItem object.
///
/// @param w QWidget*
QWidgetItem* q_widgetitem_new(void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// @param self QWidgetItem*
QSize* q_widgetitem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback QSize* func()
void q_widgetitem_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
QSize* q_widgetitem_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// @param self QWidgetItem*
QSize* q_widgetitem_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback QSize* func()
void q_widgetitem_on_minimum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
QSize* q_widgetitem_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// @param self QWidgetItem*
QSize* q_widgetitem_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback QSize* func()
void q_widgetitem_on_maximum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
QSize* q_widgetitem_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// @param self QWidgetItem*
///
/// @return flag of enum Qt__Orientation
int64_t q_widgetitem_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback int64_t func()
void q_widgetitem_on_expanding_directions(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
///
/// @return flag of enum Qt__Orientation
int64_t q_widgetitem_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// @param self QWidgetItem*
bool q_widgetitem_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback bool func()
void q_widgetitem_on_is_empty(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
bool q_widgetitem_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// @param self QWidgetItem*
/// @param geometry QRect*
void q_widgetitem_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback void func(QWidgetItem* self, QRect* geometry)
void q_widgetitem_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
/// @param geometry QRect*
void q_widgetitem_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// @param self QWidgetItem*
QRect* q_widgetitem_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback QRect* func()
void q_widgetitem_on_geometry(void* self, QRect* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
QRect* q_widgetitem_qbase_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// @param self QWidgetItem*
QWidget* q_widgetitem_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback QWidget* func()
void q_widgetitem_on_widget(void* self, QWidget* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
QWidget* q_widgetitem_qbase_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// @param self QWidgetItem*
bool q_widgetitem_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback bool func()
void q_widgetitem_on_has_height_for_width(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
bool q_widgetitem_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// @param self QWidgetItem*
/// @param param1 int
int32_t q_widgetitem_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback int32_t func(QWidgetItem* self, int param1)
void q_widgetitem_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
/// @param param1 int
int32_t q_widgetitem_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// @param self QWidgetItem*
/// @param param1 int
int32_t q_widgetitem_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback int32_t func(QWidgetItem* self, int param1)
void q_widgetitem_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
/// @param param1 int
int32_t q_widgetitem_qbase_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// @param self QWidgetItem*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_widgetitem_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback int64_t func()
void q_widgetitem_on_control_types(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_widgetitem_qbase_control_types(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QWidgetItem*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_widgetitem_alignment(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// @param self QWidgetItem*
/// @param a flag of enum Qt__AlignmentFlag
void q_widgetitem_set_alignment(void* self, int64_t a);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItem*
void q_widgetitem_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItem*
void q_widgetitem_qbase_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItem*
/// @param callback void func()
void q_widgetitem_on_invalidate(void* self, void (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItem*
QLayout* q_widgetitem_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItem*
QLayout* q_widgetitem_qbase_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItem*
/// @param callback QLayout* func()
void q_widgetitem_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItem*
QSpacerItem* q_widgetitem_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItem*
QSpacerItem* q_widgetitem_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItem*
/// @param callback QSpacerItem* func()
void q_widgetitem_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#dtor.QWidgetItem)
///
/// Delete this object from C++ memory.
///
/// @param self QWidgetItem*
void q_widgetitem_delete(void* self);

/// https://doc.qt.io/qt-6/qwidgetitemv2.html

/// q_widgetitemv2_new constructs a new QWidgetItemV2 object.
///
/// @param widget QWidget*
QWidgetItemV2* q_widgetitemv2_new(void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// @param self QWidgetItemV2*
QSize* q_widgetitemv2_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItemV2*
/// @param callback QSize* func()
void q_widgetitemv2_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QWidgetItemV2*
QSize* q_widgetitemv2_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// @param self QWidgetItemV2*
QSize* q_widgetitemv2_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItemV2*
/// @param callback QSize* func()
void q_widgetitemv2_on_minimum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QWidgetItemV2*
QSize* q_widgetitemv2_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// @param self QWidgetItemV2*
QSize* q_widgetitemv2_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItemV2*
/// @param callback QSize* func()
void q_widgetitemv2_on_maximum_size(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// Base class method implementation
///
/// @param self QWidgetItemV2*
QSize* q_widgetitemv2_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// @param self QWidgetItemV2*
/// @param width int
int32_t q_widgetitemv2_height_for_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItemV2*
/// @param callback int32_t func(QWidgetItemV2* self, int width)
void q_widgetitemv2_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QWidgetItemV2*
/// @param width int
int32_t q_widgetitemv2_qbase_height_for_width(void* self, int width);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QWidgetItemV2*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_widgetitemv2_alignment(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// @param self QWidgetItemV2*
/// @param a flag of enum Qt__AlignmentFlag
void q_widgetitemv2_set_alignment(void* self, int64_t a);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
///
/// @return flag of enum Qt__Orientation
int64_t q_widgetitemv2_expanding_directions(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
///
/// @return flag of enum Qt__Orientation
int64_t q_widgetitemv2_qbase_expanding_directions(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback int64_t func()
void q_widgetitemv2_on_expanding_directions(void* self, int64_t (*callback)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
bool q_widgetitemv2_is_empty(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
bool q_widgetitemv2_qbase_is_empty(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback bool func()
void q_widgetitemv2_on_is_empty(void* self, bool (*callback)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param geometry QRect*
void q_widgetitemv2_set_geometry(void* self, void* geometry);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param geometry QRect*
void q_widgetitemv2_qbase_set_geometry(void* self, void* geometry);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback void func(QWidgetItemV2* self, QRect* geometry)
void q_widgetitemv2_on_set_geometry(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
QRect* q_widgetitemv2_geometry(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
QRect* q_widgetitemv2_qbase_geometry(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback QRect* func()
void q_widgetitemv2_on_geometry(void* self, QRect* (*callback)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
QWidget* q_widgetitemv2_widget(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
QWidget* q_widgetitemv2_qbase_widget(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback QWidget* func()
void q_widgetitemv2_on_widget(void* self, QWidget* (*callback)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
bool q_widgetitemv2_has_height_for_width(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
bool q_widgetitemv2_qbase_has_height_for_width(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback bool func()
void q_widgetitemv2_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param param1 int
int32_t q_widgetitemv2_minimum_height_for_width(void* self, int param1);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param param1 int
int32_t q_widgetitemv2_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback int32_t func(QWidgetItemV2* self, int param1)
void q_widgetitemv2_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_widgetitemv2_control_types(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
///
/// @return flag of enum QSizePolicy__ControlType
int64_t q_widgetitemv2_qbase_control_types(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback int64_t func()
void q_widgetitemv2_on_control_types(void* self, int64_t (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
void q_widgetitemv2_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
void q_widgetitemv2_qbase_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback void func()
void q_widgetitemv2_on_invalidate(void* self, void (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
QLayout* q_widgetitemv2_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
QLayout* q_widgetitemv2_qbase_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback QLayout* func()
void q_widgetitemv2_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
QSpacerItem* q_widgetitemv2_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
QSpacerItem* q_widgetitemv2_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback QSpacerItem* func()
void q_widgetitemv2_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#dtor.QWidgetItemV2)
///
/// Delete this object from C++ memory.
///
/// @param self QWidgetItemV2*
void q_widgetitemv2_delete(void* self);

#endif

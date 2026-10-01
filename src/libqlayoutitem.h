#pragma once
#ifndef LIBQLAYOUTITEM_H
#define LIBQLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html)

/// q_layoutitem_new constructs a new QLayoutItem object.
///
QLayoutItem* q_layoutitem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html)

/// q_layoutitem_new2 constructs a new QLayoutItem object.
///
/// @param param1 QLayoutItem*
///
QLayoutItem* q_layoutitem_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html)

/// q_layoutitem_new3 constructs a new QLayoutItem object.
///
/// @param alignment flag of enum Qt__AlignmentFlag
///
QLayoutItem* q_layoutitem_new3(int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// @warning This method must be implemented with `q_layoutitem_on_size_hint` before it can be called.
///
/// @param self const QLayoutItem*
///
QSize* q_layoutitem_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback QSize* func(const QLayoutItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_layoutitem_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// @warning This method must be implemented with `q_layoutitem_on_minimum_size` before it can be called.
///
/// @param self const QLayoutItem*
///
QSize* q_layoutitem_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback QSize* func(const QLayoutItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_layoutitem_on_minimum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// @warning This method must be implemented with `q_layoutitem_on_maximum_size` before it can be called.
///
/// @param self const QLayoutItem*
///
QSize* q_layoutitem_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback QSize* func(const QLayoutItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_layoutitem_on_maximum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// @warning This method must be implemented with `q_layoutitem_on_expanding_directions` before it can be called.
///
/// @param self const QLayoutItem*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_layoutitem_expanding_directions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback int32_t func(const QLayoutItem* self)
///
void q_layoutitem_on_expanding_directions(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// @warning This method must be implemented with `q_layoutitem_on_set_geometry` before it can be called.
///
/// @param self QLayoutItem*
/// @param geometry QRect*
///
void q_layoutitem_set_geometry(void* self, const void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback void func(QLayoutItem* self, QRect* geometry)
///
void q_layoutitem_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// @warning This method must be implemented with `q_layoutitem_on_geometry` before it can be called.
///
/// @param self const QLayoutItem*
///
QRect* q_layoutitem_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback QRect* func(const QLayoutItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_layoutitem_on_geometry(const void* self, QRect* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// @warning This method must be implemented with `q_layoutitem_on_is_empty` before it can be called.
///
/// @param self const QLayoutItem*
///
bool q_layoutitem_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback bool func(const QLayoutItem* self)
///
void q_layoutitem_on_is_empty(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// @param self const QLayoutItem*
///
bool q_layoutitem_has_height_for_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback bool func(const QLayoutItem* self)
///
void q_layoutitem_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self const QLayoutItem*
///
bool q_layoutitem_super_has_height_for_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// @param self const QLayoutItem*
/// @param param1 int
///
int32_t q_layoutitem_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback int32_t func(const QLayoutItem* self, int param1)
///
void q_layoutitem_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self const QLayoutItem*
/// @param param1 int
///
int32_t q_layoutitem_super_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// @param self const QLayoutItem*
/// @param param1 int
///
int32_t q_layoutitem_minimum_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback int32_t func(const QLayoutItem* self, int param1)
///
void q_layoutitem_on_minimum_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// @param self const QLayoutItem*
/// @param param1 int
///
int32_t q_layoutitem_super_minimum_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// @param self QLayoutItem*
///
void q_layoutitem_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback void func(QLayoutItem* self)
///
void q_layoutitem_on_invalidate(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
///
void q_layoutitem_super_invalidate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// @param self const QLayoutItem*
///
QWidget* q_layoutitem_widget(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback QWidget* func(const QLayoutItem* self)
///
void q_layoutitem_on_widget(const void* self, QWidget* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Base class method implementation
///
/// @param self const QLayoutItem*
///
QWidget* q_layoutitem_super_widget(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// @param self QLayoutItem*
///
QLayout* q_layoutitem_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QLayout* func(QLayoutItem* self)
///
void q_layoutitem_on_layout(void* self, QLayout* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
///
QLayout* q_layoutitem_super_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// @param self QLayoutItem*
///
QSpacerItem* q_layoutitem_spacer_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Allows for overriding the related default method
///
/// @param self QLayoutItem*
/// @param callback QSpacerItem* func(QLayoutItem* self)
///
void q_layoutitem_on_spacer_item(void* self, QSpacerItem* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Base class method implementation
///
/// @param self QLayoutItem*
///
QSpacerItem* q_layoutitem_super_spacer_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self const QLayoutItem*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_layoutitem_alignment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// @param self QLayoutItem*
/// @param a flag of enum Qt__AlignmentFlag
///
void q_layoutitem_set_alignment(void* self, int32_t a);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// @param self const QLayoutItem*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_layoutitem_control_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Allows for overriding the related default method
///
/// @param self const QLayoutItem*
/// @param callback int32_t func(const QLayoutItem* self)
///
void q_layoutitem_on_control_types(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Base class method implementation
///
/// @param self const QLayoutItem*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_layoutitem_super_control_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
///
/// @param self QLayoutItem*
/// @param param1 QLayoutItem*
///
void q_layoutitem_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#dtor.QLayoutItem)
///
/// Delete this object from C++ memory.
///
/// @param self QLayoutItem*
///
void q_layoutitem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html)

/// q_spaceritem_new constructs a new QSpacerItem object.
///
/// @param w int
/// @param h int
///
QSpacerItem* q_spaceritem_new(int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html)

/// q_spaceritem_new2 constructs a new QSpacerItem object.
///
/// @param param1 QSpacerItem*
///
QSpacerItem* q_spaceritem_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html)

/// q_spaceritem_new3 constructs a new QSpacerItem object.
///
/// @param w int
/// @param h int
/// @param hData enum QSizePolicy__Policy
///
QSpacerItem* q_spaceritem_new3(int w, int h, int32_t hData);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html)

/// q_spaceritem_new4 constructs a new QSpacerItem object.
///
/// @param w int
/// @param h int
/// @param hData enum QSizePolicy__Policy
/// @param vData enum QSizePolicy__Policy
///
QSpacerItem* q_spaceritem_new4(int w, int h, int32_t hData, int32_t vData);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// @param self QSpacerItem*
/// @param w int
/// @param h int
///
void q_spaceritem_change_size(void* self, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// @param self const QSpacerItem*
///
QSize* q_spaceritem_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QSpacerItem*
/// @param callback QSize* func(const QSpacerItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_spaceritem_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QSpacerItem*
///
QSize* q_spaceritem_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// @param self const QSpacerItem*
///
QSize* q_spaceritem_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QSpacerItem*
/// @param callback QSize* func(const QSpacerItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_spaceritem_on_minimum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// Base class method implementation
///
/// @param self const QSpacerItem*
///
QSize* q_spaceritem_super_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// @param self const QSpacerItem*
///
QSize* q_spaceritem_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QSpacerItem*
/// @param callback QSize* func(const QSpacerItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_spaceritem_on_maximum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// Base class method implementation
///
/// @param self const QSpacerItem*
///
QSize* q_spaceritem_super_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// @param self const QSpacerItem*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_spaceritem_expanding_directions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self const QSpacerItem*
/// @param callback int32_t func(const QSpacerItem* self)
///
void q_spaceritem_on_expanding_directions(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self const QSpacerItem*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_spaceritem_super_expanding_directions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// @param self const QSpacerItem*
///
bool q_spaceritem_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self const QSpacerItem*
/// @param callback bool func(const QSpacerItem* self)
///
void q_spaceritem_on_is_empty(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// Base class method implementation
///
/// @param self const QSpacerItem*
///
bool q_spaceritem_super_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// @param self QSpacerItem*
/// @param geometry QRect*
///
void q_spaceritem_set_geometry(void* self, const void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback void func(QSpacerItem* self, QRect* geometry)
///
void q_spaceritem_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
/// @param geometry QRect*
///
void q_spaceritem_super_set_geometry(void* self, const void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// @param self const QSpacerItem*
///
QRect* q_spaceritem_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// Allows for overriding the related default method
///
/// @param self const QSpacerItem*
/// @param callback QRect* func(const QSpacerItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_spaceritem_on_geometry(const void* self, QRect* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// Base class method implementation
///
/// @param self const QSpacerItem*
///
QRect* q_spaceritem_super_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// @param self QSpacerItem*
///
QSpacerItem* q_spaceritem_spacer_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// Allows for overriding the related default method
///
/// @param self QSpacerItem*
/// @param callback QSpacerItem* func(QSpacerItem* self)
///
void q_spaceritem_on_spacer_item(void* self, QSpacerItem* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// Base class method implementation
///
/// @param self QSpacerItem*
///
QSpacerItem* q_spaceritem_super_spacer_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#sizePolicy)
///
/// @param self const QSpacerItem*
///
QSizePolicy* q_spaceritem_size_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#operator-eq)
///
/// @param self QSpacerItem*
/// @param param1 QSpacerItem*
///
void q_spaceritem_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// @param self QSpacerItem*
/// @param w int
/// @param h int
/// @param hData enum QSizePolicy__Policy
///
void q_spaceritem_change_size3(void* self, int w, int h, int32_t hData);

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// @param self QSpacerItem*
/// @param w int
/// @param h int
/// @param hData enum QSizePolicy__Policy
/// @param vData enum QSizePolicy__Policy
///
void q_spaceritem_change_size4(void* self, int w, int h, int32_t hData, int32_t vData);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self const QSpacerItem*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_spaceritem_alignment(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// @param self QSpacerItem*
/// @param a flag of enum Qt__AlignmentFlag
///
void q_spaceritem_set_alignment(void* self, int32_t a);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSpacerItem*
///
bool q_spaceritem_has_height_for_width(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSpacerItem*
///
bool q_spaceritem_super_has_height_for_width(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSpacerItem*
/// @param callback bool func(QSpacerItem* self)
///
void q_spaceritem_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSpacerItem*
/// @param param1 int
///
int32_t q_spaceritem_height_for_width(const void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSpacerItem*
/// @param param1 int
///
int32_t q_spaceritem_super_height_for_width(const void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSpacerItem*
/// @param callback int32_t func(QSpacerItem* self, int param1)
///
void q_spaceritem_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSpacerItem*
/// @param param1 int
///
int32_t q_spaceritem_minimum_height_for_width(const void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSpacerItem*
/// @param param1 int
///
int32_t q_spaceritem_super_minimum_height_for_width(const void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSpacerItem*
/// @param callback int32_t func(QSpacerItem* self, int param1)
///
void q_spaceritem_on_minimum_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
///
void q_spaceritem_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
///
void q_spaceritem_super_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback void func(QSpacerItem* self)
///
void q_spaceritem_on_invalidate(void* self, void (*callback)(void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSpacerItem*
///
QWidget* q_spaceritem_widget(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSpacerItem*
///
QWidget* q_spaceritem_super_widget(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSpacerItem*
/// @param callback QWidget* func(QSpacerItem* self)
///
void q_spaceritem_on_widget(const void* self, QWidget* (*callback)(const void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpacerItem*
///
QLayout* q_spaceritem_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpacerItem*
///
QLayout* q_spaceritem_super_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpacerItem*
/// @param callback QLayout* func(QSpacerItem* self)
///
void q_spaceritem_on_layout(void* self, QLayout* (*callback)(void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSpacerItem*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_spaceritem_control_types(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSpacerItem*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_spaceritem_super_control_types(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSpacerItem*
/// @param callback int32_t func(QSpacerItem* self)
///
void q_spaceritem_on_control_types(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspaceritem.html#dtor.QSpacerItem)
///
/// Delete this object from C++ memory.
///
/// @param self QSpacerItem*
///
void q_spaceritem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html)

/// q_widgetitem_new constructs a new QWidgetItem object.
///
/// @param w QWidget*
///
QWidgetItem* q_widgetitem_new(void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// @param self const QWidgetItem*
///
QSize* q_widgetitem_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback QSize* func(const QWidgetItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_widgetitem_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
QSize* q_widgetitem_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// @param self const QWidgetItem*
///
QSize* q_widgetitem_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback QSize* func(const QWidgetItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_widgetitem_on_minimum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
QSize* q_widgetitem_super_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// @param self const QWidgetItem*
///
QSize* q_widgetitem_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback QSize* func(const QWidgetItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_widgetitem_on_maximum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
QSize* q_widgetitem_super_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// @param self const QWidgetItem*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_widgetitem_expanding_directions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback int32_t func(const QWidgetItem* self)
///
void q_widgetitem_on_expanding_directions(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_widgetitem_super_expanding_directions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// @param self const QWidgetItem*
///
bool q_widgetitem_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback bool func(const QWidgetItem* self)
///
void q_widgetitem_on_is_empty(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
bool q_widgetitem_super_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// @param self QWidgetItem*
/// @param geometry QRect*
///
void q_widgetitem_set_geometry(void* self, const void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetItem*
/// @param callback void func(QWidgetItem* self, QRect* geometry)
///
void q_widgetitem_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QWidgetItem*
/// @param geometry QRect*
///
void q_widgetitem_super_set_geometry(void* self, const void* geometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// @param self const QWidgetItem*
///
QRect* q_widgetitem_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback QRect* func(const QWidgetItem* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_widgetitem_on_geometry(const void* self, QRect* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
QRect* q_widgetitem_super_geometry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// @param self const QWidgetItem*
///
QWidget* q_widgetitem_widget(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback QWidget* func(const QWidgetItem* self)
///
void q_widgetitem_on_widget(const void* self, QWidget* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
QWidget* q_widgetitem_super_widget(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// @param self const QWidgetItem*
///
bool q_widgetitem_has_height_for_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback bool func(const QWidgetItem* self)
///
void q_widgetitem_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
bool q_widgetitem_super_has_height_for_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// @param self const QWidgetItem*
/// @param param1 int
///
int32_t q_widgetitem_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback int32_t func(const QWidgetItem* self, int param1)
///
void q_widgetitem_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
/// @param param1 int
///
int32_t q_widgetitem_super_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// @param self const QWidgetItem*
/// @param param1 int
///
int32_t q_widgetitem_minimum_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback int32_t func(const QWidgetItem* self, int param1)
///
void q_widgetitem_on_minimum_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
/// @param param1 int
///
int32_t q_widgetitem_super_minimum_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// @param self const QWidgetItem*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_widgetitem_control_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItem*
/// @param callback int32_t func(const QWidgetItem* self)
///
void q_widgetitem_on_control_types(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Base class method implementation
///
/// @param self const QWidgetItem*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_widgetitem_super_control_types(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self const QWidgetItem*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_widgetitem_alignment(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// @param self QWidgetItem*
/// @param a flag of enum Qt__AlignmentFlag
///
void q_widgetitem_set_alignment(void* self, int32_t a);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
///
/// @param self QWidgetItem*
/// @param param1 QLayoutItem*
///
void q_widgetitem_operator_assign(void* self, const void* param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItem*
///
void q_widgetitem_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItem*
///
void q_widgetitem_super_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItem*
/// @param callback void func(QWidgetItem* self)
///
void q_widgetitem_on_invalidate(void* self, void (*callback)(void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItem*
///
QLayout* q_widgetitem_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItem*
///
QLayout* q_widgetitem_super_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItem*
/// @param callback QLayout* func(QWidgetItem* self)
///
void q_widgetitem_on_layout(void* self, QLayout* (*callback)(void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItem*
///
QSpacerItem* q_widgetitem_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItem*
///
QSpacerItem* q_widgetitem_super_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItem*
/// @param callback QSpacerItem* func(QWidgetItem* self)
///
void q_widgetitem_on_spacer_item(void* self, QSpacerItem* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#dtor.QWidgetItem)
///
/// Delete this object from C++ memory.
///
/// @param self QWidgetItem*
///
void q_widgetitem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html)

/// q_widgetitemv2_new constructs a new QWidgetItemV2 object.
///
/// @param widget QWidget*
///
QWidgetItemV2* q_widgetitemv2_new(void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// @param self const QWidgetItemV2*
///
QSize* q_widgetitemv2_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItemV2*
/// @param callback QSize* func(const QWidgetItemV2* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_widgetitemv2_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QWidgetItemV2*
///
QSize* q_widgetitemv2_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// @param self const QWidgetItemV2*
///
QSize* q_widgetitemv2_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItemV2*
/// @param callback QSize* func(const QWidgetItemV2* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_widgetitemv2_on_minimum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// Base class method implementation
///
/// @param self const QWidgetItemV2*
///
QSize* q_widgetitemv2_super_minimum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// @param self const QWidgetItemV2*
///
QSize* q_widgetitemv2_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItemV2*
/// @param callback QSize* func(const QWidgetItemV2* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_widgetitemv2_on_maximum_size(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// Base class method implementation
///
/// @param self const QWidgetItemV2*
///
QSize* q_widgetitemv2_super_maximum_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// @param self const QWidgetItemV2*
/// @param width int
///
int32_t q_widgetitemv2_height_for_width(const void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self const QWidgetItemV2*
/// @param callback int32_t func(const QWidgetItemV2* self, int width)
///
void q_widgetitemv2_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self const QWidgetItemV2*
/// @param width int
///
int32_t q_widgetitemv2_super_height_for_width(const void* self, int width);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self const QWidgetItemV2*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_widgetitemv2_alignment(const void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// @param self QWidgetItemV2*
/// @param a flag of enum Qt__AlignmentFlag
///
void q_widgetitemv2_set_alignment(void* self, int32_t a);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#operator-eq)
///
/// @param self QWidgetItemV2*
/// @param param1 QLayoutItem*
///
void q_widgetitemv2_operator_assign(void* self, const void* param1);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWidgetItemV2*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_widgetitemv2_expanding_directions(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWidgetItemV2*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_widgetitemv2_super_expanding_directions(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param callback int32_t func(QWidgetItemV2* self)
///
void q_widgetitemv2_on_expanding_directions(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWidgetItemV2*
///
bool q_widgetitemv2_is_empty(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWidgetItemV2*
///
bool q_widgetitemv2_super_is_empty(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param callback bool func(QWidgetItemV2* self)
///
void q_widgetitemv2_on_is_empty(const void* self, bool (*callback)(const void*));

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param geometry QRect*
///
void q_widgetitemv2_set_geometry(void* self, const void* geometry);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param geometry QRect*
///
void q_widgetitemv2_super_set_geometry(void* self, const void* geometry);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback void func(QWidgetItemV2* self, QRect* geometry)
///
void q_widgetitemv2_on_set_geometry(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWidgetItemV2*
///
QRect* q_widgetitemv2_geometry(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWidgetItemV2*
///
QRect* q_widgetitemv2_super_geometry(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param callback QRect* func(QWidgetItemV2* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_widgetitemv2_on_geometry(const void* self, QRect* (*callback)(const void*));

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWidgetItemV2*
///
QWidget* q_widgetitemv2_widget(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWidgetItemV2*
///
QWidget* q_widgetitemv2_super_widget(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param callback QWidget* func(QWidgetItemV2* self)
///
void q_widgetitemv2_on_widget(const void* self, QWidget* (*callback)(const void*));

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWidgetItemV2*
///
bool q_widgetitemv2_has_height_for_width(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWidgetItemV2*
///
bool q_widgetitemv2_super_has_height_for_width(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param callback bool func(QWidgetItemV2* self)
///
void q_widgetitemv2_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param param1 int
///
int32_t q_widgetitemv2_minimum_height_for_width(const void* self, int param1);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param param1 int
///
int32_t q_widgetitemv2_super_minimum_height_for_width(const void* self, int param1);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param callback int32_t func(QWidgetItemV2* self, int param1)
///
void q_widgetitemv2_on_minimum_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QWidgetItemV2*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_widgetitemv2_control_types(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QWidgetItemV2*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_widgetitemv2_super_control_types(const void* self);

/// Inherited from QWidgetItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QWidgetItemV2*
/// @param callback int32_t func(QWidgetItemV2* self)
///
void q_widgetitemv2_on_control_types(const void* self, int32_t (*callback)(const void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
///
void q_widgetitemv2_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
///
void q_widgetitemv2_super_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback void func(QWidgetItemV2* self)
///
void q_widgetitemv2_on_invalidate(void* self, void (*callback)(void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
///
QLayout* q_widgetitemv2_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
///
QLayout* q_widgetitemv2_super_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback QLayout* func(QWidgetItemV2* self)
///
void q_widgetitemv2_on_layout(void* self, QLayout* (*callback)(void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetItemV2*
///
QSpacerItem* q_widgetitemv2_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetItemV2*
///
QSpacerItem* q_widgetitemv2_super_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetItemV2*
/// @param callback QSpacerItem* func(QWidgetItemV2* self)
///
void q_widgetitemv2_on_spacer_item(void* self, QSpacerItem* (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetitemv2.html#dtor.QWidgetItemV2)
///
/// Delete this object from C++ memory.
///
/// @param self QWidgetItemV2*
///
void q_widgetitemv2_delete(void* self);

#endif

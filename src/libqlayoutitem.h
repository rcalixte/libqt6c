#pragma once
#ifndef SRCQT6C_LIBQLAYOUTITEM_H
#define SRCQT6C_LIBQLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqlayout.h"
#include "libqrect.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qlayoutitem.html

/// q_layoutitem_new constructs a new QLayoutItem object.
///
///
QLayoutItem* q_layoutitem_new();

/// q_layoutitem_new2 constructs a new QLayoutItem object.
///
/// ``` QLayoutItem* param1 ```
QLayoutItem* q_layoutitem_new2(void* param1);

/// q_layoutitem_new3 constructs a new QLayoutItem object.
///
/// ``` int alignment ```
QLayoutItem* q_layoutitem_new3(int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QSize* (*slot)() ```
void q_layoutitem_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QSize* (*slot)() ```
void q_layoutitem_on_minimum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumSize)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QSize* (*slot)() ```
void q_layoutitem_on_maximum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#maximumSize)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QSize* q_layoutitem_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, int64_t (*slot)() ```
void q_layoutitem_on_expanding_directions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#expandingDirections)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// ``` QLayoutItem* self, QRect* geometry ```
void q_layoutitem_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, void (*slot)(QLayoutItem*, QRect*) ```
void q_layoutitem_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self, QRect* geometry ```
void q_layoutitem_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// ``` QLayoutItem* self ```
QRect* q_layoutitem_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QRect* (*slot)() ```
void q_layoutitem_on_geometry(void* self, QRect* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#geometry)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QRect* q_layoutitem_qbase_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// ``` QLayoutItem* self ```
bool q_layoutitem_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, bool (*slot)() ```
void q_layoutitem_on_is_empty(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#isEmpty)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
bool q_layoutitem_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// ``` QLayoutItem* self ```
bool q_layoutitem_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, bool (*slot)() ```
void q_layoutitem_on_has_height_for_width(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
bool q_layoutitem_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// ``` QLayoutItem* self, int param1 ```
int32_t q_layoutitem_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, int32_t (*slot)(QLayoutItem*, int) ```
void q_layoutitem_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self, int param1 ```
int32_t q_layoutitem_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// ``` QLayoutItem* self, int param1 ```
int32_t q_layoutitem_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, int32_t (*slot)(QLayoutItem*, int) ```
void q_layoutitem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self, int param1 ```
int32_t q_layoutitem_qbase_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// ``` QLayoutItem* self ```
void q_layoutitem_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, void (*slot)() ```
void q_layoutitem_on_invalidate(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
void q_layoutitem_qbase_invalidate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// ``` QLayoutItem* self ```
QWidget* q_layoutitem_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QWidget* (*slot)() ```
void q_layoutitem_on_widget(void* self, QWidget* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QWidget* q_layoutitem_qbase_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// ``` QLayoutItem* self ```
QLayout* q_layoutitem_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QLayout* (*slot)() ```
void q_layoutitem_on_layout(void* self, QLayout* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QLayout* q_layoutitem_qbase_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// ``` QLayoutItem* self ```
QSpacerItem* q_layoutitem_spacer_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, QSpacerItem* (*slot)() ```
void q_layoutitem_on_spacer_item(void* self, QSpacerItem* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
QSpacerItem* q_layoutitem_qbase_spacer_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// ``` QLayoutItem* self, int a ```
void q_layoutitem_set_alignment(void* self, int64_t a);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, int64_t (*slot)() ```
void q_layoutitem_on_control_types(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self ```
int64_t q_layoutitem_qbase_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator=)
///
/// ``` QLayoutItem* self, QLayoutItem* param1 ```
void q_layoutitem_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator=)
///
/// Allows for overriding the related default method
///
/// ``` QLayoutItem* self, void (*slot)(QLayoutItem*, QLayoutItem*) ```
void q_layoutitem_on_operator_assign(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#operator=)
///
/// Base class method implementation
///
/// ``` QLayoutItem* self, QLayoutItem* param1 ```
void q_layoutitem_qbase_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#dtor.QLayoutItem)
///
/// Delete this object from C++ memory.
///
/// ``` QLayoutItem* self ```
void q_layoutitem_delete(void* self);

/// https://doc.qt.io/qt-6/qspaceritem.html

/// q_spaceritem_new constructs a new QSpacerItem object.
///
/// ``` int w, int h ```
QSpacerItem* q_spaceritem_new(int w, int h);

/// q_spaceritem_new2 constructs a new QSpacerItem object.
///
/// ``` QSpacerItem* param1 ```
QSpacerItem* q_spaceritem_new2(void* param1);

/// q_spaceritem_new3 constructs a new QSpacerItem object.
///
/// ``` int w, int h, enum QSizePolicy__Policy hData ```
QSpacerItem* q_spaceritem_new3(int w, int h, int64_t hData);

/// q_spaceritem_new4 constructs a new QSpacerItem object.
///
/// ``` int w, int h, enum QSizePolicy__Policy hData, enum QSizePolicy__Policy vData ```
QSpacerItem* q_spaceritem_new4(int w, int h, int64_t hData, int64_t vData);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// ``` QSpacerItem* self, int w, int h ```
void q_spaceritem_change_size(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QSize* (*slot)() ```
void q_spaceritem_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QSize* (*slot)() ```
void q_spaceritem_on_minimum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#minimumSize)
///
/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QSize* (*slot)() ```
void q_spaceritem_on_maximum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#maximumSize)
///
/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QSize* q_spaceritem_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, int64_t (*slot)() ```
void q_spaceritem_on_expanding_directions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#expandingDirections)
///
/// Base class method implementation
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// ``` QSpacerItem* self ```
bool q_spaceritem_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, bool (*slot)() ```
void q_spaceritem_on_is_empty(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#isEmpty)
///
/// Base class method implementation
///
/// ``` QSpacerItem* self ```
bool q_spaceritem_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// ``` QSpacerItem* self, QRect* geometry ```
void q_spaceritem_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, void (*slot)(QSpacerItem*, QRect*) ```
void q_spaceritem_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QSpacerItem* self, QRect* geometry ```
void q_spaceritem_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// ``` QSpacerItem* self ```
QRect* q_spaceritem_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QRect* (*slot)() ```
void q_spaceritem_on_geometry(void* self, QRect* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#geometry)
///
/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QRect* q_spaceritem_qbase_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// ``` QSpacerItem* self ```
QSpacerItem* q_spaceritem_spacer_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// Allows for overriding the related default method
///
/// ``` QSpacerItem* self, QSpacerItem* (*slot)() ```
void q_spaceritem_on_spacer_item(void* self, QSpacerItem* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#spacerItem)
///
/// Base class method implementation
///
/// ``` QSpacerItem* self ```
QSpacerItem* q_spaceritem_qbase_spacer_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#sizePolicy)
///
/// ``` QSpacerItem* self ```
QSizePolicy* q_spaceritem_size_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// ``` QSpacerItem* self, int w, int h, enum QSizePolicy__Policy hData ```
void q_spaceritem_change_size3(void* self, int w, int h, int64_t hData);

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#changeSize)
///
/// ``` QSpacerItem* self, int w, int h, enum QSizePolicy__Policy hData, enum QSizePolicy__Policy vData ```
void q_spaceritem_change_size4(void* self, int w, int h, int64_t hData, int64_t vData);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_alignment(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// ``` QSpacerItem* self, int a ```
void q_spaceritem_set_alignment(void* self, int64_t a);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
bool q_spaceritem_has_height_for_width(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
bool q_spaceritem_qbase_has_height_for_width(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, bool (*slot)() ```
void q_spaceritem_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self, int param1 ```
int32_t q_spaceritem_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self, int param1 ```
int32_t q_spaceritem_qbase_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, int32_t (*slot)(QSpacerItem*, int) ```
void q_spaceritem_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self, int param1 ```
int32_t q_spaceritem_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self, int param1 ```
int32_t q_spaceritem_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, int32_t (*slot)(QSpacerItem*, int) ```
void q_spaceritem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
void q_spaceritem_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
void q_spaceritem_qbase_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, void (*slot)() ```
void q_spaceritem_on_invalidate(void* self, void (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
QWidget* q_spaceritem_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
QWidget* q_spaceritem_qbase_widget(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, QWidget* (*slot)() ```
void q_spaceritem_on_widget(void* self, QWidget* (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
QLayout* q_spaceritem_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
QLayout* q_spaceritem_qbase_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, QLayout* (*slot)() ```
void q_spaceritem_on_layout(void* self, QLayout* (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_control_types(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpacerItem* self ```
int64_t q_spaceritem_qbase_control_types(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpacerItem* self, int64_t (*slot)() ```
void q_spaceritem_on_control_types(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qspaceritem.html#dtor.QSpacerItem)
///
/// Delete this object from C++ memory.
///
/// ``` QSpacerItem* self ```
void q_spaceritem_delete(void* self);

/// https://doc.qt.io/qt-6/qwidgetitem.html

/// q_widgetitem_new constructs a new QWidgetItem object.
///
/// ``` QWidget* w ```
QWidgetItem* q_widgetitem_new(void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QSize* (*slot)() ```
void q_widgetitem_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QSize* (*slot)() ```
void q_widgetitem_on_minimum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumSize)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QSize* (*slot)() ```
void q_widgetitem_on_maximum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#maximumSize)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QSize* q_widgetitem_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, int64_t (*slot)() ```
void q_widgetitem_on_expanding_directions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_qbase_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// ``` QWidgetItem* self ```
bool q_widgetitem_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, bool (*slot)() ```
void q_widgetitem_on_is_empty(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
bool q_widgetitem_qbase_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// ``` QWidgetItem* self, QRect* geometry ```
void q_widgetitem_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, void (*slot)(QWidgetItem*, QRect*) ```
void q_widgetitem_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self, QRect* geometry ```
void q_widgetitem_qbase_set_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// ``` QWidgetItem* self ```
QRect* q_widgetitem_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QRect* (*slot)() ```
void q_widgetitem_on_geometry(void* self, QRect* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QRect* q_widgetitem_qbase_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// ``` QWidgetItem* self ```
QWidget* q_widgetitem_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, QWidget* (*slot)() ```
void q_widgetitem_on_widget(void* self, QWidget* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
QWidget* q_widgetitem_qbase_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// ``` QWidgetItem* self ```
bool q_widgetitem_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, bool (*slot)() ```
void q_widgetitem_on_has_height_for_width(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
bool q_widgetitem_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// ``` QWidgetItem* self, int param1 ```
int32_t q_widgetitem_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, int32_t (*slot)(QWidgetItem*, int) ```
void q_widgetitem_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#heightForWidth)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self, int param1 ```
int32_t q_widgetitem_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// ``` QWidgetItem* self, int param1 ```
int32_t q_widgetitem_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, int32_t (*slot)(QWidgetItem*, int) ```
void q_widgetitem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self, int param1 ```
int32_t q_widgetitem_qbase_minimum_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_control_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItem* self, int64_t (*slot)() ```
void q_widgetitem_on_control_types(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Base class method implementation
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_qbase_control_types(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QWidgetItem* self ```
int64_t q_widgetitem_alignment(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// ``` QWidgetItem* self, int a ```
void q_widgetitem_set_alignment(void* self, int64_t a);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItem* self ```
void q_widgetitem_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItem* self ```
void q_widgetitem_qbase_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItem* self, void (*slot)() ```
void q_widgetitem_on_invalidate(void* self, void (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItem* self ```
QLayout* q_widgetitem_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItem* self ```
QLayout* q_widgetitem_qbase_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItem* self, QLayout* (*slot)() ```
void q_widgetitem_on_layout(void* self, QLayout* (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItem* self ```
QSpacerItem* q_widgetitem_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItem* self ```
QSpacerItem* q_widgetitem_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItem* self, QSpacerItem* (*slot)() ```
void q_widgetitem_on_spacer_item(void* self, QSpacerItem* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#dtor.QWidgetItem)
///
/// Delete this object from C++ memory.
///
/// ``` QWidgetItem* self ```
void q_widgetitem_delete(void* self);

/// https://doc.qt.io/qt-6/qwidgetitemv2.html

/// q_widgetitemv2_new constructs a new QWidgetItemV2 object.
///
/// ``` QWidget* widget ```
QWidgetItemV2* q_widgetitemv2_new(void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItemV2* self, QSize* (*slot)() ```
void q_widgetitemv2_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItemV2* self, QSize* (*slot)() ```
void q_widgetitemv2_on_minimum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#minimumSize)
///
/// Base class method implementation
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_qbase_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItemV2* self, QSize* (*slot)() ```
void q_widgetitemv2_on_maximum_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#maximumSize)
///
/// Base class method implementation
///
/// ``` QWidgetItemV2* self ```
QSize* q_widgetitemv2_qbase_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// ``` QWidgetItemV2* self, int width ```
int32_t q_widgetitemv2_height_for_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetItemV2* self, int32_t (*slot)(QWidgetItemV2*, int) ```
void q_widgetitemv2_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#heightForWidth)
///
/// Base class method implementation
///
/// ``` QWidgetItemV2* self, int width ```
int32_t q_widgetitemv2_qbase_height_for_width(void* self, int width);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_alignment(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#setAlignment)
///
/// ``` QWidgetItemV2* self, int a ```
void q_widgetitemv2_set_alignment(void* self, int64_t a);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_expanding_directions(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_qbase_expanding_directions(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#expandingDirections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, int64_t (*slot)() ```
void q_widgetitemv2_on_expanding_directions(void* self, int64_t (*slot)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
bool q_widgetitemv2_is_empty(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
bool q_widgetitemv2_qbase_is_empty(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, bool (*slot)() ```
void q_widgetitemv2_on_is_empty(void* self, bool (*slot)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self, QRect* geometry ```
void q_widgetitemv2_set_geometry(void* self, void* geometry);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QRect* geometry ```
void q_widgetitemv2_qbase_set_geometry(void* self, void* geometry);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#setGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, void (*slot)(QWidgetItemV2*, QRect*) ```
void q_widgetitemv2_on_set_geometry(void* self, void (*slot)(void*, void*));

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QRect* q_widgetitemv2_geometry(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QRect* q_widgetitemv2_qbase_geometry(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QRect* (*slot)() ```
void q_widgetitemv2_on_geometry(void* self, QRect* (*slot)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QWidget* q_widgetitemv2_widget(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QWidget* q_widgetitemv2_qbase_widget(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QWidget* (*slot)() ```
void q_widgetitemv2_on_widget(void* self, QWidget* (*slot)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
bool q_widgetitemv2_has_height_for_width(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
bool q_widgetitemv2_qbase_has_height_for_width(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, bool (*slot)() ```
void q_widgetitemv2_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self, int param1 ```
int32_t q_widgetitemv2_minimum_height_for_width(void* self, int param1);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self, int param1 ```
int32_t q_widgetitemv2_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, int32_t (*slot)(QWidgetItemV2*, int) ```
void q_widgetitemv2_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_control_types(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
int64_t q_widgetitemv2_qbase_control_types(void* self);

/// Inherited from QWidgetItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitem.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, int64_t (*slot)() ```
void q_widgetitemv2_on_control_types(void* self, int64_t (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
void q_widgetitemv2_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
void q_widgetitemv2_qbase_invalidate(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, void (*slot)() ```
void q_widgetitemv2_on_invalidate(void* self, void (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QLayout* q_widgetitemv2_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QLayout* q_widgetitemv2_qbase_layout(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QLayout* (*slot)() ```
void q_widgetitemv2_on_layout(void* self, QLayout* (*slot)());

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QSpacerItem* q_widgetitemv2_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetItemV2* self ```
QSpacerItem* q_widgetitemv2_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetItemV2* self, QSpacerItem* (*slot)() ```
void q_widgetitemv2_on_spacer_item(void* self, QSpacerItem* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetitemv2.html#dtor.QWidgetItemV2)
///
/// Delete this object from C++ memory.
///
/// ``` QWidgetItemV2* self ```
void q_widgetitemv2_delete(void* self);

#endif

#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEOBJECT_H
#define SRCQT6C_LIBQACCESSIBLEOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qaccessibleobject.html

/// q_accessibleobject_new constructs a new QAccessibleObject object.
///
/// ``` QObject* object ```
QAccessibleObject* q_accessibleobject_new(void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// ``` QAccessibleObject* self ```
bool q_accessibleobject_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleObject* self, bool (*slot)() ```
void q_accessibleobject_on_is_valid(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Base class method implementation
///
/// ``` QAccessibleObject* self ```
bool q_accessibleobject_qbase_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// ``` QAccessibleObject* self ```
QObject* q_accessibleobject_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleObject* self, QObject* (*slot)() ```
void q_accessibleobject_on_object(void* self, QObject* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Base class method implementation
///
/// ``` QAccessibleObject* self ```
QObject* q_accessibleobject_qbase_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// ``` QAccessibleObject* self ```
QRect* q_accessibleobject_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleObject* self, QRect* (*slot)() ```
void q_accessibleobject_on_rect(void* self, QRect* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Base class method implementation
///
/// ``` QAccessibleObject* self ```
QRect* q_accessibleobject_qbase_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// ``` QAccessibleObject* self, enum QAccessible__Text t, const char* text ```
void q_accessibleobject_set_text(void* self, int64_t t, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleObject* self, void (*slot)(QAccessibleObject*, enum QAccessible__Text, const char*) ```
void q_accessibleobject_on_set_text(void* self, void (*slot)(void*, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Base class method implementation
///
/// ``` QAccessibleObject* self, enum QAccessible__Text t, const char* text ```
void q_accessibleobject_qbase_set_text(void* self, int64_t t, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// ``` QAccessibleObject* self, int x, int y ```
QAccessibleInterface* q_accessibleobject_child_at(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleObject* self, QAccessibleInterface* (*slot)(QAccessibleObject*, int, int) ```
void q_accessibleobject_on_child_at(void* self, QAccessibleInterface* (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Base class method implementation
///
/// ``` QAccessibleObject* self, int x, int y ```
QAccessibleInterface* q_accessibleobject_qbase_child_at(void* self, int x, int y);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleTextInterface* q_accessibleobject_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleEditableTextInterface* q_accessibleobject_editable_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleValueInterface* q_accessibleobject_value_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleActionInterface* q_accessibleobject_action_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleImageInterface* q_accessibleobject_image_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleTableInterface* q_accessibleobject_table_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleTableCellInterface* q_accessibleobject_table_cell_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleHyperlinkInterface* q_accessibleobject_hyperlink_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleSelectionInterface* q_accessibleobject_selection_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
///
/// ``` QAccessibleObject* self ```
QAccessibleAttributesInterface* q_accessibleobject_attributes_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self ```
QWindow* q_accessibleobject_window(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self ```
QWindow* q_accessibleobject_qbase_window(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, QWindow* (*slot)() ```
void q_accessibleobject_on_window(void* self, QWindow* (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleobject_relations(void* self, int64_t match);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleobject_qbase_relations(void* self, int64_t match);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(QAccessibleObject*, int) ```
void q_accessibleobject_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(void*, int64_t));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self ```
QAccessibleInterface* q_accessibleobject_focus_child(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self ```
QAccessibleInterface* q_accessibleobject_qbase_focus_child(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, QAccessibleInterface* (*slot)() ```
void q_accessibleobject_on_focus_child(void* self, QAccessibleInterface* (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self ```
QAccessibleInterface* q_accessibleobject_parent(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self ```
QAccessibleInterface* q_accessibleobject_qbase_parent(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, QAccessibleInterface* (*slot)() ```
void q_accessibleobject_on_parent(void* self, QAccessibleInterface* (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self, int index ```
QAccessibleInterface* q_accessibleobject_child(void* self, int index);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self, int index ```
QAccessibleInterface* q_accessibleobject_qbase_child(void* self, int index);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, QAccessibleInterface* (*slot)(QAccessibleObject*, int) ```
void q_accessibleobject_on_child(void* self, QAccessibleInterface* (*slot)(void*, int));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self ```
int32_t q_accessibleobject_child_count(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self ```
int32_t q_accessibleobject_qbase_child_count(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, int32_t (*slot)() ```
void q_accessibleobject_on_child_count(void* self, int32_t (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self, QAccessibleInterface* param1 ```
int32_t q_accessibleobject_index_of_child(void* self, void* param1);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self, QAccessibleInterface* param1 ```
int32_t q_accessibleobject_qbase_index_of_child(void* self, void* param1);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, int32_t (*slot)(QAccessibleObject*, QAccessibleInterface*) ```
void q_accessibleobject_on_index_of_child(void* self, int32_t (*slot)(void*, void*));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self, enum QAccessible__Text t ```
const char* q_accessibleobject_text(void* self, int64_t t);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self, enum QAccessible__Text t ```
const char* q_accessibleobject_qbase_text(void* self, int64_t t);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, const char* (*slot)(QAccessibleObject*, enum QAccessible__Text) ```
void q_accessibleobject_on_text(void* self, const char* (*slot)(void*, int64_t));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self ```
int64_t q_accessibleobject_role(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self ```
int64_t q_accessibleobject_qbase_role(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, int64_t (*slot)() ```
void q_accessibleobject_on_role(void* self, int64_t (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self ```
QAccessible__State* q_accessibleobject_state(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self ```
QAccessible__State* q_accessibleobject_qbase_state(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, QAccessible__State* (*slot)() ```
void q_accessibleobject_on_state(void* self, QAccessible__State* (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self ```
QColor* q_accessibleobject_foreground_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self ```
QColor* q_accessibleobject_qbase_foreground_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, QColor* (*slot)() ```
void q_accessibleobject_on_foreground_color(void* self, QColor* (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self ```
QColor* q_accessibleobject_background_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self ```
QColor* q_accessibleobject_qbase_background_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, QColor* (*slot)() ```
void q_accessibleobject_on_background_color(void* self, QColor* (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self, int id, void* data ```
void q_accessibleobject_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self, int id, void* data ```
void q_accessibleobject_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, void (*slot)(QAccessibleObject*, int, void*) ```
void q_accessibleobject_on_virtual_hook(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleObject* self, enum QAccessible__InterfaceType param1 ```
void* q_accessibleobject_interface_cast(void* self, int64_t param1);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleObject* self, enum QAccessible__InterfaceType param1 ```
void* q_accessibleobject_qbase_interface_cast(void* self, int64_t param1);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleObject* self, void* (*slot)(QAccessibleObject*, enum QAccessible__InterfaceType) ```
void q_accessibleobject_on_interface_cast(void* self, void* (*slot)(void*, int64_t));

/// https://doc.qt.io/qt-6/qaccessibleapplication.html

/// q_accessibleapplication_new constructs a new QAccessibleApplication object.
///
///
QAccessibleApplication* q_accessibleapplication_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// ``` QAccessibleApplication* self ```
QWindow* q_accessibleapplication_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QWindow* (*slot)() ```
void q_accessibleapplication_on_window(void* self, QWindow* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
QWindow* q_accessibleapplication_qbase_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// ``` QAccessibleApplication* self ```
int32_t q_accessibleapplication_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, int32_t (*slot)() ```
void q_accessibleapplication_on_child_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
int32_t q_accessibleapplication_qbase_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* param1 ```
int32_t q_accessibleapplication_index_of_child(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, int32_t (*slot)(QAccessibleApplication*, QAccessibleInterface*) ```
void q_accessibleapplication_on_index_of_child(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* param1 ```
int32_t q_accessibleapplication_qbase_index_of_child(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// ``` QAccessibleApplication* self ```
QAccessibleInterface* q_accessibleapplication_focus_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* (*slot)() ```
void q_accessibleapplication_on_focus_child(void* self, QAccessibleInterface* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
QAccessibleInterface* q_accessibleapplication_qbase_focus_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// ``` QAccessibleApplication* self ```
QAccessibleInterface* q_accessibleapplication_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* (*slot)() ```
void q_accessibleapplication_on_parent(void* self, QAccessibleInterface* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
QAccessibleInterface* q_accessibleapplication_qbase_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// ``` QAccessibleApplication* self, int index ```
QAccessibleInterface* q_accessibleapplication_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* (*slot)(QAccessibleApplication*, int) ```
void q_accessibleapplication_on_child(void* self, QAccessibleInterface* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self, int index ```
QAccessibleInterface* q_accessibleapplication_qbase_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// ``` QAccessibleApplication* self, enum QAccessible__Text t ```
const char* q_accessibleapplication_text(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, const char* (*slot)(QAccessibleApplication*, enum QAccessible__Text) ```
void q_accessibleapplication_on_text(void* self, const char* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self, enum QAccessible__Text t ```
const char* q_accessibleapplication_qbase_text(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// ``` QAccessibleApplication* self ```
int64_t q_accessibleapplication_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, int64_t (*slot)() ```
void q_accessibleapplication_on_role(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
int64_t q_accessibleapplication_qbase_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// ``` QAccessibleApplication* self ```
QAccessible__State* q_accessibleapplication_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleApplication* self, QAccessible__State* (*slot)() ```
void q_accessibleapplication_on_state(void* self, QAccessible__State* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// Base class method implementation
///
/// ``` QAccessibleApplication* self ```
QAccessible__State* q_accessibleapplication_qbase_state(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleTextInterface* q_accessibleapplication_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleEditableTextInterface* q_accessibleapplication_editable_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleValueInterface* q_accessibleapplication_value_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleActionInterface* q_accessibleapplication_action_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleImageInterface* q_accessibleapplication_image_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleTableInterface* q_accessibleapplication_table_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleTableCellInterface* q_accessibleapplication_table_cell_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleHyperlinkInterface* q_accessibleapplication_hyperlink_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleSelectionInterface* q_accessibleapplication_selection_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
///
/// ``` QAccessibleApplication* self ```
QAccessibleAttributesInterface* q_accessibleapplication_attributes_interface(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
bool q_accessibleapplication_is_valid(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
bool q_accessibleapplication_qbase_is_valid(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, bool (*slot)() ```
void q_accessibleapplication_on_is_valid(void* self, bool (*slot)());

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QObject* q_accessibleapplication_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QObject* q_accessibleapplication_qbase_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QObject* (*slot)() ```
void q_accessibleapplication_on_object(void* self, QObject* (*slot)());

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QRect* q_accessibleapplication_rect(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QRect* q_accessibleapplication_qbase_rect(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QRect* (*slot)() ```
void q_accessibleapplication_on_rect(void* self, QRect* (*slot)());

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, enum QAccessible__Text t, const char* text ```
void q_accessibleapplication_set_text(void* self, int64_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, enum QAccessible__Text t, const char* text ```
void q_accessibleapplication_qbase_set_text(void* self, int64_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, void (*slot)(QAccessibleApplication*, enum QAccessible__Text, const char*) ```
void q_accessibleapplication_on_set_text(void* self, void (*slot)(void*, int64_t, const char*));

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, int x, int y ```
QAccessibleInterface* q_accessibleapplication_child_at(void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, int x, int y ```
QAccessibleInterface* q_accessibleapplication_qbase_child_at(void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QAccessibleInterface* (*slot)(QAccessibleApplication*, int, int) ```
void q_accessibleapplication_on_child_at(void* self, QAccessibleInterface* (*slot)(void*, int, int));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_relations(void* self, int64_t match);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_qbase_relations(void* self, int64_t match);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(QAccessibleApplication*, int) ```
void q_accessibleapplication_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(void*, int64_t));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QColor* q_accessibleapplication_foreground_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QColor* q_accessibleapplication_qbase_foreground_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QColor* (*slot)() ```
void q_accessibleapplication_on_foreground_color(void* self, QColor* (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QColor* q_accessibleapplication_background_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self ```
QColor* q_accessibleapplication_qbase_background_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, QColor* (*slot)() ```
void q_accessibleapplication_on_background_color(void* self, QColor* (*slot)());

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, int id, void* data ```
void q_accessibleapplication_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, int id, void* data ```
void q_accessibleapplication_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, void (*slot)(QAccessibleApplication*, int, void*) ```
void q_accessibleapplication_on_virtual_hook(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleApplication* self, enum QAccessible__InterfaceType param1 ```
void* q_accessibleapplication_interface_cast(void* self, int64_t param1);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleApplication* self, enum QAccessible__InterfaceType param1 ```
void* q_accessibleapplication_qbase_interface_cast(void* self, int64_t param1);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleApplication* self, void* (*slot)(QAccessibleApplication*, enum QAccessible__InterfaceType) ```
void q_accessibleapplication_on_interface_cast(void* self, void* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#dtor.QAccessibleApplication)
///
/// Delete this object from C++ memory.
///
/// ``` QAccessibleApplication* self ```
void q_accessibleapplication_delete(void* self);

#endif

#pragma once
#ifndef SRC_QT6C_LIBQACCESSIBLEOBJECT_H
#define SRC_QT6C_LIBQACCESSIBLEOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html)

/// q_accessibleobject_new constructs a new QAccessibleObject object.
///
/// @param object QObject*
///
QAccessibleObject* q_accessibleobject_new(void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// @param self QAccessibleObject*
///
bool q_accessibleobject_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleObject*
/// @param callback bool func()
///
void q_accessibleobject_on_is_valid(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Base class method implementation
///
/// @param self QAccessibleObject*
///
bool q_accessibleobject_qbase_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// @param self QAccessibleObject*
///
QObject* q_accessibleobject_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleObject*
/// @param callback QObject* func()
///
void q_accessibleobject_on_object(void* self, QObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Base class method implementation
///
/// @param self QAccessibleObject*
///
QObject* q_accessibleobject_qbase_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// @param self QAccessibleObject*
///
QRect* q_accessibleobject_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleObject*
/// @param callback QRect* func()
///
void q_accessibleobject_on_rect(void* self, QRect* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Base class method implementation
///
/// @param self QAccessibleObject*
///
QRect* q_accessibleobject_qbase_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// @param self QAccessibleObject*
/// @param t enum QAccessible__Text
/// @param text const char*
///
void q_accessibleobject_set_text(void* self, int32_t t, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleObject*
/// @param callback void func(QAccessibleObject* self, enum QAccessible__Text t, const char* text)
///
void q_accessibleobject_on_set_text(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Base class method implementation
///
/// @param self QAccessibleObject*
/// @param t enum QAccessible__Text
/// @param text const char*
///
void q_accessibleobject_qbase_set_text(void* self, int32_t t, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// @param self QAccessibleObject*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleobject_child_at(void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleObject*
/// @param callback QAccessibleInterface* func(QAccessibleObject* self, int x, int y)
///
void q_accessibleobject_on_child_at(void* self, QAccessibleInterface* (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Base class method implementation
///
/// @param self QAccessibleObject*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleobject_qbase_child_at(void* self, int x, int y);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleTextInterface* q_accessibleobject_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleEditableTextInterface* q_accessibleobject_editable_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleValueInterface* q_accessibleobject_value_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleActionInterface* q_accessibleobject_action_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleImageInterface* q_accessibleobject_image_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleTableInterface* q_accessibleobject_table_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleTableCellInterface* q_accessibleobject_table_cell_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleHyperlinkInterface* q_accessibleobject_hyperlink_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleSelectionInterface* q_accessibleobject_selection_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
///
/// @param self QAccessibleObject*
///
QAccessibleAttributesInterface* q_accessibleobject_attributes_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
///
QWindow* q_accessibleobject_window(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
///
QWindow* q_accessibleobject_qbase_window(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback QWindow* func()
///
void q_accessibleobject_on_window(void* self, QWindow* (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
/// @param match flag of enum QAccessible__RelationFlag
///
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleobject_relations(void* self, int64_t match);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param match flag of enum QAccessible__RelationFlag
///
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleobject_qbase_relations(void* self, int64_t match);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ func(QAccessibleObject* self, flag of enum QAccessible__RelationFlag match)
///
void q_accessibleobject_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*callback)(void*, int64_t));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
///
QAccessibleInterface* q_accessibleobject_focus_child(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
///
QAccessibleInterface* q_accessibleobject_qbase_focus_child(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback QAccessibleInterface* func()
///
void q_accessibleobject_on_focus_child(void* self, QAccessibleInterface* (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
///
QAccessibleInterface* q_accessibleobject_parent(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
///
QAccessibleInterface* q_accessibleobject_qbase_parent(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback QAccessibleInterface* func()
///
void q_accessibleobject_on_parent(void* self, QAccessibleInterface* (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
/// @param index int
///
QAccessibleInterface* q_accessibleobject_child(void* self, int index);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param index int
///
QAccessibleInterface* q_accessibleobject_qbase_child(void* self, int index);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback QAccessibleInterface* func(QAccessibleObject* self, int index)
///
void q_accessibleobject_on_child(void* self, QAccessibleInterface* (*callback)(void*, int));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
///
int32_t q_accessibleobject_child_count(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
///
int32_t q_accessibleobject_qbase_child_count(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback int32_t func()
///
void q_accessibleobject_on_child_count(void* self, int32_t (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleobject_index_of_child(void* self, void* param1);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleobject_qbase_index_of_child(void* self, void* param1);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback int32_t func(QAccessibleObject* self, QAccessibleInterface* param1)
///
void q_accessibleobject_on_index_of_child(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
/// @param t enum QAccessible__Text
///
const char* q_accessibleobject_text(void* self, int32_t t);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param t enum QAccessible__Text
///
const char* q_accessibleobject_qbase_text(void* self, int32_t t);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback const char* func(QAccessibleObject* self, enum QAccessible__Text t)
///
void q_accessibleobject_on_text(void* self, const char* (*callback)(void*, int32_t));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleobject_role(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleobject_qbase_role(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback int32_t func()
///
void q_accessibleobject_on_role(void* self, int32_t (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
///
QAccessible__State* q_accessibleobject_state(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
///
QAccessible__State* q_accessibleobject_qbase_state(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback QAccessible__State* func()
///
void q_accessibleobject_on_state(void* self, QAccessible__State* (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
///
QColor* q_accessibleobject_foreground_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
///
QColor* q_accessibleobject_qbase_foreground_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback QColor* func()
///
void q_accessibleobject_on_foreground_color(void* self, QColor* (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
///
QColor* q_accessibleobject_background_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
///
QColor* q_accessibleobject_qbase_background_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback QColor* func()
///
void q_accessibleobject_on_background_color(void* self, QColor* (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
/// @param id int
/// @param data void*
///
void q_accessibleobject_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param id int
/// @param data void*
///
void q_accessibleobject_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback void func(QAccessibleObject* self, int id, void* data)
///
void q_accessibleobject_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleObject*
/// @param param1 enum QAccessible__InterfaceType
///
void* q_accessibleobject_interface_cast(void* self, int32_t param1);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param param1 enum QAccessible__InterfaceType
///
void* q_accessibleobject_qbase_interface_cast(void* self, int32_t param1);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleObject*
/// @param callback void* func(QAccessibleObject* self, enum QAccessible__InterfaceType param1)
///
void q_accessibleobject_on_interface_cast(void* self, void* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html)

/// q_accessibleapplication_new constructs a new QAccessibleApplication object.
///
QAccessibleApplication* q_accessibleapplication_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// @param self QAccessibleApplication*
///
QWindow* q_accessibleapplication_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback QWindow* func()
///
void q_accessibleapplication_on_window(void* self, QWindow* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
///
QWindow* q_accessibleapplication_qbase_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// @param self QAccessibleApplication*
///
int32_t q_accessibleapplication_child_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback int32_t func()
///
void q_accessibleapplication_on_child_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
///
int32_t q_accessibleapplication_qbase_child_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// @param self QAccessibleApplication*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleapplication_index_of_child(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback int32_t func(QAccessibleApplication* self, QAccessibleInterface* param1)
///
void q_accessibleapplication_on_index_of_child(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleapplication_qbase_index_of_child(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// @param self QAccessibleApplication*
///
QAccessibleInterface* q_accessibleapplication_focus_child(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback QAccessibleInterface* func()
///
void q_accessibleapplication_on_focus_child(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
///
QAccessibleInterface* q_accessibleapplication_qbase_focus_child(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// @param self QAccessibleApplication*
///
QAccessibleInterface* q_accessibleapplication_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback QAccessibleInterface* func()
///
void q_accessibleapplication_on_parent(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
///
QAccessibleInterface* q_accessibleapplication_qbase_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// @param self QAccessibleApplication*
/// @param index int
///
QAccessibleInterface* q_accessibleapplication_child(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback QAccessibleInterface* func(QAccessibleApplication* self, int index)
///
void q_accessibleapplication_on_child(void* self, QAccessibleInterface* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
/// @param index int
///
QAccessibleInterface* q_accessibleapplication_qbase_child(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleApplication*
/// @param t enum QAccessible__Text
///
const char* q_accessibleapplication_text(void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback const char* func(QAccessibleApplication* self, enum QAccessible__Text t)
///
void q_accessibleapplication_on_text(void* self, const char* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
/// @param t enum QAccessible__Text
///
const char* q_accessibleapplication_qbase_text(void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// @param self QAccessibleApplication*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleapplication_role(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback int32_t func()
///
void q_accessibleapplication_on_role(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleapplication_qbase_role(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// @param self QAccessibleApplication*
///
QAccessible__State* q_accessibleapplication_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleApplication*
/// @param callback QAccessible__State* func()
///
void q_accessibleapplication_on_state(void* self, QAccessible__State* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// Base class method implementation
///
/// @param self QAccessibleApplication*
///
QAccessible__State* q_accessibleapplication_qbase_state(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleTextInterface* q_accessibleapplication_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleEditableTextInterface* q_accessibleapplication_editable_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleValueInterface* q_accessibleapplication_value_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleActionInterface* q_accessibleapplication_action_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleImageInterface* q_accessibleapplication_image_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleTableInterface* q_accessibleapplication_table_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleTableCellInterface* q_accessibleapplication_table_cell_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleHyperlinkInterface* q_accessibleapplication_hyperlink_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleSelectionInterface* q_accessibleapplication_selection_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
///
/// @param self QAccessibleApplication*
///
QAccessibleAttributesInterface* q_accessibleapplication_attributes_interface(void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
///
bool q_accessibleapplication_is_valid(void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
///
bool q_accessibleapplication_qbase_is_valid(void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback bool func()
///
void q_accessibleapplication_on_is_valid(void* self, bool (*callback)());

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
///
QObject* q_accessibleapplication_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
///
QObject* q_accessibleapplication_qbase_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback QObject* func()
///
void q_accessibleapplication_on_object(void* self, QObject* (*callback)());

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
///
QRect* q_accessibleapplication_rect(void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
///
QRect* q_accessibleapplication_qbase_rect(void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback QRect* func()
///
void q_accessibleapplication_on_rect(void* self, QRect* (*callback)());

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param t enum QAccessible__Text
/// @param text const char*
///
void q_accessibleapplication_set_text(void* self, int32_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param t enum QAccessible__Text
/// @param text const char*
///
void q_accessibleapplication_qbase_set_text(void* self, int32_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback void func(QAccessibleApplication* self, enum QAccessible__Text t, const char* text)
///
void q_accessibleapplication_on_set_text(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleapplication_child_at(void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleapplication_qbase_child_at(void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback QAccessibleInterface* func(QAccessibleApplication* self, int x, int y)
///
void q_accessibleapplication_on_child_at(void* self, QAccessibleInterface* (*callback)(void*, int, int));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param match flag of enum QAccessible__RelationFlag
///
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_relations(void* self, int64_t match);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param match flag of enum QAccessible__RelationFlag
///
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleapplication_qbase_relations(void* self, int64_t match);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ func(QAccessibleApplication* self, flag of enum QAccessible__RelationFlag match)
///
void q_accessibleapplication_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*callback)(void*, int64_t));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
///
QColor* q_accessibleapplication_foreground_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
///
QColor* q_accessibleapplication_qbase_foreground_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback QColor* func()
///
void q_accessibleapplication_on_foreground_color(void* self, QColor* (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
///
QColor* q_accessibleapplication_background_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
///
QColor* q_accessibleapplication_qbase_background_color(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback QColor* func()
///
void q_accessibleapplication_on_background_color(void* self, QColor* (*callback)());

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param id int
/// @param data void*
///
void q_accessibleapplication_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param id int
/// @param data void*
///
void q_accessibleapplication_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback void func(QAccessibleApplication* self, int id, void* data)
///
void q_accessibleapplication_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param param1 enum QAccessible__InterfaceType
///
void* q_accessibleapplication_interface_cast(void* self, int32_t param1);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param param1 enum QAccessible__InterfaceType
///
void* q_accessibleapplication_qbase_interface_cast(void* self, int32_t param1);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleApplication*
/// @param callback void* func(QAccessibleApplication* self, enum QAccessible__InterfaceType param1)
///
void q_accessibleapplication_on_interface_cast(void* self, void* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#dtor.QAccessibleApplication)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleApplication*
///
void q_accessibleapplication_delete(void* self);

#endif

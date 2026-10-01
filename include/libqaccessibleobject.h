#pragma once
#ifndef LIBQACCESSIBLEOBJECT_H
#define LIBQACCESSIBLEOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

struct pair_qaccessibleinterface_int32_t;

typedef struct pair_qaccessibleinterface_int32_t pair_qaccessibleinterface_int32_t;

#ifndef PAIR_QACCESSIBLEINTERFACE_INT32_T
#define PAIR_QACCESSIBLEINTERFACE_INT32_T
struct pair_qaccessibleinterface_int32_t {
    QAccessibleInterface* first;
    int32_t second;
};
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html)

/// q_accessibleobject_new constructs a new QAccessibleObject object.
///
/// @param object QObject*
///
QAccessibleObject* q_accessibleobject_new(void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// @param self const QAccessibleObject*
///
bool q_accessibleobject_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleObject*
/// @param callback bool func(const QAccessibleObject* self)
///
void q_accessibleobject_on_is_valid(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Base class method implementation
///
/// @param self const QAccessibleObject*
///
bool q_accessibleobject_super_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// @param self const QAccessibleObject*
///
QObject* q_accessibleobject_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleObject*
/// @param callback QObject* func(const QAccessibleObject* self)
///
void q_accessibleobject_on_object(const void* self, QObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Base class method implementation
///
/// @param self const QAccessibleObject*
///
QObject* q_accessibleobject_super_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// @param self const QAccessibleObject*
///
QRect* q_accessibleobject_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleObject*
/// @param callback QRect* func(const QAccessibleObject* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessibleobject_on_rect(const void* self, QRect* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Base class method implementation
///
/// @param self const QAccessibleObject*
///
QRect* q_accessibleobject_super_rect(const void* self);

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
void q_accessibleobject_super_set_text(void* self, int32_t t, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// @param self const QAccessibleObject*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleobject_child_at(const void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleObject*
/// @param callback QAccessibleInterface* func(const QAccessibleObject* self, int x, int y)
///
void q_accessibleobject_on_child_at(const void* self, QAccessibleInterface* (*callback)(const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Base class method implementation
///
/// @param self const QAccessibleObject*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleobject_super_child_at(const void* self, int x, int y);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#operator-eq)
///
/// @param self QAccessibleObject*
/// @param param1 QAccessibleInterface*
///
void q_accessibleobject_operator_assign(void* self, const void* param1);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleObject*
///
QWindow* q_accessibleobject_window(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleObject*
///
QWindow* q_accessibleobject_super_window(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback QWindow* func(QAccessibleObject* self)
///
void q_accessibleobject_on_window(const void* self, QWindow* (*callback)(const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param match flag of enum QAccessible__RelationFlag
///
/// @return libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag
///
libqt_list q_accessibleobject_relations(const void* self, int32_t match);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param match flag of enum QAccessible__RelationFlag
///
/// @return libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag
///
libqt_list q_accessibleobject_super_relations(const void* self, int32_t match);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag func(QAccessibleObject* self, flag of enum QAccessible__RelationFlag match)
///
void q_accessibleobject_on_relations(const void* self, libqt_list (*callback)(const void*, int32_t));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleObject*
///
QAccessibleInterface* q_accessibleobject_focus_child(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleObject*
///
QAccessibleInterface* q_accessibleobject_super_focus_child(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback QAccessibleInterface* func(QAccessibleObject* self)
///
void q_accessibleobject_on_focus_child(const void* self, QAccessibleInterface* (*callback)(const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_accessibleobject_on_parent` before it can be called.
////// @param self const QAccessibleObject*
///
QAccessibleInterface* q_accessibleobject_parent(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback QAccessibleInterface* func(QAccessibleObject* self)
///
void q_accessibleobject_on_parent(const void* self, QAccessibleInterface* (*callback)(const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_accessibleobject_on_child` before it can be called.
////// @param self const QAccessibleObject*
/// @param index int
///
QAccessibleInterface* q_accessibleobject_child(const void* self, int index);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback QAccessibleInterface* func(QAccessibleObject* self, int index)
///
void q_accessibleobject_on_child(const void* self, QAccessibleInterface* (*callback)(const void*, int));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_accessibleobject_on_child_count` before it can be called.
////// @param self const QAccessibleObject*
///
int32_t q_accessibleobject_child_count(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback int32_t func(QAccessibleObject* self)
///
void q_accessibleobject_on_child_count(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_accessibleobject_on_index_of_child` before it can be called.
////// @param self const QAccessibleObject*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleobject_index_of_child(const void* self, const void* param1);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback int32_t func(QAccessibleObject* self, QAccessibleInterface* param1)
///
void q_accessibleobject_on_index_of_child(const void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_accessibleobject_on_text` before it can be called.
////// @param self const QAccessibleObject*
/// @param t enum QAccessible__Text
///
const char* q_accessibleobject_text(const void* self, int32_t t);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback const char* func(QAccessibleObject* self, enum QAccessible__Text t)
///
void q_accessibleobject_on_text(const void* self, const char* (*callback)(const void*, int32_t));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_accessibleobject_on_role` before it can be called.
////// @param self const QAccessibleObject*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleobject_role(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback int32_t func(QAccessibleObject* self)
///
void q_accessibleobject_on_role(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_accessibleobject_on_state` before it can be called.
////// @param self const QAccessibleObject*
///
QAccessible__State* q_accessibleobject_state(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback QAccessible__State* func(QAccessibleObject* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessibleobject_on_state(const void* self, QAccessible__State* (*callback)(const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleObject*
///
QColor* q_accessibleobject_foreground_color(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleObject*
///
QColor* q_accessibleobject_super_foreground_color(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback QColor* func(QAccessibleObject* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessibleobject_on_foreground_color(const void* self, QColor* (*callback)(const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleObject*
///
QColor* q_accessibleobject_background_color(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleObject*
///
QColor* q_accessibleobject_super_background_color(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleObject*
/// @param callback QColor* func(QAccessibleObject* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessibleobject_on_background_color(const void* self, QColor* (*callback)(const void*));

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
void q_accessibleobject_super_virtual_hook(void* self, int id, void* data);

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
void* q_accessibleobject_super_interface_cast(void* self, int32_t param1);

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
/// @param self const QAccessibleApplication*
///
QWindow* q_accessibleapplication_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback QWindow* func(const QAccessibleApplication* self)
///
void q_accessibleapplication_on_window(const void* self, QWindow* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
///
QWindow* q_accessibleapplication_super_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// @param self const QAccessibleApplication*
///
int32_t q_accessibleapplication_child_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback int32_t func(const QAccessibleApplication* self)
///
void q_accessibleapplication_on_child_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
///
int32_t q_accessibleapplication_super_child_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// @param self const QAccessibleApplication*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleapplication_index_of_child(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback int32_t func(const QAccessibleApplication* self, QAccessibleInterface* param1)
///
void q_accessibleapplication_on_index_of_child(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleapplication_super_index_of_child(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// @param self const QAccessibleApplication*
///
QAccessibleInterface* q_accessibleapplication_focus_child(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback QAccessibleInterface* func(const QAccessibleApplication* self)
///
void q_accessibleapplication_on_focus_child(const void* self, QAccessibleInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
///
QAccessibleInterface* q_accessibleapplication_super_focus_child(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// @param self const QAccessibleApplication*
///
QAccessibleInterface* q_accessibleapplication_parent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback QAccessibleInterface* func(const QAccessibleApplication* self)
///
void q_accessibleapplication_on_parent(const void* self, QAccessibleInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
///
QAccessibleInterface* q_accessibleapplication_super_parent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// @param self const QAccessibleApplication*
/// @param index int
///
QAccessibleInterface* q_accessibleapplication_child(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback QAccessibleInterface* func(const QAccessibleApplication* self, int index)
///
void q_accessibleapplication_on_child(const void* self, QAccessibleInterface* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
/// @param index int
///
QAccessibleInterface* q_accessibleapplication_super_child(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleApplication*
/// @param t enum QAccessible__Text
///
const char* q_accessibleapplication_text(const void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback const char* func(const QAccessibleApplication* self, enum QAccessible__Text t)
///
void q_accessibleapplication_on_text(const void* self, const char* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
/// @param t enum QAccessible__Text
///
const char* q_accessibleapplication_super_text(const void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// @param self const QAccessibleApplication*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleapplication_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback int32_t func(const QAccessibleApplication* self)
///
void q_accessibleapplication_on_role(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleapplication_super_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// @param self const QAccessibleApplication*
///
QAccessible__State* q_accessibleapplication_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleApplication*
/// @param callback QAccessible__State* func(const QAccessibleApplication* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessibleapplication_on_state(const void* self, QAccessible__State* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
///
/// Base class method implementation
///
/// @param self const QAccessibleApplication*
///
QAccessible__State* q_accessibleapplication_super_state(const void* self);

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

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#operator-eq)
///
/// @param self QAccessibleApplication*
/// @param param1 QAccessibleInterface*
///
void q_accessibleapplication_operator_assign(void* self, const void* param1);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleApplication*
///
bool q_accessibleapplication_is_valid(const void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleApplication*
///
bool q_accessibleapplication_super_is_valid(const void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param callback bool func(QAccessibleApplication* self)
///
void q_accessibleapplication_on_is_valid(const void* self, bool (*callback)(const void*));

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleApplication*
///
QObject* q_accessibleapplication_object(const void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleApplication*
///
QObject* q_accessibleapplication_super_object(const void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param callback QObject* func(QAccessibleApplication* self)
///
void q_accessibleapplication_on_object(const void* self, QObject* (*callback)(const void*));

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleApplication*
///
QRect* q_accessibleapplication_rect(const void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleApplication*
///
QRect* q_accessibleapplication_super_rect(const void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param callback QRect* func(QAccessibleApplication* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessibleapplication_on_rect(const void* self, QRect* (*callback)(const void*));

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
void q_accessibleapplication_super_set_text(void* self, int32_t t, const char* text);

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
/// @param self const QAccessibleApplication*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleapplication_child_at(const void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleapplication_super_child_at(const void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param callback QAccessibleInterface* func(QAccessibleApplication* self, int x, int y)
///
void q_accessibleapplication_on_child_at(const void* self, QAccessibleInterface* (*callback)(const void*, int, int));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param match flag of enum QAccessible__RelationFlag
///
/// @return libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag
///
libqt_list q_accessibleapplication_relations(const void* self, int32_t match);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param match flag of enum QAccessible__RelationFlag
///
/// @return libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag
///
libqt_list q_accessibleapplication_super_relations(const void* self, int32_t match);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param callback libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag func(QAccessibleApplication* self, flag of enum QAccessible__RelationFlag match)
///
void q_accessibleapplication_on_relations(const void* self, libqt_list (*callback)(const void*, int32_t));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleApplication*
///
QColor* q_accessibleapplication_foreground_color(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleApplication*
///
QColor* q_accessibleapplication_super_foreground_color(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param callback QColor* func(QAccessibleApplication* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessibleapplication_on_foreground_color(const void* self, QColor* (*callback)(const void*));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleApplication*
///
QColor* q_accessibleapplication_background_color(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleApplication*
///
QColor* q_accessibleapplication_super_background_color(const void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleApplication*
/// @param callback QColor* func(QAccessibleApplication* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessibleapplication_on_background_color(const void* self, QColor* (*callback)(const void*));

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
void q_accessibleapplication_super_virtual_hook(void* self, int id, void* data);

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
void* q_accessibleapplication_super_interface_cast(void* self, int32_t param1);

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

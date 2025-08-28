#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEWIDGET_H
#define SRCQT6C_LIBQACCESSIBLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qaccessiblewidget.html

/// q_accessiblewidget_new constructs a new QAccessibleWidget object.
///
/// @param o QWidget*
QAccessibleWidget* q_accessiblewidget_new(void* o);

/// q_accessiblewidget_new2 constructs a new QAccessibleWidget object.
///
/// @param o QWidget*
/// @param r enum QAccessible__Role
QAccessibleWidget* q_accessiblewidget_new2(void* o, int32_t r);

/// q_accessiblewidget_new3 constructs a new QAccessibleWidget object.
///
/// @param o QWidget*
/// @param r enum QAccessible__Role
/// @param name const char*
QAccessibleWidget* q_accessiblewidget_new3(void* o, int32_t r, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// @param self QAccessibleWidget*
bool q_accessiblewidget_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback bool func()
void q_accessiblewidget_on_is_valid(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
bool q_accessiblewidget_qbase_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// @param self QAccessibleWidget*
QWindow* q_accessiblewidget_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QWindow* func()
void q_accessiblewidget_on_window(void* self, QWindow* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QWindow* q_accessiblewidget_qbase_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// @param self QAccessibleWidget*
int32_t q_accessiblewidget_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback int32_t func()
void q_accessiblewidget_on_child_count(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
int32_t q_accessiblewidget_qbase_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// @param self QAccessibleWidget*
/// @param child QAccessibleInterface*
int32_t q_accessiblewidget_index_of_child(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback int32_t func(QAccessibleWidget* self, QAccessibleInterface* child)
void q_accessiblewidget_on_index_of_child(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param child QAccessibleInterface*
int32_t q_accessiblewidget_qbase_index_of_child(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// @param self QAccessibleWidget*
/// @param match flag of enum QAccessible__RelationFlag
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_relations(void* self, int64_t match);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ func(QAccessibleWidget* self, flag of enum QAccessible__RelationFlag match)
void q_accessiblewidget_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param match flag of enum QAccessible__RelationFlag
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_qbase_relations(void* self, int64_t match);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// @param self QAccessibleWidget*
QAccessibleInterface* q_accessiblewidget_focus_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessibleInterface* func()
void q_accessiblewidget_on_focus_child(void* self, QAccessibleInterface* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QAccessibleInterface* q_accessiblewidget_qbase_focus_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// @param self QAccessibleWidget*
QRect* q_accessiblewidget_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QRect* func()
void q_accessiblewidget_on_rect(void* self, QRect* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QRect* q_accessiblewidget_qbase_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// @param self QAccessibleWidget*
QAccessibleInterface* q_accessiblewidget_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessibleInterface* func()
void q_accessiblewidget_on_parent(void* self, QAccessibleInterface* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QAccessibleInterface* q_accessiblewidget_qbase_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// @param self QAccessibleWidget*
/// @param index int
QAccessibleInterface* q_accessiblewidget_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessibleInterface* func(QAccessibleWidget* self, int index)
void q_accessiblewidget_on_child(void* self, QAccessibleInterface* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param index int
QAccessibleInterface* q_accessiblewidget_qbase_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__Text
const char* q_accessiblewidget_text(void* self, int32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback const char* func(QAccessibleWidget* self, enum QAccessible__Text t)
void q_accessiblewidget_on_text(void* self, const char* (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__Text
const char* q_accessiblewidget_qbase_text(void* self, int32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// @param self QAccessibleWidget*
///
/// @return enum QAccessible__Role
int32_t q_accessiblewidget_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback int32_t func()
void q_accessiblewidget_on_role(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
///
/// @return enum QAccessible__Role
int32_t q_accessiblewidget_qbase_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// @param self QAccessibleWidget*
QAccessible__State* q_accessiblewidget_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessible__State* func()
void q_accessiblewidget_on_state(void* self, QAccessible__State* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QAccessible__State* q_accessiblewidget_qbase_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// @param self QAccessibleWidget*
QColor* q_accessiblewidget_foreground_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QColor* func()
void q_accessiblewidget_on_foreground_color(void* self, QColor* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QColor* q_accessiblewidget_qbase_foreground_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// @param self QAccessibleWidget*
QColor* q_accessiblewidget_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QColor* func()
void q_accessiblewidget_on_background_color(void* self, QColor* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QColor* q_accessiblewidget_qbase_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__InterfaceType
void* q_accessiblewidget_interface_cast(void* self, int32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback void* func(QAccessibleWidget* self, enum QAccessible__InterfaceType t)
void q_accessiblewidget_on_interface_cast(void* self, void* (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__InterfaceType
void* q_accessiblewidget_qbase_interface_cast(void* self, int32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAccessibleWidget*
const char** q_accessiblewidget_action_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback const char** func()
void q_accessiblewidget_on_action_names(void* self, const char** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
const char** q_accessiblewidget_qbase_action_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// @param self QAccessibleWidget*
/// @param actionName const char*
void q_accessiblewidget_do_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback void func(QAccessibleWidget* self, const char* actionName)
void q_accessiblewidget_on_do_action(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param actionName const char*
void q_accessiblewidget_qbase_do_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAccessibleWidget*
/// @param actionName const char*
const char** q_accessiblewidget_key_bindings_for_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback const char** func(QAccessibleWidget* self, const char* actionName)
void q_accessiblewidget_on_key_bindings_for_action(void* self, const char** (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param actionName const char*
const char** q_accessiblewidget_qbase_key_bindings_for_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
///
/// @param self QAccessibleWidget*
QWidget* q_accessiblewidget_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QWidget* func()
void q_accessiblewidget_on_widget(void* self, QWidget* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QWidget* q_accessiblewidget_qbase_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
///
/// @param self QAccessibleWidget*
QObject* q_accessiblewidget_parent_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QObject* func()
void q_accessiblewidget_on_parent_object(void* self, QObject* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
QObject* q_accessiblewidget_qbase_parent_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
///
/// @param self QAccessibleWidget*
/// @param signal const char*
void q_accessiblewidget_add_controlling_signal(void* self, const char* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback void func(QAccessibleWidget* self, const char* signal)
void q_accessiblewidget_on_add_controlling_signal(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param signal const char*
void q_accessiblewidget_qbase_add_controlling_signal(void* self, const char* signal);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// @param self QAccessibleWidget*
QAccessibleTextInterface* q_accessiblewidget_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// @param self QAccessibleWidget*
QAccessibleEditableTextInterface* q_accessiblewidget_editable_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// @param self QAccessibleWidget*
QAccessibleValueInterface* q_accessiblewidget_value_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// @param self QAccessibleWidget*
QAccessibleActionInterface* q_accessiblewidget_action_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// @param self QAccessibleWidget*
QAccessibleImageInterface* q_accessiblewidget_image_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// @param self QAccessibleWidget*
QAccessibleTableInterface* q_accessiblewidget_table_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// @param self QAccessibleWidget*
QAccessibleTableCellInterface* q_accessiblewidget_table_cell_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// @param self QAccessibleWidget*
QAccessibleHyperlinkInterface* q_accessiblewidget_hyperlink_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
///
/// @param self QAccessibleWidget*
QAccessibleSelectionInterface* q_accessiblewidget_selection_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
///
/// @param self QAccessibleWidget*
QAccessibleAttributesInterface* q_accessiblewidget_attributes_interface(void* self);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
const char* q_accessiblewidget_tr(const char* sourceText);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_press_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_increase_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_decrease_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_show_menu_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_set_focus_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_toggle_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_scroll_left_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_scroll_right_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_scroll_up_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_scroll_down_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_next_page_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_accessiblewidget_previous_page_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
const char* q_accessiblewidget_tr2(const char* sourceText, const char* disambiguation);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
const char* q_accessiblewidget_tr3(const char* sourceText, const char* disambiguation, int n);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleWidget*
QObject* q_accessiblewidget_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleWidget*
QObject* q_accessiblewidget_qbase_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback QObject* func()
void q_accessiblewidget_on_object(void* self, QObject* (*callback)());

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__Text
/// @param text const char*
void q_accessiblewidget_set_text(void* self, int32_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__Text
/// @param text const char*
void q_accessiblewidget_qbase_set_text(void* self, int32_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback void func(QAccessibleWidget* self, enum QAccessible__Text t, const char* text)
void q_accessiblewidget_on_set_text(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param x int
/// @param y int
QAccessibleInterface* q_accessiblewidget_child_at(void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param x int
/// @param y int
QAccessibleInterface* q_accessiblewidget_qbase_child_at(void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessibleInterface* func(QAccessibleWidget* self, int x, int y)
void q_accessiblewidget_on_child_at(void* self, QAccessibleInterface* (*callback)(void*, int, int));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param id int
/// @param data void*
void q_accessiblewidget_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param id int
/// @param data void*
void q_accessiblewidget_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback void func(QAccessibleWidget* self, int id, void* data)
void q_accessiblewidget_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param name const char*
const char* q_accessiblewidget_localized_action_name(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param name const char*
const char* q_accessiblewidget_qbase_localized_action_name(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback const char* func(QAccessibleWidget* self, const char* name)
void q_accessiblewidget_on_localized_action_name(void* self, const char* (*callback)(void*, const char*));

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param name const char*
const char* q_accessiblewidget_localized_action_description(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param name const char*
const char* q_accessiblewidget_qbase_localized_action_description(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback const char* func(QAccessibleWidget* self, const char* name)
void q_accessiblewidget_on_localized_action_description(void* self, const char* (*callback)(void*, const char*));
#endif

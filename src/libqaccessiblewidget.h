#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEWIDGET_H
#define SRCQT6C_LIBQACCESSIBLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qaccessiblewidget.html

/// q_accessiblewidget_new constructs a new QAccessibleWidget object.
///
/// ``` QWidget* o ```
QAccessibleWidget* q_accessiblewidget_new(void* o);

/// q_accessiblewidget_new2 constructs a new QAccessibleWidget object.
///
/// ``` QWidget* o, enum QAccessible__Role r ```
QAccessibleWidget* q_accessiblewidget_new2(void* o, int64_t r);

/// q_accessiblewidget_new3 constructs a new QAccessibleWidget object.
///
/// ``` QWidget* o, enum QAccessible__Role r, const char* name ```
QAccessibleWidget* q_accessiblewidget_new3(void* o, int64_t r, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// ``` QAccessibleWidget* self ```
bool q_accessiblewidget_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, bool (*slot)() ```
void q_accessiblewidget_on_is_valid(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
bool q_accessiblewidget_qbase_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// ``` QAccessibleWidget* self ```
QWindow* q_accessiblewidget_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QWindow* (*slot)() ```
void q_accessiblewidget_on_window(void* self, QWindow* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QWindow* q_accessiblewidget_qbase_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// ``` QAccessibleWidget* self ```
int32_t q_accessiblewidget_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, int32_t (*slot)() ```
void q_accessiblewidget_on_child_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
int32_t q_accessiblewidget_qbase_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// ``` QAccessibleWidget* self, QAccessibleInterface* child ```
int32_t q_accessiblewidget_index_of_child(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, int32_t (*slot)(QAccessibleWidget*, QAccessibleInterface*) ```
void q_accessiblewidget_on_index_of_child(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self, QAccessibleInterface* child ```
int32_t q_accessiblewidget_qbase_index_of_child(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// ``` QAccessibleWidget* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_relations(void* self, int64_t match);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(QAccessibleWidget*, int) ```
void q_accessiblewidget_on_relations(void* self, libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_qbase_relations(void* self, int64_t match);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// ``` QAccessibleWidget* self ```
QAccessibleInterface* q_accessiblewidget_focus_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QAccessibleInterface* (*slot)() ```
void q_accessiblewidget_on_focus_child(void* self, QAccessibleInterface* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QAccessibleInterface* q_accessiblewidget_qbase_focus_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// ``` QAccessibleWidget* self ```
QRect* q_accessiblewidget_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QRect* (*slot)() ```
void q_accessiblewidget_on_rect(void* self, QRect* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QRect* q_accessiblewidget_qbase_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// ``` QAccessibleWidget* self ```
QAccessibleInterface* q_accessiblewidget_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QAccessibleInterface* (*slot)() ```
void q_accessiblewidget_on_parent(void* self, QAccessibleInterface* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QAccessibleInterface* q_accessiblewidget_qbase_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// ``` QAccessibleWidget* self, int index ```
QAccessibleInterface* q_accessiblewidget_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QAccessibleInterface* (*slot)(QAccessibleWidget*, int) ```
void q_accessiblewidget_on_child(void* self, QAccessibleInterface* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self, int index ```
QAccessibleInterface* q_accessiblewidget_qbase_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// ``` QAccessibleWidget* self, enum QAccessible__Text t ```
const char* q_accessiblewidget_text(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, const char* (*slot)(QAccessibleWidget*, enum QAccessible__Text) ```
void q_accessiblewidget_on_text(void* self, const char* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self, enum QAccessible__Text t ```
const char* q_accessiblewidget_qbase_text(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// ``` QAccessibleWidget* self ```
int64_t q_accessiblewidget_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, int64_t (*slot)() ```
void q_accessiblewidget_on_role(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
int64_t q_accessiblewidget_qbase_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// ``` QAccessibleWidget* self ```
QAccessible__State* q_accessiblewidget_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QAccessible__State* (*slot)() ```
void q_accessiblewidget_on_state(void* self, QAccessible__State* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QAccessible__State* q_accessiblewidget_qbase_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// ``` QAccessibleWidget* self ```
QColor* q_accessiblewidget_foreground_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QColor* (*slot)() ```
void q_accessiblewidget_on_foreground_color(void* self, QColor* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QColor* q_accessiblewidget_qbase_foreground_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// ``` QAccessibleWidget* self ```
QColor* q_accessiblewidget_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QColor* (*slot)() ```
void q_accessiblewidget_on_background_color(void* self, QColor* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QColor* q_accessiblewidget_qbase_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// ``` QAccessibleWidget* self, enum QAccessible__InterfaceType t ```
void* q_accessiblewidget_interface_cast(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, void* (*slot)(QAccessibleWidget*, enum QAccessible__InterfaceType) ```
void q_accessiblewidget_on_interface_cast(void* self, void* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self, enum QAccessible__InterfaceType t ```
void* q_accessiblewidget_qbase_interface_cast(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// ``` QAccessibleWidget* self ```
const char** q_accessiblewidget_action_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, const char** (*slot)() ```
void q_accessiblewidget_on_action_names(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
const char** q_accessiblewidget_qbase_action_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// ``` QAccessibleWidget* self, const char* actionName ```
void q_accessiblewidget_do_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, void (*slot)(QAccessibleWidget*, const char*) ```
void q_accessiblewidget_on_do_action(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self, const char* actionName ```
void q_accessiblewidget_qbase_do_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// ``` QAccessibleWidget* self, const char* actionName ```
const char** q_accessiblewidget_key_bindings_for_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, const char** (*slot)(QAccessibleWidget*, const char*) ```
void q_accessiblewidget_on_key_bindings_for_action(void* self, const char** (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self, const char* actionName ```
const char** q_accessiblewidget_qbase_key_bindings_for_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
///
/// ``` QAccessibleWidget* self ```
QWidget* q_accessiblewidget_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QWidget* (*slot)() ```
void q_accessiblewidget_on_widget(void* self, QWidget* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QWidget* q_accessiblewidget_qbase_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
///
/// ``` QAccessibleWidget* self ```
QObject* q_accessiblewidget_parent_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, QObject* (*slot)() ```
void q_accessiblewidget_on_parent_object(void* self, QObject* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self ```
QObject* q_accessiblewidget_qbase_parent_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
///
/// ``` QAccessibleWidget* self, const char* signal ```
void q_accessiblewidget_add_controlling_signal(void* self, const char* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
///
/// Allows for overriding the related default method
///
/// ``` QAccessibleWidget* self, void (*slot)(QAccessibleWidget*, const char*) ```
void q_accessiblewidget_on_add_controlling_signal(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
///
/// Base class method implementation
///
/// ``` QAccessibleWidget* self, const char* signal ```
void q_accessiblewidget_qbase_add_controlling_signal(void* self, const char* signal);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleTextInterface* q_accessiblewidget_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleEditableTextInterface* q_accessiblewidget_editable_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleValueInterface* q_accessiblewidget_value_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleActionInterface* q_accessiblewidget_action_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleImageInterface* q_accessiblewidget_image_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleTableInterface* q_accessiblewidget_table_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleTableCellInterface* q_accessiblewidget_table_cell_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleHyperlinkInterface* q_accessiblewidget_hyperlink_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleSelectionInterface* q_accessiblewidget_selection_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
///
/// ``` QAccessibleWidget* self ```
QAccessibleAttributesInterface* q_accessiblewidget_attributes_interface(void* self);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_accessiblewidget_tr(const char* sourceText);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
///
///
const char* q_accessiblewidget_press_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
///
///
const char* q_accessiblewidget_increase_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
///
///
const char* q_accessiblewidget_decrease_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
///
///
const char* q_accessiblewidget_show_menu_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
///
///
const char* q_accessiblewidget_set_focus_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
///
///
const char* q_accessiblewidget_toggle_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
///
///
const char* q_accessiblewidget_scroll_left_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
///
///
const char* q_accessiblewidget_scroll_right_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
///
///
const char* q_accessiblewidget_scroll_up_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
///
///
const char* q_accessiblewidget_scroll_down_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
///
///
const char* q_accessiblewidget_next_page_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
///
///
const char* q_accessiblewidget_previous_page_action();

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_accessiblewidget_tr2(const char* sourceText, const char* disambiguation);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_accessiblewidget_tr3(const char* sourceText, const char* disambiguation, int n);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleWidget* self ```
QObject* q_accessiblewidget_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleWidget* self ```
QObject* q_accessiblewidget_qbase_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleWidget* self, QObject* (*slot)() ```
void q_accessiblewidget_on_object(void* self, QObject* (*slot)());

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleWidget* self, enum QAccessible__Text t, const char* text ```
void q_accessiblewidget_set_text(void* self, int64_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleWidget* self, enum QAccessible__Text t, const char* text ```
void q_accessiblewidget_qbase_set_text(void* self, int64_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleWidget* self, void (*slot)(QAccessibleWidget*, enum QAccessible__Text, const char*) ```
void q_accessiblewidget_on_set_text(void* self, void (*slot)(void*, int64_t, const char*));

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleWidget* self, int x, int y ```
QAccessibleInterface* q_accessiblewidget_child_at(void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleWidget* self, int x, int y ```
QAccessibleInterface* q_accessiblewidget_qbase_child_at(void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleWidget* self, QAccessibleInterface* (*slot)(QAccessibleWidget*, int, int) ```
void q_accessiblewidget_on_child_at(void* self, QAccessibleInterface* (*slot)(void*, int, int));

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleWidget* self, int id, void* data ```
void q_accessiblewidget_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleWidget* self, int id, void* data ```
void q_accessiblewidget_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleWidget* self, void (*slot)(QAccessibleWidget*, int, void*) ```
void q_accessiblewidget_on_virtual_hook(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleWidget* self, const char* name ```
const char* q_accessiblewidget_localized_action_name(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleWidget* self, const char* name ```
const char* q_accessiblewidget_qbase_localized_action_name(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleWidget* self, const char* (*slot)(QAccessibleWidget*, const char*) ```
void q_accessiblewidget_on_localized_action_name(void* self, const char* (*slot)(void*, const char*));

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleWidget* self, const char* name ```
const char* q_accessiblewidget_localized_action_description(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleWidget* self, const char* name ```
const char* q_accessiblewidget_qbase_localized_action_description(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleWidget* self, const char* (*slot)(QAccessibleWidget*, const char*) ```
void q_accessiblewidget_on_localized_action_description(void* self, const char* (*slot)(void*, const char*));
#endif

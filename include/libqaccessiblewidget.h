#pragma once
#ifndef LIBQACCESSIBLEWIDGET_H
#define LIBQACCESSIBLEWIDGET_H

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

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html)

/// q_accessiblewidget_new constructs a new QAccessibleWidget object.
///
/// @param o QWidget*
///
QAccessibleWidget* q_accessiblewidget_new(void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html)

/// q_accessiblewidget_new2 constructs a new QAccessibleWidget object.
///
/// @param o QWidget*
/// @param r enum QAccessible__Role
///
QAccessibleWidget* q_accessiblewidget_new2(void* o, int32_t r);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html)

/// q_accessiblewidget_new3 constructs a new QAccessibleWidget object.
///
/// @param o QWidget*
/// @param r enum QAccessible__Role
/// @param name const char*
///
QAccessibleWidget* q_accessiblewidget_new3(void* o, int32_t r, const char* name);

/// Upcasts to a QAccessibleActionInterface object
///
/// @param self const QAccessibleWidget*
///
QAccessibleActionInterface* q_accessiblewidget_as_q_accessible_action_interface(const void* self);

/// Downcasts to a QAccessibleWidget object
///
/// @param _qaccessibleactioninterface QAccessibleActionInterface*
///
QAccessibleWidget* q_accessiblewidget_from_q_accessible_action_interface(const void* _qaccessibleactioninterface);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// @param self const QAccessibleWidget*
///
bool q_accessiblewidget_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback bool func(const QAccessibleWidget* self)
///
void q_accessiblewidget_on_is_valid(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
bool q_accessiblewidget_super_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// @param self const QAccessibleWidget*
///
QWindow* q_accessiblewidget_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QWindow* func(const QAccessibleWidget* self)
///
void q_accessiblewidget_on_window(void* self, QWindow* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
QWindow* q_accessiblewidget_super_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// @param self const QAccessibleWidget*
///
int32_t q_accessiblewidget_child_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback int32_t func(const QAccessibleWidget* self)
///
void q_accessiblewidget_on_child_count(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
int32_t q_accessiblewidget_super_child_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// @param self const QAccessibleWidget*
/// @param child QAccessibleInterface*
///
int32_t q_accessiblewidget_index_of_child(const void* self, const void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback int32_t func(const QAccessibleWidget* self, QAccessibleInterface* child)
///
void q_accessiblewidget_on_index_of_child(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
/// @param child QAccessibleInterface*
///
int32_t q_accessiblewidget_super_index_of_child(const void* self, const void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// @param self const QAccessibleWidget*
/// @param match flag of enum QAccessible__RelationFlag
///
/// @return libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag
///
libqt_list q_accessiblewidget_relations(const void* self, int32_t match);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag func(const QAccessibleWidget* self, flag of enum QAccessible__RelationFlag match)
///
void q_accessiblewidget_on_relations(void* self, libqt_list (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
/// @param match flag of enum QAccessible__RelationFlag
///
/// @return libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag
///
libqt_list q_accessiblewidget_super_relations(const void* self, int32_t match);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// @param self const QAccessibleWidget*
///
QAccessibleInterface* q_accessiblewidget_focus_child(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessibleInterface* func(const QAccessibleWidget* self)
///
void q_accessiblewidget_on_focus_child(void* self, QAccessibleInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
QAccessibleInterface* q_accessiblewidget_super_focus_child(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// @param self const QAccessibleWidget*
///
QRect* q_accessiblewidget_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QRect* func(const QAccessibleWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessiblewidget_on_rect(void* self, QRect* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
QRect* q_accessiblewidget_super_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// @param self const QAccessibleWidget*
///
QAccessibleInterface* q_accessiblewidget_parent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessibleInterface* func(const QAccessibleWidget* self)
///
void q_accessiblewidget_on_parent(void* self, QAccessibleInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
QAccessibleInterface* q_accessiblewidget_super_parent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// @param self const QAccessibleWidget*
/// @param index int
///
QAccessibleInterface* q_accessiblewidget_child(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessibleInterface* func(const QAccessibleWidget* self, int index)
///
void q_accessiblewidget_on_child(void* self, QAccessibleInterface* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
/// @param index int
///
QAccessibleInterface* q_accessiblewidget_super_child(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleWidget*
/// @param t enum QAccessible__Text
///
const char* q_accessiblewidget_text(const void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback const char* func(const QAccessibleWidget* self, enum QAccessible__Text t)
///
void q_accessiblewidget_on_text(void* self, const char* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
/// @param t enum QAccessible__Text
///
const char* q_accessiblewidget_super_text(const void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// @param self const QAccessibleWidget*
///
/// @return enum QAccessible__Role
///
int32_t q_accessiblewidget_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback int32_t func(const QAccessibleWidget* self)
///
void q_accessiblewidget_on_role(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
/// @return enum QAccessible__Role
///
int32_t q_accessiblewidget_super_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// @param self const QAccessibleWidget*
///
QAccessible__State* q_accessiblewidget_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessible__State* func(const QAccessibleWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessiblewidget_on_state(void* self, QAccessible__State* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
QAccessible__State* q_accessiblewidget_super_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// @param self const QAccessibleWidget*
///
QColor* q_accessiblewidget_foreground_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QColor* func(const QAccessibleWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessiblewidget_on_foreground_color(void* self, QColor* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
QColor* q_accessiblewidget_super_foreground_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// @param self const QAccessibleWidget*
///
QColor* q_accessiblewidget_background_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback QColor* func(const QAccessibleWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_accessiblewidget_on_background_color(void* self, QColor* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
QColor* q_accessiblewidget_super_background_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__InterfaceType
///
void* q_accessiblewidget_interface_cast(void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback void* func(QAccessibleWidget* self, enum QAccessible__InterfaceType t)
///
void q_accessiblewidget_on_interface_cast(void* self, void* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__InterfaceType
///
void* q_accessiblewidget_super_interface_cast(void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAccessibleWidget*
///
const char** q_accessiblewidget_action_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback const char** func(const QAccessibleWidget* self)
///
void q_accessiblewidget_on_action_names(void* self, const char** (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
///
const char** q_accessiblewidget_super_action_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// @param self QAccessibleWidget*
/// @param actionName const char*
///
void q_accessiblewidget_do_action(void* self, const char* actionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback void func(QAccessibleWidget* self, const char* actionName)
///
void q_accessiblewidget_on_do_action(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// Base class method implementation
///
/// @param self QAccessibleWidget*
/// @param actionName const char*
///
void q_accessiblewidget_super_do_action(void* self, const char* actionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAccessibleWidget*
/// @param actionName const char*
///
const char** q_accessiblewidget_key_bindings_for_action(const void* self, const char* actionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleWidget*
/// @param callback const char** func(const QAccessibleWidget* self, const char* actionName)
///
void q_accessiblewidget_on_key_bindings_for_action(void* self, const char** (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// Base class method implementation
///
/// @param self const QAccessibleWidget*
/// @param actionName const char*
///
const char** q_accessiblewidget_super_key_bindings_for_action(const void* self, const char* actionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
///
/// @param self const QAccessibleWidget*
///
QWidget* q_accessiblewidget_widget(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
///
/// @param self const QAccessibleWidget*
///
QObject* q_accessiblewidget_parent_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
///
/// @param self QAccessibleWidget*
/// @param signal const char*
///
void q_accessiblewidget_add_controlling_signal(void* self, const char* signal);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleTextInterface* q_accessiblewidget_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleEditableTextInterface* q_accessiblewidget_editable_text_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleValueInterface* q_accessiblewidget_value_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleActionInterface* q_accessiblewidget_action_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleImageInterface* q_accessiblewidget_image_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleTableInterface* q_accessiblewidget_table_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleTableCellInterface* q_accessiblewidget_table_cell_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleHyperlinkInterface* q_accessiblewidget_hyperlink_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleSelectionInterface* q_accessiblewidget_selection_interface(void* self);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
///
/// @param self QAccessibleWidget*
///
QAccessibleAttributesInterface* q_accessiblewidget_attributes_interface(void* self);

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
///
const char* q_accessiblewidget_tr(const char* sourceText);

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_press_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_increase_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_decrease_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_show_menu_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_set_focus_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_toggle_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_scroll_left_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_scroll_right_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_scroll_up_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_scroll_down_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_next_page_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessiblewidget_previous_page_action();

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
///
const char* q_accessiblewidget_tr2(const char* sourceText, const char* disambiguation);

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* q_accessiblewidget_tr3(const char* sourceText, const char* disambiguation, int n);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleWidget*
///
QObject* q_accessiblewidget_object(const void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleWidget*
///
QObject* q_accessiblewidget_super_object(const void* self);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback QObject* func(QAccessibleWidget* self)
///
void q_accessiblewidget_on_object(void* self, QObject* (*callback)(const void*));

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__Text
/// @param text const char*
///
void q_accessiblewidget_set_text(void* self, int32_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param t enum QAccessible__Text
/// @param text const char*
///
void q_accessiblewidget_super_set_text(void* self, int32_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback void func(QAccessibleWidget* self, enum QAccessible__Text t, const char* text)
///
void q_accessiblewidget_on_set_text(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleWidget*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessiblewidget_child_at(const void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleWidget*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessiblewidget_super_child_at(const void* self, int x, int y);

/// Inherited from QAccessibleObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback QAccessibleInterface* func(QAccessibleWidget* self, int x, int y)
///
void q_accessiblewidget_on_child_at(void* self, QAccessibleInterface* (*callback)(const void*, int, int));

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param id int
/// @param data void*
///
void q_accessiblewidget_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param id int
/// @param data void*
///
void q_accessiblewidget_super_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback void func(QAccessibleWidget* self, int id, void* data)
///
void q_accessiblewidget_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleWidget*
/// @param name const char*
///
const char* q_accessiblewidget_localized_action_name(const void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleWidget*
/// @param name const char*
///
const char* q_accessiblewidget_super_localized_action_name(const void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback const char* func(QAccessibleWidget* self, const char* name)
///
void q_accessiblewidget_on_localized_action_name(void* self, const char* (*callback)(const void*, const char*));

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleWidget*
/// @param name const char*
///
const char* q_accessiblewidget_localized_action_description(const void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleWidget*
/// @param name const char*
///
const char* q_accessiblewidget_super_localized_action_description(const void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleWidget*
/// @param callback const char* func(QAccessibleWidget* self, const char* name)
///
void q_accessiblewidget_on_localized_action_description(void* self, const char* (*callback)(const void*, const char*));
#endif

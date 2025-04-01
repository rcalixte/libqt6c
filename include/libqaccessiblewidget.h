#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEWIDGET_H
#define SRCQT6C_LIBQACCESSIBLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaccessible.h"
#include "libqaccessibleobject.h"
#include "libqcolor.h"
#include "libqobject.h"
#include "libqrect.h"
#include <string.h>
#include "libqwidget.h"
#include "libqwindow.h"

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

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
///
/// ``` QAccessibleWidget* self ```
QWindow* q_accessiblewidget_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
///
/// ``` QAccessibleWidget* self ```
int32_t q_accessiblewidget_child_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
///
/// ``` QAccessibleWidget* self, QAccessibleInterface* child ```
int32_t q_accessiblewidget_index_of_child(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
///
/// ``` QAccessibleWidget* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessiblewidget_relations(void* self, int64_t match);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
///
/// ``` QAccessibleWidget* self ```
QAccessibleInterface* q_accessiblewidget_focus_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
///
/// ``` QAccessibleWidget* self ```
QRect* q_accessiblewidget_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
///
/// ``` QAccessibleWidget* self ```
QAccessibleInterface* q_accessiblewidget_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
///
/// ``` QAccessibleWidget* self, int index ```
QAccessibleInterface* q_accessiblewidget_child(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
///
/// ``` QAccessibleWidget* self, enum QAccessible__Text t ```
const char* q_accessiblewidget_text(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
///
/// ``` QAccessibleWidget* self ```
int64_t q_accessiblewidget_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
///
/// ``` QAccessibleWidget* self ```
QAccessible__State* q_accessiblewidget_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
///
/// ``` QAccessibleWidget* self ```
QColor* q_accessiblewidget_foreground_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
///
/// ``` QAccessibleWidget* self ```
QColor* q_accessiblewidget_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
///
/// ``` QAccessibleWidget* self, enum QAccessible__InterfaceType t ```
void* q_accessiblewidget_interface_cast(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
///
/// ``` QAccessibleWidget* self ```
const char** q_accessiblewidget_action_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
///
/// ``` QAccessibleWidget* self, const char* actionName ```
void q_accessiblewidget_do_action(void* self, const char* actionName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
///
/// ``` QAccessibleWidget* self, const char* actionName ```
const char** q_accessiblewidget_key_bindings_for_action(void* self, const char* actionName);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
///
/// ``` QAccessibleWidget* self ```
QObject* q_accessiblewidget_object(void* self);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
///
/// ``` QAccessibleWidget* self, enum QAccessible__Text t, const char* text ```
void q_accessiblewidget_set_text(void* self, int64_t t, const char* text);

/// Inherited from QAccessibleObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
///
/// ``` QAccessibleWidget* self, int x, int y ```
QAccessibleInterface* q_accessiblewidget_child_at(void* self, int x, int y);

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
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// ``` QAccessibleWidget* self, int id, void* data ```
void q_accessiblewidget_virtual_hook(void* self, int id, void* data);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_accessiblewidget_tr(const char* sourceText);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// ``` QAccessibleWidget* self, const char* name ```
const char* q_accessiblewidget_localized_action_name(void* self, const char* name);

/// Inherited from QAccessibleActionInterface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// ``` QAccessibleWidget* self, const char* name ```
const char* q_accessiblewidget_localized_action_description(void* self, const char* name);

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
#endif
